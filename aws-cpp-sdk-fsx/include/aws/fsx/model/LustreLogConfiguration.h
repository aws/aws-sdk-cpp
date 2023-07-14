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
   * <p>The configuration for Lustre logging used to write the enabled logging events
   * for your file system to Amazon CloudWatch Logs.</p> <p>When logging is enabled,
   * Lustre logs error and warning events from data repository operations such as
   * automatic export and data repository tasks. To learn more about Lustre logging,
   * see <a
   * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/cw-event-logging.html">Logging
   * with Amazon CloudWatch Logs</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreLogConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API LustreLogConfiguration
  {
  public:
    LustreLogConfiguration();
    LustreLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LustreLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data repository events that are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline const LustreAccessAuditLogLevel& GetLevel() const{ return m_level; }

    /**
     * <p>The data repository events that are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The data repository events that are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline void SetLevel(const LustreAccessAuditLogLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The data repository events that are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline void SetLevel(LustreAccessAuditLogLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>The data repository events that are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline LustreLogConfiguration& WithLevel(const LustreAccessAuditLogLevel& value) { SetLevel(value); return *this;}

    /**
     * <p>The data repository events that are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul>
     */
    inline LustreLogConfiguration& WithLevel(LustreAccessAuditLogLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline LustreLogConfiguration& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline LustreLogConfiguration& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline LustreLogConfiguration& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    LustreAccessAuditLogLevel m_level;
    bool m_levelHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
