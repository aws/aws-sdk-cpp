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
#include <aws/sagemaker/model/ModelPackageStatusItem.h>
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
   * <p>Specifies the validation and image scan statuses of the model
   * package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageStatusDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ModelPackageStatusDetails
  {
  public:
    ModelPackageStatusDetails();
    ModelPackageStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    ModelPackageStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The validation status of the model package.</p>
     */
    inline const Aws::Vector<ModelPackageStatusItem>& GetValidationStatuses() const{ return m_validationStatuses; }

    /**
     * <p>The validation status of the model package.</p>
     */
    inline bool ValidationStatusesHasBeenSet() const { return m_validationStatusesHasBeenSet; }

    /**
     * <p>The validation status of the model package.</p>
     */
    inline void SetValidationStatuses(const Aws::Vector<ModelPackageStatusItem>& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses = value; }

    /**
     * <p>The validation status of the model package.</p>
     */
    inline void SetValidationStatuses(Aws::Vector<ModelPackageStatusItem>&& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses = std::move(value); }

    /**
     * <p>The validation status of the model package.</p>
     */
    inline ModelPackageStatusDetails& WithValidationStatuses(const Aws::Vector<ModelPackageStatusItem>& value) { SetValidationStatuses(value); return *this;}

    /**
     * <p>The validation status of the model package.</p>
     */
    inline ModelPackageStatusDetails& WithValidationStatuses(Aws::Vector<ModelPackageStatusItem>&& value) { SetValidationStatuses(std::move(value)); return *this;}

    /**
     * <p>The validation status of the model package.</p>
     */
    inline ModelPackageStatusDetails& AddValidationStatuses(const ModelPackageStatusItem& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses.push_back(value); return *this; }

    /**
     * <p>The validation status of the model package.</p>
     */
    inline ModelPackageStatusDetails& AddValidationStatuses(ModelPackageStatusItem&& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline const Aws::Vector<ModelPackageStatusItem>& GetImageScanStatuses() const{ return m_imageScanStatuses; }

    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline bool ImageScanStatusesHasBeenSet() const { return m_imageScanStatusesHasBeenSet; }

    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline void SetImageScanStatuses(const Aws::Vector<ModelPackageStatusItem>& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses = value; }

    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline void SetImageScanStatuses(Aws::Vector<ModelPackageStatusItem>&& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses = std::move(value); }

    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline ModelPackageStatusDetails& WithImageScanStatuses(const Aws::Vector<ModelPackageStatusItem>& value) { SetImageScanStatuses(value); return *this;}

    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline ModelPackageStatusDetails& WithImageScanStatuses(Aws::Vector<ModelPackageStatusItem>&& value) { SetImageScanStatuses(std::move(value)); return *this;}

    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline ModelPackageStatusDetails& AddImageScanStatuses(const ModelPackageStatusItem& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses.push_back(value); return *this; }

    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline ModelPackageStatusDetails& AddImageScanStatuses(ModelPackageStatusItem&& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ModelPackageStatusItem> m_validationStatuses;
    bool m_validationStatusesHasBeenSet;

    Aws::Vector<ModelPackageStatusItem> m_imageScanStatuses;
    bool m_imageScanStatusesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
