/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelIndicatorConfig.h>
#include <aws/application-signals/model/Goal.h>
#include <utility>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class UpdateServiceLevelObjectiveRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API UpdateServiceLevelObjectiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceLevelObjective"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An optional description for the SLO.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the SLO.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the SLO.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the SLO.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the SLO.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the SLO.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the SLO.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the SLO.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A structure that contains information about what performance metric this SLO
     * will monitor.</p>
     */
    inline const ServiceLevelIndicatorConfig& GetSliConfig() const{ return m_sliConfig; }

    /**
     * <p>A structure that contains information about what performance metric this SLO
     * will monitor.</p>
     */
    inline bool SliConfigHasBeenSet() const { return m_sliConfigHasBeenSet; }

    /**
     * <p>A structure that contains information about what performance metric this SLO
     * will monitor.</p>
     */
    inline void SetSliConfig(const ServiceLevelIndicatorConfig& value) { m_sliConfigHasBeenSet = true; m_sliConfig = value; }

    /**
     * <p>A structure that contains information about what performance metric this SLO
     * will monitor.</p>
     */
    inline void SetSliConfig(ServiceLevelIndicatorConfig&& value) { m_sliConfigHasBeenSet = true; m_sliConfig = std::move(value); }

    /**
     * <p>A structure that contains information about what performance metric this SLO
     * will monitor.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithSliConfig(const ServiceLevelIndicatorConfig& value) { SetSliConfig(value); return *this;}

    /**
     * <p>A structure that contains information about what performance metric this SLO
     * will monitor.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithSliConfig(ServiceLevelIndicatorConfig&& value) { SetSliConfig(std::move(value)); return *this;}


    /**
     * <p>A structure that contains the attributes that determine the goal of the SLO.
     * This includes the time period for evaluation and the attainment threshold.</p>
     */
    inline const Goal& GetGoal() const{ return m_goal; }

    /**
     * <p>A structure that contains the attributes that determine the goal of the SLO.
     * This includes the time period for evaluation and the attainment threshold.</p>
     */
    inline bool GoalHasBeenSet() const { return m_goalHasBeenSet; }

    /**
     * <p>A structure that contains the attributes that determine the goal of the SLO.
     * This includes the time period for evaluation and the attainment threshold.</p>
     */
    inline void SetGoal(const Goal& value) { m_goalHasBeenSet = true; m_goal = value; }

    /**
     * <p>A structure that contains the attributes that determine the goal of the SLO.
     * This includes the time period for evaluation and the attainment threshold.</p>
     */
    inline void SetGoal(Goal&& value) { m_goalHasBeenSet = true; m_goal = std::move(value); }

    /**
     * <p>A structure that contains the attributes that determine the goal of the SLO.
     * This includes the time period for evaluation and the attainment threshold.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithGoal(const Goal& value) { SetGoal(value); return *this;}

    /**
     * <p>A structure that contains the attributes that determine the goal of the SLO.
     * This includes the time period for evaluation and the attainment threshold.</p>
     */
    inline UpdateServiceLevelObjectiveRequest& WithGoal(Goal&& value) { SetGoal(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceLevelIndicatorConfig m_sliConfig;
    bool m_sliConfigHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
