/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverDNSSECValidationStatus.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a configuration for DNSSEC
   * validation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverDnssecConfig">AWS
   * API Reference</a></p>
   */
  class ResolverDnssecConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverDnssecConfig();
    AWS_ROUTE53RESOLVER_API ResolverDnssecConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverDnssecConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline ResolverDnssecConfig& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline ResolverDnssecConfig& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline ResolverDnssecConfig& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline ResolverDnssecConfig& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline ResolverDnssecConfig& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline ResolverDnssecConfig& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline ResolverDnssecConfig& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline ResolverDnssecConfig& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline ResolverDnssecConfig& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The validation status for a DNSSEC configuration. The status can be one of
     * the following:</p> <ul> <li> <p> <b>ENABLING:</b> DNSSEC validation is being
     * enabled but is not complete.</p> </li> <li> <p> <b>ENABLED:</b> DNSSEC
     * validation is enabled.</p> </li> <li> <p> <b>DISABLING:</b> DNSSEC validation is
     * being disabled but is not complete.</p> </li> <li> <p> <b>DISABLED</b> DNSSEC
     * validation is disabled.</p> </li> </ul>
     */
    inline const ResolverDNSSECValidationStatus& GetValidationStatus() const{ return m_validationStatus; }

    /**
     * <p>The validation status for a DNSSEC configuration. The status can be one of
     * the following:</p> <ul> <li> <p> <b>ENABLING:</b> DNSSEC validation is being
     * enabled but is not complete.</p> </li> <li> <p> <b>ENABLED:</b> DNSSEC
     * validation is enabled.</p> </li> <li> <p> <b>DISABLING:</b> DNSSEC validation is
     * being disabled but is not complete.</p> </li> <li> <p> <b>DISABLED</b> DNSSEC
     * validation is disabled.</p> </li> </ul>
     */
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }

    /**
     * <p>The validation status for a DNSSEC configuration. The status can be one of
     * the following:</p> <ul> <li> <p> <b>ENABLING:</b> DNSSEC validation is being
     * enabled but is not complete.</p> </li> <li> <p> <b>ENABLED:</b> DNSSEC
     * validation is enabled.</p> </li> <li> <p> <b>DISABLING:</b> DNSSEC validation is
     * being disabled but is not complete.</p> </li> <li> <p> <b>DISABLED</b> DNSSEC
     * validation is disabled.</p> </li> </ul>
     */
    inline void SetValidationStatus(const ResolverDNSSECValidationStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }

    /**
     * <p>The validation status for a DNSSEC configuration. The status can be one of
     * the following:</p> <ul> <li> <p> <b>ENABLING:</b> DNSSEC validation is being
     * enabled but is not complete.</p> </li> <li> <p> <b>ENABLED:</b> DNSSEC
     * validation is enabled.</p> </li> <li> <p> <b>DISABLING:</b> DNSSEC validation is
     * being disabled but is not complete.</p> </li> <li> <p> <b>DISABLED</b> DNSSEC
     * validation is disabled.</p> </li> </ul>
     */
    inline void SetValidationStatus(ResolverDNSSECValidationStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }

    /**
     * <p>The validation status for a DNSSEC configuration. The status can be one of
     * the following:</p> <ul> <li> <p> <b>ENABLING:</b> DNSSEC validation is being
     * enabled but is not complete.</p> </li> <li> <p> <b>ENABLED:</b> DNSSEC
     * validation is enabled.</p> </li> <li> <p> <b>DISABLING:</b> DNSSEC validation is
     * being disabled but is not complete.</p> </li> <li> <p> <b>DISABLED</b> DNSSEC
     * validation is disabled.</p> </li> </ul>
     */
    inline ResolverDnssecConfig& WithValidationStatus(const ResolverDNSSECValidationStatus& value) { SetValidationStatus(value); return *this;}

    /**
     * <p>The validation status for a DNSSEC configuration. The status can be one of
     * the following:</p> <ul> <li> <p> <b>ENABLING:</b> DNSSEC validation is being
     * enabled but is not complete.</p> </li> <li> <p> <b>ENABLED:</b> DNSSEC
     * validation is enabled.</p> </li> <li> <p> <b>DISABLING:</b> DNSSEC validation is
     * being disabled but is not complete.</p> </li> <li> <p> <b>DISABLED</b> DNSSEC
     * validation is disabled.</p> </li> </ul>
     */
    inline ResolverDnssecConfig& WithValidationStatus(ResolverDNSSECValidationStatus&& value) { SetValidationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResolverDNSSECValidationStatus m_validationStatus;
    bool m_validationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
