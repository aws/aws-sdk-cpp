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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ActiveInstance.h>
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
  class AWS_EC2_API DescribeFleetInstancesResponse
  {
  public:
    DescribeFleetInstancesResponse();
    DescribeFleetInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeFleetInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline const Aws::Vector<ActiveInstance>& GetActiveInstances() const{ return m_activeInstances; }

    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline void SetActiveInstances(const Aws::Vector<ActiveInstance>& value) { m_activeInstances = value; }

    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline void SetActiveInstances(Aws::Vector<ActiveInstance>&& value) { m_activeInstances = std::move(value); }

    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline DescribeFleetInstancesResponse& WithActiveInstances(const Aws::Vector<ActiveInstance>& value) { SetActiveInstances(value); return *this;}

    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline DescribeFleetInstancesResponse& WithActiveInstances(Aws::Vector<ActiveInstance>&& value) { SetActiveInstances(std::move(value)); return *this;}

    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline DescribeFleetInstancesResponse& AddActiveInstances(const ActiveInstance& value) { m_activeInstances.push_back(value); return *this; }

    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline DescribeFleetInstancesResponse& AddActiveInstances(ActiveInstance&& value) { m_activeInstances.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetInstancesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetInstancesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetInstancesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DescribeFleetInstancesResponse& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DescribeFleetInstancesResponse& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DescribeFleetInstancesResponse& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeFleetInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeFleetInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ActiveInstance> m_activeInstances;

    Aws::String m_nextToken;

    Aws::String m_fleetId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
