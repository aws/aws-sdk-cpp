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
    AWS_CONNECT_API TaskTemplateDefaults();
    AWS_CONNECT_API TaskTemplateDefaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateDefaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Default value for the field.</p>
     */
    inline const Aws::Vector<TaskTemplateDefaultFieldValue>& GetDefaultFieldValues() const{ return m_defaultFieldValues; }

    /**
     * <p>Default value for the field.</p>
     */
    inline bool DefaultFieldValuesHasBeenSet() const { return m_defaultFieldValuesHasBeenSet; }

    /**
     * <p>Default value for the field.</p>
     */
    inline void SetDefaultFieldValues(const Aws::Vector<TaskTemplateDefaultFieldValue>& value) { m_defaultFieldValuesHasBeenSet = true; m_defaultFieldValues = value; }

    /**
     * <p>Default value for the field.</p>
     */
    inline void SetDefaultFieldValues(Aws::Vector<TaskTemplateDefaultFieldValue>&& value) { m_defaultFieldValuesHasBeenSet = true; m_defaultFieldValues = std::move(value); }

    /**
     * <p>Default value for the field.</p>
     */
    inline TaskTemplateDefaults& WithDefaultFieldValues(const Aws::Vector<TaskTemplateDefaultFieldValue>& value) { SetDefaultFieldValues(value); return *this;}

    /**
     * <p>Default value for the field.</p>
     */
    inline TaskTemplateDefaults& WithDefaultFieldValues(Aws::Vector<TaskTemplateDefaultFieldValue>&& value) { SetDefaultFieldValues(std::move(value)); return *this;}

    /**
     * <p>Default value for the field.</p>
     */
    inline TaskTemplateDefaults& AddDefaultFieldValues(const TaskTemplateDefaultFieldValue& value) { m_defaultFieldValuesHasBeenSet = true; m_defaultFieldValues.push_back(value); return *this; }

    /**
     * <p>Default value for the field.</p>
     */
    inline TaskTemplateDefaults& AddDefaultFieldValues(TaskTemplateDefaultFieldValue&& value) { m_defaultFieldValuesHasBeenSet = true; m_defaultFieldValues.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TaskTemplateDefaultFieldValue> m_defaultFieldValues;
    bool m_defaultFieldValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
