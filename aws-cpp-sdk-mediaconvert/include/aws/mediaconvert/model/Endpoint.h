/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Describes an account-specific API endpoint.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_MEDIACONVERT_API Endpoint();
    AWS_MEDIACONVERT_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * URL of endpoint
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * URL of endpoint
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * URL of endpoint
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * URL of endpoint
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * URL of endpoint
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * URL of endpoint
     */
    inline Endpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * URL of endpoint
     */
    inline Endpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * URL of endpoint
     */
    inline Endpoint& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
