/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RemoveAttributesFromFindingsRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API RemoveAttributesFromFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAttributesFromFindings"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingArns() const { return m_findingArns; }
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }
    template<typename FindingArnsT = Aws::Vector<Aws::String>>
    void SetFindingArns(FindingArnsT&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::forward<FindingArnsT>(value); }
    template<typename FindingArnsT = Aws::Vector<Aws::String>>
    RemoveAttributesFromFindingsRequest& WithFindingArns(FindingArnsT&& value) { SetFindingArns(std::forward<FindingArnsT>(value)); return *this;}
    template<typename FindingArnsT = Aws::String>
    RemoveAttributesFromFindingsRequest& AddFindingArns(FindingArnsT&& value) { m_findingArnsHasBeenSet = true; m_findingArns.emplace_back(std::forward<FindingArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeKeys() const { return m_attributeKeys; }
    inline bool AttributeKeysHasBeenSet() const { return m_attributeKeysHasBeenSet; }
    template<typename AttributeKeysT = Aws::Vector<Aws::String>>
    void SetAttributeKeys(AttributeKeysT&& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys = std::forward<AttributeKeysT>(value); }
    template<typename AttributeKeysT = Aws::Vector<Aws::String>>
    RemoveAttributesFromFindingsRequest& WithAttributeKeys(AttributeKeysT&& value) { SetAttributeKeys(std::forward<AttributeKeysT>(value)); return *this;}
    template<typename AttributeKeysT = Aws::String>
    RemoveAttributesFromFindingsRequest& AddAttributeKeys(AttributeKeysT&& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys.emplace_back(std::forward<AttributeKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeKeys;
    bool m_attributeKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
