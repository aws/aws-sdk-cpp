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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/AnalysisSchemeStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>

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
   * <p>The result of a <code>DeleteAnalysisScheme</code> request. Contains the
   * status of the deleted analysis scheme.</p>
   */
  class AWS_CLOUDSEARCH_API DeleteAnalysisSchemeResult
  {
  public:
    DeleteAnalysisSchemeResult();
    DeleteAnalysisSchemeResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteAnalysisSchemeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The status of the analysis scheme being deleted.</p>
     */
    inline const AnalysisSchemeStatus& GetAnalysisScheme() const{ return m_analysisScheme; }

    /**
     * <p>The status of the analysis scheme being deleted.</p>
     */
    inline void SetAnalysisScheme(const AnalysisSchemeStatus& value) { m_analysisScheme = value; }

    /**
     * <p>The status of the analysis scheme being deleted.</p>
     */
    inline void SetAnalysisScheme(AnalysisSchemeStatus&& value) { m_analysisScheme = value; }

    /**
     * <p>The status of the analysis scheme being deleted.</p>
     */
    inline DeleteAnalysisSchemeResult& WithAnalysisScheme(const AnalysisSchemeStatus& value) { SetAnalysisScheme(value); return *this;}

    /**
     * <p>The status of the analysis scheme being deleted.</p>
     */
    inline DeleteAnalysisSchemeResult& WithAnalysisScheme(AnalysisSchemeStatus&& value) { SetAnalysisScheme(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DeleteAnalysisSchemeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteAnalysisSchemeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    AnalysisSchemeStatus m_analysisScheme;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws