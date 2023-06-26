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
    AWS_KAFKA_API ServerlessRequest();
    AWS_KAFKA_API ServerlessRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ServerlessRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline const Aws::Vector<VpcConfig>& GetVpcConfigs() const{ return m_vpcConfigs; }

    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline bool VpcConfigsHasBeenSet() const { return m_vpcConfigsHasBeenSet; }

    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline void SetVpcConfigs(const Aws::Vector<VpcConfig>& value) { m_vpcConfigsHasBeenSet = true; m_vpcConfigs = value; }

    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline void SetVpcConfigs(Aws::Vector<VpcConfig>&& value) { m_vpcConfigsHasBeenSet = true; m_vpcConfigs = std::move(value); }

    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline ServerlessRequest& WithVpcConfigs(const Aws::Vector<VpcConfig>& value) { SetVpcConfigs(value); return *this;}

    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline ServerlessRequest& WithVpcConfigs(Aws::Vector<VpcConfig>&& value) { SetVpcConfigs(std::move(value)); return *this;}

    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline ServerlessRequest& AddVpcConfigs(const VpcConfig& value) { m_vpcConfigsHasBeenSet = true; m_vpcConfigs.push_back(value); return *this; }

    /**
     * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
     *   
     */
    inline ServerlessRequest& AddVpcConfigs(VpcConfig&& value) { m_vpcConfigsHasBeenSet = true; m_vpcConfigs.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline const ServerlessClientAuthentication& GetClientAuthentication() const{ return m_clientAuthentication; }

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline void SetClientAuthentication(const ServerlessClientAuthentication& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = value; }

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline void SetClientAuthentication(ServerlessClientAuthentication&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::move(value); }

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline ServerlessRequest& WithClientAuthentication(const ServerlessClientAuthentication& value) { SetClientAuthentication(value); return *this;}

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline ServerlessRequest& WithClientAuthentication(ServerlessClientAuthentication&& value) { SetClientAuthentication(std::move(value)); return *this;}

  private:

    Aws::Vector<VpcConfig> m_vpcConfigs;
    bool m_vpcConfigsHasBeenSet = false;

    ServerlessClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
