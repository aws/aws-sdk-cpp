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
   * <code><a>UpdateAvailabilityOptions</a></code> operation. Specifies the name of
   * the domain you want to update and the Multi-AZ availability
   * option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateAvailabilityOptionsRequest">AWS
   * API Reference</a></p>
   */
  class UpdateAvailabilityOptionsRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAvailabilityOptions"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline UpdateAvailabilityOptionsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline UpdateAvailabilityOptionsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline UpdateAvailabilityOptionsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>You expand an existing search domain to a second Availability Zone by setting
     * the Multi-AZ option to true. Similarly, you can turn off the Multi-AZ option to
     * downgrade the domain to a single Availability Zone by setting the Multi-AZ
     * option to <code>false</code>. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>You expand an existing search domain to a second Availability Zone by setting
     * the Multi-AZ option to true. Similarly, you can turn off the Multi-AZ option to
     * downgrade the domain to a single Availability Zone by setting the Multi-AZ
     * option to <code>false</code>. </p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>You expand an existing search domain to a second Availability Zone by setting
     * the Multi-AZ option to true. Similarly, you can turn off the Multi-AZ option to
     * downgrade the domain to a single Availability Zone by setting the Multi-AZ
     * option to <code>false</code>. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>You expand an existing search domain to a second Availability Zone by setting
     * the Multi-AZ option to true. Similarly, you can turn off the Multi-AZ option to
     * downgrade the domain to a single Availability Zone by setting the Multi-AZ
     * option to <code>false</code>. </p>
     */
    inline UpdateAvailabilityOptionsRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
