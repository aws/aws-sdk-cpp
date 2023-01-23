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
    AWS_MACIE2_API FindingActor();
    AWS_MACIE2_API FindingActor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API FindingActor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain name of the device that the entity used to perform the action on
     * the affected resource.</p>
     */
    inline const DomainDetails& GetDomainDetails() const{ return m_domainDetails; }

    /**
     * <p>The domain name of the device that the entity used to perform the action on
     * the affected resource.</p>
     */
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }

    /**
     * <p>The domain name of the device that the entity used to perform the action on
     * the affected resource.</p>
     */
    inline void SetDomainDetails(const DomainDetails& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = value; }

    /**
     * <p>The domain name of the device that the entity used to perform the action on
     * the affected resource.</p>
     */
    inline void SetDomainDetails(DomainDetails&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::move(value); }

    /**
     * <p>The domain name of the device that the entity used to perform the action on
     * the affected resource.</p>
     */
    inline FindingActor& WithDomainDetails(const DomainDetails& value) { SetDomainDetails(value); return *this;}

    /**
     * <p>The domain name of the device that the entity used to perform the action on
     * the affected resource.</p>
     */
    inline FindingActor& WithDomainDetails(DomainDetails&& value) { SetDomainDetails(std::move(value)); return *this;}


    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographic location for the IP address.</p>
     */
    inline const IpAddressDetails& GetIpAddressDetails() const{ return m_ipAddressDetails; }

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographic location for the IP address.</p>
     */
    inline bool IpAddressDetailsHasBeenSet() const { return m_ipAddressDetailsHasBeenSet; }

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographic location for the IP address.</p>
     */
    inline void SetIpAddressDetails(const IpAddressDetails& value) { m_ipAddressDetailsHasBeenSet = true; m_ipAddressDetails = value; }

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographic location for the IP address.</p>
     */
    inline void SetIpAddressDetails(IpAddressDetails&& value) { m_ipAddressDetailsHasBeenSet = true; m_ipAddressDetails = std::move(value); }

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographic location for the IP address.</p>
     */
    inline FindingActor& WithIpAddressDetails(const IpAddressDetails& value) { SetIpAddressDetails(value); return *this;}

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographic location for the IP address.</p>
     */
    inline FindingActor& WithIpAddressDetails(IpAddressDetails&& value) { SetIpAddressDetails(std::move(value)); return *this;}


    /**
     * <p>The type and other characteristics of the entity that performed the action on
     * the affected resource.</p>
     */
    inline const UserIdentity& GetUserIdentity() const{ return m_userIdentity; }

    /**
     * <p>The type and other characteristics of the entity that performed the action on
     * the affected resource.</p>
     */
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }

    /**
     * <p>The type and other characteristics of the entity that performed the action on
     * the affected resource.</p>
     */
    inline void SetUserIdentity(const UserIdentity& value) { m_userIdentityHasBeenSet = true; m_userIdentity = value; }

    /**
     * <p>The type and other characteristics of the entity that performed the action on
     * the affected resource.</p>
     */
    inline void SetUserIdentity(UserIdentity&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::move(value); }

    /**
     * <p>The type and other characteristics of the entity that performed the action on
     * the affected resource.</p>
     */
    inline FindingActor& WithUserIdentity(const UserIdentity& value) { SetUserIdentity(value); return *this;}

    /**
     * <p>The type and other characteristics of the entity that performed the action on
     * the affected resource.</p>
     */
    inline FindingActor& WithUserIdentity(UserIdentity&& value) { SetUserIdentity(std::move(value)); return *this;}

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
