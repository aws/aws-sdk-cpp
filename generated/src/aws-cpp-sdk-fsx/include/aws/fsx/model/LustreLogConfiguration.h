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
   * for your Amazon FSx for Lustre file system or Amazon File Cache resource to
   * Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreLogConfiguration">AWS
   * API Reference</a></p>
   */
  class LustreLogConfiguration
  {
  public:
    AWS_FSX_API LustreLogConfiguration() = default;
    AWS_FSX_API LustreLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API LustreLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data repository events that are logged by Amazon FSx.</p> <ul> <li> <p>
     * <code>WARN_ONLY</code> - only warning events are logged.</p> </li> <li> <p>
     * <code>ERROR_ONLY</code> - only error events are logged.</p> </li> <li> <p>
     * <code>WARN_ERROR</code> - both warning events and error events are logged.</p>
     * </li> <li> <p> <code>DISABLED</code> - logging of data repository events is
     * turned off.</p> </li> </ul> <p>Note that Amazon File Cache uses a default
     * setting of <code>WARN_ERROR</code>, which can't be changed.</p>
     */
    inline LustreAccessAuditLogLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(LustreAccessAuditLogLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline LustreLogConfiguration& WithLevel(LustreAccessAuditLogLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that specifies the destination of the logs.
     * The destination can be any Amazon CloudWatch Logs log group ARN. The destination
     * ARN must be in the same Amazon Web Services partition, Amazon Web Services
     * Region, and Amazon Web Services account as your Amazon FSx file system.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    LustreLogConfiguration& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    LustreAccessAuditLogLevel m_level{LustreAccessAuditLogLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
