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
    AWS_CONNECT_API TaskTemplateField() = default;
    AWS_CONNECT_API TaskTemplateField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the field.</p>
     */
    inline const TaskTemplateFieldIdentifier& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = TaskTemplateFieldIdentifier>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = TaskTemplateFieldIdentifier>
    TaskTemplateField& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the field.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TaskTemplateField& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of field.</p>
     */
    inline TaskTemplateFieldType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TaskTemplateFieldType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TaskTemplateField& WithType(TaskTemplateFieldType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of options for a single select field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSingleSelectOptions() const { return m_singleSelectOptions; }
    inline bool SingleSelectOptionsHasBeenSet() const { return m_singleSelectOptionsHasBeenSet; }
    template<typename SingleSelectOptionsT = Aws::Vector<Aws::String>>
    void SetSingleSelectOptions(SingleSelectOptionsT&& value) { m_singleSelectOptionsHasBeenSet = true; m_singleSelectOptions = std::forward<SingleSelectOptionsT>(value); }
    template<typename SingleSelectOptionsT = Aws::Vector<Aws::String>>
    TaskTemplateField& WithSingleSelectOptions(SingleSelectOptionsT&& value) { SetSingleSelectOptions(std::forward<SingleSelectOptionsT>(value)); return *this;}
    template<typename SingleSelectOptionsT = Aws::String>
    TaskTemplateField& AddSingleSelectOptions(SingleSelectOptionsT&& value) { m_singleSelectOptionsHasBeenSet = true; m_singleSelectOptions.emplace_back(std::forward<SingleSelectOptionsT>(value)); return *this; }
    ///@}
  private:

    TaskTemplateFieldIdentifier m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TaskTemplateFieldType m_type{TaskTemplateFieldType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_singleSelectOptions;
    bool m_singleSelectOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
