/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ScheduledInstanceAvailability.h>
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
   * <p>Contains the output of DescribeScheduledInstanceAvailability.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstanceAvailabilityResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeScheduledInstanceAvailabilityResponse
  {
  public:
    DescribeScheduledInstanceAvailabilityResponse();
    DescribeScheduledInstanceAvailabilityResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeScheduledInstanceAvailabilityResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScheduledInstanceAvailabilityResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScheduledInstanceAvailabilityResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScheduledInstanceAvailabilityResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the available Scheduled Instances.</p>
     */
    inline const Aws::Vector<ScheduledInstanceAvailability>& GetScheduledInstanceAvailabilitySet() const{ return m_scheduledInstanceAvailabilitySet; }

    /**
     * <p>Information about the available Scheduled Instances.</p>
     */
    inline void SetScheduledInstanceAvailabilitySet(const Aws::Vector<ScheduledInstanceAvailability>& value) { m_scheduledInstanceAvailabilitySet = value; }

    /**
     * <p>Information about the available Scheduled Instances.</p>
     */
    inline void SetScheduledInstanceAvailabilitySet(Aws::Vector<ScheduledInstanceAvailability>&& value) { m_scheduledInstanceAvailabilitySet = std::move(value); }

    /**
     * <p>Information about the available Scheduled Instances.</p>
     */
    inline DescribeScheduledInstanceAvailabilityResponse& WithScheduledInstanceAvailabilitySet(const Aws::Vector<ScheduledInstanceAvailability>& value) { SetScheduledInstanceAvailabilitySet(value); return *this;}

    /**
     * <p>Information about the available Scheduled Instances.</p>
     */
    inline DescribeScheduledInstanceAvailabilityResponse& WithScheduledInstanceAvailabilitySet(Aws::Vector<ScheduledInstanceAvailability>&& value) { SetScheduledInstanceAvailabilitySet(std::move(value)); return *this;}

    /**
     * <p>Information about the available Scheduled Instances.</p>
     */
    inline DescribeScheduledInstanceAvailabilityResponse& AddScheduledInstanceAvailabilitySet(const ScheduledInstanceAvailability& value) { m_scheduledInstanceAvailabilitySet.push_back(value); return *this; }

    /**
     * <p>Information about the available Scheduled Instances.</p>
     */
    inline DescribeScheduledInstanceAvailabilityResponse& AddScheduledInstanceAvailabilitySet(ScheduledInstanceAvailability&& value) { m_scheduledInstanceAvailabilitySet.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeScheduledInstanceAvailabilityResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeScheduledInstanceAvailabilityResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ScheduledInstanceAvailability> m_scheduledInstanceAvailabilitySet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
