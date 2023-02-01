/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an image that is uploaded to IoT SiteWise and available at a
   * URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ImageLocation">AWS
   * API Reference</a></p>
   */
  class ImageLocation
  {
  public:
    AWS_IOTSITEWISE_API ImageLocation();
    AWS_IOTSITEWISE_API ImageLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ImageLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the image.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the image.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the image.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the image.</p>
     */
    inline ImageLocation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the image.</p>
     */
    inline ImageLocation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the image.</p>
     */
    inline ImageLocation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The URL where the image is available. The URL is valid for 15 minutes so that
     * you can view and download the image</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL where the image is available. The URL is valid for 15 minutes so that
     * you can view and download the image</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL where the image is available. The URL is valid for 15 minutes so that
     * you can view and download the image</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL where the image is available. The URL is valid for 15 minutes so that
     * you can view and download the image</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL where the image is available. The URL is valid for 15 minutes so that
     * you can view and download the image</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL where the image is available. The URL is valid for 15 minutes so that
     * you can view and download the image</p>
     */
    inline ImageLocation& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL where the image is available. The URL is valid for 15 minutes so that
     * you can view and download the image</p>
     */
    inline ImageLocation& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL where the image is available. The URL is valid for 15 minutes so that
     * you can view and download the image</p>
     */
    inline ImageLocation& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
