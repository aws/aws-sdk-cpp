/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>An object with identifying information for an image in an Amazon ECR
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageIdentifier">AWS
   * API Reference</a></p>
   */
  class ImageIdentifier
  {
  public:
    AWS_ECR_API ImageIdentifier() = default;
    AWS_ECR_API ImageIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    ImageIdentifier& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag used for the image.</p>
     */
    inline const Aws::String& GetImageTag() const { return m_imageTag; }
    inline bool ImageTagHasBeenSet() const { return m_imageTagHasBeenSet; }
    template<typename ImageTagT = Aws::String>
    void SetImageTag(ImageTagT&& value) { m_imageTagHasBeenSet = true; m_imageTag = std::forward<ImageTagT>(value); }
    template<typename ImageTagT = Aws::String>
    ImageIdentifier& WithImageTag(ImageTagT&& value) { SetImageTag(std::forward<ImageTagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::String m_imageTag;
    bool m_imageTagHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
