/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Application.h>
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
namespace Connect
{
namespace Model
{
  class ListSecurityProfileApplicationsResult
  {
  public:
    AWS_CONNECT_API ListSecurityProfileApplicationsResult();
    AWS_CONNECT_API ListSecurityProfileApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListSecurityProfileApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This API is in preview release for Amazon Connect and is subject to
     * change.</p> <p>A list of the third party application's metadata.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>This API is in preview release for Amazon Connect and is subject to
     * change.</p> <p>A list of the third party application's metadata.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applications = value; }

    /**
     * <p>This API is in preview release for Amazon Connect and is subject to
     * change.</p> <p>A list of the third party application's metadata.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applications = std::move(value); }

    /**
     * <p>This API is in preview release for Amazon Connect and is subject to
     * change.</p> <p>A list of the third party application's metadata.</p>
     */
    inline ListSecurityProfileApplicationsResult& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>This API is in preview release for Amazon Connect and is subject to
     * change.</p> <p>A list of the third party application's metadata.</p>
     */
    inline ListSecurityProfileApplicationsResult& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>This API is in preview release for Amazon Connect and is subject to
     * change.</p> <p>A list of the third party application's metadata.</p>
     */
    inline ListSecurityProfileApplicationsResult& AddApplications(const Application& value) { m_applications.push_back(value); return *this; }

    /**
     * <p>This API is in preview release for Amazon Connect and is subject to
     * change.</p> <p>A list of the third party application's metadata.</p>
     */
    inline ListSecurityProfileApplicationsResult& AddApplications(Application&& value) { m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. The next set of results can be
     * retrieved by using the token value returned in the previous response when making
     * the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. The next set of results can be
     * retrieved by using the token value returned in the previous response when making
     * the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. The next set of results can be
     * retrieved by using the token value returned in the previous response when making
     * the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. The next set of results can be
     * retrieved by using the token value returned in the previous response when making
     * the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. The next set of results can be
     * retrieved by using the token value returned in the previous response when making
     * the next request.</p>
     */
    inline ListSecurityProfileApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. The next set of results can be
     * retrieved by using the token value returned in the previous response when making
     * the next request.</p>
     */
    inline ListSecurityProfileApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. The next set of results can be
     * retrieved by using the token value returned in the previous response when making
     * the next request.</p>
     */
    inline ListSecurityProfileApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSecurityProfileApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSecurityProfileApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSecurityProfileApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Application> m_applications;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
