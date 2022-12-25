/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Stores the config information for how a candidate is generated
   * (optional).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLCandidateGenerationConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLCandidateGenerationConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLCandidateGenerationConfig();
    AWS_SAGEMAKER_API AutoMLCandidateGenerationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLCandidateGenerationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot will
     * only support the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code> and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code> and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> is case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline const Aws::String& GetFeatureSpecificationS3Uri() const{ return m_featureSpecificationS3Uri; }

    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot will
     * only support the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code> and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code> and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> is case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline bool FeatureSpecificationS3UriHasBeenSet() const { return m_featureSpecificationS3UriHasBeenSet; }

    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot will
     * only support the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code> and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code> and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> is case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline void SetFeatureSpecificationS3Uri(const Aws::String& value) { m_featureSpecificationS3UriHasBeenSet = true; m_featureSpecificationS3Uri = value; }

    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot will
     * only support the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code> and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code> and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> is case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline void SetFeatureSpecificationS3Uri(Aws::String&& value) { m_featureSpecificationS3UriHasBeenSet = true; m_featureSpecificationS3Uri = std::move(value); }

    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot will
     * only support the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code> and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code> and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> is case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline void SetFeatureSpecificationS3Uri(const char* value) { m_featureSpecificationS3UriHasBeenSet = true; m_featureSpecificationS3Uri.assign(value); }

    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot will
     * only support the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code> and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code> and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> is case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline AutoMLCandidateGenerationConfig& WithFeatureSpecificationS3Uri(const Aws::String& value) { SetFeatureSpecificationS3Uri(value); return *this;}

    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot will
     * only support the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code> and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code> and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> is case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline AutoMLCandidateGenerationConfig& WithFeatureSpecificationS3Uri(Aws::String&& value) { SetFeatureSpecificationS3Uri(std::move(value)); return *this;}

    /**
     * <p>A URL to the Amazon S3 data source containing selected features from the
     * input data source to run an Autopilot job. You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p>  <p>These column keys may not
     * include the target column.</p>  <p>In ensembling mode, Autopilot will
     * only support the following data types: <code>numeric</code>,
     * <code>categorical</code>, <code>text</code> and <code>datetime</code>. In HPO
     * mode, Autopilot can support <code>numeric</code>, <code>categorical</code>,
     * <code>text</code>, <code>datetime</code> and <code>sequence</code>.</p> <p>If
     * only <code>FeatureDataTypes</code> is provided, the column keys
     * (<code>col1</code>, <code>col2</code>,..) should be a subset of the column names
     * in the input data. </p> <p>If both <code>FeatureDataTypes</code> and
     * <code>FeatureAttributeNames</code> are provided, then the column keys should be
     * a subset of the column names provided in <code>FeatureAttributeNames</code>.
     * </p> <p>The key name <code>FeatureAttributeNames</code> is fixed. The values
     * listed in <code>["col1", "col2", ...]</code> is case sensitive and should be a
     * list of strings containing unique values that are a subset of the column names
     * in the input data. The list of columns provided must not include the target
     * column.</p>
     */
    inline AutoMLCandidateGenerationConfig& WithFeatureSpecificationS3Uri(const char* value) { SetFeatureSpecificationS3Uri(value); return *this;}

  private:

    Aws::String m_featureSpecificationS3Uri;
    bool m_featureSpecificationS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
