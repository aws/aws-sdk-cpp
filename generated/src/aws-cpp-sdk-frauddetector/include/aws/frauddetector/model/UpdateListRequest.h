/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/ListUpdateMode.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class UpdateListRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateList"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the list to update. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the list to update. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the list to update. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the list to update. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the list to update. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the list to update. </p>
     */
    inline UpdateListRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the list to update. </p>
     */
    inline UpdateListRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the list to update. </p>
     */
    inline UpdateListRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline const Aws::Vector<Aws::String>& GetElements() const{ return m_elements; }

    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }

    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline void SetElements(const Aws::Vector<Aws::String>& value) { m_elementsHasBeenSet = true; m_elements = value; }

    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline void SetElements(Aws::Vector<Aws::String>&& value) { m_elementsHasBeenSet = true; m_elements = std::move(value); }

    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline UpdateListRequest& WithElements(const Aws::Vector<Aws::String>& value) { SetElements(value); return *this;}

    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline UpdateListRequest& WithElements(Aws::Vector<Aws::String>&& value) { SetElements(std::move(value)); return *this;}

    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline UpdateListRequest& AddElements(const Aws::String& value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }

    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline UpdateListRequest& AddElements(Aws::String&& value) { m_elementsHasBeenSet = true; m_elements.push_back(std::move(value)); return *this; }

    /**
     * <p> One or more list elements to add or replace. If you are providing the
     * elements, make sure to specify the <code>updateMode</code> to use. </p> <p>If
     * you are deleting all elements from the list, use <code>REPLACE</code> for the
     * <code>updateMode</code> and provide an empty list (0 elements).</p>
     */
    inline UpdateListRequest& AddElements(const char* value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }


    /**
     * <p> The new description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The new description. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The new description. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The new description. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The new description. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The new description. </p>
     */
    inline UpdateListRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The new description. </p>
     */
    inline UpdateListRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The new description. </p>
     */
    inline UpdateListRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The update mode (type). </p> <ul> <li> <p>Use <code>APPEND</code> if you are
     * adding elements to the list.</p> </li> <li> <p>Use <code>REPLACE</code> if you
     * replacing existing elements in the list.</p> </li> <li> <p>Use
     * <code>REMOVE</code> if you are removing elements from the list.</p> </li> </ul>
     */
    inline const ListUpdateMode& GetUpdateMode() const{ return m_updateMode; }

    /**
     * <p> The update mode (type). </p> <ul> <li> <p>Use <code>APPEND</code> if you are
     * adding elements to the list.</p> </li> <li> <p>Use <code>REPLACE</code> if you
     * replacing existing elements in the list.</p> </li> <li> <p>Use
     * <code>REMOVE</code> if you are removing elements from the list.</p> </li> </ul>
     */
    inline bool UpdateModeHasBeenSet() const { return m_updateModeHasBeenSet; }

    /**
     * <p> The update mode (type). </p> <ul> <li> <p>Use <code>APPEND</code> if you are
     * adding elements to the list.</p> </li> <li> <p>Use <code>REPLACE</code> if you
     * replacing existing elements in the list.</p> </li> <li> <p>Use
     * <code>REMOVE</code> if you are removing elements from the list.</p> </li> </ul>
     */
    inline void SetUpdateMode(const ListUpdateMode& value) { m_updateModeHasBeenSet = true; m_updateMode = value; }

    /**
     * <p> The update mode (type). </p> <ul> <li> <p>Use <code>APPEND</code> if you are
     * adding elements to the list.</p> </li> <li> <p>Use <code>REPLACE</code> if you
     * replacing existing elements in the list.</p> </li> <li> <p>Use
     * <code>REMOVE</code> if you are removing elements from the list.</p> </li> </ul>
     */
    inline void SetUpdateMode(ListUpdateMode&& value) { m_updateModeHasBeenSet = true; m_updateMode = std::move(value); }

    /**
     * <p> The update mode (type). </p> <ul> <li> <p>Use <code>APPEND</code> if you are
     * adding elements to the list.</p> </li> <li> <p>Use <code>REPLACE</code> if you
     * replacing existing elements in the list.</p> </li> <li> <p>Use
     * <code>REMOVE</code> if you are removing elements from the list.</p> </li> </ul>
     */
    inline UpdateListRequest& WithUpdateMode(const ListUpdateMode& value) { SetUpdateMode(value); return *this;}

    /**
     * <p> The update mode (type). </p> <ul> <li> <p>Use <code>APPEND</code> if you are
     * adding elements to the list.</p> </li> <li> <p>Use <code>REPLACE</code> if you
     * replacing existing elements in the list.</p> </li> <li> <p>Use
     * <code>REMOVE</code> if you are removing elements from the list.</p> </li> </ul>
     */
    inline UpdateListRequest& WithUpdateMode(ListUpdateMode&& value) { SetUpdateMode(std::move(value)); return *this;}


    /**
     * <p> The variable type you want to assign to the list. </p>  <p>You cannot
     * update a variable type of a list that already has a variable type assigned to
     * it. You can assign a variable type to a list only if the list does not already
     * have a variable type.</p> 
     */
    inline const Aws::String& GetVariableType() const{ return m_variableType; }

    /**
     * <p> The variable type you want to assign to the list. </p>  <p>You cannot
     * update a variable type of a list that already has a variable type assigned to
     * it. You can assign a variable type to a list only if the list does not already
     * have a variable type.</p> 
     */
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }

    /**
     * <p> The variable type you want to assign to the list. </p>  <p>You cannot
     * update a variable type of a list that already has a variable type assigned to
     * it. You can assign a variable type to a list only if the list does not already
     * have a variable type.</p> 
     */
    inline void SetVariableType(const Aws::String& value) { m_variableTypeHasBeenSet = true; m_variableType = value; }

    /**
     * <p> The variable type you want to assign to the list. </p>  <p>You cannot
     * update a variable type of a list that already has a variable type assigned to
     * it. You can assign a variable type to a list only if the list does not already
     * have a variable type.</p> 
     */
    inline void SetVariableType(Aws::String&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::move(value); }

    /**
     * <p> The variable type you want to assign to the list. </p>  <p>You cannot
     * update a variable type of a list that already has a variable type assigned to
     * it. You can assign a variable type to a list only if the list does not already
     * have a variable type.</p> 
     */
    inline void SetVariableType(const char* value) { m_variableTypeHasBeenSet = true; m_variableType.assign(value); }

    /**
     * <p> The variable type you want to assign to the list. </p>  <p>You cannot
     * update a variable type of a list that already has a variable type assigned to
     * it. You can assign a variable type to a list only if the list does not already
     * have a variable type.</p> 
     */
    inline UpdateListRequest& WithVariableType(const Aws::String& value) { SetVariableType(value); return *this;}

    /**
     * <p> The variable type you want to assign to the list. </p>  <p>You cannot
     * update a variable type of a list that already has a variable type assigned to
     * it. You can assign a variable type to a list only if the list does not already
     * have a variable type.</p> 
     */
    inline UpdateListRequest& WithVariableType(Aws::String&& value) { SetVariableType(std::move(value)); return *this;}

    /**
     * <p> The variable type you want to assign to the list. </p>  <p>You cannot
     * update a variable type of a list that already has a variable type assigned to
     * it. You can assign a variable type to a list only if the list does not already
     * have a variable type.</p> 
     */
    inline UpdateListRequest& WithVariableType(const char* value) { SetVariableType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_elements;
    bool m_elementsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ListUpdateMode m_updateMode;
    bool m_updateModeHasBeenSet = false;

    Aws::String m_variableType;
    bool m_variableTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
