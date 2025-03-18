/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ReservedInstances.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output for DescribeReservedInstances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesResult">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesResponse
  {
  public:
    AWS_EC2_API DescribeReservedInstancesResponse() = default;
    AWS_EC2_API DescribeReservedInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeReservedInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline const Aws::Vector<ReservedInstances>& GetReservedInstances() const { return m_reservedInstances; }
    template<typename ReservedInstancesT = Aws::Vector<ReservedInstances>>
    void SetReservedInstances(ReservedInstancesT&& value) { m_reservedInstancesHasBeenSet = true; m_reservedInstances = std::forward<ReservedInstancesT>(value); }
    template<typename ReservedInstancesT = Aws::Vector<ReservedInstances>>
    DescribeReservedInstancesResponse& WithReservedInstances(ReservedInstancesT&& value) { SetReservedInstances(std::forward<ReservedInstancesT>(value)); return *this;}
    template<typename ReservedInstancesT = ReservedInstances>
    DescribeReservedInstancesResponse& AddReservedInstances(ReservedInstancesT&& value) { m_reservedInstancesHasBeenSet = true; m_reservedInstances.emplace_back(std::forward<ReservedInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReservedInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReservedInstances> m_reservedInstances;
    bool m_reservedInstancesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
