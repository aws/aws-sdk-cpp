/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about the recommended course of action to remediate the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_INSPECTOR2_API Recommendation();
    AWS_INSPECTOR2_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL address to the CVE remediation recommendations.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL address to the CVE remediation recommendations.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL address to the CVE remediation recommendations.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL address to the CVE remediation recommendations.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL address to the CVE remediation recommendations.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL address to the CVE remediation recommendations.</p>
     */
    inline Recommendation& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL address to the CVE remediation recommendations.</p>
     */
    inline Recommendation& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL address to the CVE remediation recommendations.</p>
     */
    inline Recommendation& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline Recommendation& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline Recommendation& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline Recommendation& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
