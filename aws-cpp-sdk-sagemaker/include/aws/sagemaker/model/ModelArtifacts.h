/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides information about the location that is configured for storing model
   * artifacts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelArtifacts">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ModelArtifacts
  {
  public:
    ModelArtifacts();
    ModelArtifacts(Aws::Utils::Json::JsonView jsonValue);
    ModelArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline const Aws::String& GetS3ModelArtifacts() const{ return m_s3ModelArtifacts; }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline bool S3ModelArtifactsHasBeenSet() const { return m_s3ModelArtifactsHasBeenSet; }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline void SetS3ModelArtifacts(const Aws::String& value) { m_s3ModelArtifactsHasBeenSet = true; m_s3ModelArtifacts = value; }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline void SetS3ModelArtifacts(Aws::String&& value) { m_s3ModelArtifactsHasBeenSet = true; m_s3ModelArtifacts = std::move(value); }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline void SetS3ModelArtifacts(const char* value) { m_s3ModelArtifactsHasBeenSet = true; m_s3ModelArtifacts.assign(value); }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline ModelArtifacts& WithS3ModelArtifacts(const Aws::String& value) { SetS3ModelArtifacts(value); return *this;}

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline ModelArtifacts& WithS3ModelArtifacts(Aws::String&& value) { SetS3ModelArtifacts(std::move(value)); return *this;}

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline ModelArtifacts& WithS3ModelArtifacts(const char* value) { SetS3ModelArtifacts(value); return *this;}

  private:

    Aws::String m_s3ModelArtifacts;
    bool m_s3ModelArtifactsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
