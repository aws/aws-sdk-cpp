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
    AWS_EC2_API DescribeReservedInstancesResponse();
    AWS_EC2_API DescribeReservedInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeReservedInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline const Aws::Vector<ReservedInstances>& GetReservedInstances() const{ return m_reservedInstances; }

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline void SetReservedInstances(const Aws::Vector<ReservedInstances>& value) { m_reservedInstances = value; }

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline void SetReservedInstances(Aws::Vector<ReservedInstances>&& value) { m_reservedInstances = std::move(value); }

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline DescribeReservedInstancesResponse& WithReservedInstances(const Aws::Vector<ReservedInstances>& value) { SetReservedInstances(value); return *this;}

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline DescribeReservedInstancesResponse& WithReservedInstances(Aws::Vector<ReservedInstances>&& value) { SetReservedInstances(std::move(value)); return *this;}

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline DescribeReservedInstancesResponse& AddReservedInstances(const ReservedInstances& value) { m_reservedInstances.push_back(value); return *this; }

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline DescribeReservedInstancesResponse& AddReservedInstances(ReservedInstances&& value) { m_reservedInstances.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeReservedInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ReservedInstances> m_reservedInstances;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
