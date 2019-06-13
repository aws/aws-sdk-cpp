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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FilterAction.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API CreateFilterRequest : public GuardDutyRequest
  {
  public:
    CreateFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFilter"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a filter.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a filter.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a filter.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a filter.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a filter.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a filter.</p>
     */
    inline CreateFilterRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a filter.</p>
     */
    inline CreateFilterRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a filter.</p>
     */
    inline CreateFilterRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline CreateFilterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline CreateFilterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline CreateFilterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the filter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the filter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the filter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the filter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the filter.</p>
     */
    inline CreateFilterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the filter.</p>
     */
    inline CreateFilterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the filter.</p>
     */
    inline CreateFilterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(const FilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(FilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline CreateFilterRequest& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline CreateFilterRequest& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline CreateFilterRequest& WithRank(int value) { SetRank(value); return *this;}


    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline CreateFilterRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline CreateFilterRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateFilterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateFilterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateFilterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be added to a new filter resource.</p>
     */
    inline CreateFilterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    FilterAction m_action;
    bool m_actionHasBeenSet;

    int m_rank;
    bool m_rankHasBeenSet;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
