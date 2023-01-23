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


    /**
     * <p>The name of the cluster that you are associating with encryption
     * configuration.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster that you are associating with encryption
     * configuration.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster that you are associating with encryption
     * configuration.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster that you are associating with encryption
     * configuration.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster that you are associating with encryption
     * configuration.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster that you are associating with encryption
     * configuration.</p>
     */
    inline AssociateEncryptionConfigRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster that you are associating with encryption
     * configuration.</p>
     */
    inline AssociateEncryptionConfigRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster that you are associating with encryption
     * configuration.</p>
     */
    inline AssociateEncryptionConfigRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline const Aws::Vector<EncryptionConfig>& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline void SetEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline void SetEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline AssociateEncryptionConfigRequest& WithEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline AssociateEncryptionConfigRequest& WithEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { SetEncryptionConfig(std::move(value)); return *this;}

    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline AssociateEncryptionConfigRequest& AddEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(value); return *this; }

    /**
     * <p>The configuration you are using for encryption.</p>
     */
    inline AssociateEncryptionConfigRequest& AddEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The client request token you are using with the encryption configuration.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The client request token you are using with the encryption configuration.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The client request token you are using with the encryption configuration.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The client request token you are using with the encryption configuration.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The client request token you are using with the encryption configuration.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The client request token you are using with the encryption configuration.</p>
     */
    inline AssociateEncryptionConfigRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The client request token you are using with the encryption configuration.</p>
     */
    inline AssociateEncryptionConfigRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The client request token you are using with the encryption configuration.</p>
     */
    inline AssociateEncryptionConfigRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

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
