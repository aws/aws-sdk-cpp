/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutAggregationAuthorizationRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutAggregationAuthorizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAggregationAuthorization"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline const Aws::String& GetAuthorizedAccountId() const { return m_authorizedAccountId; }
    inline bool AuthorizedAccountIdHasBeenSet() const { return m_authorizedAccountIdHasBeenSet; }
    template<typename AuthorizedAccountIdT = Aws::String>
    void SetAuthorizedAccountId(AuthorizedAccountIdT&& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = std::forward<AuthorizedAccountIdT>(value); }
    template<typename AuthorizedAccountIdT = Aws::String>
    PutAggregationAuthorizationRequest& WithAuthorizedAccountId(AuthorizedAccountIdT&& value) { SetAuthorizedAccountId(std::forward<AuthorizedAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline const Aws::String& GetAuthorizedAwsRegion() const { return m_authorizedAwsRegion; }
    inline bool AuthorizedAwsRegionHasBeenSet() const { return m_authorizedAwsRegionHasBeenSet; }
    template<typename AuthorizedAwsRegionT = Aws::String>
    void SetAuthorizedAwsRegion(AuthorizedAwsRegionT&& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = std::forward<AuthorizedAwsRegionT>(value); }
    template<typename AuthorizedAwsRegionT = Aws::String>
    PutAggregationAuthorizationRequest& WithAuthorizedAwsRegion(AuthorizedAwsRegionT&& value) { SetAuthorizedAwsRegion(std::forward<AuthorizedAwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tag object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutAggregationAuthorizationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutAggregationAuthorizationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_authorizedAccountId;
    bool m_authorizedAccountIdHasBeenSet = false;

    Aws::String m_authorizedAwsRegion;
    bool m_authorizedAwsRegionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
