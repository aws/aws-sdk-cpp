﻿/*
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
   * <p>The result of a <code><a>DefineAnalysisScheme</a></code> request. Contains
   * the status of the newly-configured analysis scheme.</p>
   */
  class AWS_CLOUDSEARCH_API DefineAnalysisSchemeResult
  {
  public:
    DefineAnalysisSchemeResult();
    DefineAnalysisSchemeResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DefineAnalysisSchemeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const AnalysisSchemeStatus& GetAnalysisScheme() const{ return m_analysisScheme; }

    
    inline void SetAnalysisScheme(const AnalysisSchemeStatus& value) { m_analysisScheme = value; }

    
    inline void SetAnalysisScheme(AnalysisSchemeStatus&& value) { m_analysisScheme = value; }

    
    inline DefineAnalysisSchemeResult& WithAnalysisScheme(const AnalysisSchemeStatus& value) { SetAnalysisScheme(value); return *this;}

    
    inline DefineAnalysisSchemeResult& WithAnalysisScheme(AnalysisSchemeStatus&& value) { SetAnalysisScheme(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DefineAnalysisSchemeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DefineAnalysisSchemeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    AnalysisSchemeStatus m_analysisScheme;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws