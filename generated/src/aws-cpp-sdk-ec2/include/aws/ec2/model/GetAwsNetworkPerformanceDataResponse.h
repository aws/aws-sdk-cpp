/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DataResponse.h>
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
  class GetAwsNetworkPerformanceDataResponse
  {
  public:
    AWS_EC2_API GetAwsNetworkPerformanceDataResponse();
    AWS_EC2_API GetAwsNetworkPerformanceDataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetAwsNetworkPerformanceDataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The list of data responses.</p>
     */
    inline const Aws::Vector<DataResponse>& GetDataResponses() const{ return m_dataResponses; }

    /**
     * <p>The list of data responses.</p>
     */
    inline void SetDataResponses(const Aws::Vector<DataResponse>& value) { m_dataResponses = value; }

    /**
     * <p>The list of data responses.</p>
     */
    inline void SetDataResponses(Aws::Vector<DataResponse>&& value) { m_dataResponses = std::move(value); }

    /**
     * <p>The list of data responses.</p>
     */
    inline GetAwsNetworkPerformanceDataResponse& WithDataResponses(const Aws::Vector<DataResponse>& value) { SetDataResponses(value); return *this;}

    /**
     * <p>The list of data responses.</p>
     */
    inline GetAwsNetworkPerformanceDataResponse& WithDataResponses(Aws::Vector<DataResponse>&& value) { SetDataResponses(std::move(value)); return *this;}

    /**
     * <p>The list of data responses.</p>
     */
    inline GetAwsNetworkPerformanceDataResponse& AddDataResponses(const DataResponse& value) { m_dataResponses.push_back(value); return *this; }

    /**
     * <p>The list of data responses.</p>
     */
    inline GetAwsNetworkPerformanceDataResponse& AddDataResponses(DataResponse&& value) { m_dataResponses.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetAwsNetworkPerformanceDataResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetAwsNetworkPerformanceDataResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetAwsNetworkPerformanceDataResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetAwsNetworkPerformanceDataResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAwsNetworkPerformanceDataResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DataResponse> m_dataResponses;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
