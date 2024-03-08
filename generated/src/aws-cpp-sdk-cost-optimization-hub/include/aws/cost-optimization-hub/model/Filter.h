/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/model/ActionType.h>
#include <aws/cost-optimization-hub/model/ImplementationEffort.h>
#include <aws/cost-optimization-hub/model/ResourceType.h>
#include <aws/cost-optimization-hub/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Describes a filter that returns a more specific list of recommendations.
   * Filters recommendations by different dimensions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API Filter();
    AWS_COSTOPTIMIZATIONHUB_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline Filter& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline Filter& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline Filter& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline Filter& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The account that the recommendation is for.</p>
     */
    inline Filter& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline const Aws::Vector<ActionType>& GetActionTypes() const{ return m_actionTypes; }

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline bool ActionTypesHasBeenSet() const { return m_actionTypesHasBeenSet; }

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline void SetActionTypes(const Aws::Vector<ActionType>& value) { m_actionTypesHasBeenSet = true; m_actionTypes = value; }

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline void SetActionTypes(Aws::Vector<ActionType>&& value) { m_actionTypesHasBeenSet = true; m_actionTypes = std::move(value); }

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline Filter& WithActionTypes(const Aws::Vector<ActionType>& value) { SetActionTypes(value); return *this;}

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline Filter& WithActionTypes(Aws::Vector<ActionType>&& value) { SetActionTypes(std::move(value)); return *this;}

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline Filter& AddActionTypes(const ActionType& value) { m_actionTypesHasBeenSet = true; m_actionTypes.push_back(value); return *this; }

    /**
     * <p>The type of action you can take by adopting the recommendation.</p>
     */
    inline Filter& AddActionTypes(ActionType&& value) { m_actionTypesHasBeenSet = true; m_actionTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline const Aws::Vector<ImplementationEffort>& GetImplementationEfforts() const{ return m_implementationEfforts; }

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline bool ImplementationEffortsHasBeenSet() const { return m_implementationEffortsHasBeenSet; }

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline void SetImplementationEfforts(const Aws::Vector<ImplementationEffort>& value) { m_implementationEffortsHasBeenSet = true; m_implementationEfforts = value; }

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline void SetImplementationEfforts(Aws::Vector<ImplementationEffort>&& value) { m_implementationEffortsHasBeenSet = true; m_implementationEfforts = std::move(value); }

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline Filter& WithImplementationEfforts(const Aws::Vector<ImplementationEffort>& value) { SetImplementationEfforts(value); return *this;}

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline Filter& WithImplementationEfforts(Aws::Vector<ImplementationEffort>&& value) { SetImplementationEfforts(std::move(value)); return *this;}

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline Filter& AddImplementationEfforts(const ImplementationEffort& value) { m_implementationEffortsHasBeenSet = true; m_implementationEfforts.push_back(value); return *this; }

    /**
     * <p>The effort required to implement the recommendation.</p>
     */
    inline Filter& AddImplementationEfforts(ImplementationEffort&& value) { m_implementationEffortsHasBeenSet = true; m_implementationEfforts.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }

    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }

    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = value; }

    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::move(value); }

    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline Filter& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}

    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline Filter& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}

    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline Filter& AddRecommendationIds(const Aws::String& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }

    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline Filter& AddRecommendationIds(Aws::String&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs for the recommendations.</p>
     */
    inline Filter& AddRecommendationIds(const char* value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline Filter& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline Filter& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline Filter& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline Filter& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline Filter& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline Filter& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline Filter& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline Filter& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline Filter& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
     */
    inline Filter& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline Filter& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline Filter& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline Filter& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline Filter& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The resource ID of the recommendation.</p>
     */
    inline Filter& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }


    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline Filter& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline Filter& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline Filter& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline Filter& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline bool GetRestartNeeded() const{ return m_restartNeeded; }

    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline bool RestartNeededHasBeenSet() const { return m_restartNeededHasBeenSet; }

    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline void SetRestartNeeded(bool value) { m_restartNeededHasBeenSet = true; m_restartNeeded = value; }

    /**
     * <p>Whether or not implementing the recommendation requires a restart.</p>
     */
    inline Filter& WithRestartNeeded(bool value) { SetRestartNeeded(value); return *this;}


    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline bool GetRollbackPossible() const{ return m_rollbackPossible; }

    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline bool RollbackPossibleHasBeenSet() const { return m_rollbackPossibleHasBeenSet; }

    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline void SetRollbackPossible(bool value) { m_rollbackPossibleHasBeenSet = true; m_rollbackPossible = value; }

    /**
     * <p>Whether or not implementing the recommendation can be rolled back.</p>
     */
    inline Filter& WithRollbackPossible(bool value) { SetRollbackPossible(value); return *this;}


    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline Filter& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline Filter& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline Filter& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags assigned to the recommendation.</p>
     */
    inline Filter& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<ActionType> m_actionTypes;
    bool m_actionTypesHasBeenSet = false;

    Aws::Vector<ImplementationEffort> m_implementationEfforts;
    bool m_implementationEffortsHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    bool m_restartNeeded;
    bool m_restartNeededHasBeenSet = false;

    bool m_rollbackPossible;
    bool m_rollbackPossibleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
