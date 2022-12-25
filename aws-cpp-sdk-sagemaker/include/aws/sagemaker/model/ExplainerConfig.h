/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClarifyExplainerConfig.h>
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
   * <p>A parameter to activate explainers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExplainerConfig">AWS
   * API Reference</a></p>
   */
  class ExplainerConfig
  {
  public:
    AWS_SAGEMAKER_API ExplainerConfig();
    AWS_SAGEMAKER_API ExplainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ExplainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A member of <code>ExplainerConfig</code> that contains configuration
     * parameters for the SageMaker Clarify explainer.</p>
     */
    inline const ClarifyExplainerConfig& GetClarifyExplainerConfig() const{ return m_clarifyExplainerConfig; }

    /**
     * <p>A member of <code>ExplainerConfig</code> that contains configuration
     * parameters for the SageMaker Clarify explainer.</p>
     */
    inline bool ClarifyExplainerConfigHasBeenSet() const { return m_clarifyExplainerConfigHasBeenSet; }

    /**
     * <p>A member of <code>ExplainerConfig</code> that contains configuration
     * parameters for the SageMaker Clarify explainer.</p>
     */
    inline void SetClarifyExplainerConfig(const ClarifyExplainerConfig& value) { m_clarifyExplainerConfigHasBeenSet = true; m_clarifyExplainerConfig = value; }

    /**
     * <p>A member of <code>ExplainerConfig</code> that contains configuration
     * parameters for the SageMaker Clarify explainer.</p>
     */
    inline void SetClarifyExplainerConfig(ClarifyExplainerConfig&& value) { m_clarifyExplainerConfigHasBeenSet = true; m_clarifyExplainerConfig = std::move(value); }

    /**
     * <p>A member of <code>ExplainerConfig</code> that contains configuration
     * parameters for the SageMaker Clarify explainer.</p>
     */
    inline ExplainerConfig& WithClarifyExplainerConfig(const ClarifyExplainerConfig& value) { SetClarifyExplainerConfig(value); return *this;}

    /**
     * <p>A member of <code>ExplainerConfig</code> that contains configuration
     * parameters for the SageMaker Clarify explainer.</p>
     */
    inline ExplainerConfig& WithClarifyExplainerConfig(ClarifyExplainerConfig&& value) { SetClarifyExplainerConfig(std::move(value)); return *this;}

  private:

    ClarifyExplainerConfig m_clarifyExplainerConfig;
    bool m_clarifyExplainerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
