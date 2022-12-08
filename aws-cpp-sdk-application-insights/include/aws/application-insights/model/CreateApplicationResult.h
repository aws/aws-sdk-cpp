/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
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
  class CreateApplicationResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API CreateApplicationResult();
    AWS_APPLICATIONINSIGHTS_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the application.</p>
     */
    inline const ApplicationInfo& GetApplicationInfo() const{ return m_applicationInfo; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetApplicationInfo(const ApplicationInfo& value) { m_applicationInfo = value; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetApplicationInfo(ApplicationInfo&& value) { m_applicationInfo = std::move(value); }

    /**
     * <p>Information about the application.</p>
     */
    inline CreateApplicationResult& WithApplicationInfo(const ApplicationInfo& value) { SetApplicationInfo(value); return *this;}

    /**
     * <p>Information about the application.</p>
     */
    inline CreateApplicationResult& WithApplicationInfo(ApplicationInfo&& value) { SetApplicationInfo(std::move(value)); return *this;}

  private:

    ApplicationInfo m_applicationInfo;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
