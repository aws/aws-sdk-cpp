/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SAGEMAKER_API LabelingJobInputConfig
  {
  public:
    LabelingJobInputConfig();
    LabelingJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_dataSourceHasBeenSet;

    LabelingJobDataAttributes m_dataAttributes;
    bool m_dataAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
