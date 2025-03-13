/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TaskTemplateFieldIdentifier.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Describes a default field and its corresponding value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TaskTemplateDefaultFieldValue">AWS
   * API Reference</a></p>
   */
  class TaskTemplateDefaultFieldValue
  {
  public:
    AWS_CONNECT_API TaskTemplateDefaultFieldValue() = default;
    AWS_CONNECT_API TaskTemplateDefaultFieldValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateDefaultFieldValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of a field. </p>
     */
    inline const TaskTemplateFieldIdentifier& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = TaskTemplateFieldIdentifier>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = TaskTemplateFieldIdentifier>
    TaskTemplateDefaultFieldValue& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default value for the field.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    TaskTemplateDefaultFieldValue& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}
  private:

    TaskTemplateFieldIdentifier m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
