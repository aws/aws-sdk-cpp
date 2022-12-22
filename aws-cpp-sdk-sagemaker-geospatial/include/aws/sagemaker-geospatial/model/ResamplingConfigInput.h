/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AlgorithmNameResampling.h>
#include <aws/sagemaker-geospatial/model/OutputResolutionResamplingInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ResamplingConfigInput">AWS
   * API Reference</a></p>
   */
  class ResamplingConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ResamplingConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API ResamplingConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ResamplingConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the algorithm used for resampling.</p>
     */
    inline const AlgorithmNameResampling& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of the algorithm used for resampling.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of the algorithm used for resampling.</p>
     */
    inline void SetAlgorithmName(const AlgorithmNameResampling& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of the algorithm used for resampling.</p>
     */
    inline void SetAlgorithmName(AlgorithmNameResampling&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of the algorithm used for resampling.</p>
     */
    inline ResamplingConfigInput& WithAlgorithmName(const AlgorithmNameResampling& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of the algorithm used for resampling.</p>
     */
    inline ResamplingConfigInput& WithAlgorithmName(AlgorithmNameResampling&& value) { SetAlgorithmName(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const OutputResolutionResamplingInput& GetOutputResolution() const{ return m_outputResolution; }

    /**
     * <p/>
     */
    inline bool OutputResolutionHasBeenSet() const { return m_outputResolutionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetOutputResolution(const OutputResolutionResamplingInput& value) { m_outputResolutionHasBeenSet = true; m_outputResolution = value; }

    /**
     * <p/>
     */
    inline void SetOutputResolution(OutputResolutionResamplingInput&& value) { m_outputResolutionHasBeenSet = true; m_outputResolution = std::move(value); }

    /**
     * <p/>
     */
    inline ResamplingConfigInput& WithOutputResolution(const OutputResolutionResamplingInput& value) { SetOutputResolution(value); return *this;}

    /**
     * <p/>
     */
    inline ResamplingConfigInput& WithOutputResolution(OutputResolutionResamplingInput&& value) { SetOutputResolution(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const{ return m_targetBands; }

    /**
     * <p/>
     */
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetBands(const Aws::Vector<Aws::String>& value) { m_targetBandsHasBeenSet = true; m_targetBands = value; }

    /**
     * <p/>
     */
    inline void SetTargetBands(Aws::Vector<Aws::String>&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::move(value); }

    /**
     * <p/>
     */
    inline ResamplingConfigInput& WithTargetBands(const Aws::Vector<Aws::String>& value) { SetTargetBands(value); return *this;}

    /**
     * <p/>
     */
    inline ResamplingConfigInput& WithTargetBands(Aws::Vector<Aws::String>&& value) { SetTargetBands(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ResamplingConfigInput& AddTargetBands(const Aws::String& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ResamplingConfigInput& AddTargetBands(Aws::String&& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline ResamplingConfigInput& AddTargetBands(const char* value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

  private:

    AlgorithmNameResampling m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    OutputResolutionResamplingInput m_outputResolution;
    bool m_outputResolutionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
