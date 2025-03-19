/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DescribeDomains</a></code>
   * operation. By default shows the status of all domains. To restrict the response
   * to particular domains, specify the names of the domains you want to
   * describe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomainsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeDomainsRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DescribeDomainsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomains"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const { return m_domainNames; }
    inline bool DomainNamesHasBeenSet() const { return m_domainNamesHasBeenSet; }
    template<typename DomainNamesT = Aws::Vector<Aws::String>>
    void SetDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::forward<DomainNamesT>(value); }
    template<typename DomainNamesT = Aws::Vector<Aws::String>>
    DescribeDomainsRequest& WithDomainNames(DomainNamesT&& value) { SetDomainNames(std::forward<DomainNamesT>(value)); return *this;}
    template<typename DomainNamesT = Aws::String>
    DescribeDomainsRequest& AddDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames.emplace_back(std::forward<DomainNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
