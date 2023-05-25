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
  class CreateMonitorResult
  {
  public:
    AWS_INTERNETMONITOR_API CreateMonitorResult();
    AWS_INTERNETMONITOR_API CreateMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API CreateMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline CreateMonitorResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline CreateMonitorResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline CreateMonitorResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline CreateMonitorResult& WithStatus(const MonitorConfigState& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a monitor.</p>
     */
    inline CreateMonitorResult& WithStatus(MonitorConfigState&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMonitorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMonitorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMonitorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    MonitorConfigState m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
