/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/kendra-ranking/KendraRankingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra-ranking/model/CapacityUnitsConfiguration.h>
#include <utility>

namespace Aws
{
namespace KendraRanking
{
namespace Model
{

  /**
   */
  class UpdateRescoreExecutionPlanRequest : public KendraRankingRequest
  {
  public:
    AWS_KENDRARANKING_API UpdateRescoreExecutionPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRescoreExecutionPlan"; }

    AWS_KENDRARANKING_API Aws::String SerializePayload() const override;

    AWS_KENDRARANKING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the rescore execution plan that you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateRescoreExecutionPlanRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateRescoreExecutionPlanRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateRescoreExecutionPlanRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the rescore execution plan.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateRescoreExecutionPlanRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateRescoreExecutionPlanRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateRescoreExecutionPlanRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the rescore execution plan.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateRescoreExecutionPlanRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateRescoreExecutionPlanRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateRescoreExecutionPlanRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline UpdateRescoreExecutionPlanRequest& WithCapacityUnits(const CapacityUnitsConfiguration& value) { SetCapacityUnits(value); return *this;}
    inline UpdateRescoreExecutionPlanRequest& WithCapacityUnits(CapacityUnitsConfiguration&& value) { SetCapacityUnits(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CapacityUnitsConfiguration m_capacityUnits;
    bool m_capacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
