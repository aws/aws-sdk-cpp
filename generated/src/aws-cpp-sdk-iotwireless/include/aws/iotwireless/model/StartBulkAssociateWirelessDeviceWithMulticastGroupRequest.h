/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class StartBulkAssociateWirelessDeviceWithMulticastGroupRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API StartBulkAssociateWirelessDeviceWithMulticastGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBulkAssociateWirelessDeviceWithMulticastGroup"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
