/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API RemoveRegionsFromReplicationRequest : public SecretsManagerRequest
  {
  public:
    RemoveRegionsFromReplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveRegionsFromReplication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Remove a secret by <code>SecretId</code> from replica Regions.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Remove a secret by <code>SecretId</code> from replica Regions.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Remove a secret by <code>SecretId</code> from replica Regions.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Remove a secret by <code>SecretId</code> from replica Regions.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Remove a secret by <code>SecretId</code> from replica Regions.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Remove a secret by <code>SecretId</code> from replica Regions.</p>
     */
    inline RemoveRegionsFromReplicationRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Remove a secret by <code>SecretId</code> from replica Regions.</p>
     */
    inline RemoveRegionsFromReplicationRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Remove a secret by <code>SecretId</code> from replica Regions.</p>
     */
    inline RemoveRegionsFromReplicationRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveReplicaRegions() const{ return m_removeReplicaRegions; }

    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline bool RemoveReplicaRegionsHasBeenSet() const { return m_removeReplicaRegionsHasBeenSet; }

    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline void SetRemoveReplicaRegions(const Aws::Vector<Aws::String>& value) { m_removeReplicaRegionsHasBeenSet = true; m_removeReplicaRegions = value; }

    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline void SetRemoveReplicaRegions(Aws::Vector<Aws::String>&& value) { m_removeReplicaRegionsHasBeenSet = true; m_removeReplicaRegions = std::move(value); }

    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline RemoveRegionsFromReplicationRequest& WithRemoveReplicaRegions(const Aws::Vector<Aws::String>& value) { SetRemoveReplicaRegions(value); return *this;}

    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline RemoveRegionsFromReplicationRequest& WithRemoveReplicaRegions(Aws::Vector<Aws::String>&& value) { SetRemoveReplicaRegions(std::move(value)); return *this;}

    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline RemoveRegionsFromReplicationRequest& AddRemoveReplicaRegions(const Aws::String& value) { m_removeReplicaRegionsHasBeenSet = true; m_removeReplicaRegions.push_back(value); return *this; }

    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline RemoveRegionsFromReplicationRequest& AddRemoveReplicaRegions(Aws::String&& value) { m_removeReplicaRegionsHasBeenSet = true; m_removeReplicaRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>Remove replication from specific Regions.</p>
     */
    inline RemoveRegionsFromReplicationRequest& AddRemoveReplicaRegions(const char* value) { m_removeReplicaRegionsHasBeenSet = true; m_removeReplicaRegions.push_back(value); return *this; }

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::Vector<Aws::String> m_removeReplicaRegions;
    bool m_removeReplicaRegionsHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
