/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The applied image configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ImageConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API ImageConfiguration();
    AWS_EMRSERVERLESS_API ImageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API ImageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image URI.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }

    /**
     * <p>The image URI.</p>
     */
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }

    /**
     * <p>The image URI.</p>
     */
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }

    /**
     * <p>The image URI.</p>
     */
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }

    /**
     * <p>The image URI.</p>
     */
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }

    /**
     * <p>The image URI.</p>
     */
    inline ImageConfiguration& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}

    /**
     * <p>The image URI.</p>
     */
    inline ImageConfiguration& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}

    /**
     * <p>The image URI.</p>
     */
    inline ImageConfiguration& WithImageUri(const char* value) { SetImageUri(value); return *this;}


    /**
     * <p>The SHA256 digest of the image URI. This indicates which specific image the
     * application is configured for. The image digest doesn't exist until an
     * application has started.</p>
     */
    inline const Aws::String& GetResolvedImageDigest() const{ return m_resolvedImageDigest; }

    /**
     * <p>The SHA256 digest of the image URI. This indicates which specific image the
     * application is configured for. The image digest doesn't exist until an
     * application has started.</p>
     */
    inline bool ResolvedImageDigestHasBeenSet() const { return m_resolvedImageDigestHasBeenSet; }

    /**
     * <p>The SHA256 digest of the image URI. This indicates which specific image the
     * application is configured for. The image digest doesn't exist until an
     * application has started.</p>
     */
    inline void SetResolvedImageDigest(const Aws::String& value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest = value; }

    /**
     * <p>The SHA256 digest of the image URI. This indicates which specific image the
     * application is configured for. The image digest doesn't exist until an
     * application has started.</p>
     */
    inline void SetResolvedImageDigest(Aws::String&& value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest = std::move(value); }

    /**
     * <p>The SHA256 digest of the image URI. This indicates which specific image the
     * application is configured for. The image digest doesn't exist until an
     * application has started.</p>
     */
    inline void SetResolvedImageDigest(const char* value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest.assign(value); }

    /**
     * <p>The SHA256 digest of the image URI. This indicates which specific image the
     * application is configured for. The image digest doesn't exist until an
     * application has started.</p>
     */
    inline ImageConfiguration& WithResolvedImageDigest(const Aws::String& value) { SetResolvedImageDigest(value); return *this;}

    /**
     * <p>The SHA256 digest of the image URI. This indicates which specific image the
     * application is configured for. The image digest doesn't exist until an
     * application has started.</p>
     */
    inline ImageConfiguration& WithResolvedImageDigest(Aws::String&& value) { SetResolvedImageDigest(std::move(value)); return *this;}

    /**
     * <p>The SHA256 digest of the image URI. This indicates which specific image the
     * application is configured for. The image digest doesn't exist until an
     * application has started.</p>
     */
    inline ImageConfiguration& WithResolvedImageDigest(const char* value) { SetResolvedImageDigest(value); return *this;}

  private:

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    Aws::String m_resolvedImageDigest;
    bool m_resolvedImageDigestHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
