/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TaskTemplateDefaultFieldValue.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Describes default values for fields on a template.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TaskTemplateDefaults">AWS
   * API Reference</a></p>
   */
  class TaskTemplateDefaults
  {
  public:
    AWS_CONNECT_API TaskTemplateDefaults() = default;
    AWS_CONNECT_API TaskTemplateDefaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateDefaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Default value for the field.</p>
     */
    inline const Aws::Vector<TaskTemplateDefaultFieldValue>& GetDefaultFieldValues() const { return m_defaultFieldValues; }
    inline bool DefaultFieldValuesHasBeenSet() const { return m_defaultFieldValuesHasBeenSet; }
    template<typename DefaultFieldValuesT = Aws::Vector<TaskTemplateDefaultFieldValue>>
    void SetDefaultFieldValues(DefaultFieldValuesT&& value) { m_defaultFieldValuesHasBeenSet = true; m_defaultFieldValues = std::forward<DefaultFieldValuesT>(value); }
    template<typename DefaultFieldValuesT = Aws::Vector<TaskTemplateDefaultFieldValue>>
    TaskTemplateDefaults& WithDefaultFieldValues(DefaultFieldValuesT&& value) { SetDefaultFieldValues(std::forward<DefaultFieldValuesT>(value)); return *this;}
    template<typename DefaultFieldValuesT = TaskTemplateDefaultFieldValue>
    TaskTemplateDefaults& AddDefaultFieldValues(DefaultFieldValuesT&& value) { m_defaultFieldValuesHasBeenSet = true; m_defaultFieldValues.emplace_back(std::forward<DefaultFieldValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TaskTemplateDefaultFieldValue> m_defaultFieldValues;
    bool m_defaultFieldValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
