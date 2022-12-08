/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/AppMonitor.h>
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
namespace CloudWatchRUM
{
namespace Model
{
  class GetAppMonitorResult
  {
  public:
    AWS_CLOUDWATCHRUM_API GetAppMonitorResult();
    AWS_CLOUDWATCHRUM_API GetAppMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API GetAppMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing all the configuration information for the app
     * monitor.</p>
     */
    inline const AppMonitor& GetAppMonitor() const{ return m_appMonitor; }

    /**
     * <p>A structure containing all the configuration information for the app
     * monitor.</p>
     */
    inline void SetAppMonitor(const AppMonitor& value) { m_appMonitor = value; }

    /**
     * <p>A structure containing all the configuration information for the app
     * monitor.</p>
     */
    inline void SetAppMonitor(AppMonitor&& value) { m_appMonitor = std::move(value); }

    /**
     * <p>A structure containing all the configuration information for the app
     * monitor.</p>
     */
    inline GetAppMonitorResult& WithAppMonitor(const AppMonitor& value) { SetAppMonitor(value); return *this;}

    /**
     * <p>A structure containing all the configuration information for the app
     * monitor.</p>
     */
    inline GetAppMonitorResult& WithAppMonitor(AppMonitor&& value) { SetAppMonitor(std::move(value)); return *this;}

  private:

    AppMonitor m_appMonitor;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
