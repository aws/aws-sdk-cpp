/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/ResourceOwner.h>
#include <aws/bedrock-data-automation/model/BlueprintStageFilter.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectFilter.h>
#include <utility>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>List Blueprint Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListBlueprintsRequest">AWS
   * API Reference</a></p>
   */
  class ListBlueprintsRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ListBlueprintsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBlueprints"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    template<typename BlueprintArnT = Aws::String>
    void SetBlueprintArn(BlueprintArnT&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::forward<BlueprintArnT>(value); }
    template<typename BlueprintArnT = Aws::String>
    ListBlueprintsRequest& WithBlueprintArn(BlueprintArnT&& value) { SetBlueprintArn(std::forward<BlueprintArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ResourceOwner GetResourceOwner() const { return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    inline void SetResourceOwner(ResourceOwner value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }
    inline ListBlueprintsRequest& WithResourceOwner(ResourceOwner value) { SetResourceOwner(value); return *this;}
    ///@}

    ///@{
    
    inline BlueprintStageFilter GetBlueprintStageFilter() const { return m_blueprintStageFilter; }
    inline bool BlueprintStageFilterHasBeenSet() const { return m_blueprintStageFilterHasBeenSet; }
    inline void SetBlueprintStageFilter(BlueprintStageFilter value) { m_blueprintStageFilterHasBeenSet = true; m_blueprintStageFilter = value; }
    inline ListBlueprintsRequest& WithBlueprintStageFilter(BlueprintStageFilter value) { SetBlueprintStageFilter(value); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBlueprintsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBlueprintsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectFilter& GetProjectFilter() const { return m_projectFilter; }
    inline bool ProjectFilterHasBeenSet() const { return m_projectFilterHasBeenSet; }
    template<typename ProjectFilterT = DataAutomationProjectFilter>
    void SetProjectFilter(ProjectFilterT&& value) { m_projectFilterHasBeenSet = true; m_projectFilter = std::forward<ProjectFilterT>(value); }
    template<typename ProjectFilterT = DataAutomationProjectFilter>
    ListBlueprintsRequest& WithProjectFilter(ProjectFilterT&& value) { SetProjectFilter(std::forward<ProjectFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    ResourceOwner m_resourceOwner{ResourceOwner::NOT_SET};
    bool m_resourceOwnerHasBeenSet = false;

    BlueprintStageFilter m_blueprintStageFilter{BlueprintStageFilter::NOT_SET};
    bool m_blueprintStageFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    DataAutomationProjectFilter m_projectFilter;
    bool m_projectFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
