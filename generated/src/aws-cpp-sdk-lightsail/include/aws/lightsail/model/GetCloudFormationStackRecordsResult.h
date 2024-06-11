﻿/**
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
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult();
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline const Aws::Vector<CloudFormationStackRecord>& GetCloudFormationStackRecords() const{ return m_cloudFormationStackRecords; }
    inline void SetCloudFormationStackRecords(const Aws::Vector<CloudFormationStackRecord>& value) { m_cloudFormationStackRecords = value; }
    inline void SetCloudFormationStackRecords(Aws::Vector<CloudFormationStackRecord>&& value) { m_cloudFormationStackRecords = std::move(value); }
    inline GetCloudFormationStackRecordsResult& WithCloudFormationStackRecords(const Aws::Vector<CloudFormationStackRecord>& value) { SetCloudFormationStackRecords(value); return *this;}
    inline GetCloudFormationStackRecordsResult& WithCloudFormationStackRecords(Aws::Vector<CloudFormationStackRecord>&& value) { SetCloudFormationStackRecords(std::move(value)); return *this;}
    inline GetCloudFormationStackRecordsResult& AddCloudFormationStackRecords(const CloudFormationStackRecord& value) { m_cloudFormationStackRecords.push_back(value); return *this; }
    inline GetCloudFormationStackRecordsResult& AddCloudFormationStackRecords(CloudFormationStackRecord&& value) { m_cloudFormationStackRecords.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCloudFormationStackRecordsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCloudFormationStackRecordsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCloudFormationStackRecordsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CloudFormationStackRecord> m_cloudFormationStackRecords;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
