/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/VpcConnectionInfoServerless.h>
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
            <p>Returns information about a serverless cluster
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClusterOperationV2Serverless">AWS
   * API Reference</a></p>
   */
  class ClusterOperationV2Serverless
  {
  public:
    AWS_KAFKA_API ClusterOperationV2Serverless() = default;
    AWS_KAFKA_API ClusterOperationV2Serverless(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationV2Serverless& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
     */
    inline const VpcConnectionInfoServerless& GetVpcConnectionInfo() const { return m_vpcConnectionInfo; }
    inline bool VpcConnectionInfoHasBeenSet() const { return m_vpcConnectionInfoHasBeenSet; }
    template<typename VpcConnectionInfoT = VpcConnectionInfoServerless>
    void SetVpcConnectionInfo(VpcConnectionInfoT&& value) { m_vpcConnectionInfoHasBeenSet = true; m_vpcConnectionInfo = std::forward<VpcConnectionInfoT>(value); }
    template<typename VpcConnectionInfoT = VpcConnectionInfoServerless>
    ClusterOperationV2Serverless& WithVpcConnectionInfo(VpcConnectionInfoT&& value) { SetVpcConnectionInfo(std::forward<VpcConnectionInfoT>(value)); return *this;}
    ///@}
  private:

    VpcConnectionInfoServerless m_vpcConnectionInfo;
    bool m_vpcConnectionInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
