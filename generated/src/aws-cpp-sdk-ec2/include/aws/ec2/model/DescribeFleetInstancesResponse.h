﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeFleetInstancesResponse
  {
  public:
    AWS_EC2_API DescribeFleetInstancesResponse();
    AWS_EC2_API DescribeFleetInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFleetInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline const Aws::Vector<ActiveInstance>& GetActiveInstances() const{ return m_activeInstances; }
    inline void SetActiveInstances(const Aws::Vector<ActiveInstance>& value) { m_activeInstances = value; }
    inline void SetActiveInstances(Aws::Vector<ActiveInstance>&& value) { m_activeInstances = std::move(value); }
    inline DescribeFleetInstancesResponse& WithActiveInstances(const Aws::Vector<ActiveInstance>& value) { SetActiveInstances(value); return *this;}
    inline DescribeFleetInstancesResponse& WithActiveInstances(Aws::Vector<ActiveInstance>&& value) { SetActiveInstances(std::move(value)); return *this;}
    inline DescribeFleetInstancesResponse& AddActiveInstances(const ActiveInstance& value) { m_activeInstances.push_back(value); return *this; }
    inline DescribeFleetInstancesResponse& AddActiveInstances(ActiveInstance&& value) { m_activeInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeFleetInstancesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFleetInstancesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFleetInstancesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline DescribeFleetInstancesResponse& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline DescribeFleetInstancesResponse& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline DescribeFleetInstancesResponse& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeFleetInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeFleetInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActiveInstance> m_activeInstances;

    Aws::String m_nextToken;

    Aws::String m_fleetId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
