/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class DeleteAllowListRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API DeleteAllowListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAllowList"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

    AWS_MACIE2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline DeleteAllowListRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline DeleteAllowListRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline DeleteAllowListRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline const Aws::String& GetIgnoreJobChecks() const{ return m_ignoreJobChecks; }

    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline bool IgnoreJobChecksHasBeenSet() const { return m_ignoreJobChecksHasBeenSet; }

    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline void SetIgnoreJobChecks(const Aws::String& value) { m_ignoreJobChecksHasBeenSet = true; m_ignoreJobChecks = value; }

    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline void SetIgnoreJobChecks(Aws::String&& value) { m_ignoreJobChecksHasBeenSet = true; m_ignoreJobChecks = std::move(value); }

    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline void SetIgnoreJobChecks(const char* value) { m_ignoreJobChecksHasBeenSet = true; m_ignoreJobChecks.assign(value); }

    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline DeleteAllowListRequest& WithIgnoreJobChecks(const Aws::String& value) { SetIgnoreJobChecks(value); return *this;}

    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline DeleteAllowListRequest& WithIgnoreJobChecks(Aws::String&& value) { SetIgnoreJobChecks(std::move(value)); return *this;}

    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline DeleteAllowListRequest& WithIgnoreJobChecks(const char* value) { SetIgnoreJobChecks(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ignoreJobChecks;
    bool m_ignoreJobChecksHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
