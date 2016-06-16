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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to list the receipt rule sets that exist under your AWS
   * account. You use receipt rule sets to receive email with Amazon SES. For more
   * information, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API ListReceiptRuleSetsRequest : public SESRequest
  {
  public:
    ListReceiptRuleSetsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline ListReceiptRuleSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline ListReceiptRuleSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline ListReceiptRuleSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
