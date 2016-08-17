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
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DeleteAnalysisScheme</a></code>
   * operation. Specifies the name of the domain you want to update and the analysis
   * scheme you want to delete. </p>
   */
  class AWS_CLOUDSEARCH_API DeleteAnalysisSchemeRequest : public CloudSearchRequest
  {
  public:
    DeleteAnalysisSchemeRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DeleteAnalysisSchemeRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DeleteAnalysisSchemeRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    
    inline DeleteAnalysisSchemeRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline const Aws::String& GetAnalysisSchemeName() const{ return m_analysisSchemeName; }

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline void SetAnalysisSchemeName(const Aws::String& value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName = value; }

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline void SetAnalysisSchemeName(Aws::String&& value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName = value; }

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline void SetAnalysisSchemeName(const char* value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName.assign(value); }

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline DeleteAnalysisSchemeRequest& WithAnalysisSchemeName(const Aws::String& value) { SetAnalysisSchemeName(value); return *this;}

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline DeleteAnalysisSchemeRequest& WithAnalysisSchemeName(Aws::String&& value) { SetAnalysisSchemeName(value); return *this;}

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline DeleteAnalysisSchemeRequest& WithAnalysisSchemeName(const char* value) { SetAnalysisSchemeName(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_analysisSchemeName;
    bool m_analysisSchemeNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
