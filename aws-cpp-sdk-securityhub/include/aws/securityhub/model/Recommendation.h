/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SECURITYHUB_API Recommendation
  {
  public:
    Recommendation();
    Recommendation(Aws::Utils::Json::JsonView jsonValue);
    Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_textHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
