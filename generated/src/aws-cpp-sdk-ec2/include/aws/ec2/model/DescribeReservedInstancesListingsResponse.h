/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ReservedInstancesListing.h>
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
   * <p>Contains the output of DescribeReservedInstancesListings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesListingsResult">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesListingsResponse
  {
  public:
    AWS_EC2_API DescribeReservedInstancesListingsResponse();
    AWS_EC2_API DescribeReservedInstancesListingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeReservedInstancesListingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Reserved Instance listing.</p>
     */
    inline const Aws::Vector<ReservedInstancesListing>& GetReservedInstancesListings() const{ return m_reservedInstancesListings; }

    /**
     * <p>Information about the Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListings(const Aws::Vector<ReservedInstancesListing>& value) { m_reservedInstancesListings = value; }

    /**
     * <p>Information about the Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListings(Aws::Vector<ReservedInstancesListing>&& value) { m_reservedInstancesListings = std::move(value); }

    /**
     * <p>Information about the Reserved Instance listing.</p>
     */
    inline DescribeReservedInstancesListingsResponse& WithReservedInstancesListings(const Aws::Vector<ReservedInstancesListing>& value) { SetReservedInstancesListings(value); return *this;}

    /**
     * <p>Information about the Reserved Instance listing.</p>
     */
    inline DescribeReservedInstancesListingsResponse& WithReservedInstancesListings(Aws::Vector<ReservedInstancesListing>&& value) { SetReservedInstancesListings(std::move(value)); return *this;}

    /**
     * <p>Information about the Reserved Instance listing.</p>
     */
    inline DescribeReservedInstancesListingsResponse& AddReservedInstancesListings(const ReservedInstancesListing& value) { m_reservedInstancesListings.push_back(value); return *this; }

    /**
     * <p>Information about the Reserved Instance listing.</p>
     */
    inline DescribeReservedInstancesListingsResponse& AddReservedInstancesListings(ReservedInstancesListing&& value) { m_reservedInstancesListings.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeReservedInstancesListingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedInstancesListingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ReservedInstancesListing> m_reservedInstancesListings;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
