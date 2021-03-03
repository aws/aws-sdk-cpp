/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/ReplicaRegionType.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API ReplicateSecretToRegionsRequest : public SecretsManagerRequest
  {
  public:
    ReplicateSecretToRegionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplicateSecretToRegions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Use the <code>Secret Id</code> to replicate a secret to regions.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Use the <code>Secret Id</code> to replicate a secret to regions.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Use the <code>Secret Id</code> to replicate a secret to regions.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Use the <code>Secret Id</code> to replicate a secret to regions.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Use the <code>Secret Id</code> to replicate a secret to regions.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Use the <code>Secret Id</code> to replicate a secret to regions.</p>
     */
    inline ReplicateSecretToRegionsRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Use the <code>Secret Id</code> to replicate a secret to regions.</p>
     */
    inline ReplicateSecretToRegionsRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Use the <code>Secret Id</code> to replicate a secret to regions.</p>
     */
    inline ReplicateSecretToRegionsRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>Add Regions to replicate the secret.</p>
     */
    inline const Aws::Vector<ReplicaRegionType>& GetAddReplicaRegions() const{ return m_addReplicaRegions; }

    /**
     * <p>Add Regions to replicate the secret.</p>
     */
    inline bool AddReplicaRegionsHasBeenSet() const { return m_addReplicaRegionsHasBeenSet; }

    /**
     * <p>Add Regions to replicate the secret.</p>
     */
    inline void SetAddReplicaRegions(const Aws::Vector<ReplicaRegionType>& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions = value; }

    /**
     * <p>Add Regions to replicate the secret.</p>
     */
    inline void SetAddReplicaRegions(Aws::Vector<ReplicaRegionType>&& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions = std::move(value); }

    /**
     * <p>Add Regions to replicate the secret.</p>
     */
    inline ReplicateSecretToRegionsRequest& WithAddReplicaRegions(const Aws::Vector<ReplicaRegionType>& value) { SetAddReplicaRegions(value); return *this;}

    /**
     * <p>Add Regions to replicate the secret.</p>
     */
    inline ReplicateSecretToRegionsRequest& WithAddReplicaRegions(Aws::Vector<ReplicaRegionType>&& value) { SetAddReplicaRegions(std::move(value)); return *this;}

    /**
     * <p>Add Regions to replicate the secret.</p>
     */
    inline ReplicateSecretToRegionsRequest& AddAddReplicaRegions(const ReplicaRegionType& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions.push_back(value); return *this; }

    /**
     * <p>Add Regions to replicate the secret.</p>
     */
    inline ReplicateSecretToRegionsRequest& AddAddReplicaRegions(ReplicaRegionType&& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions.push_back(std::move(value)); return *this; }


    /**
     * <p>(Optional) If set, Secrets Manager replication overwrites a secret with the
     * same name in the destination region.</p>
     */
    inline bool GetForceOverwriteReplicaSecret() const{ return m_forceOverwriteReplicaSecret; }

    /**
     * <p>(Optional) If set, Secrets Manager replication overwrites a secret with the
     * same name in the destination region.</p>
     */
    inline bool ForceOverwriteReplicaSecretHasBeenSet() const { return m_forceOverwriteReplicaSecretHasBeenSet; }

    /**
     * <p>(Optional) If set, Secrets Manager replication overwrites a secret with the
     * same name in the destination region.</p>
     */
    inline void SetForceOverwriteReplicaSecret(bool value) { m_forceOverwriteReplicaSecretHasBeenSet = true; m_forceOverwriteReplicaSecret = value; }

    /**
     * <p>(Optional) If set, Secrets Manager replication overwrites a secret with the
     * same name in the destination region.</p>
     */
    inline ReplicateSecretToRegionsRequest& WithForceOverwriteReplicaSecret(bool value) { SetForceOverwriteReplicaSecret(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::Vector<ReplicaRegionType> m_addReplicaRegions;
    bool m_addReplicaRegionsHasBeenSet;

    bool m_forceOverwriteReplicaSecret;
    bool m_forceOverwriteReplicaSecretHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
