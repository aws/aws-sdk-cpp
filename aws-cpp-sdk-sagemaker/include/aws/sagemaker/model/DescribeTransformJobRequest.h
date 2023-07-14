﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
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
  class AWS_SAGEMAKER_API DescribeTransformJobRequest : public SageMakerRequest
  {
  public:
    DescribeTransformJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTransformJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline const Aws::String& GetTransformJobName() const{ return m_transformJobName; }

    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline bool TransformJobNameHasBeenSet() const { return m_transformJobNameHasBeenSet; }

    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline void SetTransformJobName(const Aws::String& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = value; }

    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline void SetTransformJobName(Aws::String&& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = std::move(value); }

    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline void SetTransformJobName(const char* value) { m_transformJobNameHasBeenSet = true; m_transformJobName.assign(value); }

    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline DescribeTransformJobRequest& WithTransformJobName(const Aws::String& value) { SetTransformJobName(value); return *this;}

    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline DescribeTransformJobRequest& WithTransformJobName(Aws::String&& value) { SetTransformJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline DescribeTransformJobRequest& WithTransformJobName(const char* value) { SetTransformJobName(value); return *this;}

  private:

    Aws::String m_transformJobName;
    bool m_transformJobNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
