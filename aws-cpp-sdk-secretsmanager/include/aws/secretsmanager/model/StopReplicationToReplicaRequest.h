/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API StopReplicationToReplicaRequest : public SecretsManagerRequest
  {
  public:
    StopReplicationToReplicaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopReplicationToReplica"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Response to <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>SecretId</code>.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Response to <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>SecretId</code>.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Response to <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>SecretId</code>.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Response to <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>SecretId</code>.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Response to <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>SecretId</code>.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Response to <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>SecretId</code>.</p>
     */
    inline StopReplicationToReplicaRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Response to <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>SecretId</code>.</p>
     */
    inline StopReplicationToReplicaRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Response to <code>StopReplicationToReplica</code> of a secret, based on the
     * <code>SecretId</code>.</p>
     */
    inline StopReplicationToReplicaRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
