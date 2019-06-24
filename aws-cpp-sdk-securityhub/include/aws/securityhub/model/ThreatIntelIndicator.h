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
#include <aws/securityhub/model/ThreatIntelIndicatorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ThreatIntelIndicatorCategory.h>
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
   * <p>Details about the threat intel related to a finding.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ThreatIntelIndicator">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API ThreatIntelIndicator
  {
  public:
    ThreatIntelIndicator();
    ThreatIntelIndicator(Aws::Utils::Json::JsonView jsonValue);
    ThreatIntelIndicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of a threat intel indicator.</p>
     */
    inline const ThreatIntelIndicatorType& GetType() const{ return m_type; }

    /**
     * <p>The type of a threat intel indicator.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of a threat intel indicator.</p>
     */
    inline void SetType(const ThreatIntelIndicatorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of a threat intel indicator.</p>
     */
    inline void SetType(ThreatIntelIndicatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of a threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithType(const ThreatIntelIndicatorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of a threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithType(ThreatIntelIndicatorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The value of a threat intel indicator.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of a threat intel indicator.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a threat intel indicator.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a threat intel indicator.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of a threat intel indicator.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of a threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of a threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The category of a threat intel indicator.</p>
     */
    inline const ThreatIntelIndicatorCategory& GetCategory() const{ return m_category; }

    /**
     * <p>The category of a threat intel indicator.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of a threat intel indicator.</p>
     */
    inline void SetCategory(const ThreatIntelIndicatorCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of a threat intel indicator.</p>
     */
    inline void SetCategory(ThreatIntelIndicatorCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of a threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithCategory(const ThreatIntelIndicatorCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of a threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithCategory(ThreatIntelIndicatorCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The date and time when the most recent instance of a threat intel indicator
     * was observed.</p>
     */
    inline const Aws::String& GetLastObservedAt() const{ return m_lastObservedAt; }

    /**
     * <p>The date and time when the most recent instance of a threat intel indicator
     * was observed.</p>
     */
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }

    /**
     * <p>The date and time when the most recent instance of a threat intel indicator
     * was observed.</p>
     */
    inline void SetLastObservedAt(const Aws::String& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }

    /**
     * <p>The date and time when the most recent instance of a threat intel indicator
     * was observed.</p>
     */
    inline void SetLastObservedAt(Aws::String&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }

    /**
     * <p>The date and time when the most recent instance of a threat intel indicator
     * was observed.</p>
     */
    inline void SetLastObservedAt(const char* value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.assign(value); }

    /**
     * <p>The date and time when the most recent instance of a threat intel indicator
     * was observed.</p>
     */
    inline ThreatIntelIndicator& WithLastObservedAt(const Aws::String& value) { SetLastObservedAt(value); return *this;}

    /**
     * <p>The date and time when the most recent instance of a threat intel indicator
     * was observed.</p>
     */
    inline ThreatIntelIndicator& WithLastObservedAt(Aws::String&& value) { SetLastObservedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the most recent instance of a threat intel indicator
     * was observed.</p>
     */
    inline ThreatIntelIndicator& WithLastObservedAt(const char* value) { SetLastObservedAt(value); return *this;}


    /**
     * <p>The source of the threat intel indicator.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source of the threat intel indicator.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the threat intel indicator.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the threat intel indicator.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the threat intel indicator.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source of the threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source of the threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intel indicator.</p>
     */
    inline const Aws::String& GetSourceUrl() const{ return m_sourceUrl; }

    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intel indicator.</p>
     */
    inline bool SourceUrlHasBeenSet() const { return m_sourceUrlHasBeenSet; }

    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intel indicator.</p>
     */
    inline void SetSourceUrl(const Aws::String& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = value; }

    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intel indicator.</p>
     */
    inline void SetSourceUrl(Aws::String&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = std::move(value); }

    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intel indicator.</p>
     */
    inline void SetSourceUrl(const char* value) { m_sourceUrlHasBeenSet = true; m_sourceUrl.assign(value); }

    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithSourceUrl(const Aws::String& value) { SetSourceUrl(value); return *this;}

    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithSourceUrl(Aws::String&& value) { SetSourceUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intel indicator.</p>
     */
    inline ThreatIntelIndicator& WithSourceUrl(const char* value) { SetSourceUrl(value); return *this;}

  private:

    ThreatIntelIndicatorType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    ThreatIntelIndicatorCategory m_category;
    bool m_categoryHasBeenSet;

    Aws::String m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_sourceUrl;
    bool m_sourceUrlHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
