/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/LogLevel.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API GetV2LoggingOptionsResult
  {
  public:
    GetV2LoggingOptionsResult();
    GetV2LoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetV2LoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IAM role ARN AWS IoT uses to write to your CloudWatch logs.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN AWS IoT uses to write to your CloudWatch logs.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The IAM role ARN AWS IoT uses to write to your CloudWatch logs.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN AWS IoT uses to write to your CloudWatch logs.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN AWS IoT uses to write to your CloudWatch logs.</p>
     */
    inline GetV2LoggingOptionsResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN AWS IoT uses to write to your CloudWatch logs.</p>
     */
    inline GetV2LoggingOptionsResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN AWS IoT uses to write to your CloudWatch logs.</p>
     */
    inline GetV2LoggingOptionsResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The default log level.</p>
     */
    inline const LogLevel& GetDefaultLogLevel() const{ return m_defaultLogLevel; }

    /**
     * <p>The default log level.</p>
     */
    inline void SetDefaultLogLevel(const LogLevel& value) { m_defaultLogLevel = value; }

    /**
     * <p>The default log level.</p>
     */
    inline void SetDefaultLogLevel(LogLevel&& value) { m_defaultLogLevel = std::move(value); }

    /**
     * <p>The default log level.</p>
     */
    inline GetV2LoggingOptionsResult& WithDefaultLogLevel(const LogLevel& value) { SetDefaultLogLevel(value); return *this;}

    /**
     * <p>The default log level.</p>
     */
    inline GetV2LoggingOptionsResult& WithDefaultLogLevel(LogLevel&& value) { SetDefaultLogLevel(std::move(value)); return *this;}


    /**
     * <p>Disables all logs.</p>
     */
    inline bool GetDisableAllLogs() const{ return m_disableAllLogs; }

    /**
     * <p>Disables all logs.</p>
     */
    inline void SetDisableAllLogs(bool value) { m_disableAllLogs = value; }

    /**
     * <p>Disables all logs.</p>
     */
    inline GetV2LoggingOptionsResult& WithDisableAllLogs(bool value) { SetDisableAllLogs(value); return *this;}

  private:

    Aws::String m_roleArn;

    LogLevel m_defaultLogLevel;

    bool m_disableAllLogs;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
