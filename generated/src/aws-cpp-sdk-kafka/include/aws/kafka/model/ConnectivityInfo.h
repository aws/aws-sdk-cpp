﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/PublicAccess.h>
#include <aws/kafka/model/VpcConnectivity.h>
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
            <p>Information about the broker access configuration.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ConnectivityInfo">AWS
   * API Reference</a></p>
   */
  class ConnectivityInfo
  {
  public:
    AWS_KAFKA_API ConnectivityInfo();
    AWS_KAFKA_API ConnectivityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ConnectivityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Public access control for brokers.</p>
         
     */
    inline const PublicAccess& GetPublicAccess() const{ return m_publicAccess; }
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }
    inline void SetPublicAccess(const PublicAccess& value) { m_publicAccessHasBeenSet = true; m_publicAccess = value; }
    inline void SetPublicAccess(PublicAccess&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::move(value); }
    inline ConnectivityInfo& WithPublicAccess(const PublicAccess& value) { SetPublicAccess(value); return *this;}
    inline ConnectivityInfo& WithPublicAccess(PublicAccess&& value) { SetPublicAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>VPC connectivity access control for brokers.</p>
         
     */
    inline const VpcConnectivity& GetVpcConnectivity() const{ return m_vpcConnectivity; }
    inline bool VpcConnectivityHasBeenSet() const { return m_vpcConnectivityHasBeenSet; }
    inline void SetVpcConnectivity(const VpcConnectivity& value) { m_vpcConnectivityHasBeenSet = true; m_vpcConnectivity = value; }
    inline void SetVpcConnectivity(VpcConnectivity&& value) { m_vpcConnectivityHasBeenSet = true; m_vpcConnectivity = std::move(value); }
    inline ConnectivityInfo& WithVpcConnectivity(const VpcConnectivity& value) { SetVpcConnectivity(value); return *this;}
    inline ConnectivityInfo& WithVpcConnectivity(VpcConnectivity&& value) { SetVpcConnectivity(std::move(value)); return *this;}
    ///@}
  private:

    PublicAccess m_publicAccess;
    bool m_publicAccessHasBeenSet = false;

    VpcConnectivity m_vpcConnectivity;
    bool m_vpcConnectivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
