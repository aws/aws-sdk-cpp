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
    AWS_CONNECT_API TaskTemplateDefaultFieldValue();
    AWS_CONNECT_API TaskTemplateDefaultFieldValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateDefaultFieldValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of a field. </p>
     */
    inline const TaskTemplateFieldIdentifier& GetId() const{ return m_id; }

    /**
     * <p>Identifier of a field. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Identifier of a field. </p>
     */
    inline void SetId(const TaskTemplateFieldIdentifier& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Identifier of a field. </p>
     */
    inline void SetId(TaskTemplateFieldIdentifier&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Identifier of a field. </p>
     */
    inline TaskTemplateDefaultFieldValue& WithId(const TaskTemplateFieldIdentifier& value) { SetId(value); return *this;}

    /**
     * <p>Identifier of a field. </p>
     */
    inline TaskTemplateDefaultFieldValue& WithId(TaskTemplateFieldIdentifier&& value) { SetId(std::move(value)); return *this;}


    /**
     * <p>Default value for the field.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>Default value for the field.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>Default value for the field.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>Default value for the field.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>Default value for the field.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>Default value for the field.</p>
     */
    inline TaskTemplateDefaultFieldValue& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>Default value for the field.</p>
     */
    inline TaskTemplateDefaultFieldValue& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>Default value for the field.</p>
     */
    inline TaskTemplateDefaultFieldValue& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    TaskTemplateFieldIdentifier m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
