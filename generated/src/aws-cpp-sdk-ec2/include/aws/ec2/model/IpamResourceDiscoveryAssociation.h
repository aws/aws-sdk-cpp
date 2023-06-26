/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamAssociatedResourceDiscoveryStatus.h>
#include <aws/ec2/model/IpamResourceDiscoveryAssociationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>An IPAM resource discovery association. An associated resource discovery is a
   * resource discovery that has been associated with an IPAM. IPAM aggregates the
   * resource CIDRs discovered by the associated resource discovery.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamResourceDiscoveryAssociation">AWS
   * API Reference</a></p>
   */
  class IpamResourceDiscoveryAssociation
  {
  public:
    AWS_EC2_API IpamResourceDiscoveryAssociation();
    AWS_EC2_API IpamResourceDiscoveryAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamResourceDiscoveryAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The resource discovery association ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryAssociationId() const{ return m_ipamResourceDiscoveryAssociationId; }

    /**
     * <p>The resource discovery association ID.</p>
     */
    inline bool IpamResourceDiscoveryAssociationIdHasBeenSet() const { return m_ipamResourceDiscoveryAssociationIdHasBeenSet; }

    /**
     * <p>The resource discovery association ID.</p>
     */
    inline void SetIpamResourceDiscoveryAssociationId(const Aws::String& value) { m_ipamResourceDiscoveryAssociationIdHasBeenSet = true; m_ipamResourceDiscoveryAssociationId = value; }

    /**
     * <p>The resource discovery association ID.</p>
     */
    inline void SetIpamResourceDiscoveryAssociationId(Aws::String&& value) { m_ipamResourceDiscoveryAssociationIdHasBeenSet = true; m_ipamResourceDiscoveryAssociationId = std::move(value); }

    /**
     * <p>The resource discovery association ID.</p>
     */
    inline void SetIpamResourceDiscoveryAssociationId(const char* value) { m_ipamResourceDiscoveryAssociationIdHasBeenSet = true; m_ipamResourceDiscoveryAssociationId.assign(value); }

    /**
     * <p>The resource discovery association ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryAssociationId(const Aws::String& value) { SetIpamResourceDiscoveryAssociationId(value); return *this;}

    /**
     * <p>The resource discovery association ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryAssociationId(Aws::String&& value) { SetIpamResourceDiscoveryAssociationId(std::move(value)); return *this;}

    /**
     * <p>The resource discovery association ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryAssociationId(const char* value) { SetIpamResourceDiscoveryAssociationId(value); return *this;}


    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryAssociationArn() const{ return m_ipamResourceDiscoveryAssociationArn; }

    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline bool IpamResourceDiscoveryAssociationArnHasBeenSet() const { return m_ipamResourceDiscoveryAssociationArnHasBeenSet; }

    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline void SetIpamResourceDiscoveryAssociationArn(const Aws::String& value) { m_ipamResourceDiscoveryAssociationArnHasBeenSet = true; m_ipamResourceDiscoveryAssociationArn = value; }

    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline void SetIpamResourceDiscoveryAssociationArn(Aws::String&& value) { m_ipamResourceDiscoveryAssociationArnHasBeenSet = true; m_ipamResourceDiscoveryAssociationArn = std::move(value); }

    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline void SetIpamResourceDiscoveryAssociationArn(const char* value) { m_ipamResourceDiscoveryAssociationArnHasBeenSet = true; m_ipamResourceDiscoveryAssociationArn.assign(value); }

    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryAssociationArn(const Aws::String& value) { SetIpamResourceDiscoveryAssociationArn(value); return *this;}

    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryAssociationArn(Aws::String&& value) { SetIpamResourceDiscoveryAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryAssociationArn(const char* value) { SetIpamResourceDiscoveryAssociationArn(value); return *this;}


    /**
     * <p>The resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const{ return m_ipamResourceDiscoveryId; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const Aws::String& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = value; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(Aws::String&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::move(value); }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const char* value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId.assign(value); }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryId(const Aws::String& value) { SetIpamResourceDiscoveryId(value); return *this;}

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryId(Aws::String&& value) { SetIpamResourceDiscoveryId(std::move(value)); return *this;}

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryId(const char* value) { SetIpamResourceDiscoveryId(value); return *this;}


    /**
     * <p>The IPAM ID.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }

    /**
     * <p>The IPAM ID.</p>
     */
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }

    /**
     * <p>The IPAM ID.</p>
     */
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }

    /**
     * <p>The IPAM ID.</p>
     */
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }

    /**
     * <p>The IPAM ID.</p>
     */
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }

    /**
     * <p>The IPAM ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}

    /**
     * <p>The IPAM ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}

    /**
     * <p>The IPAM ID.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamId(const char* value) { SetIpamId(value); return *this;}


    /**
     * <p>The IPAM ARN.</p>
     */
    inline const Aws::String& GetIpamArn() const{ return m_ipamArn; }

    /**
     * <p>The IPAM ARN.</p>
     */
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }

    /**
     * <p>The IPAM ARN.</p>
     */
    inline void SetIpamArn(const Aws::String& value) { m_ipamArnHasBeenSet = true; m_ipamArn = value; }

    /**
     * <p>The IPAM ARN.</p>
     */
    inline void SetIpamArn(Aws::String&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::move(value); }

    /**
     * <p>The IPAM ARN.</p>
     */
    inline void SetIpamArn(const char* value) { m_ipamArnHasBeenSet = true; m_ipamArn.assign(value); }

    /**
     * <p>The IPAM ARN.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamArn(const Aws::String& value) { SetIpamArn(value); return *this;}

    /**
     * <p>The IPAM ARN.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamArn(Aws::String&& value) { SetIpamArn(std::move(value)); return *this;}

    /**
     * <p>The IPAM ARN.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamArn(const char* value) { SetIpamArn(value); return *this;}


    /**
     * <p>The IPAM home Region.</p>
     */
    inline const Aws::String& GetIpamRegion() const{ return m_ipamRegion; }

    /**
     * <p>The IPAM home Region.</p>
     */
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }

    /**
     * <p>The IPAM home Region.</p>
     */
    inline void SetIpamRegion(const Aws::String& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = value; }

    /**
     * <p>The IPAM home Region.</p>
     */
    inline void SetIpamRegion(Aws::String&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::move(value); }

    /**
     * <p>The IPAM home Region.</p>
     */
    inline void SetIpamRegion(const char* value) { m_ipamRegionHasBeenSet = true; m_ipamRegion.assign(value); }

    /**
     * <p>The IPAM home Region.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamRegion(const Aws::String& value) { SetIpamRegion(value); return *this;}

    /**
     * <p>The IPAM home Region.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamRegion(Aws::String&& value) { SetIpamRegion(std::move(value)); return *this;}

    /**
     * <p>The IPAM home Region.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIpamRegion(const char* value) { SetIpamRegion(value); return *this;}


    /**
     * <p>Defines if the resource discovery is the default. When you create an IPAM, a
     * default resource discovery is created for your IPAM and it's associated with
     * your IPAM.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Defines if the resource discovery is the default. When you create an IPAM, a
     * default resource discovery is created for your IPAM and it's associated with
     * your IPAM.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>Defines if the resource discovery is the default. When you create an IPAM, a
     * default resource discovery is created for your IPAM and it's associated with
     * your IPAM.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Defines if the resource discovery is the default. When you create an IPAM, a
     * default resource discovery is created for your IPAM and it's associated with
     * your IPAM.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The resource discovery status.</p> <ul> <li> <p> <code>active</code> -
     * Connection or permissions required to read the results of the resource discovery
     * are intact.</p> </li> <li> <p> <code>not-found</code> - Connection or
     * permissions required to read the results of the resource discovery are broken.
     * This may happen if the owner of the resource discovery stopped sharing it or
     * deleted the resource discovery. Verify the resource discovery still exists and
     * the Amazon Web Services RAM resource share is still intact.</p> </li> </ul>
     */
    inline const IpamAssociatedResourceDiscoveryStatus& GetResourceDiscoveryStatus() const{ return m_resourceDiscoveryStatus; }

    /**
     * <p>The resource discovery status.</p> <ul> <li> <p> <code>active</code> -
     * Connection or permissions required to read the results of the resource discovery
     * are intact.</p> </li> <li> <p> <code>not-found</code> - Connection or
     * permissions required to read the results of the resource discovery are broken.
     * This may happen if the owner of the resource discovery stopped sharing it or
     * deleted the resource discovery. Verify the resource discovery still exists and
     * the Amazon Web Services RAM resource share is still intact.</p> </li> </ul>
     */
    inline bool ResourceDiscoveryStatusHasBeenSet() const { return m_resourceDiscoveryStatusHasBeenSet; }

    /**
     * <p>The resource discovery status.</p> <ul> <li> <p> <code>active</code> -
     * Connection or permissions required to read the results of the resource discovery
     * are intact.</p> </li> <li> <p> <code>not-found</code> - Connection or
     * permissions required to read the results of the resource discovery are broken.
     * This may happen if the owner of the resource discovery stopped sharing it or
     * deleted the resource discovery. Verify the resource discovery still exists and
     * the Amazon Web Services RAM resource share is still intact.</p> </li> </ul>
     */
    inline void SetResourceDiscoveryStatus(const IpamAssociatedResourceDiscoveryStatus& value) { m_resourceDiscoveryStatusHasBeenSet = true; m_resourceDiscoveryStatus = value; }

    /**
     * <p>The resource discovery status.</p> <ul> <li> <p> <code>active</code> -
     * Connection or permissions required to read the results of the resource discovery
     * are intact.</p> </li> <li> <p> <code>not-found</code> - Connection or
     * permissions required to read the results of the resource discovery are broken.
     * This may happen if the owner of the resource discovery stopped sharing it or
     * deleted the resource discovery. Verify the resource discovery still exists and
     * the Amazon Web Services RAM resource share is still intact.</p> </li> </ul>
     */
    inline void SetResourceDiscoveryStatus(IpamAssociatedResourceDiscoveryStatus&& value) { m_resourceDiscoveryStatusHasBeenSet = true; m_resourceDiscoveryStatus = std::move(value); }

    /**
     * <p>The resource discovery status.</p> <ul> <li> <p> <code>active</code> -
     * Connection or permissions required to read the results of the resource discovery
     * are intact.</p> </li> <li> <p> <code>not-found</code> - Connection or
     * permissions required to read the results of the resource discovery are broken.
     * This may happen if the owner of the resource discovery stopped sharing it or
     * deleted the resource discovery. Verify the resource discovery still exists and
     * the Amazon Web Services RAM resource share is still intact.</p> </li> </ul>
     */
    inline IpamResourceDiscoveryAssociation& WithResourceDiscoveryStatus(const IpamAssociatedResourceDiscoveryStatus& value) { SetResourceDiscoveryStatus(value); return *this;}

    /**
     * <p>The resource discovery status.</p> <ul> <li> <p> <code>active</code> -
     * Connection or permissions required to read the results of the resource discovery
     * are intact.</p> </li> <li> <p> <code>not-found</code> - Connection or
     * permissions required to read the results of the resource discovery are broken.
     * This may happen if the owner of the resource discovery stopped sharing it or
     * deleted the resource discovery. Verify the resource discovery still exists and
     * the Amazon Web Services RAM resource share is still intact.</p> </li> </ul>
     */
    inline IpamResourceDiscoveryAssociation& WithResourceDiscoveryStatus(IpamAssociatedResourceDiscoveryStatus&& value) { SetResourceDiscoveryStatus(std::move(value)); return *this;}


    /**
     * <p>The lifecycle state of the association when you associate or disassociate a
     * resource discovery.</p> <ul> <li> <p> <code>associate-in-progress</code> -
     * Resource discovery is being associated.</p> </li> <li> <p>
     * <code>associate-complete</code> - Resource discovery association is
     * complete.</p> </li> <li> <p> <code>associate-failed</code> - Resource discovery
     * association has failed.</p> </li> <li> <p> <code>disassociate-in-progress</code>
     * - Resource discovery is being disassociated.</p> </li> <li> <p>
     * <code>disassociate-complete</code> - Resource discovery disassociation is
     * complete.</p> </li> <li> <p> <code>disassociate-failed </code> - Resource
     * discovery disassociation has failed.</p> </li> <li> <p>
     * <code>isolate-in-progress</code> - Amazon Web Services account that created the
     * resource discovery association has been removed and the resource discovery
     * associatation is being isolated.</p> </li> <li> <p>
     * <code>isolate-complete</code> - Resource discovery isolation is complete..</p>
     * </li> <li> <p> <code>restore-in-progress</code> - Resource discovery is being
     * restored.</p> </li> </ul>
     */
    inline const IpamResourceDiscoveryAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The lifecycle state of the association when you associate or disassociate a
     * resource discovery.</p> <ul> <li> <p> <code>associate-in-progress</code> -
     * Resource discovery is being associated.</p> </li> <li> <p>
     * <code>associate-complete</code> - Resource discovery association is
     * complete.</p> </li> <li> <p> <code>associate-failed</code> - Resource discovery
     * association has failed.</p> </li> <li> <p> <code>disassociate-in-progress</code>
     * - Resource discovery is being disassociated.</p> </li> <li> <p>
     * <code>disassociate-complete</code> - Resource discovery disassociation is
     * complete.</p> </li> <li> <p> <code>disassociate-failed </code> - Resource
     * discovery disassociation has failed.</p> </li> <li> <p>
     * <code>isolate-in-progress</code> - Amazon Web Services account that created the
     * resource discovery association has been removed and the resource discovery
     * associatation is being isolated.</p> </li> <li> <p>
     * <code>isolate-complete</code> - Resource discovery isolation is complete..</p>
     * </li> <li> <p> <code>restore-in-progress</code> - Resource discovery is being
     * restored.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The lifecycle state of the association when you associate or disassociate a
     * resource discovery.</p> <ul> <li> <p> <code>associate-in-progress</code> -
     * Resource discovery is being associated.</p> </li> <li> <p>
     * <code>associate-complete</code> - Resource discovery association is
     * complete.</p> </li> <li> <p> <code>associate-failed</code> - Resource discovery
     * association has failed.</p> </li> <li> <p> <code>disassociate-in-progress</code>
     * - Resource discovery is being disassociated.</p> </li> <li> <p>
     * <code>disassociate-complete</code> - Resource discovery disassociation is
     * complete.</p> </li> <li> <p> <code>disassociate-failed </code> - Resource
     * discovery disassociation has failed.</p> </li> <li> <p>
     * <code>isolate-in-progress</code> - Amazon Web Services account that created the
     * resource discovery association has been removed and the resource discovery
     * associatation is being isolated.</p> </li> <li> <p>
     * <code>isolate-complete</code> - Resource discovery isolation is complete..</p>
     * </li> <li> <p> <code>restore-in-progress</code> - Resource discovery is being
     * restored.</p> </li> </ul>
     */
    inline void SetState(const IpamResourceDiscoveryAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The lifecycle state of the association when you associate or disassociate a
     * resource discovery.</p> <ul> <li> <p> <code>associate-in-progress</code> -
     * Resource discovery is being associated.</p> </li> <li> <p>
     * <code>associate-complete</code> - Resource discovery association is
     * complete.</p> </li> <li> <p> <code>associate-failed</code> - Resource discovery
     * association has failed.</p> </li> <li> <p> <code>disassociate-in-progress</code>
     * - Resource discovery is being disassociated.</p> </li> <li> <p>
     * <code>disassociate-complete</code> - Resource discovery disassociation is
     * complete.</p> </li> <li> <p> <code>disassociate-failed </code> - Resource
     * discovery disassociation has failed.</p> </li> <li> <p>
     * <code>isolate-in-progress</code> - Amazon Web Services account that created the
     * resource discovery association has been removed and the resource discovery
     * associatation is being isolated.</p> </li> <li> <p>
     * <code>isolate-complete</code> - Resource discovery isolation is complete..</p>
     * </li> <li> <p> <code>restore-in-progress</code> - Resource discovery is being
     * restored.</p> </li> </ul>
     */
    inline void SetState(IpamResourceDiscoveryAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The lifecycle state of the association when you associate or disassociate a
     * resource discovery.</p> <ul> <li> <p> <code>associate-in-progress</code> -
     * Resource discovery is being associated.</p> </li> <li> <p>
     * <code>associate-complete</code> - Resource discovery association is
     * complete.</p> </li> <li> <p> <code>associate-failed</code> - Resource discovery
     * association has failed.</p> </li> <li> <p> <code>disassociate-in-progress</code>
     * - Resource discovery is being disassociated.</p> </li> <li> <p>
     * <code>disassociate-complete</code> - Resource discovery disassociation is
     * complete.</p> </li> <li> <p> <code>disassociate-failed </code> - Resource
     * discovery disassociation has failed.</p> </li> <li> <p>
     * <code>isolate-in-progress</code> - Amazon Web Services account that created the
     * resource discovery association has been removed and the resource discovery
     * associatation is being isolated.</p> </li> <li> <p>
     * <code>isolate-complete</code> - Resource discovery isolation is complete..</p>
     * </li> <li> <p> <code>restore-in-progress</code> - Resource discovery is being
     * restored.</p> </li> </ul>
     */
    inline IpamResourceDiscoveryAssociation& WithState(const IpamResourceDiscoveryAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The lifecycle state of the association when you associate or disassociate a
     * resource discovery.</p> <ul> <li> <p> <code>associate-in-progress</code> -
     * Resource discovery is being associated.</p> </li> <li> <p>
     * <code>associate-complete</code> - Resource discovery association is
     * complete.</p> </li> <li> <p> <code>associate-failed</code> - Resource discovery
     * association has failed.</p> </li> <li> <p> <code>disassociate-in-progress</code>
     * - Resource discovery is being disassociated.</p> </li> <li> <p>
     * <code>disassociate-complete</code> - Resource discovery disassociation is
     * complete.</p> </li> <li> <p> <code>disassociate-failed </code> - Resource
     * discovery disassociation has failed.</p> </li> <li> <p>
     * <code>isolate-in-progress</code> - Amazon Web Services account that created the
     * resource discovery association has been removed and the resource discovery
     * associatation is being isolated.</p> </li> <li> <p>
     * <code>isolate-complete</code> - Resource discovery isolation is complete..</p>
     * </li> <li> <p> <code>restore-in-progress</code> - Resource discovery is being
     * restored.</p> </li> </ul>
     */
    inline IpamResourceDiscoveryAssociation& WithState(IpamResourceDiscoveryAssociationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline IpamResourceDiscoveryAssociation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline IpamResourceDiscoveryAssociation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline IpamResourceDiscoveryAssociation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryAssociationId;
    bool m_ipamResourceDiscoveryAssociationIdHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryAssociationArn;
    bool m_ipamResourceDiscoveryAssociationArnHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryId;
    bool m_ipamResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_ipamArn;
    bool m_ipamArnHasBeenSet = false;

    Aws::String m_ipamRegion;
    bool m_ipamRegionHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    IpamAssociatedResourceDiscoveryStatus m_resourceDiscoveryStatus;
    bool m_resourceDiscoveryStatusHasBeenSet = false;

    IpamResourceDiscoveryAssociationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
