/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/DomainEndpointOptions.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>UpdateDomainEndpointOptions</a></code> operation. Specifies the name of
   * the domain you want to update and the domain endpoint options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateDomainEndpointOptionsRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDomainEndpointOptionsRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API UpdateDomainEndpointOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainEndpointOptions"; }

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
    inline UpdateDomainEndpointOptionsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline UpdateDomainEndpointOptionsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A string that represents the name of a domain.</p>
     */
    inline UpdateDomainEndpointOptionsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Whether to require that all requests to the domain arrive over HTTPS. We
     * recommend Policy-Min-TLS-1-2-2019-07 for TLSSecurityPolicy. For compatibility
     * with older clients, the default is Policy-Min-TLS-1-0-2019-07. </p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>Whether to require that all requests to the domain arrive over HTTPS. We
     * recommend Policy-Min-TLS-1-2-2019-07 for TLSSecurityPolicy. For compatibility
     * with older clients, the default is Policy-Min-TLS-1-0-2019-07. </p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>Whether to require that all requests to the domain arrive over HTTPS. We
     * recommend Policy-Min-TLS-1-2-2019-07 for TLSSecurityPolicy. For compatibility
     * with older clients, the default is Policy-Min-TLS-1-0-2019-07. </p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>Whether to require that all requests to the domain arrive over HTTPS. We
     * recommend Policy-Min-TLS-1-2-2019-07 for TLSSecurityPolicy. For compatibility
     * with older clients, the default is Policy-Min-TLS-1-0-2019-07. </p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>Whether to require that all requests to the domain arrive over HTTPS. We
     * recommend Policy-Min-TLS-1-2-2019-07 for TLSSecurityPolicy. For compatibility
     * with older clients, the default is Policy-Min-TLS-1-0-2019-07. </p>
     */
    inline UpdateDomainEndpointOptionsRequest& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>Whether to require that all requests to the domain arrive over HTTPS. We
     * recommend Policy-Min-TLS-1-2-2019-07 for TLSSecurityPolicy. For compatibility
     * with older clients, the default is Policy-Min-TLS-1-0-2019-07. </p>
     */
    inline UpdateDomainEndpointOptionsRequest& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
