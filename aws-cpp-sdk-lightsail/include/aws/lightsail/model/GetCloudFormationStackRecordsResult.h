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
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult();
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline const Aws::Vector<CloudFormationStackRecord>& GetCloudFormationStackRecords() const{ return m_cloudFormationStackRecords; }

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline void SetCloudFormationStackRecords(const Aws::Vector<CloudFormationStackRecord>& value) { m_cloudFormationStackRecords = value; }

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline void SetCloudFormationStackRecords(Aws::Vector<CloudFormationStackRecord>&& value) { m_cloudFormationStackRecords = std::move(value); }

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithCloudFormationStackRecords(const Aws::Vector<CloudFormationStackRecord>& value) { SetCloudFormationStackRecords(value); return *this;}

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithCloudFormationStackRecords(Aws::Vector<CloudFormationStackRecord>&& value) { SetCloudFormationStackRecords(std::move(value)); return *this;}

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline GetCloudFormationStackRecordsResult& AddCloudFormationStackRecords(const CloudFormationStackRecord& value) { m_cloudFormationStackRecords.push_back(value); return *this; }

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline GetCloudFormationStackRecordsResult& AddCloudFormationStackRecords(CloudFormationStackRecord&& value) { m_cloudFormationStackRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetCloudFormationStackRecords</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<CloudFormationStackRecord> m_cloudFormationStackRecords;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
