/*
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GetContextKeysForCustomPolicyRequest : public IAMRequest
  {
  public:
    GetContextKeysForCustomPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A list of policies for which you want the list of context keys referenced in
     * those policies. Each document is specified as a string containing the complete,
     * valid JSON text of an IAM policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyInputList() const{ return m_policyInputList; }

    /**
     * <p>A list of policies for which you want the list of context keys referenced in
     * those policies. Each document is specified as a string containing the complete,
     * valid JSON text of an IAM policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline void SetPolicyInputList(const Aws::Vector<Aws::String>& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>A list of policies for which you want the list of context keys referenced in
     * those policies. Each document is specified as a string containing the complete,
     * valid JSON text of an IAM policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline void SetPolicyInputList(Aws::Vector<Aws::String>&& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>A list of policies for which you want the list of context keys referenced in
     * those policies. Each document is specified as a string containing the complete,
     * valid JSON text of an IAM policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForCustomPolicyRequest& WithPolicyInputList(const Aws::Vector<Aws::String>& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>A list of policies for which you want the list of context keys referenced in
     * those policies. Each document is specified as a string containing the complete,
     * valid JSON text of an IAM policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForCustomPolicyRequest& WithPolicyInputList(Aws::Vector<Aws::String>&& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>A list of policies for which you want the list of context keys referenced in
     * those policies. Each document is specified as a string containing the complete,
     * valid JSON text of an IAM policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForCustomPolicyRequest& AddPolicyInputList(const Aws::String& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>A list of policies for which you want the list of context keys referenced in
     * those policies. Each document is specified as a string containing the complete,
     * valid JSON text of an IAM policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForCustomPolicyRequest& AddPolicyInputList(Aws::String&& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>A list of policies for which you want the list of context keys referenced in
     * those policies. Each document is specified as a string containing the complete,
     * valid JSON text of an IAM policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of any printable ASCII character ranging from
     * the space character (\u0020) through end of the ASCII character range (\u00FF).
     * It also includes the special characters tab (\u0009), line feed (\u000A), and
     * carriage return (\u000D).</p>
     */
    inline GetContextKeysForCustomPolicyRequest& AddPolicyInputList(const char* value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_policyInputList;
    bool m_policyInputListHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
