/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/CloudFormationStackRecord.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{
  class GetCloudFormationStackRecordsResult
  {
  public:
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult() = default;
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline const Aws::Vector<CloudFormationStackRecord>& GetCloudFormationStackRecords() const { return m_cloudFormationStackRecords; }
    template<typename CloudFormationStackRecordsT = Aws::Vector<CloudFormationStackRecord>>
    void SetCloudFormationStackRecords(CloudFormationStackRecordsT&& value) { m_cloudFormationStackRecordsHasBeenSet = true; m_cloudFormationStackRecords = std::forward<CloudFormationStackRecordsT>(value); }
    template<typename CloudFormationStackRecordsT = Aws::Vector<CloudFormationStackRecord>>
    GetCloudFormationStackRecordsResult& WithCloudFormationStackRecords(CloudFormationStackRecordsT&& value) { SetCloudFormationStackRecords(std::forward<CloudFormationStackRecordsT>(value)); return *this;}
    template<typename CloudFormationStackRecordsT = CloudFormationStackRecord>
    GetCloudFormationStackRecordsResult& AddCloudFormationStackRecords(CloudFormationStackRecordsT&& value) { m_cloudFormationStackRecordsHasBeenSet = true; m_cloudFormationStackRecords.emplace_back(std::forward<CloudFormationStackRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetCloudFormationStackRecordsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCloudFormationStackRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CloudFormationStackRecord> m_cloudFormationStackRecords;
    bool m_cloudFormationStackRecordsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
