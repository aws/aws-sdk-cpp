﻿/**
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
   * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
   * log user accesses of files, folders, and file shares on the Amazon FSx for
   * Windows File Server file system. For more information, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/file-access-auditing.html">
   * File access auditing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/WindowsAuditLogConfiguration">AWS
   * API Reference</a></p>
   */
  class WindowsAuditLogConfiguration
  {
  public:
    AWS_FSX_API WindowsAuditLogConfiguration() = default;
    AWS_FSX_API WindowsAuditLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API WindowsAuditLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline WindowsAccessAuditLogLevel GetFileAccessAuditLogLevel() const { return m_fileAccessAuditLogLevel; }
    inline bool FileAccessAuditLogLevelHasBeenSet() const { return m_fileAccessAuditLogLevelHasBeenSet; }
    inline void SetFileAccessAuditLogLevel(WindowsAccessAuditLogLevel value) { m_fileAccessAuditLogLevelHasBeenSet = true; m_fileAccessAuditLogLevel = value; }
    inline WindowsAuditLogConfiguration& WithFileAccessAuditLogLevel(WindowsAccessAuditLogLevel value) { SetFileAccessAuditLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets which attempt type is logged by Amazon FSx for file share accesses.</p>
     * <ul> <li> <p> <code>SUCCESS_ONLY</code> - only successful attempts to access
     * file shares are logged.</p> </li> <li> <p> <code>FAILURE_ONLY</code> - only
     * failed attempts to access file shares are logged.</p> </li> <li> <p>
     * <code>SUCCESS_AND_FAILURE</code> - both successful attempts and failed attempts
     * to access file shares are logged.</p> </li> <li> <p> <code>DISABLED</code> -
     * access auditing of file shares is turned off.</p> </li> </ul>
     */
    inline WindowsAccessAuditLogLevel GetFileShareAccessAuditLogLevel() const { return m_fileShareAccessAuditLogLevel; }
    inline bool FileShareAccessAuditLogLevelHasBeenSet() const { return m_fileShareAccessAuditLogLevelHasBeenSet; }
    inline void SetFileShareAccessAuditLogLevel(WindowsAccessAuditLogLevel value) { m_fileShareAccessAuditLogLevelHasBeenSet = true; m_fileShareAccessAuditLogLevel = value; }
    inline WindowsAuditLogConfiguration& WithFileShareAccessAuditLogLevel(WindowsAccessAuditLogLevel value) { SetFileShareAccessAuditLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the destination of the audit logs. The
     * destination can be any Amazon CloudWatch Logs log group ARN or Amazon Kinesis
     * Data Firehose delivery stream ARN.</p> <p>The name of the Amazon CloudWatch Logs
     * log group must begin with the <code>/aws/fsx</code> prefix. The name of the
     * Amazon Kinesis Data Firehose delivery stream must begin with the
     * <code>aws-fsx</code> prefix.</p> <p>The destination ARN (either CloudWatch Logs
     * log group or Kinesis Data Firehose delivery stream) must be in the same Amazon
     * Web Services partition, Amazon Web Services Region, and Amazon Web Services
     * account as your Amazon FSx file system.</p>
     */
    inline const Aws::String& GetAuditLogDestination() const { return m_auditLogDestination; }
    inline bool AuditLogDestinationHasBeenSet() const { return m_auditLogDestinationHasBeenSet; }
    template<typename AuditLogDestinationT = Aws::String>
    void SetAuditLogDestination(AuditLogDestinationT&& value) { m_auditLogDestinationHasBeenSet = true; m_auditLogDestination = std::forward<AuditLogDestinationT>(value); }
    template<typename AuditLogDestinationT = Aws::String>
    WindowsAuditLogConfiguration& WithAuditLogDestination(AuditLogDestinationT&& value) { SetAuditLogDestination(std::forward<AuditLogDestinationT>(value)); return *this;}
    ///@}
  private:

    WindowsAccessAuditLogLevel m_fileAccessAuditLogLevel{WindowsAccessAuditLogLevel::NOT_SET};
    bool m_fileAccessAuditLogLevelHasBeenSet = false;

    WindowsAccessAuditLogLevel m_fileShareAccessAuditLogLevel{WindowsAccessAuditLogLevel::NOT_SET};
    bool m_fileShareAccessAuditLogLevelHasBeenSet = false;

    Aws::String m_auditLogDestination;
    bool m_auditLogDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
