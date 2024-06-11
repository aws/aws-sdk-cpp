﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ApplicationInfo.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListApplicationsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListApplicationsResult();
    AWS_APPLICATIONINSIGHTS_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of applications.</p>
     */
    inline const Aws::Vector<ApplicationInfo>& GetApplicationInfoList() const{ return m_applicationInfoList; }
    inline void SetApplicationInfoList(const Aws::Vector<ApplicationInfo>& value) { m_applicationInfoList = value; }
    inline void SetApplicationInfoList(Aws::Vector<ApplicationInfo>&& value) { m_applicationInfoList = std::move(value); }
    inline ListApplicationsResult& WithApplicationInfoList(const Aws::Vector<ApplicationInfo>& value) { SetApplicationInfoList(value); return *this;}
    inline ListApplicationsResult& WithApplicationInfoList(Aws::Vector<ApplicationInfo>&& value) { SetApplicationInfoList(std::move(value)); return *this;}
    inline ListApplicationsResult& AddApplicationInfoList(const ApplicationInfo& value) { m_applicationInfoList.push_back(value); return *this; }
    inline ListApplicationsResult& AddApplicationInfoList(ApplicationInfo&& value) { m_applicationInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationInfo> m_applicationInfoList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
