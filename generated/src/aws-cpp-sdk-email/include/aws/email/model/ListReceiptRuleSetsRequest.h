/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptRuleSetsRequest">AWS
   * API Reference</a></p>
   */
  class ListReceiptRuleSetsRequest : public SESRequest
  {
  public:
    AWS_SES_API ListReceiptRuleSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReceiptRuleSets"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

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
    inline ListReceiptRuleSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to
     * indicate the position in the receipt rule set list.</p>
     */
    inline ListReceiptRuleSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
