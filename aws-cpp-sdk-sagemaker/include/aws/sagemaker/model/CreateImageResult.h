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
  class CreateImageResult
  {
  public:
    AWS_SAGEMAKER_API CreateImageResult();
    AWS_SAGEMAKER_API CreateImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the image.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArn = value; }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArn = std::move(value); }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArn.assign(value); }

    /**
     * <p>The ARN of the image.</p>
     */
    inline CreateImageResult& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The ARN of the image.</p>
     */
    inline CreateImageResult& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the image.</p>
     */
    inline CreateImageResult& WithImageArn(const char* value) { SetImageArn(value); return *this;}

  private:

    Aws::String m_imageArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
