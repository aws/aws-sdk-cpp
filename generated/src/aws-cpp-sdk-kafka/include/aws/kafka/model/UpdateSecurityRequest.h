/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/model/ClientAuthentication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/EncryptionInfo.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class UpdateSecurityRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateSecurityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurity"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>Includes all client authentication related information.</p>
    
     *     
     */
    inline const ClientAuthentication& GetClientAuthentication() const { return m_clientAuthentication; }
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }
    template<typename ClientAuthenticationT = ClientAuthentication>
    void SetClientAuthentication(ClientAuthenticationT&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::forward<ClientAuthenticationT>(value); }
    template<typename ClientAuthenticationT = ClientAuthentication>
    UpdateSecurityRequest& WithClientAuthentication(ClientAuthenticationT&& value) { SetClientAuthentication(std::forward<ClientAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    UpdateSecurityRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    UpdateSecurityRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline const EncryptionInfo& GetEncryptionInfo() const { return m_encryptionInfo; }
    inline bool EncryptionInfoHasBeenSet() const { return m_encryptionInfoHasBeenSet; }
    template<typename EncryptionInfoT = EncryptionInfo>
    void SetEncryptionInfo(EncryptionInfoT&& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = std::forward<EncryptionInfoT>(value); }
    template<typename EncryptionInfoT = EncryptionInfo>
    UpdateSecurityRequest& WithEncryptionInfo(EncryptionInfoT&& value) { SetEncryptionInfo(std::forward<EncryptionInfoT>(value)); return *this;}
    ///@}
  private:

    ClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
