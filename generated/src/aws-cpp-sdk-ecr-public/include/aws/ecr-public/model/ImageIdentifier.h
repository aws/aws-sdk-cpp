/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>An object with identifying information for an Amazon ECR image.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ImageIdentifier">AWS
   * API Reference</a></p>
   */
  class ImageIdentifier
  {
  public:
    AWS_ECRPUBLIC_API ImageIdentifier() = default;
    AWS_ECRPUBLIC_API ImageIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API ImageIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The tag that's used for the image.</p>
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
} // namespace ECRPublic
} // namespace Aws
