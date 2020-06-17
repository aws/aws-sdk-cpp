/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MACIE2_API FindingActor
  {
  public:
    FindingActor();
    FindingActor(Aws::Utils::Json::JsonView jsonValue);
    FindingActor& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS name of the entity that performed the action on the affected
     * resource.</p>
     */
    inline const DomainDetails& GetDomainDetails() const{ return m_domainDetails; }

    /**
     * <p>The DNS name of the entity that performed the action on the affected
     * resource.</p>
     */
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }

    /**
     * <p>The DNS name of the entity that performed the action on the affected
     * resource.</p>
     */
    inline void SetDomainDetails(const DomainDetails& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = value; }

    /**
     * <p>The DNS name of the entity that performed the action on the affected
     * resource.</p>
     */
    inline void SetDomainDetails(DomainDetails&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::move(value); }

    /**
     * <p>The DNS name of the entity that performed the action on the affected
     * resource.</p>
     */
    inline FindingActor& WithDomainDetails(const DomainDetails& value) { SetDomainDetails(value); return *this;}

    /**
     * <p>The DNS name of the entity that performed the action on the affected
     * resource.</p>
     */
    inline FindingActor& WithDomainDetails(DomainDetails&& value) { SetDomainDetails(std::move(value)); return *this;}


    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographical location for the IP address.</p>
     */
    inline const IpAddressDetails& GetIpAddressDetails() const{ return m_ipAddressDetails; }

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographical location for the IP address.</p>
     */
    inline bool IpAddressDetailsHasBeenSet() const { return m_ipAddressDetailsHasBeenSet; }

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographical location for the IP address.</p>
     */
    inline void SetIpAddressDetails(const IpAddressDetails& value) { m_ipAddressDetailsHasBeenSet = true; m_ipAddressDetails = value; }

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographical location for the IP address.</p>
     */
    inline void SetIpAddressDetails(IpAddressDetails&& value) { m_ipAddressDetailsHasBeenSet = true; m_ipAddressDetails = std::move(value); }

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographical location for the IP address.</p>
     */
    inline FindingActor& WithIpAddressDetails(const IpAddressDetails& value) { SetIpAddressDetails(value); return *this;}

    /**
     * <p>The IP address of the device that the entity used to perform the action on
     * the affected resource. This object also provides information such as the owner
     * and geographical location for the IP address.</p>
     */
    inline FindingActor& WithIpAddressDetails(IpAddressDetails&& value) { SetIpAddressDetails(std::move(value)); return *this;}


    /**
     * <p>The name and type of entity that performed the action on the affected
     * resource.</p>
     */
    inline const UserIdentity& GetUserIdentity() const{ return m_userIdentity; }

    /**
     * <p>The name and type of entity that performed the action on the affected
     * resource.</p>
     */
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }

    /**
     * <p>The name and type of entity that performed the action on the affected
     * resource.</p>
     */
    inline void SetUserIdentity(const UserIdentity& value) { m_userIdentityHasBeenSet = true; m_userIdentity = value; }

    /**
     * <p>The name and type of entity that performed the action on the affected
     * resource.</p>
     */
    inline void SetUserIdentity(UserIdentity&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::move(value); }

    /**
     * <p>The name and type of entity that performed the action on the affected
     * resource.</p>
     */
    inline FindingActor& WithUserIdentity(const UserIdentity& value) { SetUserIdentity(value); return *this;}

    /**
     * <p>The name and type of entity that performed the action on the affected
     * resource.</p>
     */
    inline FindingActor& WithUserIdentity(UserIdentity&& value) { SetUserIdentity(std::move(value)); return *this;}

  private:

    DomainDetails m_domainDetails;
    bool m_domainDetailsHasBeenSet;

    IpAddressDetails m_ipAddressDetails;
    bool m_ipAddressDetailsHasBeenSet;

    UserIdentity m_userIdentity;
    bool m_userIdentityHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
