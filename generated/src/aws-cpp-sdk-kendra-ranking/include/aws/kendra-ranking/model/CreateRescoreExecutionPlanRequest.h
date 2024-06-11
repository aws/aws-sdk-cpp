/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/kendra-ranking/KendraRankingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra-ranking/model/CapacityUnitsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra-ranking/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace KendraRanking
{
namespace Model
{

  /**
   */
  class CreateRescoreExecutionPlanRequest : public KendraRankingRequest
  {
  public:
    AWS_KENDRARANKING_API CreateRescoreExecutionPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRescoreExecutionPlan"; }

    AWS_KENDRARANKING_API Aws::String SerializePayload() const override;

    AWS_KENDRARANKING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the rescore execution plan.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRescoreExecutionPlanRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRescoreExecutionPlanRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRescoreExecutionPlanRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the rescore execution plan.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateRescoreExecutionPlanRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateRescoreExecutionPlanRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateRescoreExecutionPlanRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can set additional capacity units to meet the needs of your rescore
     * execution plan. You are given a single capacity unit by default. If you want to
     * use the default capacity, you don't set additional capacity units. For more
     * information on the default capacity and additional capacity units, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline const CapacityUnitsConfiguration& GetCapacityUnits() const{ return m_capacityUnits; }
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }
    inline void SetCapacityUnits(const CapacityUnitsConfiguration& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }
    inline void SetCapacityUnits(CapacityUnitsConfiguration&& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = std::move(value); }
    inline CreateRescoreExecutionPlanRequest& WithCapacityUnits(const CapacityUnitsConfiguration& value) { SetCapacityUnits(value); return *this;}
    inline CreateRescoreExecutionPlanRequest& WithCapacityUnits(CapacityUnitsConfiguration&& value) { SetCapacityUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize your rescore execution
     * plan. You can also use tags to help control access to the rescore execution
     * plan. Tag keys and values can consist of Unicode letters, digits, white space,
     * and any of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRescoreExecutionPlanRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRescoreExecutionPlanRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRescoreExecutionPlanRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateRescoreExecutionPlanRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to create a rescore
     * execution plan. Multiple calls to the
     * <code>CreateRescoreExecutionPlanRequest</code> API with the same client token
     * will create only one rescore execution plan.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateRescoreExecutionPlanRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateRescoreExecutionPlanRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateRescoreExecutionPlanRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CapacityUnitsConfiguration m_capacityUnits;
    bool m_capacityUnitsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
