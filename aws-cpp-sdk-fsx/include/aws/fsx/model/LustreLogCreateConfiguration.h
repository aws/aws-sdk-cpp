/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/LustreAccessAuditLogLevel.h>
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
   * <p>The Lustre logging configuration used when creating or updating an Amazon FSx
   * for Lustre file system. An Amazon File Cache is created with Lustre logging
   * enabled by default, with a setting of <code>WARN_ERROR</code> for the logging
   * events. which can't be changed.</p> <p>Lustre logging writes the enabled logging
   * events for your file system or cache to Amazon CloudWatch Logs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreLogCreateConfiguration">AWS
   * API Reference</a></p>
   */
  class LustreLogCreateConfiguration
  {
  public:
    AWS_FSX_API LustreLogCreateConfiguration();
    AWS_FSX_API LustreLogCreateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API LustreLogCreateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets which data repository events are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline const LustreAccessAuditLogLevel& GetLevel() const{ return m_level; }

    /**
     * <p>Sets which data repository events are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>Sets which data repository events are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline void SetLevel(const LustreAccessAuditLogLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>Sets which data repository events are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline void SetLevel(LustreAccessAuditLogLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>Sets which data repository events are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline LustreLogCreateConfiguration& WithLevel(const LustreAccessAuditLogLevel& value) { SetLevel(value); return *this;}

    /**
     * <p>Sets which data repository events are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline LustreLogCreateConfiguration& WithLevel(LustreAccessAuditLogLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN,
     * with the following requirements:</p> <ul> <li> <p>The destination ARN that you
     * provide must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     * </li> <li> <p>The name of the Amazon CloudWatch Logs log group must begin with
     * the <code>/aws/fsx</code> prefix.</p> </li> <li> <p>If you do not provide a
     * destination, Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/lustre</code> log group (for Amazon FSx for Lustre) or
     * <code>/aws/fsx/filecache</code> (for Amazon File Cache).</p> </li> <li> <p>If
     * <code>Destination</code> is provided and the resource does not exist, the
     * request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>Level</code> is set to <code>DISABLED</code>, you cannot specify a
     * destination in <code>Destination</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN,
     * with the following requirements:</p> <ul> <li> <p>The destination ARN that you
     * provide must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     * </li> <li> <p>The name of the Amazon CloudWatch Logs log group must begin with
     * the <code>/aws/fsx</code> prefix.</p> </li> <li> <p>If you do not provide a
     * destination, Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/lustre</code> log group (for Amazon FSx for Lustre) or
     * <code>/aws/fsx/filecache</code> (for Amazon File Cache).</p> </li> <li> <p>If
     * <code>Destination</code> is provided and the resource does not exist, the
     * request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>Level</code> is set to <code>DISABLED</code>, you cannot specify a
     * destination in <code>Destination</code>.</p> </li> </ul>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN,
     * with the following requirements:</p> <ul> <li> <p>The destination ARN that you
     * provide must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     * </li> <li> <p>The name of the Amazon CloudWatch Logs log group must begin with
     * the <code>/aws/fsx</code> prefix.</p> </li> <li> <p>If you do not provide a
     * destination, Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/lustre</code> log group (for Amazon FSx for Lustre) or
     * <code>/aws/fsx/filecache</code> (for Amazon File Cache).</p> </li> <li> <p>If
     * <code>Destination</code> is provided and the resource does not exist, the
     * request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>Level</code> is set to <code>DISABLED</code>, you cannot specify a
     * destination in <code>Destination</code>.</p> </li> </ul>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN,
     * with the following requirements:</p> <ul> <li> <p>The destination ARN that you
     * provide must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     * </li> <li> <p>The name of the Amazon CloudWatch Logs log group must begin with
     * the <code>/aws/fsx</code> prefix.</p> </li> <li> <p>If you do not provide a
     * destination, Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/lustre</code> log group (for Amazon FSx for Lustre) or
     * <code>/aws/fsx/filecache</code> (for Amazon File Cache).</p> </li> <li> <p>If
     * <code>Destination</code> is provided and the resource does not exist, the
     * request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>Level</code> is set to <code>DISABLED</code>, you cannot specify a
     * destination in <code>Destination</code>.</p> </li> </ul>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN,
     * with the following requirements:</p> <ul> <li> <p>The destination ARN that you
     * provide must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     * </li> <li> <p>The name of the Amazon CloudWatch Logs log group must begin with
     * the <code>/aws/fsx</code> prefix.</p> </li> <li> <p>If you do not provide a
     * destination, Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/lustre</code> log group (for Amazon FSx for Lustre) or
     * <code>/aws/fsx/filecache</code> (for Amazon File Cache).</p> </li> <li> <p>If
     * <code>Destination</code> is provided and the resource does not exist, the
     * request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>Level</code> is set to <code>DISABLED</code>, you cannot specify a
     * destination in <code>Destination</code>.</p> </li> </ul>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN,
     * with the following requirements:</p> <ul> <li> <p>The destination ARN that you
     * provide must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     * </li> <li> <p>The name of the Amazon CloudWatch Logs log group must begin with
     * the <code>/aws/fsx</code> prefix.</p> </li> <li> <p>If you do not provide a
     * destination, Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/lustre</code> log group (for Amazon FSx for Lustre) or
     * <code>/aws/fsx/filecache</code> (for Amazon File Cache).</p> </li> <li> <p>If
     * <code>Destination</code> is provided and the resource does not exist, the
     * request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>Level</code> is set to <code>DISABLED</code>, you cannot specify a
     * destination in <code>Destination</code>.</p> </li> </ul>
     */
    inline LustreLogCreateConfiguration& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN,
     * with the following requirements:</p> <ul> <li> <p>The destination ARN that you
     * provide must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     * </li> <li> <p>The name of the Amazon CloudWatch Logs log group must begin with
     * the <code>/aws/fsx</code> prefix.</p> </li> <li> <p>If you do not provide a
     * destination, Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/lustre</code> log group (for Amazon FSx for Lustre) or
     * <code>/aws/fsx/filecache</code> (for Amazon File Cache).</p> </li> <li> <p>If
     * <code>Destination</code> is provided and the resource does not exist, the
     * request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>Level</code> is set to <code>DISABLED</code>, you cannot specify a
     * destination in <code>Destination</code>.</p> </li> </ul>
     */
    inline LustreLogCreateConfiguration& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the
     * logs.</p> <p>The destination can be any Amazon CloudWatch Logs log group ARN,
     * with the following requirements:</p> <ul> <li> <p>The destination ARN that you
     * provide must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     * </li> <li> <p>The name of the Amazon CloudWatch Logs log group must begin with
     * the <code>/aws/fsx</code> prefix.</p> </li> <li> <p>If you do not provide a
     * destination, Amazon FSx will create and use a log stream in the CloudWatch Logs
     * <code>/aws/fsx/lustre</code> log group (for Amazon FSx for Lustre) or
     * <code>/aws/fsx/filecache</code> (for Amazon File Cache).</p> </li> <li> <p>If
     * <code>Destination</code> is provided and the resource does not exist, the
     * request will fail with a <code>BadRequest</code> error.</p> </li> <li> <p>If
     * <code>Level</code> is set to <code>DISABLED</code>, you cannot specify a
     * destination in <code>Destination</code>.</p> </li> </ul>
     */
    inline LustreLogCreateConfiguration& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    LustreAccessAuditLogLevel m_level;
    bool m_levelHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
