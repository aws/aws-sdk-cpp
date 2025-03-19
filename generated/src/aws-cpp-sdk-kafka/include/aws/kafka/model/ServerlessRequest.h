/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ServerlessClientAuthentication.h>
#include <aws/kafka/model/VpcConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Serverless cluster request.</p>
         <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ServerlessRequest">AWS
   * API Reference</a></p>
   */
  class ServerlessRequest
  {
  public:
    AWS_KAFKA_API ServerlessRequest() = default;
    AWS_KAFKA_API ServerlessRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ServerlessRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline const Aws::Vector<VpcConfig>& GetVpcConfigs() const { return m_vpcConfigs; }
    inline bool VpcConfigsHasBeenSet() const { return m_vpcConfigsHasBeenSet; }
    template<typename VpcConfigsT = Aws::Vector<VpcConfig>>
    void SetVpcConfigs(VpcConfigsT&& value) { m_vpcConfigsHasBeenSet = true; m_vpcConfigs = std::forward<VpcConfigsT>(value); }
    template<typename VpcConfigsT = Aws::Vector<VpcConfig>>
    ServerlessRequest& WithVpcConfigs(VpcConfigsT&& value) { SetVpcConfigs(std::forward<VpcConfigsT>(value)); return *this;}
    template<typename VpcConfigsT = VpcConfig>
    ServerlessRequest& AddVpcConfigs(VpcConfigsT&& value) { m_vpcConfigsHasBeenSet = true; m_vpcConfigs.emplace_back(std::forward<VpcConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline const ServerlessClientAuthentication& GetClientAuthentication() const { return m_clientAuthentication; }
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }
    template<typename ClientAuthenticationT = ServerlessClientAuthentication>
    void SetClientAuthentication(ClientAuthenticationT&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::forward<ClientAuthenticationT>(value); }
    template<typename ClientAuthenticationT = ServerlessClientAuthentication>
    ServerlessRequest& WithClientAuthentication(ClientAuthenticationT&& value) { SetClientAuthentication(std::forward<ClientAuthenticationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcConfig> m_vpcConfigs;
    bool m_vpcConfigsHasBeenSet = false;

    ServerlessClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
