/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>The structure that contains the information required to deliver a
   * notification to a customer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/NotificationDestinationConfig">AWS
   * API Reference</a></p>
   */
  class NotificationDestinationConfig
  {
  public:
    AWS_KINESISVIDEO_API NotificationDestinationConfig();
    AWS_KINESISVIDEO_API NotificationDestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API NotificationDestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline NotificationDestinationConfig& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline NotificationDestinationConfig& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The Uniform Resource Identifier (URI) that identifies where the images will
     * be delivered.</p>
     */
    inline NotificationDestinationConfig& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
