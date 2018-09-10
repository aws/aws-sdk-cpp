﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IdFormat.h>
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
  class AWS_EC2_API DescribeAggregateIdFormatResponse
  {
  public:
    DescribeAggregateIdFormatResponse();
    DescribeAggregateIdFormatResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAggregateIdFormatResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Indicates whether all resource types in the region are configured to use
     * longer IDs. This value is only <code>true</code> if all users are configured to
     * use longer IDs for all resources types in the region.</p>
     */
    inline bool GetUseLongIdsAggregated() const{ return m_useLongIdsAggregated; }

    /**
     * <p>Indicates whether all resource types in the region are configured to use
     * longer IDs. This value is only <code>true</code> if all users are configured to
     * use longer IDs for all resources types in the region.</p>
     */
    inline void SetUseLongIdsAggregated(bool value) { m_useLongIdsAggregated = value; }

    /**
     * <p>Indicates whether all resource types in the region are configured to use
     * longer IDs. This value is only <code>true</code> if all users are configured to
     * use longer IDs for all resources types in the region.</p>
     */
    inline DescribeAggregateIdFormatResponse& WithUseLongIdsAggregated(bool value) { SetUseLongIdsAggregated(value); return *this;}


    /**
     * <p>Information about each resource's ID format.</p>
     */
    inline const Aws::Vector<IdFormat>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>Information about each resource's ID format.</p>
     */
    inline void SetStatuses(const Aws::Vector<IdFormat>& value) { m_statuses = value; }

    /**
     * <p>Information about each resource's ID format.</p>
     */
    inline void SetStatuses(Aws::Vector<IdFormat>&& value) { m_statuses = std::move(value); }

    /**
     * <p>Information about each resource's ID format.</p>
     */
    inline DescribeAggregateIdFormatResponse& WithStatuses(const Aws::Vector<IdFormat>& value) { SetStatuses(value); return *this;}

    /**
     * <p>Information about each resource's ID format.</p>
     */
    inline DescribeAggregateIdFormatResponse& WithStatuses(Aws::Vector<IdFormat>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p>Information about each resource's ID format.</p>
     */
    inline DescribeAggregateIdFormatResponse& AddStatuses(const IdFormat& value) { m_statuses.push_back(value); return *this; }

    /**
     * <p>Information about each resource's ID format.</p>
     */
    inline DescribeAggregateIdFormatResponse& AddStatuses(IdFormat&& value) { m_statuses.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAggregateIdFormatResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAggregateIdFormatResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_useLongIdsAggregated;

    Aws::Vector<IdFormat> m_statuses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
