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
  class AWS_SAGEMAKER_API DescribeImageVersionRequest : public SageMakerRequest
  {
  public:
    DescribeImageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImageVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline DescribeImageVersionRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline DescribeImageVersionRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline DescribeImageVersionRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The version of the image. If not specified, the latest version is
     * described.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version of the image. If not specified, the latest version is
     * described.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the image. If not specified, the latest version is
     * described.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the image. If not specified, the latest version is
     * described.</p>
     */
    inline DescribeImageVersionRequest& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
