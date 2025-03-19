/**
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
    AWS_KAFKA_API ConnectivityInfo() = default;
    AWS_KAFKA_API ConnectivityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ConnectivityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Public access control for brokers.</p>
         
     */
    inline const PublicAccess& GetPublicAccess() const { return m_publicAccess; }
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }
    template<typename PublicAccessT = PublicAccess>
    void SetPublicAccess(PublicAccessT&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::forward<PublicAccessT>(value); }
    template<typename PublicAccessT = PublicAccess>
    ConnectivityInfo& WithPublicAccess(PublicAccessT&& value) { SetPublicAccess(std::forward<PublicAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>VPC connectivity access control for brokers.</p>
         
     */
    inline const VpcConnectivity& GetVpcConnectivity() const { return m_vpcConnectivity; }
    inline bool VpcConnectivityHasBeenSet() const { return m_vpcConnectivityHasBeenSet; }
    template<typename VpcConnectivityT = VpcConnectivity>
    void SetVpcConnectivity(VpcConnectivityT&& value) { m_vpcConnectivityHasBeenSet = true; m_vpcConnectivity = std::forward<VpcConnectivityT>(value); }
    template<typename VpcConnectivityT = VpcConnectivity>
    ConnectivityInfo& WithVpcConnectivity(VpcConnectivityT&& value) { SetVpcConnectivity(std::forward<VpcConnectivityT>(value)); return *this;}
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
