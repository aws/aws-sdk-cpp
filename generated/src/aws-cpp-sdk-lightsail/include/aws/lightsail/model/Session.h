/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a web-based, remote graphical user interface (GUI), NICE DCV
   * session. The session is used to access a virtual computer’s operating system or
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Session">AWS
   * API Reference</a></p>
   */
  class Session
  {
  public:
    AWS_LIGHTSAIL_API Session();
    AWS_LIGHTSAIL_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The session name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The session name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The session name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The session name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The session name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The session name.</p>
     */
    inline Session& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The session name.</p>
     */
    inline Session& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The session name.</p>
     */
    inline Session& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The session URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The session URL.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The session URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The session URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The session URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The session URL.</p>
     */
    inline Session& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The session URL.</p>
     */
    inline Session& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The session URL.</p>
     */
    inline Session& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>When true, this Boolean value indicates the primary session for the specified
     * resource.</p>
     */
    inline bool GetIsPrimary() const{ return m_isPrimary; }

    /**
     * <p>When true, this Boolean value indicates the primary session for the specified
     * resource.</p>
     */
    inline bool IsPrimaryHasBeenSet() const { return m_isPrimaryHasBeenSet; }

    /**
     * <p>When true, this Boolean value indicates the primary session for the specified
     * resource.</p>
     */
    inline void SetIsPrimary(bool value) { m_isPrimaryHasBeenSet = true; m_isPrimary = value; }

    /**
     * <p>When true, this Boolean value indicates the primary session for the specified
     * resource.</p>
     */
    inline Session& WithIsPrimary(bool value) { SetIsPrimary(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    bool m_isPrimary;
    bool m_isPrimaryHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
