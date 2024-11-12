/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>An environment variable to set inside a container, in the form of a key-value
   * pair. </p> <p> <b>Part of:</b> <a>GameServerContainerDefinition</a>,
   * <a>GameServerContainerDefinitionInput</a>, <a>SupportContainerDefinition</a>,
   * <a>SupportContainerDefinitionInput</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerEnvironment">AWS
   * API Reference</a></p>
   */
  class ContainerEnvironment
  {
  public:
    AWS_GAMELIFT_API ContainerEnvironment();
    AWS_GAMELIFT_API ContainerEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment variable name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ContainerEnvironment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ContainerEnvironment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ContainerEnvironment& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variable value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ContainerEnvironment& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ContainerEnvironment& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ContainerEnvironment& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
