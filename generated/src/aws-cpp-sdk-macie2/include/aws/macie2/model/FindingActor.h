/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/DomainDetails.h>
#include <aws/macie2/model/IpAddressDetails.h>
#include <aws/macie2/model/UserIdentity.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an entity that performed an action that produced a
   * policy finding for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/FindingActor">AWS
   * API Reference</a></p>
   */
  class FindingActor
  {
  public:
    AWS_MACIE2_API FindingActor() = default;
    AWS_MACIE2_API FindingActor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API FindingActor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name of the device that the entity used to perform the action on
     * the affected resource.</p>
     */
    inline const DomainDetails& GetDomainDetails() const { return m_domainDetails; }
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }
    template<typename DomainDetailsT = DomainDetails>
    void SetDomainDetails(DomainDetailsT&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::forward<DomainDetailsT>(value); }
    template<typename DomainDetailsT = DomainDetails>
    FindingActor& WithDomainDetails(DomainDetailsT&& value) { SetDomainDetails(std::forward<DomainDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address and related details about the device that the entity used to
     * perform the action on the affected resource. The details can include information
     * such as the owner and geographic location of the IP address.</p>
     */
    inline const IpAddressDetails& GetIpAddressDetails() const { return m_ipAddressDetails; }
    inline bool IpAddressDetailsHasBeenSet() const { return m_ipAddressDetailsHasBeenSet; }
    template<typename IpAddressDetailsT = IpAddressDetails>
    void SetIpAddressDetails(IpAddressDetailsT&& value) { m_ipAddressDetailsHasBeenSet = true; m_ipAddressDetails = std::forward<IpAddressDetailsT>(value); }
    template<typename IpAddressDetailsT = IpAddressDetails>
    FindingActor& WithIpAddressDetails(IpAddressDetailsT&& value) { SetIpAddressDetails(std::forward<IpAddressDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and other characteristics of the entity that performed the action on
     * the affected resource. This value is null if the action was performed by an
     * anonymous (unauthenticated) entity.</p>
     */
    inline const UserIdentity& GetUserIdentity() const { return m_userIdentity; }
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }
    template<typename UserIdentityT = UserIdentity>
    void SetUserIdentity(UserIdentityT&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::forward<UserIdentityT>(value); }
    template<typename UserIdentityT = UserIdentity>
    FindingActor& WithUserIdentity(UserIdentityT&& value) { SetUserIdentity(std::forward<UserIdentityT>(value)); return *this;}
    ///@}
  private:

    DomainDetails m_domainDetails;
    bool m_domainDetailsHasBeenSet = false;

    IpAddressDetails m_ipAddressDetails;
    bool m_ipAddressDetailsHasBeenSet = false;

    UserIdentity m_userIdentity;
    bool m_userIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
