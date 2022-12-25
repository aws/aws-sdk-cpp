/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/CustomContentType.h>
#include <aws/quicksight/model/CustomContentImageScalingConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of a <code>CustomContentVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomContentConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomContentConfiguration
  {
  public:
    AWS_QUICKSIGHT_API CustomContentConfiguration();
    AWS_QUICKSIGHT_API CustomContentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomContentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline const Aws::String& GetContentUrl() const{ return m_contentUrl; }

    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline bool ContentUrlHasBeenSet() const { return m_contentUrlHasBeenSet; }

    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline void SetContentUrl(const Aws::String& value) { m_contentUrlHasBeenSet = true; m_contentUrl = value; }

    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline void SetContentUrl(Aws::String&& value) { m_contentUrlHasBeenSet = true; m_contentUrl = std::move(value); }

    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline void SetContentUrl(const char* value) { m_contentUrlHasBeenSet = true; m_contentUrl.assign(value); }

    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline CustomContentConfiguration& WithContentUrl(const Aws::String& value) { SetContentUrl(value); return *this;}

    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline CustomContentConfiguration& WithContentUrl(Aws::String&& value) { SetContentUrl(std::move(value)); return *this;}

    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline CustomContentConfiguration& WithContentUrl(const char* value) { SetContentUrl(value); return *this;}


    /**
     * <p>The content type of the custom content visual. You can use this to have the
     * visual render as an image.</p>
     */
    inline const CustomContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the custom content visual. You can use this to have the
     * visual render as an image.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the custom content visual. You can use this to have the
     * visual render as an image.</p>
     */
    inline void SetContentType(const CustomContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the custom content visual. You can use this to have the
     * visual render as an image.</p>
     */
    inline void SetContentType(CustomContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the custom content visual. You can use this to have the
     * visual render as an image.</p>
     */
    inline CustomContentConfiguration& WithContentType(const CustomContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the custom content visual. You can use this to have the
     * visual render as an image.</p>
     */
    inline CustomContentConfiguration& WithContentType(CustomContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>The sizing options for the size of the custom content visual. This structure
     * is required when the <code>ContentType</code> of the visual is
     * <code>'IMAGE'</code>.</p>
     */
    inline const CustomContentImageScalingConfiguration& GetImageScaling() const{ return m_imageScaling; }

    /**
     * <p>The sizing options for the size of the custom content visual. This structure
     * is required when the <code>ContentType</code> of the visual is
     * <code>'IMAGE'</code>.</p>
     */
    inline bool ImageScalingHasBeenSet() const { return m_imageScalingHasBeenSet; }

    /**
     * <p>The sizing options for the size of the custom content visual. This structure
     * is required when the <code>ContentType</code> of the visual is
     * <code>'IMAGE'</code>.</p>
     */
    inline void SetImageScaling(const CustomContentImageScalingConfiguration& value) { m_imageScalingHasBeenSet = true; m_imageScaling = value; }

    /**
     * <p>The sizing options for the size of the custom content visual. This structure
     * is required when the <code>ContentType</code> of the visual is
     * <code>'IMAGE'</code>.</p>
     */
    inline void SetImageScaling(CustomContentImageScalingConfiguration&& value) { m_imageScalingHasBeenSet = true; m_imageScaling = std::move(value); }

    /**
     * <p>The sizing options for the size of the custom content visual. This structure
     * is required when the <code>ContentType</code> of the visual is
     * <code>'IMAGE'</code>.</p>
     */
    inline CustomContentConfiguration& WithImageScaling(const CustomContentImageScalingConfiguration& value) { SetImageScaling(value); return *this;}

    /**
     * <p>The sizing options for the size of the custom content visual. This structure
     * is required when the <code>ContentType</code> of the visual is
     * <code>'IMAGE'</code>.</p>
     */
    inline CustomContentConfiguration& WithImageScaling(CustomContentImageScalingConfiguration&& value) { SetImageScaling(std::move(value)); return *this;}

  private:

    Aws::String m_contentUrl;
    bool m_contentUrlHasBeenSet = false;

    CustomContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    CustomContentImageScalingConfiguration m_imageScaling;
    bool m_imageScalingHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
