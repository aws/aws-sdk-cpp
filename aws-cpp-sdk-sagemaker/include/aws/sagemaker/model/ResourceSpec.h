/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppInstanceType.h>
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
   * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker image
   * created on the instance. The ARN is stored as metadata in SageMaker Studio
   * notebooks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceSpec">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ResourceSpec
  {
  public:
    ResourceSpec();
    ResourceSpec(Aws::Utils::Json::JsonView jsonValue);
    ResourceSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker image created on the
     * instance.</p>
     */
    inline const Aws::String& GetSageMakerImageArn() const{ return m_sageMakerImageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker image created on the
     * instance.</p>
     */
    inline bool SageMakerImageArnHasBeenSet() const { return m_sageMakerImageArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker image created on the
     * instance.</p>
     */
    inline void SetSageMakerImageArn(const Aws::String& value) { m_sageMakerImageArnHasBeenSet = true; m_sageMakerImageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker image created on the
     * instance.</p>
     */
    inline void SetSageMakerImageArn(Aws::String&& value) { m_sageMakerImageArnHasBeenSet = true; m_sageMakerImageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker image created on the
     * instance.</p>
     */
    inline void SetSageMakerImageArn(const char* value) { m_sageMakerImageArnHasBeenSet = true; m_sageMakerImageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker image created on the
     * instance.</p>
     */
    inline ResourceSpec& WithSageMakerImageArn(const Aws::String& value) { SetSageMakerImageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker image created on the
     * instance.</p>
     */
    inline ResourceSpec& WithSageMakerImageArn(Aws::String&& value) { SetSageMakerImageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker image created on the
     * instance.</p>
     */
    inline ResourceSpec& WithSageMakerImageArn(const char* value) { SetSageMakerImageArn(value); return *this;}


    /**
     * <p>The instance type.</p>
     */
    inline const AppInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const AppInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(AppInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline ResourceSpec& WithInstanceType(const AppInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ResourceSpec& WithInstanceType(AppInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}

  private:

    Aws::String m_sageMakerImageArn;
    bool m_sageMakerImageArnHasBeenSet;

    AppInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
