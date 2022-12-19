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
  class CreateImageVersionResult
  {
  public:
    AWS_SAGEMAKER_API CreateImageVersionResult();
    AWS_SAGEMAKER_API CreateImageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateImageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the image version.</p>
     */
    inline const Aws::String& GetImageVersionArn() const{ return m_imageVersionArn; }

    /**
     * <p>The ARN of the image version.</p>
     */
    inline void SetImageVersionArn(const Aws::String& value) { m_imageVersionArn = value; }

    /**
     * <p>The ARN of the image version.</p>
     */
    inline void SetImageVersionArn(Aws::String&& value) { m_imageVersionArn = std::move(value); }

    /**
     * <p>The ARN of the image version.</p>
     */
    inline void SetImageVersionArn(const char* value) { m_imageVersionArn.assign(value); }

    /**
     * <p>The ARN of the image version.</p>
     */
    inline CreateImageVersionResult& WithImageVersionArn(const Aws::String& value) { SetImageVersionArn(value); return *this;}

    /**
     * <p>The ARN of the image version.</p>
     */
    inline CreateImageVersionResult& WithImageVersionArn(Aws::String&& value) { SetImageVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the image version.</p>
     */
    inline CreateImageVersionResult& WithImageVersionArn(const char* value) { SetImageVersionArn(value); return *this;}

  private:

    Aws::String m_imageVersionArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
