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
   * <p>Provides information to verify the integrity of stored model artifacts.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDigests">AWS
   * API Reference</a></p>
   */
  class ModelDigests
  {
  public:
    AWS_SAGEMAKER_API ModelDigests();
    AWS_SAGEMAKER_API ModelDigests(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDigests& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides a hash value that uniquely identifies the stored model
     * artifacts.</p>
     */
    inline const Aws::String& GetArtifactDigest() const{ return m_artifactDigest; }

    /**
     * <p>Provides a hash value that uniquely identifies the stored model
     * artifacts.</p>
     */
    inline bool ArtifactDigestHasBeenSet() const { return m_artifactDigestHasBeenSet; }

    /**
     * <p>Provides a hash value that uniquely identifies the stored model
     * artifacts.</p>
     */
    inline void SetArtifactDigest(const Aws::String& value) { m_artifactDigestHasBeenSet = true; m_artifactDigest = value; }

    /**
     * <p>Provides a hash value that uniquely identifies the stored model
     * artifacts.</p>
     */
    inline void SetArtifactDigest(Aws::String&& value) { m_artifactDigestHasBeenSet = true; m_artifactDigest = std::move(value); }

    /**
     * <p>Provides a hash value that uniquely identifies the stored model
     * artifacts.</p>
     */
    inline void SetArtifactDigest(const char* value) { m_artifactDigestHasBeenSet = true; m_artifactDigest.assign(value); }

    /**
     * <p>Provides a hash value that uniquely identifies the stored model
     * artifacts.</p>
     */
    inline ModelDigests& WithArtifactDigest(const Aws::String& value) { SetArtifactDigest(value); return *this;}

    /**
     * <p>Provides a hash value that uniquely identifies the stored model
     * artifacts.</p>
     */
    inline ModelDigests& WithArtifactDigest(Aws::String&& value) { SetArtifactDigest(std::move(value)); return *this;}

    /**
     * <p>Provides a hash value that uniquely identifies the stored model
     * artifacts.</p>
     */
    inline ModelDigests& WithArtifactDigest(const char* value) { SetArtifactDigest(value); return *this;}

  private:

    Aws::String m_artifactDigest;
    bool m_artifactDigestHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
