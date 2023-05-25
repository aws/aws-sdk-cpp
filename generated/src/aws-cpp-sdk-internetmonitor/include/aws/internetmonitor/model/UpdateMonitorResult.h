/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/MonitorConfigState.h>
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
namespace InternetMonitor
{
namespace Model
{
  class UpdateMonitorResult
  {
  public:
    AWS_INTERNETMONITOR_API UpdateMonitorResult();
    AWS_INTERNETMONITOR_API UpdateMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API UpdateMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline UpdateMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline UpdateMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline UpdateMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}


    /**
     * <p>The status of a monitor.</p>
     */
    inline const MonitorConfigState& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a monitor.</p>
     */
    inline void SetStatus(const MonitorConfigState& value) { m_status = value; }

    /**
     * <p>The status of a monitor.</p>
     */
    inline void SetStatus(MonitorConfigState&& value) { m_status = std::move(value); }

    /**
     * <p>The status of a monitor.</p>
     */
    inline UpdateMonitorResult& WithStatus(const MonitorConfigState& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a monitor.</p>
     */
    inline UpdateMonitorResult& WithStatus(MonitorConfigState&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateMonitorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateMonitorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateMonitorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_monitorArn;

    MonitorConfigState m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
