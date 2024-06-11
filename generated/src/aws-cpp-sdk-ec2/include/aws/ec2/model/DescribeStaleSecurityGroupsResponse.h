﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/StaleSecurityGroup.h>
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
  class DescribeStaleSecurityGroupsResponse
  {
  public:
    AWS_EC2_API DescribeStaleSecurityGroupsResponse();
    AWS_EC2_API DescribeStaleSecurityGroupsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeStaleSecurityGroupsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. If
     * there are no additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeStaleSecurityGroupsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeStaleSecurityGroupsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeStaleSecurityGroupsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the stale security groups.</p>
     */
    inline const Aws::Vector<StaleSecurityGroup>& GetStaleSecurityGroupSet() const{ return m_staleSecurityGroupSet; }
    inline void SetStaleSecurityGroupSet(const Aws::Vector<StaleSecurityGroup>& value) { m_staleSecurityGroupSet = value; }
    inline void SetStaleSecurityGroupSet(Aws::Vector<StaleSecurityGroup>&& value) { m_staleSecurityGroupSet = std::move(value); }
    inline DescribeStaleSecurityGroupsResponse& WithStaleSecurityGroupSet(const Aws::Vector<StaleSecurityGroup>& value) { SetStaleSecurityGroupSet(value); return *this;}
    inline DescribeStaleSecurityGroupsResponse& WithStaleSecurityGroupSet(Aws::Vector<StaleSecurityGroup>&& value) { SetStaleSecurityGroupSet(std::move(value)); return *this;}
    inline DescribeStaleSecurityGroupsResponse& AddStaleSecurityGroupSet(const StaleSecurityGroup& value) { m_staleSecurityGroupSet.push_back(value); return *this; }
    inline DescribeStaleSecurityGroupsResponse& AddStaleSecurityGroupSet(StaleSecurityGroup&& value) { m_staleSecurityGroupSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeStaleSecurityGroupsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeStaleSecurityGroupsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<StaleSecurityGroup> m_staleSecurityGroupSet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
