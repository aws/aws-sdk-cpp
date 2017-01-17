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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>The input for the <code>GetSMSAttributes</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSAttributesInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API GetSMSAttributesRequest : public SNSRequest
  {
  public:
    GetSMSAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A list of the individual attribute names, such as
     * <code>MonthlySpendLimit</code>, for which you want values.</p> <p>For all
     * attribute names, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html">SetSMSAttributes</a>.</p>
     * <p>If you don't use this parameter, Amazon SNS returns all SMS attributes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of the individual attribute names, such as
     * <code>MonthlySpendLimit</code>, for which you want values.</p> <p>For all
     * attribute names, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html">SetSMSAttributes</a>.</p>
     * <p>If you don't use this parameter, Amazon SNS returns all SMS attributes.</p>
     */
    inline void SetAttributes(const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of the individual attribute names, such as
     * <code>MonthlySpendLimit</code>, for which you want values.</p> <p>For all
     * attribute names, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html">SetSMSAttributes</a>.</p>
     * <p>If you don't use this parameter, Amazon SNS returns all SMS attributes.</p>
     */
    inline void SetAttributes(Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of the individual attribute names, such as
     * <code>MonthlySpendLimit</code>, for which you want values.</p> <p>For all
     * attribute names, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html">SetSMSAttributes</a>.</p>
     * <p>If you don't use this parameter, Amazon SNS returns all SMS attributes.</p>
     */
    inline GetSMSAttributesRequest& WithAttributes(const Aws::Vector<Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of the individual attribute names, such as
     * <code>MonthlySpendLimit</code>, for which you want values.</p> <p>For all
     * attribute names, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html">SetSMSAttributes</a>.</p>
     * <p>If you don't use this parameter, Amazon SNS returns all SMS attributes.</p>
     */
    inline GetSMSAttributesRequest& WithAttributes(Aws::Vector<Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of the individual attribute names, such as
     * <code>MonthlySpendLimit</code>, for which you want values.</p> <p>For all
     * attribute names, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html">SetSMSAttributes</a>.</p>
     * <p>If you don't use this parameter, Amazon SNS returns all SMS attributes.</p>
     */
    inline GetSMSAttributesRequest& AddAttributes(const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A list of the individual attribute names, such as
     * <code>MonthlySpendLimit</code>, for which you want values.</p> <p>For all
     * attribute names, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html">SetSMSAttributes</a>.</p>
     * <p>If you don't use this parameter, Amazon SNS returns all SMS attributes.</p>
     */
    inline GetSMSAttributesRequest& AddAttributes(Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A list of the individual attribute names, such as
     * <code>MonthlySpendLimit</code>, for which you want values.</p> <p>For all
     * attribute names, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetSMSAttributes.html">SetSMSAttributes</a>.</p>
     * <p>If you don't use this parameter, Amazon SNS returns all SMS attributes.</p>
     */
    inline GetSMSAttributesRequest& AddAttributes(const char* value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
