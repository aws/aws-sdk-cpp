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
    AWS_FRAUDDETECTOR_API CreateListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateList"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the list. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the list. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the list. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the list. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the list. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the list. </p>
     */
    inline CreateListRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the list. </p>
     */
    inline CreateListRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the list. </p>
     */
    inline CreateListRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline const Aws::Vector<Aws::String>& GetElements() const{ return m_elements; }

    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }

    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline void SetElements(const Aws::Vector<Aws::String>& value) { m_elementsHasBeenSet = true; m_elements = value; }

    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline void SetElements(Aws::Vector<Aws::String>&& value) { m_elementsHasBeenSet = true; m_elements = std::move(value); }

    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline CreateListRequest& WithElements(const Aws::Vector<Aws::String>& value) { SetElements(value); return *this;}

    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline CreateListRequest& WithElements(Aws::Vector<Aws::String>&& value) { SetElements(std::move(value)); return *this;}

    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline CreateListRequest& AddElements(const Aws::String& value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }

    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline CreateListRequest& AddElements(Aws::String&& value) { m_elementsHasBeenSet = true; m_elements.push_back(std::move(value)); return *this; }

    /**
     * <p> The names of the elements, if providing. You can also create an empty list
     * and add elements later using the <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_Updatelist.html">UpdateList</a>
     * API. </p>
     */
    inline CreateListRequest& AddElements(const char* value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }


    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline const Aws::String& GetVariableType() const{ return m_variableType; }

    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }

    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline void SetVariableType(const Aws::String& value) { m_variableTypeHasBeenSet = true; m_variableType = value; }

    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline void SetVariableType(Aws::String&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::move(value); }

    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline void SetVariableType(const char* value) { m_variableTypeHasBeenSet = true; m_variableType.assign(value); }

    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline CreateListRequest& WithVariableType(const Aws::String& value) { SetVariableType(value); return *this;}

    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline CreateListRequest& WithVariableType(Aws::String&& value) { SetVariableType(std::move(value)); return *this;}

    /**
     * <p> The variable type of the list. You can only assign the variable type with
     * String data type. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>. </p>
     */
    inline CreateListRequest& WithVariableType(const char* value) { SetVariableType(value); return *this;}


    /**
     * <p> The description of the list. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the list. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the list. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the list. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the list. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the list. </p>
     */
    inline CreateListRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the list. </p>
     */
    inline CreateListRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the list. </p>
     */
    inline CreateListRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline CreateListRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline CreateListRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline CreateListRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> A collection of the key and value pairs. </p>
     */
    inline CreateListRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
