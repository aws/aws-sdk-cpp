/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The segment delivery configuration settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SegmentDeliveryConfiguration">AWS
   * API Reference</a></p>
   */
  class SegmentDeliveryConfiguration
  {
  public:
    AWS_MEDIATAILOR_API SegmentDeliveryConfiguration();
    AWS_MEDIATAILOR_API SegmentDeliveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SegmentDeliveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline const Aws::String& GetBaseUrl() const{ return m_baseUrl; }

    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }

    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline void SetBaseUrl(const Aws::String& value) { m_baseUrlHasBeenSet = true; m_baseUrl = value; }

    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline void SetBaseUrl(Aws::String&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::move(value); }

    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline void SetBaseUrl(const char* value) { m_baseUrlHasBeenSet = true; m_baseUrl.assign(value); }

    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline SegmentDeliveryConfiguration& WithBaseUrl(const Aws::String& value) { SetBaseUrl(value); return *this;}

    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline SegmentDeliveryConfiguration& WithBaseUrl(Aws::String&& value) { SetBaseUrl(std::move(value)); return *this;}

    /**
     * <p>The base URL of the host or path of the segment delivery server that you're
     * using to serve segments. This is typically a content delivery network (CDN). The
     * URL can be absolute or relative. To use an absolute URL include the protocol,
     * such as <code>https://example.com/some/path</code>. To use a relative URL
     * specify the relative path, such as <code>/some/path*</code>.</p>
     */
    inline SegmentDeliveryConfiguration& WithBaseUrl(const char* value) { SetBaseUrl(value); return *this;}


    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline SegmentDeliveryConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline SegmentDeliveryConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier used to distinguish between multiple segment delivery
     * configurations in a source location.</p>
     */
    inline SegmentDeliveryConfiguration& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
