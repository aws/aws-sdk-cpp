/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AnalysisScheme
  {
  public:
    AWS_CLOUDSEARCH_API AnalysisScheme() = default;
    AWS_CLOUDSEARCH_API AnalysisScheme(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API AnalysisScheme& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetAnalysisSchemeName() const { return m_analysisSchemeName; }
    inline bool AnalysisSchemeNameHasBeenSet() const { return m_analysisSchemeNameHasBeenSet; }
    template<typename AnalysisSchemeNameT = Aws::String>
    void SetAnalysisSchemeName(AnalysisSchemeNameT&& value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName = std::forward<AnalysisSchemeNameT>(value); }
    template<typename AnalysisSchemeNameT = Aws::String>
    AnalysisScheme& WithAnalysisSchemeName(AnalysisSchemeNameT&& value) { SetAnalysisSchemeName(std::forward<AnalysisSchemeNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline AnalysisSchemeLanguage GetAnalysisSchemeLanguage() const { return m_analysisSchemeLanguage; }
    inline bool AnalysisSchemeLanguageHasBeenSet() const { return m_analysisSchemeLanguageHasBeenSet; }
    inline void SetAnalysisSchemeLanguage(AnalysisSchemeLanguage value) { m_analysisSchemeLanguageHasBeenSet = true; m_analysisSchemeLanguage = value; }
    inline AnalysisScheme& WithAnalysisSchemeLanguage(AnalysisSchemeLanguage value) { SetAnalysisSchemeLanguage(value); return *this;}
    ///@}

    ///@{
    
    inline const AnalysisOptions& GetAnalysisOptions() const { return m_analysisOptions; }
    inline bool AnalysisOptionsHasBeenSet() const { return m_analysisOptionsHasBeenSet; }
    template<typename AnalysisOptionsT = AnalysisOptions>
    void SetAnalysisOptions(AnalysisOptionsT&& value) { m_analysisOptionsHasBeenSet = true; m_analysisOptions = std::forward<AnalysisOptionsT>(value); }
    template<typename AnalysisOptionsT = AnalysisOptions>
    AnalysisScheme& WithAnalysisOptions(AnalysisOptionsT&& value) { SetAnalysisOptions(std::forward<AnalysisOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_analysisSchemeName;
    bool m_analysisSchemeNameHasBeenSet = false;

    AnalysisSchemeLanguage m_analysisSchemeLanguage{AnalysisSchemeLanguage::NOT_SET};
    bool m_analysisSchemeLanguageHasBeenSet = false;

    AnalysisOptions m_analysisOptions;
    bool m_analysisOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
