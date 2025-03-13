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
   * pair. </p> <p> <b>Part of:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinition.html">GameServerContainerDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinitionInput.html">GameServerContainerDefinitionInput</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinition.html">SupportContainerDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinitionInput.html">SupportContainerDefinitionInput</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerEnvironment">AWS
   * API Reference</a></p>
   */
  class ContainerEnvironment
  {
  public:
    AWS_GAMELIFT_API ContainerEnvironment() = default;
    AWS_GAMELIFT_API ContainerEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment variable name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContainerEnvironment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variable value.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ContainerEnvironment& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
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
