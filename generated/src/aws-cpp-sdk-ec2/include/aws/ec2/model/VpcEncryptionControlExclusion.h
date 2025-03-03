/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VpcEncryptionControlExclusionState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  class VpcEncryptionControlExclusion
  {
  public:
    AWS_EC2_API VpcEncryptionControlExclusion();
    AWS_EC2_API VpcEncryptionControlExclusion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEncryptionControlExclusion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const VpcEncryptionControlExclusionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VpcEncryptionControlExclusionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VpcEncryptionControlExclusionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VpcEncryptionControlExclusion& WithState(const VpcEncryptionControlExclusionState& value) { SetState(value); return *this;}
    inline VpcEncryptionControlExclusion& WithState(VpcEncryptionControlExclusionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }
    inline VpcEncryptionControlExclusion& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline VpcEncryptionControlExclusion& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline VpcEncryptionControlExclusion& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}
  private:

    VpcEncryptionControlExclusionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
