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
    AWS_CLOUDSEARCH_API DescribeAnalysisSchemesResult();
    AWS_CLOUDSEARCH_API DescribeAnalysisSchemesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeAnalysisSchemesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The analysis scheme descriptions.</p>
     */
    inline const Aws::Vector<AnalysisSchemeStatus>& GetAnalysisSchemes() const{ return m_analysisSchemes; }

    /**
     * <p>The analysis scheme descriptions.</p>
     */
    inline void SetAnalysisSchemes(const Aws::Vector<AnalysisSchemeStatus>& value) { m_analysisSchemes = value; }

    /**
     * <p>The analysis scheme descriptions.</p>
     */
    inline void SetAnalysisSchemes(Aws::Vector<AnalysisSchemeStatus>&& value) { m_analysisSchemes = std::move(value); }

    /**
     * <p>The analysis scheme descriptions.</p>
     */
    inline DescribeAnalysisSchemesResult& WithAnalysisSchemes(const Aws::Vector<AnalysisSchemeStatus>& value) { SetAnalysisSchemes(value); return *this;}

    /**
     * <p>The analysis scheme descriptions.</p>
     */
    inline DescribeAnalysisSchemesResult& WithAnalysisSchemes(Aws::Vector<AnalysisSchemeStatus>&& value) { SetAnalysisSchemes(std::move(value)); return *this;}

    /**
     * <p>The analysis scheme descriptions.</p>
     */
    inline DescribeAnalysisSchemesResult& AddAnalysisSchemes(const AnalysisSchemeStatus& value) { m_analysisSchemes.push_back(value); return *this; }

    /**
     * <p>The analysis scheme descriptions.</p>
     */
    inline DescribeAnalysisSchemesResult& AddAnalysisSchemes(AnalysisSchemeStatus&& value) { m_analysisSchemes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAnalysisSchemesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAnalysisSchemesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AnalysisSchemeStatus> m_analysisSchemes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
