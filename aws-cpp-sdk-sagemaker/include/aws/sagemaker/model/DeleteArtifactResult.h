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
  class DeleteArtifactResult
  {
  public:
    AWS_SAGEMAKER_API DeleteArtifactResult();
    AWS_SAGEMAKER_API DeleteArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DeleteArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline const Aws::String& GetArtifactArn() const{ return m_artifactArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline void SetArtifactArn(const Aws::String& value) { m_artifactArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline void SetArtifactArn(Aws::String&& value) { m_artifactArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline void SetArtifactArn(const char* value) { m_artifactArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline DeleteArtifactResult& WithArtifactArn(const Aws::String& value) { SetArtifactArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline DeleteArtifactResult& WithArtifactArn(Aws::String&& value) { SetArtifactArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline DeleteArtifactResult& WithArtifactArn(const char* value) { SetArtifactArn(value); return *this;}

  private:

    Aws::String m_artifactArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
