﻿/**
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
    AWS_APPLICATIONINSIGHTS_API DescribeApplicationResult() = default;
    AWS_APPLICATIONINSIGHTS_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the application.</p>
     */
    inline const ApplicationInfo& GetApplicationInfo() const { return m_applicationInfo; }
    template<typename ApplicationInfoT = ApplicationInfo>
    void SetApplicationInfo(ApplicationInfoT&& value) { m_applicationInfoHasBeenSet = true; m_applicationInfo = std::forward<ApplicationInfoT>(value); }
    template<typename ApplicationInfoT = ApplicationInfo>
    DescribeApplicationResult& WithApplicationInfo(ApplicationInfoT&& value) { SetApplicationInfo(std::forward<ApplicationInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationInfo m_applicationInfo;
    bool m_applicationInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
