﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/Attribute.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API AddAttributesToFindingsRequest : public InspectorRequest
  {
  public:
    AddAttributesToFindingsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARNs specifying the findings that you want to assign attributes to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingArns() const{ return m_findingArns; }

    /**
     * <p>The ARNs specifying the findings that you want to assign attributes to.</p>
     */
    inline void SetFindingArns(const Aws::Vector<Aws::String>& value) { m_findingArnsHasBeenSet = true; m_findingArns = value; }

    /**
     * <p>The ARNs specifying the findings that you want to assign attributes to.</p>
     */
    inline void SetFindingArns(Aws::Vector<Aws::String>&& value) { m_findingArnsHasBeenSet = true; m_findingArns = value; }

    /**
     * <p>The ARNs specifying the findings that you want to assign attributes to.</p>
     */
    inline AddAttributesToFindingsRequest& WithFindingArns(const Aws::Vector<Aws::String>& value) { SetFindingArns(value); return *this;}

    /**
     * <p>The ARNs specifying the findings that you want to assign attributes to.</p>
     */
    inline AddAttributesToFindingsRequest& WithFindingArns(Aws::Vector<Aws::String>&& value) { SetFindingArns(value); return *this;}

    /**
     * <p>The ARNs specifying the findings that you want to assign attributes to.</p>
     */
    inline AddAttributesToFindingsRequest& AddFindingArns(const Aws::String& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }

    /**
     * <p>The ARNs specifying the findings that you want to assign attributes to.</p>
     */
    inline AddAttributesToFindingsRequest& AddFindingArns(Aws::String&& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }

    /**
     * <p>The ARNs specifying the findings that you want to assign attributes to.</p>
     */
    inline AddAttributesToFindingsRequest& AddFindingArns(const char* value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }

    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline AddAttributesToFindingsRequest& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline AddAttributesToFindingsRequest& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline AddAttributesToFindingsRequest& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The array of attributes that you want to assign to specified findings.</p>
     */
    inline AddAttributesToFindingsRequest& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet;
    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
