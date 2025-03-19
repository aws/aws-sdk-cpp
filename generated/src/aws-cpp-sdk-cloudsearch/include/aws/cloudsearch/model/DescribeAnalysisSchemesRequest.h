/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

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
   * <code>Deployed</code> option to <code>true</code>. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeAnalysisSchemesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeAnalysisSchemesRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DescribeAnalysisSchemesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAnalysisSchemes"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DescribeAnalysisSchemesRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis schemes you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisSchemeNames() const { return m_analysisSchemeNames; }
    inline bool AnalysisSchemeNamesHasBeenSet() const { return m_analysisSchemeNamesHasBeenSet; }
    template<typename AnalysisSchemeNamesT = Aws::Vector<Aws::String>>
    void SetAnalysisSchemeNames(AnalysisSchemeNamesT&& value) { m_analysisSchemeNamesHasBeenSet = true; m_analysisSchemeNames = std::forward<AnalysisSchemeNamesT>(value); }
    template<typename AnalysisSchemeNamesT = Aws::Vector<Aws::String>>
    DescribeAnalysisSchemesRequest& WithAnalysisSchemeNames(AnalysisSchemeNamesT&& value) { SetAnalysisSchemeNames(std::forward<AnalysisSchemeNamesT>(value)); return *this;}
    template<typename AnalysisSchemeNamesT = Aws::String>
    DescribeAnalysisSchemesRequest& AddAnalysisSchemeNames(AnalysisSchemeNamesT&& value) { m_analysisSchemeNamesHasBeenSet = true; m_analysisSchemeNames.emplace_back(std::forward<AnalysisSchemeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline bool GetDeployed() const { return m_deployed; }
    inline bool DeployedHasBeenSet() const { return m_deployedHasBeenSet; }
    inline void SetDeployed(bool value) { m_deployedHasBeenSet = true; m_deployed = value; }
    inline DescribeAnalysisSchemesRequest& WithDeployed(bool value) { SetDeployed(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_analysisSchemeNames;
    bool m_analysisSchemeNamesHasBeenSet = false;

    bool m_deployed{false};
    bool m_deployedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
