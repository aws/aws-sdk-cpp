/**
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
  class DescribeModelCardRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeModelCardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeModelCard"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model card to describe.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }

    /**
     * <p>The name of the model card to describe.</p>
     */
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }

    /**
     * <p>The name of the model card to describe.</p>
     */
    inline void SetModelCardName(const Aws::String& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = value; }

    /**
     * <p>The name of the model card to describe.</p>
     */
    inline void SetModelCardName(Aws::String&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::move(value); }

    /**
     * <p>The name of the model card to describe.</p>
     */
    inline void SetModelCardName(const char* value) { m_modelCardNameHasBeenSet = true; m_modelCardName.assign(value); }

    /**
     * <p>The name of the model card to describe.</p>
     */
    inline DescribeModelCardRequest& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}

    /**
     * <p>The name of the model card to describe.</p>
     */
    inline DescribeModelCardRequest& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}

    /**
     * <p>The name of the model card to describe.</p>
     */
    inline DescribeModelCardRequest& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}


    /**
     * <p>The version of the model card to describe. If a version is not provided, then
     * the latest version of the model card is described.</p>
     */
    inline int GetModelCardVersion() const{ return m_modelCardVersion; }

    /**
     * <p>The version of the model card to describe. If a version is not provided, then
     * the latest version of the model card is described.</p>
     */
    inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }

    /**
     * <p>The version of the model card to describe. If a version is not provided, then
     * the latest version of the model card is described.</p>
     */
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }

    /**
     * <p>The version of the model card to describe. If a version is not provided, then
     * the latest version of the model card is described.</p>
     */
    inline DescribeModelCardRequest& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}

  private:

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion;
    bool m_modelCardVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
