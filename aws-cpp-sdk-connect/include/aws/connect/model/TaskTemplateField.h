/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TaskTemplateFieldIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TaskTemplateFieldType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes a single task template field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TaskTemplateField">AWS
   * API Reference</a></p>
   */
  class TaskTemplateField
  {
  public:
    AWS_CONNECT_API TaskTemplateField();
    AWS_CONNECT_API TaskTemplateField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the field.</p>
     */
    inline const TaskTemplateFieldIdentifier& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline void SetId(const TaskTemplateFieldIdentifier& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline void SetId(TaskTemplateFieldIdentifier&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline TaskTemplateField& WithId(const TaskTemplateFieldIdentifier& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline TaskTemplateField& WithId(TaskTemplateFieldIdentifier&& value) { SetId(std::move(value)); return *this;}


    /**
     * <p>The description of the field.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the field.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the field.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the field.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the field.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the field.</p>
     */
    inline TaskTemplateField& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the field.</p>
     */
    inline TaskTemplateField& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the field.</p>
     */
    inline TaskTemplateField& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates the type of field.</p>
     */
    inline const TaskTemplateFieldType& GetType() const{ return m_type; }

    /**
     * <p>Indicates the type of field.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates the type of field.</p>
     */
    inline void SetType(const TaskTemplateFieldType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates the type of field.</p>
     */
    inline void SetType(TaskTemplateFieldType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates the type of field.</p>
     */
    inline TaskTemplateField& WithType(const TaskTemplateFieldType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates the type of field.</p>
     */
    inline TaskTemplateField& WithType(TaskTemplateFieldType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A list of options for a single select field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSingleSelectOptions() const{ return m_singleSelectOptions; }

    /**
     * <p>A list of options for a single select field.</p>
     */
    inline bool SingleSelectOptionsHasBeenSet() const { return m_singleSelectOptionsHasBeenSet; }

    /**
     * <p>A list of options for a single select field.</p>
     */
    inline void SetSingleSelectOptions(const Aws::Vector<Aws::String>& value) { m_singleSelectOptionsHasBeenSet = true; m_singleSelectOptions = value; }

    /**
     * <p>A list of options for a single select field.</p>
     */
    inline void SetSingleSelectOptions(Aws::Vector<Aws::String>&& value) { m_singleSelectOptionsHasBeenSet = true; m_singleSelectOptions = std::move(value); }

    /**
     * <p>A list of options for a single select field.</p>
     */
    inline TaskTemplateField& WithSingleSelectOptions(const Aws::Vector<Aws::String>& value) { SetSingleSelectOptions(value); return *this;}

    /**
     * <p>A list of options for a single select field.</p>
     */
    inline TaskTemplateField& WithSingleSelectOptions(Aws::Vector<Aws::String>&& value) { SetSingleSelectOptions(std::move(value)); return *this;}

    /**
     * <p>A list of options for a single select field.</p>
     */
    inline TaskTemplateField& AddSingleSelectOptions(const Aws::String& value) { m_singleSelectOptionsHasBeenSet = true; m_singleSelectOptions.push_back(value); return *this; }

    /**
     * <p>A list of options for a single select field.</p>
     */
    inline TaskTemplateField& AddSingleSelectOptions(Aws::String&& value) { m_singleSelectOptionsHasBeenSet = true; m_singleSelectOptions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of options for a single select field.</p>
     */
    inline TaskTemplateField& AddSingleSelectOptions(const char* value) { m_singleSelectOptionsHasBeenSet = true; m_singleSelectOptions.push_back(value); return *this; }

  private:

    TaskTemplateFieldIdentifier m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TaskTemplateFieldType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_singleSelectOptions;
    bool m_singleSelectOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
