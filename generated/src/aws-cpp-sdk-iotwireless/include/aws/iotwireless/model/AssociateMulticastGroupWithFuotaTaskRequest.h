/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AssociateMulticastGroupWithFuotaTaskRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API AssociateMulticastGroupWithFuotaTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateMulticastGroupWithFuotaTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssociateMulticastGroupWithFuotaTaskRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMulticastGroupId() const { return m_multicastGroupId; }
    inline bool MulticastGroupIdHasBeenSet() const { return m_multicastGroupIdHasBeenSet; }
    template<typename MulticastGroupIdT = Aws::String>
    void SetMulticastGroupId(MulticastGroupIdT&& value) { m_multicastGroupIdHasBeenSet = true; m_multicastGroupId = std::forward<MulticastGroupIdT>(value); }
    template<typename MulticastGroupIdT = Aws::String>
    AssociateMulticastGroupWithFuotaTaskRequest& WithMulticastGroupId(MulticastGroupIdT&& value) { SetMulticastGroupId(std::forward<MulticastGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_multicastGroupId;
    bool m_multicastGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
