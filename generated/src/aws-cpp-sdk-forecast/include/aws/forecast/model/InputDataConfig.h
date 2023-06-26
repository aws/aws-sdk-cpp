/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/SupplementaryFeature.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   *  <p>This object belongs to the <a>CreatePredictor</a> operation. If you
   * created your predictor with <a>CreateAutoPredictor</a>, see
   * <a>DataConfig</a>.</p>  <p>The data used to train a predictor. The data
   * includes a dataset group and any supplementary features. You specify this object
   * in the <a>CreatePredictor</a> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class InputDataConfig
  {
  public:
    AWS_FORECASTSERVICE_API InputDataConfig();
    AWS_FORECASTSERVICE_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline InputDataConfig& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline InputDataConfig& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline InputDataConfig& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>An array of supplementary features. The only supported feature is a holiday
     * calendar.</p>
     */
    inline const Aws::Vector<SupplementaryFeature>& GetSupplementaryFeatures() const{ return m_supplementaryFeatures; }

    /**
     * <p>An array of supplementary features. The only supported feature is a holiday
     * calendar.</p>
     */
    inline bool SupplementaryFeaturesHasBeenSet() const { return m_supplementaryFeaturesHasBeenSet; }

    /**
     * <p>An array of supplementary features. The only supported feature is a holiday
     * calendar.</p>
     */
    inline void SetSupplementaryFeatures(const Aws::Vector<SupplementaryFeature>& value) { m_supplementaryFeaturesHasBeenSet = true; m_supplementaryFeatures = value; }

    /**
     * <p>An array of supplementary features. The only supported feature is a holiday
     * calendar.</p>
     */
    inline void SetSupplementaryFeatures(Aws::Vector<SupplementaryFeature>&& value) { m_supplementaryFeaturesHasBeenSet = true; m_supplementaryFeatures = std::move(value); }

    /**
     * <p>An array of supplementary features. The only supported feature is a holiday
     * calendar.</p>
     */
    inline InputDataConfig& WithSupplementaryFeatures(const Aws::Vector<SupplementaryFeature>& value) { SetSupplementaryFeatures(value); return *this;}

    /**
     * <p>An array of supplementary features. The only supported feature is a holiday
     * calendar.</p>
     */
    inline InputDataConfig& WithSupplementaryFeatures(Aws::Vector<SupplementaryFeature>&& value) { SetSupplementaryFeatures(std::move(value)); return *this;}

    /**
     * <p>An array of supplementary features. The only supported feature is a holiday
     * calendar.</p>
     */
    inline InputDataConfig& AddSupplementaryFeatures(const SupplementaryFeature& value) { m_supplementaryFeaturesHasBeenSet = true; m_supplementaryFeatures.push_back(value); return *this; }

    /**
     * <p>An array of supplementary features. The only supported feature is a holiday
     * calendar.</p>
     */
    inline InputDataConfig& AddSupplementaryFeatures(SupplementaryFeature&& value) { m_supplementaryFeaturesHasBeenSet = true; m_supplementaryFeatures.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::Vector<SupplementaryFeature> m_supplementaryFeatures;
    bool m_supplementaryFeaturesHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
