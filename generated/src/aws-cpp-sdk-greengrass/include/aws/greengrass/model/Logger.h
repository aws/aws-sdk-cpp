/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Logger
  {
  public:
    AWS_GREENGRASS_API Logger();
    AWS_GREENGRASS_API Logger(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Logger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The component that will be subject to logging.
     */
    inline const LoggerComponent& GetComponent() const{ return m_component; }
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
    inline void SetComponent(const LoggerComponent& value) { m_componentHasBeenSet = true; m_component = value; }
    inline void SetComponent(LoggerComponent&& value) { m_componentHasBeenSet = true; m_component = std::move(value); }
    inline Logger& WithComponent(const LoggerComponent& value) { SetComponent(value); return *this;}
    inline Logger& WithComponent(LoggerComponent&& value) { SetComponent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A descriptive or arbitrary ID for the logger. This value must be unique within
     * the logger definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Logger& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Logger& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Logger& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The level of the logs.
     */
    inline const LoggerLevel& GetLevel() const{ return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(const LoggerLevel& value) { m_levelHasBeenSet = true; m_level = value; }
    inline void SetLevel(LoggerLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }
    inline Logger& WithLevel(const LoggerLevel& value) { SetLevel(value); return *this;}
    inline Logger& WithLevel(LoggerLevel&& value) { SetLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The amount of file space, in KB, to use if the local file system is used for
     * logging purposes.
     */
    inline int GetSpace() const{ return m_space; }
    inline bool SpaceHasBeenSet() const { return m_spaceHasBeenSet; }
    inline void SetSpace(int value) { m_spaceHasBeenSet = true; m_space = value; }
    inline Logger& WithSpace(int value) { SetSpace(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of log output which will be used.
     */
    inline const LoggerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LoggerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LoggerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Logger& WithType(const LoggerType& value) { SetType(value); return *this;}
    inline Logger& WithType(LoggerType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    LoggerComponent m_component;
    bool m_componentHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LoggerLevel m_level;
    bool m_levelHasBeenSet = false;

    int m_space;
    bool m_spaceHasBeenSet = false;

    LoggerType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
