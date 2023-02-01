/**
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
   * <p>Container for the parameters to the
   * <code><a>DescribeDomainEndpointOptions</a></code> operation. Specify the name of
   * the domain you want to describe. To show the active configuration and exclude
   * any pending changes, set the Deployed option to <code>true</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomainEndpointOptionsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeDomainEndpointOptionsRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DescribeDomainEndpointOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomainEndpointOptions"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline DescribeDomainEndpointOptionsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline DescribeDomainEndpointOptionsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline DescribeDomainEndpointOptionsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Whether to retrieve the latest configuration (which might be in a Processing
     * state) or the current, active configuration. Defaults to <code>false</code>.</p>
     */
    inline bool GetDeployed() const{ return m_deployed; }

    /**
     * <p>Whether to retrieve the latest configuration (which might be in a Processing
     * state) or the current, active configuration. Defaults to <code>false</code>.</p>
     */
    inline bool DeployedHasBeenSet() const { return m_deployedHasBeenSet; }

    /**
     * <p>Whether to retrieve the latest configuration (which might be in a Processing
     * state) or the current, active configuration. Defaults to <code>false</code>.</p>
     */
    inline void SetDeployed(bool value) { m_deployedHasBeenSet = true; m_deployed = value; }

    /**
     * <p>Whether to retrieve the latest configuration (which might be in a Processing
     * state) or the current, active configuration. Defaults to <code>false</code>.</p>
     */
    inline DescribeDomainEndpointOptionsRequest& WithDeployed(bool value) { SetDeployed(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_deployed;
    bool m_deployedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
