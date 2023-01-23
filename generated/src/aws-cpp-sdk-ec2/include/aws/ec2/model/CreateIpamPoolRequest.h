/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AddressFamily.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamPoolAwsService.h>
#include <aws/ec2/model/RequestIpamResourceTag.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateIpamPoolRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateIpamPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIpamPool"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateIpamPoolRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamScopeId() const{ return m_ipamScopeId; }

    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }

    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline void SetIpamScopeId(const Aws::String& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = value; }

    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline void SetIpamScopeId(Aws::String&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::move(value); }

    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline void SetIpamScopeId(const char* value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId.assign(value); }

    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline CreateIpamPoolRequest& WithIpamScopeId(const Aws::String& value) { SetIpamScopeId(value); return *this;}

    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline CreateIpamPoolRequest& WithIpamScopeId(Aws::String&& value) { SetIpamScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline CreateIpamPoolRequest& WithIpamScopeId(const char* value) { SetIpamScopeId(value); return *this;}


    /**
     * <p>In IPAM, the locale is the Amazon Web Services Region where you want to make
     * an IPAM pool available for allocations. Only resources in the same Region as the
     * locale of the pool can get IP address allocations from the pool. You can only
     * allocate a CIDR for a VPC, for example, from an IPAM pool that shares a locale
     * with the VPC’s Region. Note that once you choose a Locale for a pool, you cannot
     * modify it. If you do not choose a locale, resources in Regions others than the
     * IPAM's home region cannot use CIDRs from this pool.</p> <p>Possible values: Any
     * Amazon Web Services Region, such as us-east-1.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>In IPAM, the locale is the Amazon Web Services Region where you want to make
     * an IPAM pool available for allocations. Only resources in the same Region as the
     * locale of the pool can get IP address allocations from the pool. You can only
     * allocate a CIDR for a VPC, for example, from an IPAM pool that shares a locale
     * with the VPC’s Region. Note that once you choose a Locale for a pool, you cannot
     * modify it. If you do not choose a locale, resources in Regions others than the
     * IPAM's home region cannot use CIDRs from this pool.</p> <p>Possible values: Any
     * Amazon Web Services Region, such as us-east-1.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>In IPAM, the locale is the Amazon Web Services Region where you want to make
     * an IPAM pool available for allocations. Only resources in the same Region as the
     * locale of the pool can get IP address allocations from the pool. You can only
     * allocate a CIDR for a VPC, for example, from an IPAM pool that shares a locale
     * with the VPC’s Region. Note that once you choose a Locale for a pool, you cannot
     * modify it. If you do not choose a locale, resources in Regions others than the
     * IPAM's home region cannot use CIDRs from this pool.</p> <p>Possible values: Any
     * Amazon Web Services Region, such as us-east-1.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>In IPAM, the locale is the Amazon Web Services Region where you want to make
     * an IPAM pool available for allocations. Only resources in the same Region as the
     * locale of the pool can get IP address allocations from the pool. You can only
     * allocate a CIDR for a VPC, for example, from an IPAM pool that shares a locale
     * with the VPC’s Region. Note that once you choose a Locale for a pool, you cannot
     * modify it. If you do not choose a locale, resources in Regions others than the
     * IPAM's home region cannot use CIDRs from this pool.</p> <p>Possible values: Any
     * Amazon Web Services Region, such as us-east-1.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>In IPAM, the locale is the Amazon Web Services Region where you want to make
     * an IPAM pool available for allocations. Only resources in the same Region as the
     * locale of the pool can get IP address allocations from the pool. You can only
     * allocate a CIDR for a VPC, for example, from an IPAM pool that shares a locale
     * with the VPC’s Region. Note that once you choose a Locale for a pool, you cannot
     * modify it. If you do not choose a locale, resources in Regions others than the
     * IPAM's home region cannot use CIDRs from this pool.</p> <p>Possible values: Any
     * Amazon Web Services Region, such as us-east-1.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>In IPAM, the locale is the Amazon Web Services Region where you want to make
     * an IPAM pool available for allocations. Only resources in the same Region as the
     * locale of the pool can get IP address allocations from the pool. You can only
     * allocate a CIDR for a VPC, for example, from an IPAM pool that shares a locale
     * with the VPC’s Region. Note that once you choose a Locale for a pool, you cannot
     * modify it. If you do not choose a locale, resources in Regions others than the
     * IPAM's home region cannot use CIDRs from this pool.</p> <p>Possible values: Any
     * Amazon Web Services Region, such as us-east-1.</p>
     */
    inline CreateIpamPoolRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>In IPAM, the locale is the Amazon Web Services Region where you want to make
     * an IPAM pool available for allocations. Only resources in the same Region as the
     * locale of the pool can get IP address allocations from the pool. You can only
     * allocate a CIDR for a VPC, for example, from an IPAM pool that shares a locale
     * with the VPC’s Region. Note that once you choose a Locale for a pool, you cannot
     * modify it. If you do not choose a locale, resources in Regions others than the
     * IPAM's home region cannot use CIDRs from this pool.</p> <p>Possible values: Any
     * Amazon Web Services Region, such as us-east-1.</p>
     */
    inline CreateIpamPoolRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>In IPAM, the locale is the Amazon Web Services Region where you want to make
     * an IPAM pool available for allocations. Only resources in the same Region as the
     * locale of the pool can get IP address allocations from the pool. You can only
     * allocate a CIDR for a VPC, for example, from an IPAM pool that shares a locale
     * with the VPC’s Region. Note that once you choose a Locale for a pool, you cannot
     * modify it. If you do not choose a locale, resources in Regions others than the
     * IPAM's home region cannot use CIDRs from this pool.</p> <p>Possible values: Any
     * Amazon Web Services Region, such as us-east-1.</p>
     */
    inline CreateIpamPoolRequest& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline const Aws::String& GetSourceIpamPoolId() const{ return m_sourceIpamPoolId; }

    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline bool SourceIpamPoolIdHasBeenSet() const { return m_sourceIpamPoolIdHasBeenSet; }

    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline void SetSourceIpamPoolId(const Aws::String& value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId = value; }

    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline void SetSourceIpamPoolId(Aws::String&& value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId = std::move(value); }

    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline void SetSourceIpamPoolId(const char* value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId.assign(value); }

    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline CreateIpamPoolRequest& WithSourceIpamPoolId(const Aws::String& value) { SetSourceIpamPoolId(value); return *this;}

    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline CreateIpamPoolRequest& WithSourceIpamPoolId(Aws::String&& value) { SetSourceIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline CreateIpamPoolRequest& WithSourceIpamPoolId(const char* value) { SetSourceIpamPoolId(value); return *this;}


    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline CreateIpamPoolRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline CreateIpamPoolRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline CreateIpamPoolRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IP protocol assigned to this IPAM pool. You must choose either IPv4 or
     * IPv6 protocol for a pool.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }

    /**
     * <p>The IP protocol assigned to this IPAM pool. You must choose either IPv4 or
     * IPv6 protocol for a pool.</p>
     */
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }

    /**
     * <p>The IP protocol assigned to this IPAM pool. You must choose either IPv4 or
     * IPv6 protocol for a pool.</p>
     */
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }

    /**
     * <p>The IP protocol assigned to this IPAM pool. You must choose either IPv4 or
     * IPv6 protocol for a pool.</p>
     */
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }

    /**
     * <p>The IP protocol assigned to this IPAM pool. You must choose either IPv4 or
     * IPv6 protocol for a pool.</p>
     */
    inline CreateIpamPoolRequest& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    /**
     * <p>The IP protocol assigned to this IPAM pool. You must choose either IPv4 or
     * IPv6 protocol for a pool.</p>
     */
    inline CreateIpamPoolRequest& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}


    /**
     * <p>If selected, IPAM will continuously look for resources within the CIDR range
     * of this pool and automatically import them as allocations into your IPAM. The
     * CIDRs that will be allocated for these resources must not already be allocated
     * to other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline bool GetAutoImport() const{ return m_autoImport; }

    /**
     * <p>If selected, IPAM will continuously look for resources within the CIDR range
     * of this pool and automatically import them as allocations into your IPAM. The
     * CIDRs that will be allocated for these resources must not already be allocated
     * to other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline bool AutoImportHasBeenSet() const { return m_autoImportHasBeenSet; }

    /**
     * <p>If selected, IPAM will continuously look for resources within the CIDR range
     * of this pool and automatically import them as allocations into your IPAM. The
     * CIDRs that will be allocated for these resources must not already be allocated
     * to other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline void SetAutoImport(bool value) { m_autoImportHasBeenSet = true; m_autoImport = value; }

    /**
     * <p>If selected, IPAM will continuously look for resources within the CIDR range
     * of this pool and automatically import them as allocations into your IPAM. The
     * CIDRs that will be allocated for these resources must not already be allocated
     * to other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline CreateIpamPoolRequest& WithAutoImport(bool value) { SetAutoImport(value); return *this;}


    /**
     * <p>Determines if the pool is publicly advertisable. This option is not available
     * for pools with AddressFamily set to <code>ipv4</code>.</p>
     */
    inline bool GetPubliclyAdvertisable() const{ return m_publiclyAdvertisable; }

    /**
     * <p>Determines if the pool is publicly advertisable. This option is not available
     * for pools with AddressFamily set to <code>ipv4</code>.</p>
     */
    inline bool PubliclyAdvertisableHasBeenSet() const { return m_publiclyAdvertisableHasBeenSet; }

    /**
     * <p>Determines if the pool is publicly advertisable. This option is not available
     * for pools with AddressFamily set to <code>ipv4</code>.</p>
     */
    inline void SetPubliclyAdvertisable(bool value) { m_publiclyAdvertisableHasBeenSet = true; m_publiclyAdvertisable = value; }

    /**
     * <p>Determines if the pool is publicly advertisable. This option is not available
     * for pools with AddressFamily set to <code>ipv4</code>.</p>
     */
    inline CreateIpamPoolRequest& WithPubliclyAdvertisable(bool value) { SetPubliclyAdvertisable(value); return *this;}


    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. The minimum netmask length must be less than the maximum netmask
     * length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline int GetAllocationMinNetmaskLength() const{ return m_allocationMinNetmaskLength; }

    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. The minimum netmask length must be less than the maximum netmask
     * length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline bool AllocationMinNetmaskLengthHasBeenSet() const { return m_allocationMinNetmaskLengthHasBeenSet; }

    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. The minimum netmask length must be less than the maximum netmask
     * length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline void SetAllocationMinNetmaskLength(int value) { m_allocationMinNetmaskLengthHasBeenSet = true; m_allocationMinNetmaskLength = value; }

    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. The minimum netmask length must be less than the maximum netmask
     * length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline CreateIpamPoolRequest& WithAllocationMinNetmaskLength(int value) { SetAllocationMinNetmaskLength(value); return *this;}


    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. The maximum netmask length must be greater than the minimum
     * netmask length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline int GetAllocationMaxNetmaskLength() const{ return m_allocationMaxNetmaskLength; }

    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. The maximum netmask length must be greater than the minimum
     * netmask length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline bool AllocationMaxNetmaskLengthHasBeenSet() const { return m_allocationMaxNetmaskLengthHasBeenSet; }

    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. The maximum netmask length must be greater than the minimum
     * netmask length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline void SetAllocationMaxNetmaskLength(int value) { m_allocationMaxNetmaskLengthHasBeenSet = true; m_allocationMaxNetmaskLength = value; }

    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. The maximum netmask length must be greater than the minimum
     * netmask length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline CreateIpamPoolRequest& WithAllocationMaxNetmaskLength(int value) { SetAllocationMaxNetmaskLength(value); return *this;}


    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline int GetAllocationDefaultNetmaskLength() const{ return m_allocationDefaultNetmaskLength; }

    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline bool AllocationDefaultNetmaskLengthHasBeenSet() const { return m_allocationDefaultNetmaskLengthHasBeenSet; }

    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline void SetAllocationDefaultNetmaskLength(int value) { m_allocationDefaultNetmaskLengthHasBeenSet = true; m_allocationDefaultNetmaskLength = value; }

    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline CreateIpamPoolRequest& WithAllocationDefaultNetmaskLength(int value) { SetAllocationDefaultNetmaskLength(value); return *this;}


    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline const Aws::Vector<RequestIpamResourceTag>& GetAllocationResourceTags() const{ return m_allocationResourceTags; }

    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline bool AllocationResourceTagsHasBeenSet() const { return m_allocationResourceTagsHasBeenSet; }

    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline void SetAllocationResourceTags(const Aws::Vector<RequestIpamResourceTag>& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags = value; }

    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline void SetAllocationResourceTags(Aws::Vector<RequestIpamResourceTag>&& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags = std::move(value); }

    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline CreateIpamPoolRequest& WithAllocationResourceTags(const Aws::Vector<RequestIpamResourceTag>& value) { SetAllocationResourceTags(value); return *this;}

    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline CreateIpamPoolRequest& WithAllocationResourceTags(Aws::Vector<RequestIpamResourceTag>&& value) { SetAllocationResourceTags(std::move(value)); return *this;}

    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline CreateIpamPoolRequest& AddAllocationResourceTags(const RequestIpamResourceTag& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags.push_back(value); return *this; }

    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline CreateIpamPoolRequest& AddAllocationResourceTags(RequestIpamResourceTag&& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline CreateIpamPoolRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline CreateIpamPoolRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline CreateIpamPoolRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline CreateIpamPoolRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateIpamPoolRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateIpamPoolRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateIpamPoolRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Limits which service in Amazon Web Services that the pool can be used in.
     * "ec2", for example, allows users to use space for Elastic IP addresses and
     * VPCs.</p>
     */
    inline const IpamPoolAwsService& GetAwsService() const{ return m_awsService; }

    /**
     * <p>Limits which service in Amazon Web Services that the pool can be used in.
     * "ec2", for example, allows users to use space for Elastic IP addresses and
     * VPCs.</p>
     */
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }

    /**
     * <p>Limits which service in Amazon Web Services that the pool can be used in.
     * "ec2", for example, allows users to use space for Elastic IP addresses and
     * VPCs.</p>
     */
    inline void SetAwsService(const IpamPoolAwsService& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }

    /**
     * <p>Limits which service in Amazon Web Services that the pool can be used in.
     * "ec2", for example, allows users to use space for Elastic IP addresses and
     * VPCs.</p>
     */
    inline void SetAwsService(IpamPoolAwsService&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }

    /**
     * <p>Limits which service in Amazon Web Services that the pool can be used in.
     * "ec2", for example, allows users to use space for Elastic IP addresses and
     * VPCs.</p>
     */
    inline CreateIpamPoolRequest& WithAwsService(const IpamPoolAwsService& value) { SetAwsService(value); return *this;}

    /**
     * <p>Limits which service in Amazon Web Services that the pool can be used in.
     * "ec2", for example, allows users to use space for Elastic IP addresses and
     * VPCs.</p>
     */
    inline CreateIpamPoolRequest& WithAwsService(IpamPoolAwsService&& value) { SetAwsService(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamScopeId;
    bool m_ipamScopeIdHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_sourceIpamPoolId;
    bool m_sourceIpamPoolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AddressFamily m_addressFamily;
    bool m_addressFamilyHasBeenSet = false;

    bool m_autoImport;
    bool m_autoImportHasBeenSet = false;

    bool m_publiclyAdvertisable;
    bool m_publiclyAdvertisableHasBeenSet = false;

    int m_allocationMinNetmaskLength;
    bool m_allocationMinNetmaskLengthHasBeenSet = false;

    int m_allocationMaxNetmaskLength;
    bool m_allocationMaxNetmaskLengthHasBeenSet = false;

    int m_allocationDefaultNetmaskLength;
    bool m_allocationDefaultNetmaskLengthHasBeenSet = false;

    Aws::Vector<RequestIpamResourceTag> m_allocationResourceTags;
    bool m_allocationResourceTagsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    IpamPoolAwsService m_awsService;
    bool m_awsServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
