/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStageFilter.h>
#include <aws/bedrock-data-automation/model/BlueprintFilter.h>
#include <aws/bedrock-data-automation/model/ResourceOwner.h>
#include <utility>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>List DataAutomationProject Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListDataAutomationProjectsRequest">AWS
   * API Reference</a></p>
   */
  class ListDataAutomationProjectsRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ListDataAutomationProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataAutomationProjects"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDataAutomationProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDataAutomationProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataAutomationProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataAutomationProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStageFilter& GetProjectStageFilter() const{ return m_projectStageFilter; }
    inline bool ProjectStageFilterHasBeenSet() const { return m_projectStageFilterHasBeenSet; }
    inline void SetProjectStageFilter(const DataAutomationProjectStageFilter& value) { m_projectStageFilterHasBeenSet = true; m_projectStageFilter = value; }
    inline void SetProjectStageFilter(DataAutomationProjectStageFilter&& value) { m_projectStageFilterHasBeenSet = true; m_projectStageFilter = std::move(value); }
    inline ListDataAutomationProjectsRequest& WithProjectStageFilter(const DataAutomationProjectStageFilter& value) { SetProjectStageFilter(value); return *this;}
    inline ListDataAutomationProjectsRequest& WithProjectStageFilter(DataAutomationProjectStageFilter&& value) { SetProjectStageFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const BlueprintFilter& GetBlueprintFilter() const{ return m_blueprintFilter; }
    inline bool BlueprintFilterHasBeenSet() const { return m_blueprintFilterHasBeenSet; }
    inline void SetBlueprintFilter(const BlueprintFilter& value) { m_blueprintFilterHasBeenSet = true; m_blueprintFilter = value; }
    inline void SetBlueprintFilter(BlueprintFilter&& value) { m_blueprintFilterHasBeenSet = true; m_blueprintFilter = std::move(value); }
    inline ListDataAutomationProjectsRequest& WithBlueprintFilter(const BlueprintFilter& value) { SetBlueprintFilter(value); return *this;}
    inline ListDataAutomationProjectsRequest& WithBlueprintFilter(BlueprintFilter&& value) { SetBlueprintFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceOwner& GetResourceOwner() const{ return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    inline void SetResourceOwner(const ResourceOwner& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }
    inline void SetResourceOwner(ResourceOwner&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }
    inline ListDataAutomationProjectsRequest& WithResourceOwner(const ResourceOwner& value) { SetResourceOwner(value); return *this;}
    inline ListDataAutomationProjectsRequest& WithResourceOwner(ResourceOwner&& value) { SetResourceOwner(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    DataAutomationProjectStageFilter m_projectStageFilter;
    bool m_projectStageFilterHasBeenSet = false;

    BlueprintFilter m_blueprintFilter;
    bool m_blueprintFilterHasBeenSet = false;

    ResourceOwner m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
