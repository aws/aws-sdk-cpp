/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API RemoveAttributesFromFindingsRequest : public InspectorRequest
  {
  public:
    RemoveAttributesFromFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAttributesFromFindings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingArns() const{ return m_findingArns; }

    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }

    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline void SetFindingArns(const Aws::Vector<Aws::String>& value) { m_findingArnsHasBeenSet = true; m_findingArns = value; }

    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline void SetFindingArns(Aws::Vector<Aws::String>&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::move(value); }

    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline RemoveAttributesFromFindingsRequest& WithFindingArns(const Aws::Vector<Aws::String>& value) { SetFindingArns(value); return *this;}

    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline RemoveAttributesFromFindingsRequest& WithFindingArns(Aws::Vector<Aws::String>&& value) { SetFindingArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline RemoveAttributesFromFindingsRequest& AddFindingArns(const Aws::String& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }

    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline RemoveAttributesFromFindingsRequest& AddFindingArns(Aws::String&& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline RemoveAttributesFromFindingsRequest& AddFindingArns(const char* value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }


    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeKeys() const{ return m_attributeKeys; }

    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline bool AttributeKeysHasBeenSet() const { return m_attributeKeysHasBeenSet; }

    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline void SetAttributeKeys(const Aws::Vector<Aws::String>& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys = value; }

    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline void SetAttributeKeys(Aws::Vector<Aws::String>&& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys = std::move(value); }

    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline RemoveAttributesFromFindingsRequest& WithAttributeKeys(const Aws::Vector<Aws::String>& value) { SetAttributeKeys(value); return *this;}

    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline RemoveAttributesFromFindingsRequest& WithAttributeKeys(Aws::Vector<Aws::String>&& value) { SetAttributeKeys(std::move(value)); return *this;}

    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline RemoveAttributesFromFindingsRequest& AddAttributeKeys(const Aws::String& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys.push_back(value); return *this; }

    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline RemoveAttributesFromFindingsRequest& AddAttributeKeys(Aws::String&& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline RemoveAttributesFromFindingsRequest& AddAttributeKeys(const char* value) { m_attributeKeysHasBeenSet = true; m_attributeKeys.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet;

    Aws::Vector<Aws::String> m_attributeKeys;
    bool m_attributeKeysHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
