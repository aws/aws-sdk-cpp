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
    AWS_CLOUDSEARCH_API DescribeDomainsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomains"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const{ return m_domainNames; }

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline bool DomainNamesHasBeenSet() const { return m_domainNamesHasBeenSet; }

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline void SetDomainNames(const Aws::Vector<Aws::String>& value) { m_domainNamesHasBeenSet = true; m_domainNames = value; }

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline void SetDomainNames(Aws::Vector<Aws::String>&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::move(value); }

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline DescribeDomainsRequest& WithDomainNames(const Aws::Vector<Aws::String>& value) { SetDomainNames(value); return *this;}

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline DescribeDomainsRequest& WithDomainNames(Aws::Vector<Aws::String>&& value) { SetDomainNames(std::move(value)); return *this;}

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline DescribeDomainsRequest& AddDomainNames(const Aws::String& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline DescribeDomainsRequest& AddDomainNames(Aws::String&& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the domains you want to include in the response.</p>
     */
    inline DescribeDomainsRequest& AddDomainNames(const char* value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
