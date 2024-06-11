﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/StoreImageTaskResponse.h>
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
  class DescribeStoreImageTasksResponse
  {
  public:
    AWS_EC2_API DescribeStoreImageTasksResponse();
    AWS_EC2_API DescribeStoreImageTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeStoreImageTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The information about the AMI store tasks.</p>
     */
    inline const Aws::Vector<StoreImageTaskResponse>& GetStoreImageTaskResults() const{ return m_storeImageTaskResults; }
    inline void SetStoreImageTaskResults(const Aws::Vector<StoreImageTaskResponse>& value) { m_storeImageTaskResults = value; }
    inline void SetStoreImageTaskResults(Aws::Vector<StoreImageTaskResponse>&& value) { m_storeImageTaskResults = std::move(value); }
    inline DescribeStoreImageTasksResponse& WithStoreImageTaskResults(const Aws::Vector<StoreImageTaskResponse>& value) { SetStoreImageTaskResults(value); return *this;}
    inline DescribeStoreImageTasksResponse& WithStoreImageTaskResults(Aws::Vector<StoreImageTaskResponse>&& value) { SetStoreImageTaskResults(std::move(value)); return *this;}
    inline DescribeStoreImageTasksResponse& AddStoreImageTaskResults(const StoreImageTaskResponse& value) { m_storeImageTaskResults.push_back(value); return *this; }
    inline DescribeStoreImageTasksResponse& AddStoreImageTaskResults(StoreImageTaskResponse&& value) { m_storeImageTaskResults.push_back(std::move(value)); return *this; }
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
    inline DescribeStoreImageTasksResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeStoreImageTasksResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeStoreImageTasksResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeStoreImageTasksResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeStoreImageTasksResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StoreImageTaskResponse> m_storeImageTaskResults;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
