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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/AnalysisSchemeLanguage.h>
#include <aws/cloudsearch/model/AnalysisOptions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Configuration information for an analysis scheme. Each analysis scheme has a
   * unique name and specifies the language of the text to be processed. The
   * following options can be configured for an analysis scheme:
   * <code>Synonyms</code>, <code>Stopwords</code>, <code>StemmingDictionary</code>,
   * <code>JapaneseTokenizationDictionary</code> and
   * <code>AlgorithmicStemming</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/AnalysisScheme">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API AnalysisScheme
  {
  public:
    AnalysisScheme();
    AnalysisScheme(const Aws::Utils::Xml::XmlNode& xmlNode);
    AnalysisScheme& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetAnalysisSchemeName() const{ return m_analysisSchemeName; }

    
    inline bool AnalysisSchemeNameHasBeenSet() const { return m_analysisSchemeNameHasBeenSet; }

    
    inline void SetAnalysisSchemeName(const Aws::String& value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName = value; }

    
    inline void SetAnalysisSchemeName(Aws::String&& value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName = std::move(value); }

    
    inline void SetAnalysisSchemeName(const char* value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName.assign(value); }

    
    inline AnalysisScheme& WithAnalysisSchemeName(const Aws::String& value) { SetAnalysisSchemeName(value); return *this;}

    
    inline AnalysisScheme& WithAnalysisSchemeName(Aws::String&& value) { SetAnalysisSchemeName(std::move(value)); return *this;}

    
    inline AnalysisScheme& WithAnalysisSchemeName(const char* value) { SetAnalysisSchemeName(value); return *this;}


    
    inline const AnalysisSchemeLanguage& GetAnalysisSchemeLanguage() const{ return m_analysisSchemeLanguage; }

    
    inline bool AnalysisSchemeLanguageHasBeenSet() const { return m_analysisSchemeLanguageHasBeenSet; }

    
    inline void SetAnalysisSchemeLanguage(const AnalysisSchemeLanguage& value) { m_analysisSchemeLanguageHasBeenSet = true; m_analysisSchemeLanguage = value; }

    
    inline void SetAnalysisSchemeLanguage(AnalysisSchemeLanguage&& value) { m_analysisSchemeLanguageHasBeenSet = true; m_analysisSchemeLanguage = std::move(value); }

    
    inline AnalysisScheme& WithAnalysisSchemeLanguage(const AnalysisSchemeLanguage& value) { SetAnalysisSchemeLanguage(value); return *this;}

    
    inline AnalysisScheme& WithAnalysisSchemeLanguage(AnalysisSchemeLanguage&& value) { SetAnalysisSchemeLanguage(std::move(value)); return *this;}


    
    inline const AnalysisOptions& GetAnalysisOptions() const{ return m_analysisOptions; }

    
    inline bool AnalysisOptionsHasBeenSet() const { return m_analysisOptionsHasBeenSet; }

    
    inline void SetAnalysisOptions(const AnalysisOptions& value) { m_analysisOptionsHasBeenSet = true; m_analysisOptions = value; }

    
    inline void SetAnalysisOptions(AnalysisOptions&& value) { m_analysisOptionsHasBeenSet = true; m_analysisOptions = std::move(value); }

    
    inline AnalysisScheme& WithAnalysisOptions(const AnalysisOptions& value) { SetAnalysisOptions(value); return *this;}

    
    inline AnalysisScheme& WithAnalysisOptions(AnalysisOptions&& value) { SetAnalysisOptions(std::move(value)); return *this;}

  private:

    Aws::String m_analysisSchemeName;
    bool m_analysisSchemeNameHasBeenSet;

    AnalysisSchemeLanguage m_analysisSchemeLanguage;
    bool m_analysisSchemeLanguageHasBeenSet;

    AnalysisOptions m_analysisOptions;
    bool m_analysisOptionsHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
