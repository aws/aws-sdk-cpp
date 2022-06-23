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
   * <p>The optional configuration for a server that serves segments. Use this if you
   * want the segment delivery server to be different from the source location
   * server. For example, you can configure your source location server to be an
   * origination server, such as MediaPackage, and the segment delivery server to be
   * a content delivery network (CDN), such as CloudFront. If you don't specify a
   * segment delivery server, then the source location server is used.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DefaultSegmentDeliveryConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API DefaultSegmentDeliveryConfiguration
  {
  public:
    DefaultSegmentDeliveryConfiguration();
    DefaultSegmentDeliveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DefaultSegmentDeliveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline const Aws::String& GetBaseUrl() const{ return m_baseUrl; }

    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }

    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline void SetBaseUrl(const Aws::String& value) { m_baseUrlHasBeenSet = true; m_baseUrl = value; }

    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline void SetBaseUrl(Aws::String&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::move(value); }

    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline void SetBaseUrl(const char* value) { m_baseUrlHasBeenSet = true; m_baseUrl.assign(value); }

    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline DefaultSegmentDeliveryConfiguration& WithBaseUrl(const Aws::String& value) { SetBaseUrl(value); return *this;}

    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline DefaultSegmentDeliveryConfiguration& WithBaseUrl(Aws::String&& value) { SetBaseUrl(std::move(value)); return *this;}

    /**
     * <p>The hostname of the server that will be used to serve segments. This string
     * must include the protocol, such as <b>https://</b>.</p>
     */
    inline DefaultSegmentDeliveryConfiguration& WithBaseUrl(const char* value) { SetBaseUrl(value); return *this;}

  private:

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
