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
   */
  class ListTemplatesRequest : public SESRequest
  {
  public:
    AWS_SES_API ListTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTemplates"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A token returned from a previous call to <code>ListTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to <code>ListTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to <code>ListTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a previous call to <code>ListTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to <code>ListTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline ListTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline ListTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline ListTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of templates to return. This value must be at least 1 and
     * less than or equal to 10. If you do not specify a value, or if you specify a
     * value less than 1 or greater than 10, the operation will return up to 10
     * results.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of templates to return. This value must be at least 1 and
     * less than or equal to 10. If you do not specify a value, or if you specify a
     * value less than 1 or greater than 10, the operation will return up to 10
     * results.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of templates to return. This value must be at least 1 and
     * less than or equal to 10. If you do not specify a value, or if you specify a
     * value less than 1 or greater than 10, the operation will return up to 10
     * results.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of templates to return. This value must be at least 1 and
     * less than or equal to 10. If you do not specify a value, or if you specify a
     * value less than 1 or greater than 10, the operation will return up to 10
     * results.</p>
     */
    inline ListTemplatesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
