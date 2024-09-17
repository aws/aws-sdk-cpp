/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/ApplicationInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeApplicationResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeApplicationResult();
    AWS_APPLICATIONINSIGHTS_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the application.</p>
     */
    inline const ApplicationInfo& GetApplicationInfo() const{ return m_applicationInfo; }
    inline void SetApplicationInfo(const ApplicationInfo& value) { m_applicationInfo = value; }
    inline void SetApplicationInfo(ApplicationInfo&& value) { m_applicationInfo = std::move(value); }
    inline DescribeApplicationResult& WithApplicationInfo(const ApplicationInfo& value) { SetApplicationInfo(value); return *this;}
    inline DescribeApplicationResult& WithApplicationInfo(ApplicationInfo&& value) { SetApplicationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApplicationInfo m_applicationInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
