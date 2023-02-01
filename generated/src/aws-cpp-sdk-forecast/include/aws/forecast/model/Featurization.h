/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/FeaturizationMethod.h>
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
   * <a>AttributeConfig</a>.</p>  <p>Provides featurization (transformation)
   * information for a dataset field. This object is part of the
   * <a>FeaturizationConfig</a> object.</p> <p>For example:</p> <p> <code>{</code>
   * </p> <p> <code>"AttributeName": "demand",</code> </p> <p>
   * <code>FeaturizationPipeline [ {</code> </p> <p> <code>"FeaturizationMethodName":
   * "filling",</code> </p> <p> <code>"FeaturizationMethodParameters":
   * {"aggregation": "avg", "backfill": "nan"}</code> </p> <p> <code>} ]</code> </p>
   * <p> <code>}</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Featurization">AWS
   * API Reference</a></p>
   */
  class Featurization
  {
  public:
    AWS_FORECASTSERVICE_API Featurization();
    AWS_FORECASTSERVICE_API Featurization(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Featurization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the schema attribute that specifies the data field to be
     * featurized. Amazon Forecast supports the target field of the
     * <code>TARGET_TIME_SERIES</code> and the <code>RELATED_TIME_SERIES</code>
     * datasets. For example, for the <code>RETAIL</code> domain, the target is
     * <code>demand</code>, and for the <code>CUSTOM</code> domain, the target is
     * <code>target_value</code>. For more information, see
     * <a>howitworks-missing-values</a>.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the schema attribute that specifies the data field to be
     * featurized. Amazon Forecast supports the target field of the
     * <code>TARGET_TIME_SERIES</code> and the <code>RELATED_TIME_SERIES</code>
     * datasets. For example, for the <code>RETAIL</code> domain, the target is
     * <code>demand</code>, and for the <code>CUSTOM</code> domain, the target is
     * <code>target_value</code>. For more information, see
     * <a>howitworks-missing-values</a>.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the schema attribute that specifies the data field to be
     * featurized. Amazon Forecast supports the target field of the
     * <code>TARGET_TIME_SERIES</code> and the <code>RELATED_TIME_SERIES</code>
     * datasets. For example, for the <code>RETAIL</code> domain, the target is
     * <code>demand</code>, and for the <code>CUSTOM</code> domain, the target is
     * <code>target_value</code>. For more information, see
     * <a>howitworks-missing-values</a>.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the schema attribute that specifies the data field to be
     * featurized. Amazon Forecast supports the target field of the
     * <code>TARGET_TIME_SERIES</code> and the <code>RELATED_TIME_SERIES</code>
     * datasets. For example, for the <code>RETAIL</code> domain, the target is
     * <code>demand</code>, and for the <code>CUSTOM</code> domain, the target is
     * <code>target_value</code>. For more information, see
     * <a>howitworks-missing-values</a>.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the schema attribute that specifies the data field to be
     * featurized. Amazon Forecast supports the target field of the
     * <code>TARGET_TIME_SERIES</code> and the <code>RELATED_TIME_SERIES</code>
     * datasets. For example, for the <code>RETAIL</code> domain, the target is
     * <code>demand</code>, and for the <code>CUSTOM</code> domain, the target is
     * <code>target_value</code>. For more information, see
     * <a>howitworks-missing-values</a>.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the schema attribute that specifies the data field to be
     * featurized. Amazon Forecast supports the target field of the
     * <code>TARGET_TIME_SERIES</code> and the <code>RELATED_TIME_SERIES</code>
     * datasets. For example, for the <code>RETAIL</code> domain, the target is
     * <code>demand</code>, and for the <code>CUSTOM</code> domain, the target is
     * <code>target_value</code>. For more information, see
     * <a>howitworks-missing-values</a>.</p>
     */
    inline Featurization& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the schema attribute that specifies the data field to be
     * featurized. Amazon Forecast supports the target field of the
     * <code>TARGET_TIME_SERIES</code> and the <code>RELATED_TIME_SERIES</code>
     * datasets. For example, for the <code>RETAIL</code> domain, the target is
     * <code>demand</code>, and for the <code>CUSTOM</code> domain, the target is
     * <code>target_value</code>. For more information, see
     * <a>howitworks-missing-values</a>.</p>
     */
    inline Featurization& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema attribute that specifies the data field to be
     * featurized. Amazon Forecast supports the target field of the
     * <code>TARGET_TIME_SERIES</code> and the <code>RELATED_TIME_SERIES</code>
     * datasets. For example, for the <code>RETAIL</code> domain, the target is
     * <code>demand</code>, and for the <code>CUSTOM</code> domain, the target is
     * <code>target_value</code>. For more information, see
     * <a>howitworks-missing-values</a>.</p>
     */
    inline Featurization& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>An array of one <code>FeaturizationMethod</code> object that specifies the
     * feature transformation method.</p>
     */
    inline const Aws::Vector<FeaturizationMethod>& GetFeaturizationPipeline() const{ return m_featurizationPipeline; }

    /**
     * <p>An array of one <code>FeaturizationMethod</code> object that specifies the
     * feature transformation method.</p>
     */
    inline bool FeaturizationPipelineHasBeenSet() const { return m_featurizationPipelineHasBeenSet; }

    /**
     * <p>An array of one <code>FeaturizationMethod</code> object that specifies the
     * feature transformation method.</p>
     */
    inline void SetFeaturizationPipeline(const Aws::Vector<FeaturizationMethod>& value) { m_featurizationPipelineHasBeenSet = true; m_featurizationPipeline = value; }

    /**
     * <p>An array of one <code>FeaturizationMethod</code> object that specifies the
     * feature transformation method.</p>
     */
    inline void SetFeaturizationPipeline(Aws::Vector<FeaturizationMethod>&& value) { m_featurizationPipelineHasBeenSet = true; m_featurizationPipeline = std::move(value); }

    /**
     * <p>An array of one <code>FeaturizationMethod</code> object that specifies the
     * feature transformation method.</p>
     */
    inline Featurization& WithFeaturizationPipeline(const Aws::Vector<FeaturizationMethod>& value) { SetFeaturizationPipeline(value); return *this;}

    /**
     * <p>An array of one <code>FeaturizationMethod</code> object that specifies the
     * feature transformation method.</p>
     */
    inline Featurization& WithFeaturizationPipeline(Aws::Vector<FeaturizationMethod>&& value) { SetFeaturizationPipeline(std::move(value)); return *this;}

    /**
     * <p>An array of one <code>FeaturizationMethod</code> object that specifies the
     * feature transformation method.</p>
     */
    inline Featurization& AddFeaturizationPipeline(const FeaturizationMethod& value) { m_featurizationPipelineHasBeenSet = true; m_featurizationPipeline.push_back(value); return *this; }

    /**
     * <p>An array of one <code>FeaturizationMethod</code> object that specifies the
     * feature transformation method.</p>
     */
    inline Featurization& AddFeaturizationPipeline(FeaturizationMethod&& value) { m_featurizationPipelineHasBeenSet = true; m_featurizationPipeline.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<FeaturizationMethod> m_featurizationPipeline;
    bool m_featurizationPipelineHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
