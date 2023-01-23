/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/TransitGatewayOptions.h>
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
   * <p>Describes a transit gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGateway">AWS
   * API Reference</a></p>
   */
  class TransitGateway
  {
  public:
    AWS_EC2_API TransitGateway();
    AWS_EC2_API TransitGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline TransitGateway& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGateway& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline TransitGateway& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayArn() const{ return m_transitGatewayArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline void SetTransitGatewayArn(const Aws::String& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline void SetTransitGatewayArn(Aws::String&& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline void SetTransitGatewayArn(const char* value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline TransitGateway& WithTransitGatewayArn(const Aws::String& value) { SetTransitGatewayArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline TransitGateway& WithTransitGatewayArn(Aws::String&& value) { SetTransitGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline TransitGateway& WithTransitGatewayArn(const char* value) { SetTransitGatewayArn(value); return *this;}


    /**
     * <p>The state of the transit gateway.</p>
     */
    inline const TransitGatewayState& GetState() const{ return m_state; }

    /**
     * <p>The state of the transit gateway.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the transit gateway.</p>
     */
    inline void SetState(const TransitGatewayState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the transit gateway.</p>
     */
    inline void SetState(TransitGatewayState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the transit gateway.</p>
     */
    inline TransitGateway& WithState(const TransitGatewayState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the transit gateway.</p>
     */
    inline TransitGateway& WithState(TransitGatewayState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline TransitGateway& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline TransitGateway& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline TransitGateway& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The description of the transit gateway.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the transit gateway.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the transit gateway.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the transit gateway.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the transit gateway.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the transit gateway.</p>
     */
    inline TransitGateway& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the transit gateway.</p>
     */
    inline TransitGateway& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the transit gateway.</p>
     */
    inline TransitGateway& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline TransitGateway& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline TransitGateway& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The transit gateway options.</p>
     */
    inline const TransitGatewayOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The transit gateway options.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The transit gateway options.</p>
     */
    inline void SetOptions(const TransitGatewayOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The transit gateway options.</p>
     */
    inline void SetOptions(TransitGatewayOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The transit gateway options.</p>
     */
    inline TransitGateway& WithOptions(const TransitGatewayOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The transit gateway options.</p>
     */
    inline TransitGateway& WithOptions(TransitGatewayOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The tags for the transit gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the transit gateway.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the transit gateway.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the transit gateway.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the transit gateway.</p>
     */
    inline TransitGateway& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the transit gateway.</p>
     */
    inline TransitGateway& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the transit gateway.</p>
     */
    inline TransitGateway& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the transit gateway.</p>
     */
    inline TransitGateway& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayArn;
    bool m_transitGatewayArnHasBeenSet = false;

    TransitGatewayState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    TransitGatewayOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
