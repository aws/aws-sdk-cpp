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
  class AWS_GREENGRASS_API LoggerDefinitionVersion
  {
  public:
    LoggerDefinitionVersion();
    LoggerDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    LoggerDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of loggers.
     */
    inline const Aws::Vector<Logger>& GetLoggers() const{ return m_loggers; }

    /**
     * A list of loggers.
     */
    inline bool LoggersHasBeenSet() const { return m_loggersHasBeenSet; }

    /**
     * A list of loggers.
     */
    inline void SetLoggers(const Aws::Vector<Logger>& value) { m_loggersHasBeenSet = true; m_loggers = value; }

    /**
     * A list of loggers.
     */
    inline void SetLoggers(Aws::Vector<Logger>&& value) { m_loggersHasBeenSet = true; m_loggers = std::move(value); }

    /**
     * A list of loggers.
     */
    inline LoggerDefinitionVersion& WithLoggers(const Aws::Vector<Logger>& value) { SetLoggers(value); return *this;}

    /**
     * A list of loggers.
     */
    inline LoggerDefinitionVersion& WithLoggers(Aws::Vector<Logger>&& value) { SetLoggers(std::move(value)); return *this;}

    /**
     * A list of loggers.
     */
    inline LoggerDefinitionVersion& AddLoggers(const Logger& value) { m_loggersHasBeenSet = true; m_loggers.push_back(value); return *this; }

    /**
     * A list of loggers.
     */
    inline LoggerDefinitionVersion& AddLoggers(Logger&& value) { m_loggersHasBeenSet = true; m_loggers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Logger> m_loggers;
    bool m_loggersHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
