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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>DescribeAnalysisSchemes</a></code> operation. Specifies the name of the
   * domain you want to describe. To limit the response to particular analysis
   * schemes, specify the names of the analysis schemes you want to describe. To show
   * the active configuration and exclude any pending changes, set the
   * <code>Deployed</code> option to <code>true</code>. </p>
   */
  class AWS_CLOUDSEARCH_API DescribeAnalysisSchemesRequest : public CloudSearchRequest
  {
  public:
    DescribeAnalysisSchemesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeAnalysisSchemesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeAnalysisSchemesRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeAnalysisSchemesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisSchemeNames() const{ return m_analysisSchemeNames; }

    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline void SetAnalysisSchemeNames(const Aws::Vector<Aws::String>& value) { m_analysisSchemeNamesHasBeenSet = true; m_analysisSchemeNames = value; }

    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline void SetAnalysisSchemeNames(Aws::Vector<Aws::String>&& value) { m_analysisSchemeNamesHasBeenSet = true; m_analysisSchemeNames = value; }

    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline DescribeAnalysisSchemesRequest& WithAnalysisSchemeNames(const Aws::Vector<Aws::String>& value) { SetAnalysisSchemeNames(value); return *this;}

    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline DescribeAnalysisSchemesRequest& WithAnalysisSchemeNames(Aws::Vector<Aws::String>&& value) { SetAnalysisSchemeNames(value); return *this;}

    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline DescribeAnalysisSchemesRequest& AddAnalysisSchemeNames(const Aws::String& value) { m_analysisSchemeNamesHasBeenSet = true; m_analysisSchemeNames.push_back(value); return *this; }

    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline DescribeAnalysisSchemesRequest& AddAnalysisSchemeNames(Aws::String&& value) { m_analysisSchemeNamesHasBeenSet = true; m_analysisSchemeNames.push_back(value); return *this; }

    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline DescribeAnalysisSchemesRequest& AddAnalysisSchemeNames(const char* value) { m_analysisSchemeNamesHasBeenSet = true; m_analysisSchemeNames.push_back(value); return *this; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline bool GetDeployed() const{ return m_deployed; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline void SetDeployed(bool value) { m_deployedHasBeenSet = true; m_deployed = value; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline DescribeAnalysisSchemesRequest& WithDeployed(bool value) { SetDeployed(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::Vector<Aws::String> m_analysisSchemeNames;
    bool m_analysisSchemeNamesHasBeenSet;
    bool m_deployed;
    bool m_deployedHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
