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
    AWS_BEDROCKDATAAUTOMATION_API ListBlueprintsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBlueprints"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetBlueprintArn() const{ return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    inline void SetBlueprintArn(const Aws::String& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = value; }
    inline void SetBlueprintArn(Aws::String&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::move(value); }
    inline void SetBlueprintArn(const char* value) { m_blueprintArnHasBeenSet = true; m_blueprintArn.assign(value); }
    inline ListBlueprintsRequest& WithBlueprintArn(const Aws::String& value) { SetBlueprintArn(value); return *this;}
    inline ListBlueprintsRequest& WithBlueprintArn(Aws::String&& value) { SetBlueprintArn(std::move(value)); return *this;}
    inline ListBlueprintsRequest& WithBlueprintArn(const char* value) { SetBlueprintArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceOwner& GetResourceOwner() const{ return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    inline void SetResourceOwner(const ResourceOwner& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }
    inline void SetResourceOwner(ResourceOwner&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }
    inline ListBlueprintsRequest& WithResourceOwner(const ResourceOwner& value) { SetResourceOwner(value); return *this;}
    inline ListBlueprintsRequest& WithResourceOwner(ResourceOwner&& value) { SetResourceOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const BlueprintStageFilter& GetBlueprintStageFilter() const{ return m_blueprintStageFilter; }
    inline bool BlueprintStageFilterHasBeenSet() const { return m_blueprintStageFilterHasBeenSet; }
    inline void SetBlueprintStageFilter(const BlueprintStageFilter& value) { m_blueprintStageFilterHasBeenSet = true; m_blueprintStageFilter = value; }
    inline void SetBlueprintStageFilter(BlueprintStageFilter&& value) { m_blueprintStageFilterHasBeenSet = true; m_blueprintStageFilter = std::move(value); }
    inline ListBlueprintsRequest& WithBlueprintStageFilter(const BlueprintStageFilter& value) { SetBlueprintStageFilter(value); return *this;}
    inline ListBlueprintsRequest& WithBlueprintStageFilter(BlueprintStageFilter&& value) { SetBlueprintStageFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBlueprintsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBlueprintsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBlueprintsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBlueprintsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectFilter& GetProjectFilter() const{ return m_projectFilter; }
    inline bool ProjectFilterHasBeenSet() const { return m_projectFilterHasBeenSet; }
    inline void SetProjectFilter(const DataAutomationProjectFilter& value) { m_projectFilterHasBeenSet = true; m_projectFilter = value; }
    inline void SetProjectFilter(DataAutomationProjectFilter&& value) { m_projectFilterHasBeenSet = true; m_projectFilter = std::move(value); }
    inline ListBlueprintsRequest& WithProjectFilter(const DataAutomationProjectFilter& value) { SetProjectFilter(value); return *this;}
    inline ListBlueprintsRequest& WithProjectFilter(DataAutomationProjectFilter&& value) { SetProjectFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    ResourceOwner m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    BlueprintStageFilter m_blueprintStageFilter;
    bool m_blueprintStageFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    DataAutomationProjectFilter m_projectFilter;
    bool m_projectFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
