/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/SetupHistory.h>
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
  class GetSetupHistoryResult
  {
  public:
    AWS_LIGHTSAIL_API GetSetupHistoryResult();
    AWS_LIGHTSAIL_API GetSetupHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetSetupHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The historical information that's returned.</p>
     */
    inline const Aws::Vector<SetupHistory>& GetSetupHistory() const{ return m_setupHistory; }

    /**
     * <p>The historical information that's returned.</p>
     */
    inline void SetSetupHistory(const Aws::Vector<SetupHistory>& value) { m_setupHistory = value; }

    /**
     * <p>The historical information that's returned.</p>
     */
    inline void SetSetupHistory(Aws::Vector<SetupHistory>&& value) { m_setupHistory = std::move(value); }

    /**
     * <p>The historical information that's returned.</p>
     */
    inline GetSetupHistoryResult& WithSetupHistory(const Aws::Vector<SetupHistory>& value) { SetSetupHistory(value); return *this;}

    /**
     * <p>The historical information that's returned.</p>
     */
    inline GetSetupHistoryResult& WithSetupHistory(Aws::Vector<SetupHistory>&& value) { SetSetupHistory(std::move(value)); return *this;}

    /**
     * <p>The historical information that's returned.</p>
     */
    inline GetSetupHistoryResult& AddSetupHistory(const SetupHistory& value) { m_setupHistory.push_back(value); return *this; }

    /**
     * <p>The historical information that's returned.</p>
     */
    inline GetSetupHistoryResult& AddSetupHistory(SetupHistory&& value) { m_setupHistory.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetSetupHistory</code>
     * request and specify the next page token using the pageToken parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetSetupHistory</code>
     * request and specify the next page token using the pageToken parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetSetupHistory</code>
     * request and specify the next page token using the pageToken parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetSetupHistory</code>
     * request and specify the next page token using the pageToken parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetSetupHistory</code>
     * request and specify the next page token using the pageToken parameter.</p>
     */
    inline GetSetupHistoryResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetSetupHistory</code>
     * request and specify the next page token using the pageToken parameter.</p>
     */
    inline GetSetupHistoryResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetSetupHistory</code>
     * request and specify the next page token using the pageToken parameter.</p>
     */
    inline GetSetupHistoryResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSetupHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSetupHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSetupHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SetupHistory> m_setupHistory;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
