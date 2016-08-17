/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/ActiveInstance.h>

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
   * <p>Contains the output of DescribeSpotFleetInstances.</p>
   */
  class AWS_EC2_API DescribeSpotFleetInstancesResponse
  {
  public:
    DescribeSpotFleetInstancesResponse();
    DescribeSpotFleetInstancesResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeSpotFleetInstancesResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const{ return m_spotFleetRequestId; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const Aws::String& value) { m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(Aws::String&& value) { m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const char* value) { m_spotFleetRequestId.assign(value); }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline DescribeSpotFleetInstancesResponse& WithSpotFleetRequestId(const Aws::String& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline DescribeSpotFleetInstancesResponse& WithSpotFleetRequestId(Aws::String&& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline DescribeSpotFleetInstancesResponse& WithSpotFleetRequestId(const char* value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The running instances. Note that this list is refreshed periodically and
     * might be out of date.</p>
     */
    inline const Aws::Vector<ActiveInstance>& GetActiveInstances() const{ return m_activeInstances; }

    /**
     * <p>The running instances. Note that this list is refreshed periodically and
     * might be out of date.</p>
     */
    inline void SetActiveInstances(const Aws::Vector<ActiveInstance>& value) { m_activeInstances = value; }

    /**
     * <p>The running instances. Note that this list is refreshed periodically and
     * might be out of date.</p>
     */
    inline void SetActiveInstances(Aws::Vector<ActiveInstance>&& value) { m_activeInstances = value; }

    /**
     * <p>The running instances. Note that this list is refreshed periodically and
     * might be out of date.</p>
     */
    inline DescribeSpotFleetInstancesResponse& WithActiveInstances(const Aws::Vector<ActiveInstance>& value) { SetActiveInstances(value); return *this;}

    /**
     * <p>The running instances. Note that this list is refreshed periodically and
     * might be out of date.</p>
     */
    inline DescribeSpotFleetInstancesResponse& WithActiveInstances(Aws::Vector<ActiveInstance>&& value) { SetActiveInstances(value); return *this;}

    /**
     * <p>The running instances. Note that this list is refreshed periodically and
     * might be out of date.</p>
     */
    inline DescribeSpotFleetInstancesResponse& AddActiveInstances(const ActiveInstance& value) { m_activeInstances.push_back(value); return *this; }

    /**
     * <p>The running instances. Note that this list is refreshed periodically and
     * might be out of date.</p>
     */
    inline DescribeSpotFleetInstancesResponse& AddActiveInstances(ActiveInstance&& value) { m_activeInstances.push_back(value); return *this; }

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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetInstancesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetInstancesResponse& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetInstancesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeSpotFleetInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSpotFleetInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_spotFleetRequestId;
    Aws::Vector<ActiveInstance> m_activeInstances;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws