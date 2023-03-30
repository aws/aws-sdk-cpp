/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Details about the recommended course of action to remediate the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/RemediationRecommendation">AWS
   * API Reference</a></p>
   */
  class RemediationRecommendation
  {
  public:
    AWS_IMAGEBUILDER_API RemediationRecommendation();
    AWS_IMAGEBUILDER_API RemediationRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API RemediationRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline RemediationRecommendation& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline RemediationRecommendation& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The recommended course of action to remediate the finding.</p>
     */
    inline RemediationRecommendation& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>A link to more information about the recommended remediation for this
     * vulnerability.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>A link to more information about the recommended remediation for this
     * vulnerability.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>A link to more information about the recommended remediation for this
     * vulnerability.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>A link to more information about the recommended remediation for this
     * vulnerability.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>A link to more information about the recommended remediation for this
     * vulnerability.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>A link to more information about the recommended remediation for this
     * vulnerability.</p>
     */
    inline RemediationRecommendation& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>A link to more information about the recommended remediation for this
     * vulnerability.</p>
     */
    inline RemediationRecommendation& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>A link to more information about the recommended remediation for this
     * vulnerability.</p>
     */
    inline RemediationRecommendation& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
