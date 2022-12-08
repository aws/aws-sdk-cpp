/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/WindowsAccessAuditLogLevel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The Windows file access auditing configuration used when creating or updating
   * an Amazon FSx for Windows File Server file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/WindowsAuditLogCreateConfiguration">AWS
   * API Reference</a></p>
   */
  class WindowsAuditLogCreateConfiguration
  {
  public:
    AWS_FSX_API WindowsAuditLogCreateConfiguration();
    AWS_FSX_API WindowsAuditLogCreateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API WindowsAuditLogCreateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file and folder
     * accesses.</p> <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts
     * to access files or folders are logged.</p> </li> <li> <p>
     * <code>FAILURE_ONLY</code> - only failed attempts to access files or folders are
     * logged.</p> </li> <li> <p> <code>SUCCESS_AND_FAILURE</code> - both successful
     * attempts and failed attempts to access files or folders are logged.</p> </li>
     * <li> <p> <code>DISABLED</code> - access auditing of files and folders is turned
     * off.</p> </li> </ul>
     */
    inline const WindowsAccessAuditLogLevel& GetFileAccessAuditLogLevel() const{ return m_fileAccessAuditLogLevel; }

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file and folder
     * accesses.</p> <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts
     * to access files or folders are logged.</p> </li> <li> <p>
     * <code>FAILURE_ONLY</code> - only failed attempts to access files or folders are
     * logged.</p> </li> <li> <p> <code>SUCCESS_AND_FAILURE</code> - both successful
     * attempts and failed attempts to access files or folders are logged.</p> </li>
     * <li> <p> <code>DISABLED</code> - access auditing of files and folders is turned
     * off.</p> </li> </ul>
     */
    inline bool FileAccessAuditLogLevelHasBeenSet() const { return m_fileAccessAuditLogLevelHasBeenSet; }

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file and folder
     * accesses.</p> <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts
     * to access files or folders are logged.</p> </li> <li> <p>
     * <code>FAILURE_ONLY</code> - only failed attempts to access files or folders are
     * logged.</p> </li> <li> <p> <code>SUCCESS_AND_FAILURE</code> - both successful
     * attempts and failed attempts to access files or folders are logged.</p> </li>
     * <li> <p> <code>DISABLED</code> - access auditing of files and folders is turned
     * off.</p> </li> </ul>
     */
    inline void SetFileAccessAuditLogLevel(const WindowsAccessAuditLogLevel& value) { m_fileAccessAuditLogLevelHasBeenSet = true; m_fileAccessAuditLogLevel = value; }

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file and folder
     * accesses.</p> <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts
     * to access files or folders are logged.</p> </li> <li> <p>
     * <code>FAILURE_ONLY</code> - only failed attempts to access files or folders are
     * logged.</p> </li> <li> <p> <code>SUCCESS_AND_FAILURE</code> - both successful
     * attempts and failed attempts to access files or folders are logged.</p> </li>
     * <li> <p> <code>DISABLED</code> - access auditing of files and folders is turned
     * off.</p> </li> </ul>
     */
    inline void SetFileAccessAuditLogLevel(WindowsAccessAuditLogLevel&& value) { m_fileAccessAuditLogLevelHasBeenSet = true; m_fileAccessAuditLogLevel = std::move(value); }

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file and folder
     * accesses.</p> <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts
     * to access files or folders are logged.</p> </li> <li> <p>
     * <code>FAILURE_ONLY</code> - only failed attempts to access files or folders are
     * logged.</p> </li> <li> <p> <code>SUCCESS_AND_FAILURE</code> - both successful
     * attempts and failed attempts to access files or folders are logged.</p> </li>
     * <li> <p> <code>DISABLED</code> - access auditing of files and folders is turned
     * off.</p> </li> </ul>
     */
    inline WindowsAuditLogCreateConfiguration& WithFileAccessAuditLogLevel(const WindowsAccessAuditLogLevel& value) { SetFileAccessAuditLogLevel(value); return *this;}

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file and folder
     * accesses.</p> <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts
     * to access files or folders are logged.</p> </li> <li> <p>
     * <code>FAILURE_ONLY</code> - only failed attempts to access files or folders are
     * logged.</p> </li> <li> <p> <code>SUCCESS_AND_FAILURE</code> - both successful
     * attempts and failed attempts to access files or folders are logged.</p> </li>
     * <li> <p> <code>DISABLED</code> - access auditing of files and folders is turned
     * off.</p> </li> </ul>
     */
    inline WindowsAuditLogCreateConfiguration& WithFileAccessAuditLogLevel(WindowsAccessAuditLogLevel&& value) { SetFileAccessAuditLogLevel(std::move(value)); return *this;}


    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file share accesses.</p>
     * <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts to access
     * file shares are logged.</p> </li> <li> <p> <code>FAILURE_ONLY</code> - only
     * failed attempts to access file shares are logged.</p> </li> <li> <p>
     * <code>SUCCESS_AND_FAILURE</code> - both successful attempts and failed attempts
     * to access file shares are logged.</p> </li> <li> <p> <code>DISABLED</code> -
     * access auditing of file shares is turned off.</p> </li> </ul>
     */
    inline const WindowsAccessAuditLogLevel& GetFileShareAccessAuditLogLevel() const{ return m_fileShareAccessAuditLogLevel; }

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file share accesses.</p>
     * <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts to access
     * file shares are logged.</p> </li> <li> <p> <code>FAILURE_ONLY</code> - only
     * failed attempts to access file shares are logged.</p> </li> <li> <p>
     * <code>SUCCESS_AND_FAILURE</code> - both successful attempts and failed attempts
     * to access file shares are logged.</p> </li> <li> <p> <code>DISABLED</code> -
     * access auditing of file shares is turned off.</p> </li> </ul>
     */
    inline bool FileShareAccessAuditLogLevelHasBeenSet() const { return m_fileShareAccessAuditLogLevelHasBeenSet; }

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file share accesses.</p>
     * <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts to access
     * file shares are logged.</p> </li> <li> <p> <code>FAILURE_ONLY</code> - only
     * failed attempts to access file shares are logged.</p> </li> <li> <p>
     * <code>SUCCESS_AND_FAILURE</code> - both successful attempts and failed attempts
     * to access file shares are logged.</p> </li> <li> <p> <code>DISABLED</code> -
     * access auditing of file shares is turned off.</p> </li> </ul>
     */
    inline void SetFileShareAccessAuditLogLevel(const WindowsAccessAuditLogLevel& value) { m_fileShareAccessAuditLogLevelHasBeenSet = true; m_fileShareAccessAuditLogLevel = value; }

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file share accesses.</p>
     * <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts to access
     * file shares are logged.</p> </li> <li> <p> <code>FAILURE_ONLY</code> - only
     * failed attempts to access file shares are logged.</p> </li> <li> <p>
     * <code>SUCCESS_AND_FAILURE</code> - both successful attempts and failed attempts
     * to access file shares are logged.</p> </li> <li> <p> <code>DISABLED</code> -
     * access auditing of file shares is turned off.</p> </li> </ul>
     */
    inline void SetFileShareAccessAuditLogLevel(WindowsAccessAuditLogLevel&& value) { m_fileShareAccessAuditLogLevelHasBeenSet = true; m_fileShareAccessAuditLogLevel = std::move(value); }

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file share accesses.</p>
     * <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts to access
     * file shares are logged.</p> </li> <li> <p> <code>FAILURE_ONLY</code> - only
     * failed attempts to access file shares are logged.</p> </li> <li> <p>
     * <code>SUCCESS_AND_FAILURE</code> - both successful attempts and failed attempts
     * to access file shares are logged.</p> </li> <li> <p> <code>DISABLED</code> -
     * access auditing of file shares is turned off.</p> </li> </ul>
     */
    inline WindowsAuditLogCreateConfiguration& WithFileShareAccessAuditLogLevel(const WindowsAccessAuditLogLevel& value) { SetFileShareAccessAuditLogLevel(value); return *this;}

    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file share accesses.</p>
     * <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts to access
     * file shares are logged.</p> </li> <li> <p> <code>FAILURE_ONLY</code> - only
     * failed attempts to access file shares are logged.</p> </li> <li> <p>
     * <code>SUCCESS_AND_FAILURE</code> - both successful attempts and failed attempts
     * to access file shares are logged.</p> </li> <li> <p> <code>DISABLED</code> -
     * access auditing of file shares is turned off.</p> </li> </ul>
     */
    inline WindowsAuditLogCreateConfiguration& WithFileShareAccessAuditLogLevel(WindowsAccessAuditLogLevel&& value) { SetFileShareAccessAuditLogLevel(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the audit
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN or
     * Amazon Kinesis Data Firehose delivery stream ARN, with the following
     * requirements:</p> <ul> <li> <p>The destination ARN that you provide (either
     * CloudWatch Logs log group or Kinesis Data Firehose delivery stream) must be in
     * the same Amazon Web Services partition, Amazon Web Services Region, and Amazon
     * Web Services account as your Amazon FSx file system.</p> </li> <li> <p>The name
     * of the Amazon CloudWatch Logs log group must begin with the
     * <code>/aws/fsx</code> prefix. The name of the Amazon Kinesis Data Firehouse
     * delivery stream must begin with the <code>aws-fsx</code> prefix.</p> </li> <li>
     * <p>If you do not provide a destination in <code>AuditLogDestination</code>,
     * Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/windows</code> log group.</p> </li> <li> <p>If
     * <code>AuditLogDestination</code> is provided and the resource does not exist,
     * the request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>FileAccessAuditLogLevel</code> and
     * <code>FileShareAccessAuditLogLevel</code> are both set to <code>DISABLED</code>,
     * you cannot specify a destination in <code>AuditLogDestination</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetAuditLogDestination() const{ return m_auditLogDestination; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the audit
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN or
     * Amazon Kinesis Data Firehose delivery stream ARN, with the following
     * requirements:</p> <ul> <li> <p>The destination ARN that you provide (either
     * CloudWatch Logs log group or Kinesis Data Firehose delivery stream) must be in
     * the same Amazon Web Services partition, Amazon Web Services Region, and Amazon
     * Web Services account as your Amazon FSx file system.</p> </li> <li> <p>The name
     * of the Amazon CloudWatch Logs log group must begin with the
     * <code>/aws/fsx</code> prefix. The name of the Amazon Kinesis Data Firehouse
     * delivery stream must begin with the <code>aws-fsx</code> prefix.</p> </li> <li>
     * <p>If you do not provide a destination in <code>AuditLogDestination</code>,
     * Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/windows</code> log group.</p> </li> <li> <p>If
     * <code>AuditLogDestination</code> is provided and the resource does not exist,
     * the request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>FileAccessAuditLogLevel</code> and
     * <code>FileShareAccessAuditLogLevel</code> are both set to <code>DISABLED</code>,
     * you cannot specify a destination in <code>AuditLogDestination</code>.</p> </li>
     * </ul>
     */
    inline bool AuditLogDestinationHasBeenSet() const { return m_auditLogDestinationHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the audit
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN or
     * Amazon Kinesis Data Firehose delivery stream ARN, with the following
     * requirements:</p> <ul> <li> <p>The destination ARN that you provide (either
     * CloudWatch Logs log group or Kinesis Data Firehose delivery stream) must be in
     * the same Amazon Web Services partition, Amazon Web Services Region, and Amazon
     * Web Services account as your Amazon FSx file system.</p> </li> <li> <p>The name
     * of the Amazon CloudWatch Logs log group must begin with the
     * <code>/aws/fsx</code> prefix. The name of the Amazon Kinesis Data Firehouse
     * delivery stream must begin with the <code>aws-fsx</code> prefix.</p> </li> <li>
     * <p>If you do not provide a destination in <code>AuditLogDestination</code>,
     * Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/windows</code> log group.</p> </li> <li> <p>If
     * <code>AuditLogDestination</code> is provided and the resource does not exist,
     * the request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>FileAccessAuditLogLevel</code> and
     * <code>FileShareAccessAuditLogLevel</code> are both set to <code>DISABLED</code>,
     * you cannot specify a destination in <code>AuditLogDestination</code>.</p> </li>
     * </ul>
     */
    inline void SetAuditLogDestination(const Aws::String& value) { m_auditLogDestinationHasBeenSet = true; m_auditLogDestination = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the audit
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN or
     * Amazon Kinesis Data Firehose delivery stream ARN, with the following
     * requirements:</p> <ul> <li> <p>The destination ARN that you provide (either
     * CloudWatch Logs log group or Kinesis Data Firehose delivery stream) must be in
     * the same Amazon Web Services partition, Amazon Web Services Region, and Amazon
     * Web Services account as your Amazon FSx file system.</p> </li> <li> <p>The name
     * of the Amazon CloudWatch Logs log group must begin with the
     * <code>/aws/fsx</code> prefix. The name of the Amazon Kinesis Data Firehouse
     * delivery stream must begin with the <code>aws-fsx</code> prefix.</p> </li> <li>
     * <p>If you do not provide a destination in <code>AuditLogDestination</code>,
     * Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/windows</code> log group.</p> </li> <li> <p>If
     * <code>AuditLogDestination</code> is provided and the resource does not exist,
     * the request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>FileAccessAuditLogLevel</code> and
     * <code>FileShareAccessAuditLogLevel</code> are both set to <code>DISABLED</code>,
     * you cannot specify a destination in <code>AuditLogDestination</code>.</p> </li>
     * </ul>
     */
    inline void SetAuditLogDestination(Aws::String&& value) { m_auditLogDestinationHasBeenSet = true; m_auditLogDestination = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the audit
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN or
     * Amazon Kinesis Data Firehose delivery stream ARN, with the following
     * requirements:</p> <ul> <li> <p>The destination ARN that you provide (either
     * CloudWatch Logs log group or Kinesis Data Firehose delivery stream) must be in
     * the same Amazon Web Services partition, Amazon Web Services Region, and Amazon
     * Web Services account as your Amazon FSx file system.</p> </li> <li> <p>The name
     * of the Amazon CloudWatch Logs log group must begin with the
     * <code>/aws/fsx</code> prefix. The name of the Amazon Kinesis Data Firehouse
     * delivery stream must begin with the <code>aws-fsx</code> prefix.</p> </li> <li>
     * <p>If you do not provide a destination in <code>AuditLogDestination</code>,
     * Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/windows</code> log group.</p> </li> <li> <p>If
     * <code>AuditLogDestination</code> is provided and the resource does not exist,
     * the request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>FileAccessAuditLogLevel</code> and
     * <code>FileShareAccessAuditLogLevel</code> are both set to <code>DISABLED</code>,
     * you cannot specify a destination in <code>AuditLogDestination</code>.</p> </li>
     * </ul>
     */
    inline void SetAuditLogDestination(const char* value) { m_auditLogDestinationHasBeenSet = true; m_auditLogDestination.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the audit
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN or
     * Amazon Kinesis Data Firehose delivery stream ARN, with the following
     * requirements:</p> <ul> <li> <p>The destination ARN that you provide (either
     * CloudWatch Logs log group or Kinesis Data Firehose delivery stream) must be in
     * the same Amazon Web Services partition, Amazon Web Services Region, and Amazon
     * Web Services account as your Amazon FSx file system.</p> </li> <li> <p>The name
     * of the Amazon CloudWatch Logs log group must begin with the
     * <code>/aws/fsx</code> prefix. The name of the Amazon Kinesis Data Firehouse
     * delivery stream must begin with the <code>aws-fsx</code> prefix.</p> </li> <li>
     * <p>If you do not provide a destination in <code>AuditLogDestination</code>,
     * Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/windows</code> log group.</p> </li> <li> <p>If
     * <code>AuditLogDestination</code> is provided and the resource does not exist,
     * the request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>FileAccessAuditLogLevel</code> and
     * <code>FileShareAccessAuditLogLevel</code> are both set to <code>DISABLED</code>,
     * you cannot specify a destination in <code>AuditLogDestination</code>.</p> </li>
     * </ul>
     */
    inline WindowsAuditLogCreateConfiguration& WithAuditLogDestination(const Aws::String& value) { SetAuditLogDestination(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the audit
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN or
     * Amazon Kinesis Data Firehose delivery stream ARN, with the following
     * requirements:</p> <ul> <li> <p>The destination ARN that you provide (either
     * CloudWatch Logs log group or Kinesis Data Firehose delivery stream) must be in
     * the same Amazon Web Services partition, Amazon Web Services Region, and Amazon
     * Web Services account as your Amazon FSx file system.</p> </li> <li> <p>The name
     * of the Amazon CloudWatch Logs log group must begin with the
     * <code>/aws/fsx</code> prefix. The name of the Amazon Kinesis Data Firehouse
     * delivery stream must begin with the <code>aws-fsx</code> prefix.</p> </li> <li>
     * <p>If you do not provide a destination in <code>AuditLogDestination</code>,
     * Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/windows</code> log group.</p> </li> <li> <p>If
     * <code>AuditLogDestination</code> is provided and the resource does not exist,
     * the request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>FileAccessAuditLogLevel</code> and
     * <code>FileShareAccessAuditLogLevel</code> are both set to <code>DISABLED</code>,
     * you cannot specify a destination in <code>AuditLogDestination</code>.</p> </li>
     * </ul>
     */
    inline WindowsAuditLogCreateConfiguration& WithAuditLogDestination(Aws::String&& value) { SetAuditLogDestination(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the audit
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN or
     * Amazon Kinesis Data Firehose delivery stream ARN, with the following
     * requirements:</p> <ul> <li> <p>The destination ARN that you provide (either
     * CloudWatch Logs log group or Kinesis Data Firehose delivery stream) must be in
     * the same Amazon Web Services partition, Amazon Web Services Region, and Amazon
     * Web Services account as your Amazon FSx file system.</p> </li> <li> <p>The name
     * of the Amazon CloudWatch Logs log group must begin with the
     * <code>/aws/fsx</code> prefix. The name of the Amazon Kinesis Data Firehouse
     * delivery stream must begin with the <code>aws-fsx</code> prefix.</p> </li> <li>
     * <p>If you do not provide a destination in <code>AuditLogDestination</code>,
     * Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/windows</code> log group.</p> </li> <li> <p>If
     * <code>AuditLogDestination</code> is provided and the resource does not exist,
     * the request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>FileAccessAuditLogLevel</code> and
     * <code>FileShareAccessAuditLogLevel</code> are both set to <code>DISABLED</code>,
     * you cannot specify a destination in <code>AuditLogDestination</code>.</p> </li>
     * </ul>
     */
    inline WindowsAuditLogCreateConfiguration& WithAuditLogDestination(const char* value) { SetAuditLogDestination(value); return *this;}

  private:

    WindowsAccessAuditLogLevel m_fileAccessAuditLogLevel;
    bool m_fileAccessAuditLogLevelHasBeenSet = false;

    WindowsAccessAuditLogLevel m_fileShareAccessAuditLogLevel;
    bool m_fileShareAccessAuditLogLevelHasBeenSet = false;

    Aws::String m_auditLogDestination;
    bool m_auditLogDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
