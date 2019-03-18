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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AlgorithmStatusItem.h>
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
   * <p>Specifies the validation and image scan statuses of the
   * algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmStatusDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AlgorithmStatusDetails
  {
  public:
    AlgorithmStatusDetails();
    AlgorithmStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AlgorithmStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of algorithm validation.</p>
     */
    inline const Aws::Vector<AlgorithmStatusItem>& GetValidationStatuses() const{ return m_validationStatuses; }

    /**
     * <p>The status of algorithm validation.</p>
     */
    inline bool ValidationStatusesHasBeenSet() const { return m_validationStatusesHasBeenSet; }

    /**
     * <p>The status of algorithm validation.</p>
     */
    inline void SetValidationStatuses(const Aws::Vector<AlgorithmStatusItem>& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses = value; }

    /**
     * <p>The status of algorithm validation.</p>
     */
    inline void SetValidationStatuses(Aws::Vector<AlgorithmStatusItem>&& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses = std::move(value); }

    /**
     * <p>The status of algorithm validation.</p>
     */
    inline AlgorithmStatusDetails& WithValidationStatuses(const Aws::Vector<AlgorithmStatusItem>& value) { SetValidationStatuses(value); return *this;}

    /**
     * <p>The status of algorithm validation.</p>
     */
    inline AlgorithmStatusDetails& WithValidationStatuses(Aws::Vector<AlgorithmStatusItem>&& value) { SetValidationStatuses(std::move(value)); return *this;}

    /**
     * <p>The status of algorithm validation.</p>
     */
    inline AlgorithmStatusDetails& AddValidationStatuses(const AlgorithmStatusItem& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses.push_back(value); return *this; }

    /**
     * <p>The status of algorithm validation.</p>
     */
    inline AlgorithmStatusDetails& AddValidationStatuses(AlgorithmStatusItem&& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the scan of the algorithm's Docker image container.</p>
     */
    inline const Aws::Vector<AlgorithmStatusItem>& GetImageScanStatuses() const{ return m_imageScanStatuses; }

    /**
     * <p>The status of the scan of the algorithm's Docker image container.</p>
     */
    inline bool ImageScanStatusesHasBeenSet() const { return m_imageScanStatusesHasBeenSet; }

    /**
     * <p>The status of the scan of the algorithm's Docker image container.</p>
     */
    inline void SetImageScanStatuses(const Aws::Vector<AlgorithmStatusItem>& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses = value; }

    /**
     * <p>The status of the scan of the algorithm's Docker image container.</p>
     */
    inline void SetImageScanStatuses(Aws::Vector<AlgorithmStatusItem>&& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses = std::move(value); }

    /**
     * <p>The status of the scan of the algorithm's Docker image container.</p>
     */
    inline AlgorithmStatusDetails& WithImageScanStatuses(const Aws::Vector<AlgorithmStatusItem>& value) { SetImageScanStatuses(value); return *this;}

    /**
     * <p>The status of the scan of the algorithm's Docker image container.</p>
     */
    inline AlgorithmStatusDetails& WithImageScanStatuses(Aws::Vector<AlgorithmStatusItem>&& value) { SetImageScanStatuses(std::move(value)); return *this;}

    /**
     * <p>The status of the scan of the algorithm's Docker image container.</p>
     */
    inline AlgorithmStatusDetails& AddImageScanStatuses(const AlgorithmStatusItem& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses.push_back(value); return *this; }

    /**
     * <p>The status of the scan of the algorithm's Docker image container.</p>
     */
    inline AlgorithmStatusDetails& AddImageScanStatuses(AlgorithmStatusItem&& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AlgorithmStatusItem> m_validationStatuses;
    bool m_validationStatusesHasBeenSet;

    Aws::Vector<AlgorithmStatusItem> m_imageScanStatuses;
    bool m_imageScanStatusesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
