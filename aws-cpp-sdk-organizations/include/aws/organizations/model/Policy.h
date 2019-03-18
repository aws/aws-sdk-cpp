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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/PolicySummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains rules to be applied to the affected accounts. Policies can be
   * attached directly to accounts, or to roots and OUs to affect all accounts in
   * those hierarchies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Policy">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API Policy
  {
  public:
    Policy();
    Policy(Aws::Utils::Json::JsonView jsonValue);
    Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that contains additional details about the policy.</p>
     */
    inline const PolicySummary& GetPolicySummary() const{ return m_policySummary; }

    /**
     * <p>A structure that contains additional details about the policy.</p>
     */
    inline bool PolicySummaryHasBeenSet() const { return m_policySummaryHasBeenSet; }

    /**
     * <p>A structure that contains additional details about the policy.</p>
     */
    inline void SetPolicySummary(const PolicySummary& value) { m_policySummaryHasBeenSet = true; m_policySummary = value; }

    /**
     * <p>A structure that contains additional details about the policy.</p>
     */
    inline void SetPolicySummary(PolicySummary&& value) { m_policySummaryHasBeenSet = true; m_policySummary = std::move(value); }

    /**
     * <p>A structure that contains additional details about the policy.</p>
     */
    inline Policy& WithPolicySummary(const PolicySummary& value) { SetPolicySummary(value); return *this;}

    /**
     * <p>A structure that contains additional details about the policy.</p>
     */
    inline Policy& WithPolicySummary(PolicySummary&& value) { SetPolicySummary(std::move(value)); return *this;}


    /**
     * <p>The text content of the policy.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The text content of the policy.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The text content of the policy.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The text content of the policy.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The text content of the policy.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The text content of the policy.</p>
     */
    inline Policy& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The text content of the policy.</p>
     */
    inline Policy& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The text content of the policy.</p>
     */
    inline Policy& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    PolicySummary m_policySummary;
    bool m_policySummaryHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
