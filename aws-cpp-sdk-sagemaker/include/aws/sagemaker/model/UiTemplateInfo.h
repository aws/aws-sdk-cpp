/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Container for user interface template information.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UiTemplateInfo">AWS
   * API Reference</a></p>
   */
  class UiTemplateInfo
  {
  public:
    AWS_SAGEMAKER_API UiTemplateInfo();
    AWS_SAGEMAKER_API UiTemplateInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UiTemplateInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL for the user interface template.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL for the user interface template.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL for the user interface template.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL for the user interface template.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL for the user interface template.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL for the user interface template.</p>
     */
    inline UiTemplateInfo& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL for the user interface template.</p>
     */
    inline UiTemplateInfo& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the user interface template.</p>
     */
    inline UiTemplateInfo& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline const Aws::String& GetContentSha256() const{ return m_contentSha256; }

    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline bool ContentSha256HasBeenSet() const { return m_contentSha256HasBeenSet; }

    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline void SetContentSha256(const Aws::String& value) { m_contentSha256HasBeenSet = true; m_contentSha256 = value; }

    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline void SetContentSha256(Aws::String&& value) { m_contentSha256HasBeenSet = true; m_contentSha256 = std::move(value); }

    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline void SetContentSha256(const char* value) { m_contentSha256HasBeenSet = true; m_contentSha256.assign(value); }

    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline UiTemplateInfo& WithContentSha256(const Aws::String& value) { SetContentSha256(value); return *this;}

    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline UiTemplateInfo& WithContentSha256(Aws::String&& value) { SetContentSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA-256 digest of the contents of the template.</p>
     */
    inline UiTemplateInfo& WithContentSha256(const char* value) { SetContentSha256(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_contentSha256;
    bool m_contentSha256HasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
