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
#include <aws/guardduty/model/FilterAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * CreateFilterRequest request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateFilterRequest">AWS
   * API Reference</a></p>
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
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline void SetAction(const FilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline void SetAction(FilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline CreateFilterRequest& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline CreateFilterRequest& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * The idempotency token for the create request.
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * The idempotency token for the create request.
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * The idempotency token for the create request.
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * The idempotency token for the create request.
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * The idempotency token for the create request.
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * The idempotency token for the create request.
     */
    inline CreateFilterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * The idempotency token for the create request.
     */
    inline CreateFilterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * The idempotency token for the create request.
     */
    inline CreateFilterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * The description of the filter.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the filter.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * The description of the filter.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The description of the filter.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The description of the filter.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The description of the filter.
     */
    inline CreateFilterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the filter.
     */
    inline CreateFilterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the filter.
     */
    inline CreateFilterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The unique ID of the detector that you want to update.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline CreateFilterRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector that you want to update.
     */
    inline CreateFilterRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector that you want to update.
     */
    inline CreateFilterRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline CreateFilterRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline CreateFilterRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * The name of the filter.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the filter.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the filter.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the filter.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the filter.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the filter.
     */
    inline CreateFilterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the filter.
     */
    inline CreateFilterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the filter.
     */
    inline CreateFilterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline CreateFilterRequest& WithRank(int value) { SetRank(value); return *this;}

  private:

    FilterAction m_action;
    bool m_actionHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_rank;
    bool m_rankHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
