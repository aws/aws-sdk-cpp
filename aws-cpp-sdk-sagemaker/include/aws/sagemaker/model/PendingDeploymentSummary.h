/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/PendingProductionVariantSummary.h>
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
   * <p>The summary of an in-progress deployment when an endpoint is creating or
   * updating with a new endpoint configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PendingDeploymentSummary">AWS
   * API Reference</a></p>
   */
  class PendingDeploymentSummary
  {
  public:
    AWS_SAGEMAKER_API PendingDeploymentSummary();
    AWS_SAGEMAKER_API PendingDeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PendingDeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }

    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }

    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }

    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }

    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline PendingDeploymentSummary& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline PendingDeploymentSummary& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint configuration used in the deployment. </p>
     */
    inline PendingDeploymentSummary& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint for the in-progress deployment.</p>
     */
    inline const Aws::Vector<PendingProductionVariantSummary>& GetProductionVariants() const{ return m_productionVariants; }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint for the in-progress deployment.</p>
     */
    inline bool ProductionVariantsHasBeenSet() const { return m_productionVariantsHasBeenSet; }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint for the in-progress deployment.</p>
     */
    inline void SetProductionVariants(const Aws::Vector<PendingProductionVariantSummary>& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = value; }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint for the in-progress deployment.</p>
     */
    inline void SetProductionVariants(Aws::Vector<PendingProductionVariantSummary>&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::move(value); }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint for the in-progress deployment.</p>
     */
    inline PendingDeploymentSummary& WithProductionVariants(const Aws::Vector<PendingProductionVariantSummary>& value) { SetProductionVariants(value); return *this;}

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint for the in-progress deployment.</p>
     */
    inline PendingDeploymentSummary& WithProductionVariants(Aws::Vector<PendingProductionVariantSummary>&& value) { SetProductionVariants(std::move(value)); return *this;}

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint for the in-progress deployment.</p>
     */
    inline PendingDeploymentSummary& AddProductionVariants(const PendingProductionVariantSummary& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(value); return *this; }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint for the in-progress deployment.</p>
     */
    inline PendingDeploymentSummary& AddProductionVariants(PendingProductionVariantSummary&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.push_back(std::move(value)); return *this; }


    /**
     * <p>The start time of the deployment.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the deployment.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the deployment.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the deployment.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the deployment.</p>
     */
    inline PendingDeploymentSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the deployment.</p>
     */
    inline PendingDeploymentSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code> for the
     * in-progress deployment.</p>
     */
    inline const Aws::Vector<PendingProductionVariantSummary>& GetShadowProductionVariants() const{ return m_shadowProductionVariants; }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code> for the
     * in-progress deployment.</p>
     */
    inline bool ShadowProductionVariantsHasBeenSet() const { return m_shadowProductionVariantsHasBeenSet; }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code> for the
     * in-progress deployment.</p>
     */
    inline void SetShadowProductionVariants(const Aws::Vector<PendingProductionVariantSummary>& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = value; }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code> for the
     * in-progress deployment.</p>
     */
    inline void SetShadowProductionVariants(Aws::Vector<PendingProductionVariantSummary>&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = std::move(value); }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code> for the
     * in-progress deployment.</p>
     */
    inline PendingDeploymentSummary& WithShadowProductionVariants(const Aws::Vector<PendingProductionVariantSummary>& value) { SetShadowProductionVariants(value); return *this;}

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code> for the
     * in-progress deployment.</p>
     */
    inline PendingDeploymentSummary& WithShadowProductionVariants(Aws::Vector<PendingProductionVariantSummary>&& value) { SetShadowProductionVariants(std::move(value)); return *this;}

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code> for the
     * in-progress deployment.</p>
     */
    inline PendingDeploymentSummary& AddShadowProductionVariants(const PendingProductionVariantSummary& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.push_back(value); return *this; }

    /**
     * <p>An array of <a>PendingProductionVariantSummary</a> objects, one for each
     * model hosted behind this endpoint in shadow mode with production traffic
     * replicated from the model specified on <code>ProductionVariants</code> for the
     * in-progress deployment.</p>
     */
    inline PendingDeploymentSummary& AddShadowProductionVariants(PendingProductionVariantSummary&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::Vector<PendingProductionVariantSummary> m_productionVariants;
    bool m_productionVariantsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<PendingProductionVariantSummary> m_shadowProductionVariants;
    bool m_shadowProductionVariantsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
