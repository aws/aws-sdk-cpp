/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/EncryptionConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class AssociateEncryptionConfigRequest : public EKSRequest
  {
  public:
    AWS_EKS_API AssociateEncryptionConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateEncryptionConfig"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline AssociateEncryptionConfigRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline AssociateEncryptionConfigRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline AssociateEncryptionConfigRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline const Aws::Vector<EncryptionConfig>& GetEncryptionConfig() const{ return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    inline void SetEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }
    inline void SetEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }
    inline AssociateEncryptionConfigRequest& WithEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { SetEncryptionConfig(value); return *this;}
    inline AssociateEncryptionConfigRequest& WithEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { SetEncryptionConfig(std::move(value)); return *this;}
    inline AssociateEncryptionConfigRequest& AddEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(value); return *this; }
    inline AssociateEncryptionConfigRequest& AddEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline AssociateEncryptionConfigRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline AssociateEncryptionConfigRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline AssociateEncryptionConfigRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<EncryptionConfig> m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
