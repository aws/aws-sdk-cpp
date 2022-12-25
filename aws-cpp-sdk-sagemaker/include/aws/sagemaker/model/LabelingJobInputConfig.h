/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/LabelingJobDataSource.h>
#include <aws/sagemaker/model/LabelingJobDataAttributes.h>
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
   * <p>Input configuration information for a labeling job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobInputConfig">AWS
   * API Reference</a></p>
   */
  class LabelingJobInputConfig
  {
  public:
    AWS_SAGEMAKER_API LabelingJobInputConfig();
    AWS_SAGEMAKER_API LabelingJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the input data.</p>
     */
    inline const LabelingJobDataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The location of the input data.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The location of the input data.</p>
     */
    inline void SetDataSource(const LabelingJobDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The location of the input data.</p>
     */
    inline void SetDataSource(LabelingJobDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The location of the input data.</p>
     */
    inline LabelingJobInputConfig& WithDataSource(const LabelingJobDataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The location of the input data.</p>
     */
    inline LabelingJobInputConfig& WithDataSource(LabelingJobDataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline const LabelingJobDataAttributes& GetDataAttributes() const{ return m_dataAttributes; }

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline bool DataAttributesHasBeenSet() const { return m_dataAttributesHasBeenSet; }

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline void SetDataAttributes(const LabelingJobDataAttributes& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = value; }

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline void SetDataAttributes(LabelingJobDataAttributes&& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = std::move(value); }

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline LabelingJobInputConfig& WithDataAttributes(const LabelingJobDataAttributes& value) { SetDataAttributes(value); return *this;}

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline LabelingJobInputConfig& WithDataAttributes(LabelingJobDataAttributes&& value) { SetDataAttributes(std::move(value)); return *this;}

  private:

    LabelingJobDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    LabelingJobDataAttributes m_dataAttributes;
    bool m_dataAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
