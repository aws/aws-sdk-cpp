/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class CreateListRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API CreateListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateList"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the list. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateListRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline const Aws::Vector<Aws::String>& GetElements() const { return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    template<typename ElementsT = Aws::Vector<Aws::String>>
    void SetElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements = std::forward<ElementsT>(value); }
    template<typename ElementsT = Aws::Vector<Aws::String>>
    CreateListRequest& WithElements(ElementsT&& value) { SetElements(std::forward<ElementsT>(value)); return *this;}
    template<typename ElementsT = Aws::String>
    CreateListRequest& AddElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements.emplace_back(std::forward<ElementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline const Aws::String& GetVariableType() const { return m_variableType; }
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }
    template<typename VariableTypeT = Aws::String>
    void SetVariableType(VariableTypeT&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::forward<VariableTypeT>(value); }
    template<typename VariableTypeT = Aws::String>
    CreateListRequest& WithVariableType(VariableTypeT&& value) { SetVariableType(std::forward<VariableTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the list. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateListRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateListRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateListRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_elements;
    bool m_elementsHasBeenSet = false;

    Aws::String m_variableType;
    bool m_variableTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
