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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/CloudWatchLogsTimeZone.h>
#include <aws/opsworks/model/CloudWatchLogsInitialPosition.h>
#include <aws/opsworks/model/CloudWatchLogsEncoding.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes the Amazon CloudWatch logs configuration for a layer. For detailed
   * information about members of this data type, see the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
   * Logs Agent Reference</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloudWatchLogsLogStream">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API CloudWatchLogsLogStream
  {
  public:
    CloudWatchLogsLogStream();
    CloudWatchLogsLogStream(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchLogsLogStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline CloudWatchLogsLogStream& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline CloudWatchLogsLogStream& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the destination log group. A log group is created automatically if
     * it doesn't already exist. Log group names can be between 1 and 512 characters
     * long. Allowed characters include a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen),
     * '/' (forward slash), and '.' (period).</p>
     */
    inline CloudWatchLogsLogStream& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline const Aws::String& GetDatetimeFormat() const{ return m_datetimeFormat; }

    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline bool DatetimeFormatHasBeenSet() const { return m_datetimeFormatHasBeenSet; }

    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline void SetDatetimeFormat(const Aws::String& value) { m_datetimeFormatHasBeenSet = true; m_datetimeFormat = value; }

    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline void SetDatetimeFormat(Aws::String&& value) { m_datetimeFormatHasBeenSet = true; m_datetimeFormat = std::move(value); }

    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline void SetDatetimeFormat(const char* value) { m_datetimeFormatHasBeenSet = true; m_datetimeFormat.assign(value); }

    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline CloudWatchLogsLogStream& WithDatetimeFormat(const Aws::String& value) { SetDatetimeFormat(value); return *this;}

    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline CloudWatchLogsLogStream& WithDatetimeFormat(Aws::String&& value) { SetDatetimeFormat(std::move(value)); return *this;}

    /**
     * <p>Specifies how the time stamp is extracted from logs. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AgentReference.html">CloudWatch
     * Logs Agent Reference</a>.</p>
     */
    inline CloudWatchLogsLogStream& WithDatetimeFormat(const char* value) { SetDatetimeFormat(value); return *this;}


    /**
     * <p>Specifies the time zone of log event time stamps.</p>
     */
    inline const CloudWatchLogsTimeZone& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p>Specifies the time zone of log event time stamps.</p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p>Specifies the time zone of log event time stamps.</p>
     */
    inline void SetTimeZone(const CloudWatchLogsTimeZone& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p>Specifies the time zone of log event time stamps.</p>
     */
    inline void SetTimeZone(CloudWatchLogsTimeZone&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p>Specifies the time zone of log event time stamps.</p>
     */
    inline CloudWatchLogsLogStream& WithTimeZone(const CloudWatchLogsTimeZone& value) { SetTimeZone(value); return *this;}

    /**
     * <p>Specifies the time zone of log event time stamps.</p>
     */
    inline CloudWatchLogsLogStream& WithTimeZone(CloudWatchLogsTimeZone&& value) { SetTimeZone(std::move(value)); return *this;}


    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline const Aws::String& GetFile() const{ return m_file; }

    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline void SetFile(const Aws::String& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline void SetFile(Aws::String&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline void SetFile(const char* value) { m_fileHasBeenSet = true; m_file.assign(value); }

    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline CloudWatchLogsLogStream& WithFile(const Aws::String& value) { SetFile(value); return *this;}

    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline CloudWatchLogsLogStream& WithFile(Aws::String&& value) { SetFile(std::move(value)); return *this;}

    /**
     * <p>Specifies log files that you want to push to CloudWatch Logs.</p> <p>
     * <code>File</code> can point to a specific file or multiple files (by using wild
     * card characters such as <code>/var/log/system.log*</code>). Only the latest file
     * is pushed to CloudWatch Logs, based on file modification time. We recommend that
     * you use wild card characters to specify a series of files of the same type, such
     * as <code>access_log.2014-06-01-01</code>, <code>access_log.2014-06-01-02</code>,
     * and so on by using a pattern like <code>access_log.*</code>. Don't use a
     * wildcard to match multiple file types, such as <code>access_log_80</code> and
     * <code>access_log_443</code>. To specify multiple, different file types, add
     * another log stream entry to the configuration file, so that each log file type
     * is stored in a different log group.</p> <p>Zipped files are not supported.</p>
     */
    inline CloudWatchLogsLogStream& WithFile(const char* value) { SetFile(value); return *this;}


    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline const Aws::String& GetFileFingerprintLines() const{ return m_fileFingerprintLines; }

    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline bool FileFingerprintLinesHasBeenSet() const { return m_fileFingerprintLinesHasBeenSet; }

    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline void SetFileFingerprintLines(const Aws::String& value) { m_fileFingerprintLinesHasBeenSet = true; m_fileFingerprintLines = value; }

    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline void SetFileFingerprintLines(Aws::String&& value) { m_fileFingerprintLinesHasBeenSet = true; m_fileFingerprintLines = std::move(value); }

    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline void SetFileFingerprintLines(const char* value) { m_fileFingerprintLinesHasBeenSet = true; m_fileFingerprintLines.assign(value); }

    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline CloudWatchLogsLogStream& WithFileFingerprintLines(const Aws::String& value) { SetFileFingerprintLines(value); return *this;}

    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline CloudWatchLogsLogStream& WithFileFingerprintLines(Aws::String&& value) { SetFileFingerprintLines(std::move(value)); return *this;}

    /**
     * <p>Specifies the range of lines for identifying a file. The valid values are one
     * number, or two dash-delimited numbers, such as '1', '2-5'. The default value is
     * '1', meaning the first line is used to calculate the fingerprint. Fingerprint
     * lines are not sent to CloudWatch Logs unless all specified lines are
     * available.</p>
     */
    inline CloudWatchLogsLogStream& WithFileFingerprintLines(const char* value) { SetFileFingerprintLines(value); return *this;}


    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline const Aws::String& GetMultiLineStartPattern() const{ return m_multiLineStartPattern; }

    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline bool MultiLineStartPatternHasBeenSet() const { return m_multiLineStartPatternHasBeenSet; }

    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline void SetMultiLineStartPattern(const Aws::String& value) { m_multiLineStartPatternHasBeenSet = true; m_multiLineStartPattern = value; }

    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline void SetMultiLineStartPattern(Aws::String&& value) { m_multiLineStartPatternHasBeenSet = true; m_multiLineStartPattern = std::move(value); }

    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline void SetMultiLineStartPattern(const char* value) { m_multiLineStartPatternHasBeenSet = true; m_multiLineStartPattern.assign(value); }

    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline CloudWatchLogsLogStream& WithMultiLineStartPattern(const Aws::String& value) { SetMultiLineStartPattern(value); return *this;}

    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline CloudWatchLogsLogStream& WithMultiLineStartPattern(Aws::String&& value) { SetMultiLineStartPattern(std::move(value)); return *this;}

    /**
     * <p>Specifies the pattern for identifying the start of a log message.</p>
     */
    inline CloudWatchLogsLogStream& WithMultiLineStartPattern(const char* value) { SetMultiLineStartPattern(value); return *this;}


    /**
     * <p>Specifies where to start to read data (start_of_file or end_of_file). The
     * default is start_of_file. This setting is only used if there is no state
     * persisted for that log stream.</p>
     */
    inline const CloudWatchLogsInitialPosition& GetInitialPosition() const{ return m_initialPosition; }

    /**
     * <p>Specifies where to start to read data (start_of_file or end_of_file). The
     * default is start_of_file. This setting is only used if there is no state
     * persisted for that log stream.</p>
     */
    inline bool InitialPositionHasBeenSet() const { return m_initialPositionHasBeenSet; }

    /**
     * <p>Specifies where to start to read data (start_of_file or end_of_file). The
     * default is start_of_file. This setting is only used if there is no state
     * persisted for that log stream.</p>
     */
    inline void SetInitialPosition(const CloudWatchLogsInitialPosition& value) { m_initialPositionHasBeenSet = true; m_initialPosition = value; }

    /**
     * <p>Specifies where to start to read data (start_of_file or end_of_file). The
     * default is start_of_file. This setting is only used if there is no state
     * persisted for that log stream.</p>
     */
    inline void SetInitialPosition(CloudWatchLogsInitialPosition&& value) { m_initialPositionHasBeenSet = true; m_initialPosition = std::move(value); }

    /**
     * <p>Specifies where to start to read data (start_of_file or end_of_file). The
     * default is start_of_file. This setting is only used if there is no state
     * persisted for that log stream.</p>
     */
    inline CloudWatchLogsLogStream& WithInitialPosition(const CloudWatchLogsInitialPosition& value) { SetInitialPosition(value); return *this;}

    /**
     * <p>Specifies where to start to read data (start_of_file or end_of_file). The
     * default is start_of_file. This setting is only used if there is no state
     * persisted for that log stream.</p>
     */
    inline CloudWatchLogsLogStream& WithInitialPosition(CloudWatchLogsInitialPosition&& value) { SetInitialPosition(std::move(value)); return *this;}


    /**
     * <p>Specifies the encoding of the log file so that the file can be read
     * correctly. The default is <code>utf_8</code>. Encodings supported by Python
     * <code>codecs.decode()</code> can be used here.</p>
     */
    inline const CloudWatchLogsEncoding& GetEncoding() const{ return m_encoding; }

    /**
     * <p>Specifies the encoding of the log file so that the file can be read
     * correctly. The default is <code>utf_8</code>. Encodings supported by Python
     * <code>codecs.decode()</code> can be used here.</p>
     */
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }

    /**
     * <p>Specifies the encoding of the log file so that the file can be read
     * correctly. The default is <code>utf_8</code>. Encodings supported by Python
     * <code>codecs.decode()</code> can be used here.</p>
     */
    inline void SetEncoding(const CloudWatchLogsEncoding& value) { m_encodingHasBeenSet = true; m_encoding = value; }

    /**
     * <p>Specifies the encoding of the log file so that the file can be read
     * correctly. The default is <code>utf_8</code>. Encodings supported by Python
     * <code>codecs.decode()</code> can be used here.</p>
     */
    inline void SetEncoding(CloudWatchLogsEncoding&& value) { m_encodingHasBeenSet = true; m_encoding = std::move(value); }

    /**
     * <p>Specifies the encoding of the log file so that the file can be read
     * correctly. The default is <code>utf_8</code>. Encodings supported by Python
     * <code>codecs.decode()</code> can be used here.</p>
     */
    inline CloudWatchLogsLogStream& WithEncoding(const CloudWatchLogsEncoding& value) { SetEncoding(value); return *this;}

    /**
     * <p>Specifies the encoding of the log file so that the file can be read
     * correctly. The default is <code>utf_8</code>. Encodings supported by Python
     * <code>codecs.decode()</code> can be used here.</p>
     */
    inline CloudWatchLogsLogStream& WithEncoding(CloudWatchLogsEncoding&& value) { SetEncoding(std::move(value)); return *this;}


    /**
     * <p>Specifies the time duration for the batching of log events. The minimum value
     * is 5000ms and default value is 5000ms.</p>
     */
    inline int GetBufferDuration() const{ return m_bufferDuration; }

    /**
     * <p>Specifies the time duration for the batching of log events. The minimum value
     * is 5000ms and default value is 5000ms.</p>
     */
    inline bool BufferDurationHasBeenSet() const { return m_bufferDurationHasBeenSet; }

    /**
     * <p>Specifies the time duration for the batching of log events. The minimum value
     * is 5000ms and default value is 5000ms.</p>
     */
    inline void SetBufferDuration(int value) { m_bufferDurationHasBeenSet = true; m_bufferDuration = value; }

    /**
     * <p>Specifies the time duration for the batching of log events. The minimum value
     * is 5000ms and default value is 5000ms.</p>
     */
    inline CloudWatchLogsLogStream& WithBufferDuration(int value) { SetBufferDuration(value); return *this;}


    /**
     * <p>Specifies the max number of log events in a batch, up to 10000. The default
     * value is 1000.</p>
     */
    inline int GetBatchCount() const{ return m_batchCount; }

    /**
     * <p>Specifies the max number of log events in a batch, up to 10000. The default
     * value is 1000.</p>
     */
    inline bool BatchCountHasBeenSet() const { return m_batchCountHasBeenSet; }

    /**
     * <p>Specifies the max number of log events in a batch, up to 10000. The default
     * value is 1000.</p>
     */
    inline void SetBatchCount(int value) { m_batchCountHasBeenSet = true; m_batchCount = value; }

    /**
     * <p>Specifies the max number of log events in a batch, up to 10000. The default
     * value is 1000.</p>
     */
    inline CloudWatchLogsLogStream& WithBatchCount(int value) { SetBatchCount(value); return *this;}


    /**
     * <p>Specifies the maximum size of log events in a batch, in bytes, up to 1048576
     * bytes. The default value is 32768 bytes. This size is calculated as the sum of
     * all event messages in UTF-8, plus 26 bytes for each log event.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>Specifies the maximum size of log events in a batch, in bytes, up to 1048576
     * bytes. The default value is 32768 bytes. This size is calculated as the sum of
     * all event messages in UTF-8, plus 26 bytes for each log event.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>Specifies the maximum size of log events in a batch, in bytes, up to 1048576
     * bytes. The default value is 32768 bytes. This size is calculated as the sum of
     * all event messages in UTF-8, plus 26 bytes for each log event.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>Specifies the maximum size of log events in a batch, in bytes, up to 1048576
     * bytes. The default value is 32768 bytes. This size is calculated as the sum of
     * all event messages in UTF-8, plus 26 bytes for each log event.</p>
     */
    inline CloudWatchLogsLogStream& WithBatchSize(int value) { SetBatchSize(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::String m_datetimeFormat;
    bool m_datetimeFormatHasBeenSet;

    CloudWatchLogsTimeZone m_timeZone;
    bool m_timeZoneHasBeenSet;

    Aws::String m_file;
    bool m_fileHasBeenSet;

    Aws::String m_fileFingerprintLines;
    bool m_fileFingerprintLinesHasBeenSet;

    Aws::String m_multiLineStartPattern;
    bool m_multiLineStartPatternHasBeenSet;

    CloudWatchLogsInitialPosition m_initialPosition;
    bool m_initialPositionHasBeenSet;

    CloudWatchLogsEncoding m_encoding;
    bool m_encodingHasBeenSet;

    int m_bufferDuration;
    bool m_bufferDurationHasBeenSet;

    int m_batchCount;
    bool m_batchCountHasBeenSet;

    int m_batchSize;
    bool m_batchSizeHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
