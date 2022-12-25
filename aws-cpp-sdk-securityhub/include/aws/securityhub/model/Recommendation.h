/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A recommendation on how to remediate the issue identified in a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_SECURITYHUB_API Recommendation();
    AWS_SECURITYHUB_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the recommended steps to take to remediate an issue identified in a
     * finding.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Describes the recommended steps to take to remediate an issue identified in a
     * finding.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Describes the recommended steps to take to remediate an issue identified in a
     * finding.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Describes the recommended steps to take to remediate an issue identified in a
     * finding.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Describes the recommended steps to take to remediate an issue identified in a
     * finding.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Describes the recommended steps to take to remediate an issue identified in a
     * finding.</p>
     */
    inline Recommendation& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Describes the recommended steps to take to remediate an issue identified in a
     * finding.</p>
     */
    inline Recommendation& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Describes the recommended steps to take to remediate an issue identified in a
     * finding.</p>
     */
    inline Recommendation& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>A URL to a page or site that contains information about how to remediate a
     * finding.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>A URL to a page or site that contains information about how to remediate a
     * finding.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>A URL to a page or site that contains information about how to remediate a
     * finding.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>A URL to a page or site that contains information about how to remediate a
     * finding.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>A URL to a page or site that contains information about how to remediate a
     * finding.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>A URL to a page or site that contains information about how to remediate a
     * finding.</p>
     */
    inline Recommendation& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>A URL to a page or site that contains information about how to remediate a
     * finding.</p>
     */
    inline Recommendation& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>A URL to a page or site that contains information about how to remediate a
     * finding.</p>
     */
    inline Recommendation& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
