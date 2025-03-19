/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/AnalysisSchemeStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeAnalysisSchemes</code> request. Contains the
   * analysis schemes configured for the domain specified in the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAnalysisSchemesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeAnalysisSchemesResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeAnalysisSchemesResult() = default;
    AWS_CLOUDSEARCH_API DescribeAnalysisSchemesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeAnalysisSchemesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The analysis scheme descriptions.</p>
     */
    inline const Aws::Vector<AnalysisSchemeStatus>& GetAnalysisSchemes() const { return m_analysisSchemes; }
    template<typename AnalysisSchemesT = Aws::Vector<AnalysisSchemeStatus>>
    void SetAnalysisSchemes(AnalysisSchemesT&& value) { m_analysisSchemesHasBeenSet = true; m_analysisSchemes = std::forward<AnalysisSchemesT>(value); }
    template<typename AnalysisSchemesT = Aws::Vector<AnalysisSchemeStatus>>
    DescribeAnalysisSchemesResult& WithAnalysisSchemes(AnalysisSchemesT&& value) { SetAnalysisSchemes(std::forward<AnalysisSchemesT>(value)); return *this;}
    template<typename AnalysisSchemesT = AnalysisSchemeStatus>
    DescribeAnalysisSchemesResult& AddAnalysisSchemes(AnalysisSchemesT&& value) { m_analysisSchemesHasBeenSet = true; m_analysisSchemes.emplace_back(std::forward<AnalysisSchemesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAnalysisSchemesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisSchemeStatus> m_analysisSchemes;
    bool m_analysisSchemesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
