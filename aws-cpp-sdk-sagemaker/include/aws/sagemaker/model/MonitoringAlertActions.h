/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelDashboardIndicatorAction.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A list of alert actions taken in response to an alert going into
   * <code>InAlert</code> status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringAlertActions">AWS
   * API Reference</a></p>
   */
  class MonitoringAlertActions
  {
  public:
    AWS_SAGEMAKER_API MonitoringAlertActions();
    AWS_SAGEMAKER_API MonitoringAlertActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringAlertActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An alert action taken to light up an icon on the Model Dashboard when an
     * alert goes into <code>InAlert</code> status.</p>
     */
    inline const ModelDashboardIndicatorAction& GetModelDashboardIndicator() const{ return m_modelDashboardIndicator; }

    /**
     * <p>An alert action taken to light up an icon on the Model Dashboard when an
     * alert goes into <code>InAlert</code> status.</p>
     */
    inline bool ModelDashboardIndicatorHasBeenSet() const { return m_modelDashboardIndicatorHasBeenSet; }

    /**
     * <p>An alert action taken to light up an icon on the Model Dashboard when an
     * alert goes into <code>InAlert</code> status.</p>
     */
    inline void SetModelDashboardIndicator(const ModelDashboardIndicatorAction& value) { m_modelDashboardIndicatorHasBeenSet = true; m_modelDashboardIndicator = value; }

    /**
     * <p>An alert action taken to light up an icon on the Model Dashboard when an
     * alert goes into <code>InAlert</code> status.</p>
     */
    inline void SetModelDashboardIndicator(ModelDashboardIndicatorAction&& value) { m_modelDashboardIndicatorHasBeenSet = true; m_modelDashboardIndicator = std::move(value); }

    /**
     * <p>An alert action taken to light up an icon on the Model Dashboard when an
     * alert goes into <code>InAlert</code> status.</p>
     */
    inline MonitoringAlertActions& WithModelDashboardIndicator(const ModelDashboardIndicatorAction& value) { SetModelDashboardIndicator(value); return *this;}

    /**
     * <p>An alert action taken to light up an icon on the Model Dashboard when an
     * alert goes into <code>InAlert</code> status.</p>
     */
    inline MonitoringAlertActions& WithModelDashboardIndicator(ModelDashboardIndicatorAction&& value) { SetModelDashboardIndicator(std::move(value)); return *this;}

  private:

    ModelDashboardIndicatorAction m_modelDashboardIndicator;
    bool m_modelDashboardIndicatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
