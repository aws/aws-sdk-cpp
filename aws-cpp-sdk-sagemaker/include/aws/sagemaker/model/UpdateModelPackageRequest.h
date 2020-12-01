/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelApprovalStatus.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateModelPackageRequest : public SageMakerRequest
  {
  public:
    UpdateModelPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModelPackage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelPackageArn(const char* value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline UpdateModelPackageRequest& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline UpdateModelPackageRequest& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline UpdateModelPackageRequest& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}


    /**
     * <p>The approval status of the model.</p>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = std::move(value); }

    /**
     * <p>The approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}

    /**
     * <p>The approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}


    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline const Aws::String& GetApprovalDescription() const{ return m_approvalDescription; }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline bool ApprovalDescriptionHasBeenSet() const { return m_approvalDescriptionHasBeenSet; }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline void SetApprovalDescription(const Aws::String& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = value; }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline void SetApprovalDescription(Aws::String&& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = std::move(value); }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline void SetApprovalDescription(const char* value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription.assign(value); }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithApprovalDescription(const Aws::String& value) { SetApprovalDescription(value); return *this;}

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithApprovalDescription(Aws::String&& value) { SetApprovalDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithApprovalDescription(const char* value) { SetApprovalDescription(value); return *this;}

  private:

    Aws::String m_modelPackageArn;
    bool m_modelPackageArnHasBeenSet;

    ModelApprovalStatus m_modelApprovalStatus;
    bool m_modelApprovalStatusHasBeenSet;

    Aws::String m_approvalDescription;
    bool m_approvalDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
