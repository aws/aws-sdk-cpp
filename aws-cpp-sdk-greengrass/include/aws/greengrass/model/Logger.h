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
#include <aws/greengrass/model/LoggerComponent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/LoggerLevel.h>
#include <aws/greengrass/model/LoggerType.h>
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
   * Information about a logger<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Logger">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Logger
  {
  public:
    Logger();
    Logger(Aws::Utils::Json::JsonView jsonValue);
    Logger& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The component that will be subject to logging.
     */
    inline const LoggerComponent& GetComponent() const{ return m_component; }

    /**
     * The component that will be subject to logging.
     */
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }

    /**
     * The component that will be subject to logging.
     */
    inline void SetComponent(const LoggerComponent& value) { m_componentHasBeenSet = true; m_component = value; }

    /**
     * The component that will be subject to logging.
     */
    inline void SetComponent(LoggerComponent&& value) { m_componentHasBeenSet = true; m_component = std::move(value); }

    /**
     * The component that will be subject to logging.
     */
    inline Logger& WithComponent(const LoggerComponent& value) { SetComponent(value); return *this;}

    /**
     * The component that will be subject to logging.
     */
    inline Logger& WithComponent(LoggerComponent&& value) { SetComponent(std::move(value)); return *this;}


    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline Logger& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline Logger& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline Logger& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The level of the logs.
     */
    inline const LoggerLevel& GetLevel() const{ return m_level; }

    /**
     * The level of the logs.
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * The level of the logs.
     */
    inline void SetLevel(const LoggerLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * The level of the logs.
     */
    inline void SetLevel(LoggerLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * The level of the logs.
     */
    inline Logger& WithLevel(const LoggerLevel& value) { SetLevel(value); return *this;}

    /**
     * The level of the logs.
     */
    inline Logger& WithLevel(LoggerLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * The amount of file space, in KB, to use if the local file system is used for
     * logging purposes.
     */
    inline int GetSpace() const{ return m_space; }

    /**
     * The amount of file space, in KB, to use if the local file system is used for
     * logging purposes.
     */
    inline bool SpaceHasBeenSet() const { return m_spaceHasBeenSet; }

    /**
     * The amount of file space, in KB, to use if the local file system is used for
     * logging purposes.
     */
    inline void SetSpace(int value) { m_spaceHasBeenSet = true; m_space = value; }

    /**
     * The amount of file space, in KB, to use if the local file system is used for
     * logging purposes.
     */
    inline Logger& WithSpace(int value) { SetSpace(value); return *this;}


    /**
     * The type of log output which will be used.
     */
    inline const LoggerType& GetType() const{ return m_type; }

    /**
     * The type of log output which will be used.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * The type of log output which will be used.
     */
    inline void SetType(const LoggerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * The type of log output which will be used.
     */
    inline void SetType(LoggerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * The type of log output which will be used.
     */
    inline Logger& WithType(const LoggerType& value) { SetType(value); return *this;}

    /**
     * The type of log output which will be used.
     */
    inline Logger& WithType(LoggerType&& value) { SetType(std::move(value)); return *this;}

  private:

    LoggerComponent m_component;
    bool m_componentHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    LoggerLevel m_level;
    bool m_levelHasBeenSet;

    int m_space;
    bool m_spaceHasBeenSet;

    LoggerType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
