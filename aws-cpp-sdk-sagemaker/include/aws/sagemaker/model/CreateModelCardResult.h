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
  class CreateModelCardResult
  {
  public:
    AWS_SAGEMAKER_API CreateModelCardResult();
    AWS_SAGEMAKER_API CreateModelCardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateModelCardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the successfully created model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const{ return m_modelCardArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the successfully created model card.</p>
     */
    inline void SetModelCardArn(const Aws::String& value) { m_modelCardArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the successfully created model card.</p>
     */
    inline void SetModelCardArn(Aws::String&& value) { m_modelCardArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the successfully created model card.</p>
     */
    inline void SetModelCardArn(const char* value) { m_modelCardArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the successfully created model card.</p>
     */
    inline CreateModelCardResult& WithModelCardArn(const Aws::String& value) { SetModelCardArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the successfully created model card.</p>
     */
    inline CreateModelCardResult& WithModelCardArn(Aws::String&& value) { SetModelCardArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the successfully created model card.</p>
     */
    inline CreateModelCardResult& WithModelCardArn(const char* value) { SetModelCardArn(value); return *this;}

  private:

    Aws::String m_modelCardArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
