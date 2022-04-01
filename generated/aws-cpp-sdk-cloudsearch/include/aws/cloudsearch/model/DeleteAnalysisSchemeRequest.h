﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DeleteAnalysisScheme</a></code>
   * operation. Specifies the name of the domain you want to update and the analysis
   * scheme you want to delete. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteAnalysisSchemeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DeleteAnalysisSchemeRequest : public CloudSearchRequest
  {
  public:
    DeleteAnalysisSchemeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAnalysisScheme"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DeleteAnalysisSchemeRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DeleteAnalysisSchemeRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline DeleteAnalysisSchemeRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline const Aws::String& GetAnalysisSchemeName() const{ return m_analysisSchemeName; }

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline bool AnalysisSchemeNameHasBeenSet() const { return m_analysisSchemeNameHasBeenSet; }

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline void SetAnalysisSchemeName(const Aws::String& value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName = value; }

    /**
     * <p>The name of the analysis scheme you want to delete.</p>
     */
    inline void SetAnalysisSchemeName(Aws::String&& value) { m_analysisSchemeNameHasBeenSet = true; m_analysisSchemeName = std::move(value); }

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
    inline DeleteAnalysisSchemeRequest& WithAnalysisSchemeName(Aws::String&& value) { SetAnalysisSchemeName(std::move(value)); return *this;}

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
