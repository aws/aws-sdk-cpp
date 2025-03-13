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
    AWS_CLOUDSEARCH_API UpdateAvailabilityOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAvailabilityOptions"; }

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
    UpdateAvailabilityOptionsRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You expand an existing search domain to a second Availability Zone by setting
     * the Multi-AZ option to true. Similarly, you can turn off the Multi-AZ option to
     * downgrade the domain to a single Availability Zone by setting the Multi-AZ
     * option to <code>false</code>. </p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline UpdateAvailabilityOptionsRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
