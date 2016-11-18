/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/LocalizedText.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API LocalizeTextRequest : public InspectorRequest
  {
  public:
    LocalizeTextRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A list of textual identifiers.</p>
     */
    inline const Aws::Vector<LocalizedText>& GetLocalizedTexts() const{ return m_localizedTexts; }

    /**
     * <p>A list of textual identifiers.</p>
     */
    inline void SetLocalizedTexts(const Aws::Vector<LocalizedText>& value) { m_localizedTextsHasBeenSet = true; m_localizedTexts = value; }

    /**
     * <p>A list of textual identifiers.</p>
     */
    inline void SetLocalizedTexts(Aws::Vector<LocalizedText>&& value) { m_localizedTextsHasBeenSet = true; m_localizedTexts = value; }

    /**
     * <p>A list of textual identifiers.</p>
     */
    inline LocalizeTextRequest& WithLocalizedTexts(const Aws::Vector<LocalizedText>& value) { SetLocalizedTexts(value); return *this;}

    /**
     * <p>A list of textual identifiers.</p>
     */
    inline LocalizeTextRequest& WithLocalizedTexts(Aws::Vector<LocalizedText>&& value) { SetLocalizedTexts(value); return *this;}

    /**
     * <p>A list of textual identifiers.</p>
     */
    inline LocalizeTextRequest& AddLocalizedTexts(const LocalizedText& value) { m_localizedTextsHasBeenSet = true; m_localizedTexts.push_back(value); return *this; }

    /**
     * <p>A list of textual identifiers.</p>
     */
    inline LocalizeTextRequest& AddLocalizedTexts(LocalizedText&& value) { m_localizedTextsHasBeenSet = true; m_localizedTexts.push_back(value); return *this; }

    /**
     * <p>The locale that you want to translate a textual identifier into.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale that you want to translate a textual identifier into.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale that you want to translate a textual identifier into.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale that you want to translate a textual identifier into.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>The locale that you want to translate a textual identifier into.</p>
     */
    inline LocalizeTextRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale that you want to translate a textual identifier into.</p>
     */
    inline LocalizeTextRequest& WithLocale(Aws::String&& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale that you want to translate a textual identifier into.</p>
     */
    inline LocalizeTextRequest& WithLocale(const char* value) { SetLocale(value); return *this;}

  private:
    Aws::Vector<LocalizedText> m_localizedTexts;
    bool m_localizedTextsHasBeenSet;
    Aws::String m_locale;
    bool m_localeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
