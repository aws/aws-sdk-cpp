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
  class CreateModelQualityJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API CreateModelQualityJobDefinitionResult();
    AWS_SAGEMAKER_API CreateModelQualityJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateModelQualityJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the model quality monitoring job.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality monitoring job.</p>
     */
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality monitoring job.</p>
     */
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality monitoring job.</p>
     */
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionResult& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionResult& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionResult& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}

  private:

    Aws::String m_jobDefinitionArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
