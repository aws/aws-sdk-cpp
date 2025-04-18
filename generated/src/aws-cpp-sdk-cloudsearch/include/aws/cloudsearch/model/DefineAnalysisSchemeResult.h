﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/AnalysisSchemeStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
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
   * <p>The result of a <code><a>DefineAnalysisScheme</a></code> request. Contains
   * the status of the newly-configured analysis scheme.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineAnalysisSchemeResponse">AWS
   * API Reference</a></p>
   */
  class DefineAnalysisSchemeResult
  {
  public:
    AWS_CLOUDSEARCH_API DefineAnalysisSchemeResult() = default;
    AWS_CLOUDSEARCH_API DefineAnalysisSchemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DefineAnalysisSchemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const AnalysisSchemeStatus& GetAnalysisScheme() const { return m_analysisScheme; }
    template<typename AnalysisSchemeT = AnalysisSchemeStatus>
    void SetAnalysisScheme(AnalysisSchemeT&& value) { m_analysisSchemeHasBeenSet = true; m_analysisScheme = std::forward<AnalysisSchemeT>(value); }
    template<typename AnalysisSchemeT = AnalysisSchemeStatus>
    DefineAnalysisSchemeResult& WithAnalysisScheme(AnalysisSchemeT&& value) { SetAnalysisScheme(std::forward<AnalysisSchemeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DefineAnalysisSchemeResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AnalysisSchemeStatus m_analysisScheme;
    bool m_analysisSchemeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
