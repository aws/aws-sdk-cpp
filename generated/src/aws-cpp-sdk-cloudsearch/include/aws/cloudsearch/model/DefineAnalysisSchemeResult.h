/**
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
    AWS_CLOUDSEARCH_API DefineAnalysisSchemeResult();
    AWS_CLOUDSEARCH_API DefineAnalysisSchemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DefineAnalysisSchemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const AnalysisSchemeStatus& GetAnalysisScheme() const{ return m_analysisScheme; }

    
    inline void SetAnalysisScheme(const AnalysisSchemeStatus& value) { m_analysisScheme = value; }

    
    inline void SetAnalysisScheme(AnalysisSchemeStatus&& value) { m_analysisScheme = std::move(value); }

    
    inline DefineAnalysisSchemeResult& WithAnalysisScheme(const AnalysisSchemeStatus& value) { SetAnalysisScheme(value); return *this;}

    
    inline DefineAnalysisSchemeResult& WithAnalysisScheme(AnalysisSchemeStatus&& value) { SetAnalysisScheme(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DefineAnalysisSchemeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DefineAnalysisSchemeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AnalysisSchemeStatus m_analysisScheme;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
