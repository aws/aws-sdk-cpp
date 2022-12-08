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
   * <p>Provides information about the output configuration for the compiled
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobCompiledOutputConfig">AWS
   * API Reference</a></p>
   */
  class RecommendationJobCompiledOutputConfig
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobCompiledOutputConfig();
    AWS_SAGEMAKER_API RecommendationJobCompiledOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobCompiledOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the Amazon S3 bucket where you want SageMaker to store the
     * compiled model artifacts.</p>
     */
    inline const Aws::String& GetS3OutputUri() const{ return m_s3OutputUri; }

    /**
     * <p>Identifies the Amazon S3 bucket where you want SageMaker to store the
     * compiled model artifacts.</p>
     */
    inline bool S3OutputUriHasBeenSet() const { return m_s3OutputUriHasBeenSet; }

    /**
     * <p>Identifies the Amazon S3 bucket where you want SageMaker to store the
     * compiled model artifacts.</p>
     */
    inline void SetS3OutputUri(const Aws::String& value) { m_s3OutputUriHasBeenSet = true; m_s3OutputUri = value; }

    /**
     * <p>Identifies the Amazon S3 bucket where you want SageMaker to store the
     * compiled model artifacts.</p>
     */
    inline void SetS3OutputUri(Aws::String&& value) { m_s3OutputUriHasBeenSet = true; m_s3OutputUri = std::move(value); }

    /**
     * <p>Identifies the Amazon S3 bucket where you want SageMaker to store the
     * compiled model artifacts.</p>
     */
    inline void SetS3OutputUri(const char* value) { m_s3OutputUriHasBeenSet = true; m_s3OutputUri.assign(value); }

    /**
     * <p>Identifies the Amazon S3 bucket where you want SageMaker to store the
     * compiled model artifacts.</p>
     */
    inline RecommendationJobCompiledOutputConfig& WithS3OutputUri(const Aws::String& value) { SetS3OutputUri(value); return *this;}

    /**
     * <p>Identifies the Amazon S3 bucket where you want SageMaker to store the
     * compiled model artifacts.</p>
     */
    inline RecommendationJobCompiledOutputConfig& WithS3OutputUri(Aws::String&& value) { SetS3OutputUri(std::move(value)); return *this;}

    /**
     * <p>Identifies the Amazon S3 bucket where you want SageMaker to store the
     * compiled model artifacts.</p>
     */
    inline RecommendationJobCompiledOutputConfig& WithS3OutputUri(const char* value) { SetS3OutputUri(value); return *this;}

  private:

    Aws::String m_s3OutputUri;
    bool m_s3OutputUriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
