/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class CreateModelPackageGroupResult
  {
  public:
    AWS_SAGEMAKER_API CreateModelPackageGroupResult();
    AWS_SAGEMAKER_API CreateModelPackageGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateModelPackageGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupArn() const{ return m_modelPackageGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline void SetModelPackageGroupArn(const Aws::String& value) { m_modelPackageGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline void SetModelPackageGroupArn(Aws::String&& value) { m_modelPackageGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline void SetModelPackageGroupArn(const char* value) { m_modelPackageGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline CreateModelPackageGroupResult& WithModelPackageGroupArn(const Aws::String& value) { SetModelPackageGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline CreateModelPackageGroupResult& WithModelPackageGroupArn(Aws::String&& value) { SetModelPackageGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline CreateModelPackageGroupResult& WithModelPackageGroupArn(const char* value) { SetModelPackageGroupArn(value); return *this;}

  private:

    Aws::String m_modelPackageGroupArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
