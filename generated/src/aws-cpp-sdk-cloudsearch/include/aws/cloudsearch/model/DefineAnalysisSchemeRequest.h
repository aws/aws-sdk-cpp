/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/AnalysisScheme.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DefineAnalysisScheme</a></code>
   * operation. Specifies the name of the domain you want to update and the analysis
   * scheme configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineAnalysisSchemeRequest">AWS
   * API Reference</a></p>
   */
  class DefineAnalysisSchemeRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DefineAnalysisSchemeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DefineAnalysisScheme"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DefineAnalysisSchemeRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnalysisScheme& GetAnalysisScheme() const { return m_analysisScheme; }
    inline bool AnalysisSchemeHasBeenSet() const { return m_analysisSchemeHasBeenSet; }
    template<typename AnalysisSchemeT = AnalysisScheme>
    void SetAnalysisScheme(AnalysisSchemeT&& value) { m_analysisSchemeHasBeenSet = true; m_analysisScheme = std::forward<AnalysisSchemeT>(value); }
    template<typename AnalysisSchemeT = AnalysisScheme>
    DefineAnalysisSchemeRequest& WithAnalysisScheme(AnalysisSchemeT&& value) { SetAnalysisScheme(std::forward<AnalysisSchemeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    AnalysisScheme m_analysisScheme;
    bool m_analysisSchemeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
