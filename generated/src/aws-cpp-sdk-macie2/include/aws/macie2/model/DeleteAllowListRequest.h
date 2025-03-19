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
    AWS_MACIE2_API DeleteAllowListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAllowList"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

    AWS_MACIE2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteAllowListRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to force deletion of the allow list, even if active
     * classification jobs are configured to use the list.</p> <p>When you try to
     * delete an allow list, Amazon Macie checks for classification jobs that use the
     * list and have a status other than COMPLETE or CANCELLED. By default, Macie
     * rejects your request if any jobs meet these criteria. To skip these checks and
     * delete the list, set this value to true. To delete the list only if no active
     * jobs are configured to use it, set this value to false.</p>
     */
    inline const Aws::String& GetIgnoreJobChecks() const { return m_ignoreJobChecks; }
    inline bool IgnoreJobChecksHasBeenSet() const { return m_ignoreJobChecksHasBeenSet; }
    template<typename IgnoreJobChecksT = Aws::String>
    void SetIgnoreJobChecks(IgnoreJobChecksT&& value) { m_ignoreJobChecksHasBeenSet = true; m_ignoreJobChecks = std::forward<IgnoreJobChecksT>(value); }
    template<typename IgnoreJobChecksT = Aws::String>
    DeleteAllowListRequest& WithIgnoreJobChecks(IgnoreJobChecksT&& value) { SetIgnoreJobChecks(std::forward<IgnoreJobChecksT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ignoreJobChecks;
    bool m_ignoreJobChecksHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
