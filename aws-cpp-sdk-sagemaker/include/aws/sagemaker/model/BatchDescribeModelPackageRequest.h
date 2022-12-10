/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class BatchDescribeModelPackageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API BatchDescribeModelPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeModelPackage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModelPackageArnList() const{ return m_modelPackageArnList; }

    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline bool ModelPackageArnListHasBeenSet() const { return m_modelPackageArnListHasBeenSet; }

    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline void SetModelPackageArnList(const Aws::Vector<Aws::String>& value) { m_modelPackageArnListHasBeenSet = true; m_modelPackageArnList = value; }

    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline void SetModelPackageArnList(Aws::Vector<Aws::String>&& value) { m_modelPackageArnListHasBeenSet = true; m_modelPackageArnList = std::move(value); }

    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline BatchDescribeModelPackageRequest& WithModelPackageArnList(const Aws::Vector<Aws::String>& value) { SetModelPackageArnList(value); return *this;}

    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline BatchDescribeModelPackageRequest& WithModelPackageArnList(Aws::Vector<Aws::String>&& value) { SetModelPackageArnList(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline BatchDescribeModelPackageRequest& AddModelPackageArnList(const Aws::String& value) { m_modelPackageArnListHasBeenSet = true; m_modelPackageArnList.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline BatchDescribeModelPackageRequest& AddModelPackageArnList(Aws::String&& value) { m_modelPackageArnListHasBeenSet = true; m_modelPackageArnList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline BatchDescribeModelPackageRequest& AddModelPackageArnList(const char* value) { m_modelPackageArnListHasBeenSet = true; m_modelPackageArnList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_modelPackageArnList;
    bool m_modelPackageArnListHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
