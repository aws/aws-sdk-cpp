/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{
  class CreateMonitorResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateMonitorResult();
    AWS_FORECASTSERVICE_API CreateMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline CreateMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline CreateMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline CreateMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}

  private:

    Aws::String m_monitorArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
