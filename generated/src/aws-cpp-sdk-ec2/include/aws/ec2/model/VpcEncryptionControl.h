/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpcEncryptionControlMode.h>
#include <aws/ec2/model/VpcEncryptionControlState.h>
#include <aws/ec2/model/VpcEncryptionControlExclusions.h>
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

  class VpcEncryptionControl
  {
  public:
    AWS_EC2_API VpcEncryptionControl();
    AWS_EC2_API VpcEncryptionControl(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEncryptionControl& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline VpcEncryptionControl& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline VpcEncryptionControl& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline VpcEncryptionControl& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetVpcEncryptionControlId() const{ return m_vpcEncryptionControlId; }
    inline bool VpcEncryptionControlIdHasBeenSet() const { return m_vpcEncryptionControlIdHasBeenSet; }
    inline void SetVpcEncryptionControlId(const Aws::String& value) { m_vpcEncryptionControlIdHasBeenSet = true; m_vpcEncryptionControlId = value; }
    inline void SetVpcEncryptionControlId(Aws::String&& value) { m_vpcEncryptionControlIdHasBeenSet = true; m_vpcEncryptionControlId = std::move(value); }
    inline void SetVpcEncryptionControlId(const char* value) { m_vpcEncryptionControlIdHasBeenSet = true; m_vpcEncryptionControlId.assign(value); }
    inline VpcEncryptionControl& WithVpcEncryptionControlId(const Aws::String& value) { SetVpcEncryptionControlId(value); return *this;}
    inline VpcEncryptionControl& WithVpcEncryptionControlId(Aws::String&& value) { SetVpcEncryptionControlId(std::move(value)); return *this;}
    inline VpcEncryptionControl& WithVpcEncryptionControlId(const char* value) { SetVpcEncryptionControlId(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const VpcEncryptionControlMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(VpcEncryptionControlMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline VpcEncryptionControl& WithMode(const VpcEncryptionControlMode& value) { SetMode(value); return *this;}
    inline VpcEncryptionControl& WithMode(VpcEncryptionControlMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VpcEncryptionControlState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VpcEncryptionControlState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VpcEncryptionControl& WithState(const VpcEncryptionControlState& value) { SetState(value); return *this;}
    inline VpcEncryptionControl& WithState(VpcEncryptionControlState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }
    inline VpcEncryptionControl& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline VpcEncryptionControl& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline VpcEncryptionControl& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusions& GetResourceExclusions() const{ return m_resourceExclusions; }
    inline bool ResourceExclusionsHasBeenSet() const { return m_resourceExclusionsHasBeenSet; }
    inline void SetResourceExclusions(const VpcEncryptionControlExclusions& value) { m_resourceExclusionsHasBeenSet = true; m_resourceExclusions = value; }
    inline void SetResourceExclusions(VpcEncryptionControlExclusions&& value) { m_resourceExclusionsHasBeenSet = true; m_resourceExclusions = std::move(value); }
    inline VpcEncryptionControl& WithResourceExclusions(const VpcEncryptionControlExclusions& value) { SetResourceExclusions(value); return *this;}
    inline VpcEncryptionControl& WithResourceExclusions(VpcEncryptionControlExclusions&& value) { SetResourceExclusions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VpcEncryptionControl& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VpcEncryptionControl& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VpcEncryptionControl& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VpcEncryptionControl& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_vpcEncryptionControlId;
    bool m_vpcEncryptionControlIdHasBeenSet = false;

    VpcEncryptionControlMode m_mode;
    bool m_modeHasBeenSet = false;

    VpcEncryptionControlState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    VpcEncryptionControlExclusions m_resourceExclusions;
    bool m_resourceExclusionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
