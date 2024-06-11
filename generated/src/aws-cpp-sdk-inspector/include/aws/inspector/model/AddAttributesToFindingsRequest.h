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
    AWS_INSPECTOR_API AddAttributesToFindingsRequest();

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
    inline const Aws::Vector<Aws::String>& GetFindingArns() const{ return m_findingArns; }
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }
    inline void SetFindingArns(const Aws::Vector<Aws::String>& value) { m_findingArnsHasBeenSet = true; m_findingArns = value; }
    inline void SetFindingArns(Aws::Vector<Aws::String>&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::move(value); }
    inline AddAttributesToFindingsRequest& WithFindingArns(const Aws::Vector<Aws::String>& value) { SetFindingArns(value); return *this;}
    inline AddAttributesToFindingsRequest& WithFindingArns(Aws::Vector<Aws::String>&& value) { SetFindingArns(std::move(value)); return *this;}
    inline AddAttributesToFindingsRequest& AddFindingArns(const Aws::String& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }
    inline AddAttributesToFindingsRequest& AddFindingArns(Aws::String&& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(std::move(value)); return *this; }
    inline AddAttributesToFindingsRequest& AddFindingArns(const char* value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline AddAttributesToFindingsRequest& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}
    inline AddAttributesToFindingsRequest& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline AddAttributesToFindingsRequest& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline AddAttributesToFindingsRequest& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
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
