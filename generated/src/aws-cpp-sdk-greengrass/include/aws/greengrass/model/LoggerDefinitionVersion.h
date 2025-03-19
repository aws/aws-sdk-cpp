/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Logger.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a logger definition version.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/LoggerDefinitionVersion">AWS
   * API Reference</a></p>
   */
  class LoggerDefinitionVersion
  {
  public:
    AWS_GREENGRASS_API LoggerDefinitionVersion() = default;
    AWS_GREENGRASS_API LoggerDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API LoggerDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of loggers.
     */
    inline const Aws::Vector<Logger>& GetLoggers() const { return m_loggers; }
    inline bool LoggersHasBeenSet() const { return m_loggersHasBeenSet; }
    template<typename LoggersT = Aws::Vector<Logger>>
    void SetLoggers(LoggersT&& value) { m_loggersHasBeenSet = true; m_loggers = std::forward<LoggersT>(value); }
    template<typename LoggersT = Aws::Vector<Logger>>
    LoggerDefinitionVersion& WithLoggers(LoggersT&& value) { SetLoggers(std::forward<LoggersT>(value)); return *this;}
    template<typename LoggersT = Logger>
    LoggerDefinitionVersion& AddLoggers(LoggersT&& value) { m_loggersHasBeenSet = true; m_loggers.emplace_back(std::forward<LoggersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Logger> m_loggers;
    bool m_loggersHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
