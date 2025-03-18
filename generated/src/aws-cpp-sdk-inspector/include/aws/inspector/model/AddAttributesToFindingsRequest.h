/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AddAttributesToFindingsRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API AddAttributesToFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddAttributesToFindings"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARNs that specify the findings that you want to assign attributes to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingArns() const { return m_findingArns; }
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }
    template<typename FindingArnsT = Aws::Vector<Aws::String>>
    void SetFindingArns(FindingArnsT&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::forward<FindingArnsT>(value); }
    template<typename FindingArnsT = Aws::Vector<Aws::String>>
    AddAttributesToFindingsRequest& WithFindingArns(FindingArnsT&& value) { SetFindingArns(std::forward<FindingArnsT>(value)); return *this;}
    template<typename FindingArnsT = Aws::String>
    AddAttributesToFindingsRequest& AddFindingArns(FindingArnsT&& value) { m_findingArnsHasBeenSet = true; m_findingArns.emplace_back(std::forward<FindingArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    AddAttributesToFindingsRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    AddAttributesToFindingsRequest& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
