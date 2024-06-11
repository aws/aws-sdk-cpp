/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayAttachmentState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/TransitGatewayConnectOptions.h>
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
   * <p>Describes a transit gateway Connect attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayConnect">AWS
   * API Reference</a></p>
   */
  class TransitGatewayConnect
  {
  public:
    AWS_EC2_API TransitGatewayConnect();
    AWS_EC2_API TransitGatewayConnect(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayConnect& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }
    inline TransitGatewayConnect& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}
    inline TransitGatewayConnect& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayConnect& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the attachment from which the Connect attachment was created.</p>
     */
    inline const Aws::String& GetTransportTransitGatewayAttachmentId() const{ return m_transportTransitGatewayAttachmentId; }
    inline bool TransportTransitGatewayAttachmentIdHasBeenSet() const { return m_transportTransitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransportTransitGatewayAttachmentId(const Aws::String& value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId = value; }
    inline void SetTransportTransitGatewayAttachmentId(Aws::String&& value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId = std::move(value); }
    inline void SetTransportTransitGatewayAttachmentId(const char* value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId.assign(value); }
    inline TransitGatewayConnect& WithTransportTransitGatewayAttachmentId(const Aws::String& value) { SetTransportTransitGatewayAttachmentId(value); return *this;}
    inline TransitGatewayConnect& WithTransportTransitGatewayAttachmentId(Aws::String&& value) { SetTransportTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayConnect& WithTransportTransitGatewayAttachmentId(const char* value) { SetTransportTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }
    inline TransitGatewayConnect& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}
    inline TransitGatewayConnect& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}
    inline TransitGatewayConnect& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the attachment.</p>
     */
    inline const TransitGatewayAttachmentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayAttachmentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayAttachmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayConnect& WithState(const TransitGatewayAttachmentState& value) { SetState(value); return *this;}
    inline TransitGatewayConnect& WithState(TransitGatewayAttachmentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TransitGatewayConnect& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TransitGatewayConnect& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect attachment options.</p>
     */
    inline const TransitGatewayConnectOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const TransitGatewayConnectOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(TransitGatewayConnectOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline TransitGatewayConnect& WithOptions(const TransitGatewayConnectOptions& value) { SetOptions(value); return *this;}
    inline TransitGatewayConnect& WithOptions(TransitGatewayConnectOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TransitGatewayConnect& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TransitGatewayConnect& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TransitGatewayConnect& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TransitGatewayConnect& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_transportTransitGatewayAttachmentId;
    bool m_transportTransitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    TransitGatewayAttachmentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    TransitGatewayConnectOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
