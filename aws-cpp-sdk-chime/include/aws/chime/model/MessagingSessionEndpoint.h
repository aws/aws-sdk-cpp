/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The endpoint of a meeting session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/MessagingSessionEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API MessagingSessionEndpoint
  {
  public:
    MessagingSessionEndpoint();
    MessagingSessionEndpoint(Aws::Utils::Json::JsonView jsonValue);
    MessagingSessionEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of a meeting session endpoint.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of a meeting session endpoint.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL of a meeting session endpoint.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of a meeting session endpoint.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL of a meeting session endpoint.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of a meeting session endpoint.</p>
     */
    inline MessagingSessionEndpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of a meeting session endpoint.</p>
     */
    inline MessagingSessionEndpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of a meeting session endpoint.</p>
     */
    inline MessagingSessionEndpoint& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
