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
    AWS_ECRPUBLIC_API ImageIdentifier();
    AWS_ECRPUBLIC_API ImageIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API ImageIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageIdentifier& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageIdentifier& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageIdentifier& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}


    /**
     * <p>The tag used for the image.</p>
     */
    inline const Aws::String& GetImageTag() const{ return m_imageTag; }

    /**
     * <p>The tag used for the image.</p>
     */
    inline bool ImageTagHasBeenSet() const { return m_imageTagHasBeenSet; }

    /**
     * <p>The tag used for the image.</p>
     */
    inline void SetImageTag(const Aws::String& value) { m_imageTagHasBeenSet = true; m_imageTag = value; }

    /**
     * <p>The tag used for the image.</p>
     */
    inline void SetImageTag(Aws::String&& value) { m_imageTagHasBeenSet = true; m_imageTag = std::move(value); }

    /**
     * <p>The tag used for the image.</p>
     */
    inline void SetImageTag(const char* value) { m_imageTagHasBeenSet = true; m_imageTag.assign(value); }

    /**
     * <p>The tag used for the image.</p>
     */
    inline ImageIdentifier& WithImageTag(const Aws::String& value) { SetImageTag(value); return *this;}

    /**
     * <p>The tag used for the image.</p>
     */
    inline ImageIdentifier& WithImageTag(Aws::String&& value) { SetImageTag(std::move(value)); return *this;}

    /**
     * <p>The tag used for the image.</p>
     */
    inline ImageIdentifier& WithImageTag(const char* value) { SetImageTag(value); return *this;}

  private:

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::String m_imageTag;
    bool m_imageTagHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
