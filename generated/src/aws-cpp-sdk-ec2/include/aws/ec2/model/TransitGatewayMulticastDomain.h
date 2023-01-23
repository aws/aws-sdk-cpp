/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainOptions.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes the transit gateway multicast domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastDomain">AWS
   * API Reference</a></p>
   */
  class TransitGatewayMulticastDomain
  {
  public:
    AWS_EC2_API TransitGatewayMulticastDomain();
    AWS_EC2_API TransitGatewayMulticastDomain(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastDomain& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const{ return m_transitGatewayMulticastDomainId; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const Aws::String& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = value; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(Aws::String&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::move(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const char* value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId.assign(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}


    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainArn() const{ return m_transitGatewayMulticastDomainArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline bool TransitGatewayMulticastDomainArnHasBeenSet() const { return m_transitGatewayMulticastDomainArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainArn(const Aws::String& value) { m_transitGatewayMulticastDomainArnHasBeenSet = true; m_transitGatewayMulticastDomainArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainArn(Aws::String&& value) { m_transitGatewayMulticastDomainArnHasBeenSet = true; m_transitGatewayMulticastDomainArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainArn(const char* value) { m_transitGatewayMulticastDomainArnHasBeenSet = true; m_transitGatewayMulticastDomainArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayMulticastDomainArn(const Aws::String& value) { SetTransitGatewayMulticastDomainArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayMulticastDomainArn(Aws::String&& value) { SetTransitGatewayMulticastDomainArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithTransitGatewayMulticastDomainArn(const char* value) { SetTransitGatewayMulticastDomainArn(value); return *this;}


    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The options for the transit gateway multicast domain.</p>
     */
    inline const TransitGatewayMulticastDomainOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The options for the transit gateway multicast domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The options for the transit gateway multicast domain.</p>
     */
    inline void SetOptions(const TransitGatewayMulticastDomainOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The options for the transit gateway multicast domain.</p>
     */
    inline void SetOptions(TransitGatewayMulticastDomainOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The options for the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithOptions(const TransitGatewayMulticastDomainOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The options for the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithOptions(TransitGatewayMulticastDomainOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The state of the transit gateway multicast domain.</p>
     */
    inline const TransitGatewayMulticastDomainState& GetState() const{ return m_state; }

    /**
     * <p>The state of the transit gateway multicast domain.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the transit gateway multicast domain.</p>
     */
    inline void SetState(const TransitGatewayMulticastDomainState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the transit gateway multicast domain.</p>
     */
    inline void SetState(TransitGatewayMulticastDomainState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithState(const TransitGatewayMulticastDomainState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithState(TransitGatewayMulticastDomainState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The time the transit gateway multicast domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the transit gateway multicast domain was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the transit gateway multicast domain was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the transit gateway multicast domain was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the transit gateway multicast domain was created.</p>
     */
    inline TransitGatewayMulticastDomain& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the transit gateway multicast domain was created.</p>
     */
    inline TransitGatewayMulticastDomain& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomain& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayMulticastDomainArn;
    bool m_transitGatewayMulticastDomainArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    TransitGatewayMulticastDomainOptions m_options;
    bool m_optionsHasBeenSet = false;

    TransitGatewayMulticastDomainState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
