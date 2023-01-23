/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateWirelessGatewayRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateWirelessGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWirelessGateway"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the resource to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline UpdateWirelessGatewayRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline UpdateWirelessGatewayRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline UpdateWirelessGatewayRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The new name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateWirelessGatewayRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateWirelessGatewayRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateWirelessGatewayRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A new description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateWirelessGatewayRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateWirelessGatewayRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateWirelessGatewayRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetJoinEuiFilters() const{ return m_joinEuiFilters; }

    
    inline bool JoinEuiFiltersHasBeenSet() const { return m_joinEuiFiltersHasBeenSet; }

    
    inline void SetJoinEuiFilters(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters = value; }

    
    inline void SetJoinEuiFilters(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters = std::move(value); }

    
    inline UpdateWirelessGatewayRequest& WithJoinEuiFilters(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetJoinEuiFilters(value); return *this;}

    
    inline UpdateWirelessGatewayRequest& WithJoinEuiFilters(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetJoinEuiFilters(std::move(value)); return *this;}

    
    inline UpdateWirelessGatewayRequest& AddJoinEuiFilters(const Aws::Vector<Aws::String>& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters.push_back(value); return *this; }

    
    inline UpdateWirelessGatewayRequest& AddJoinEuiFilters(Aws::Vector<Aws::String>&& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNetIdFilters() const{ return m_netIdFilters; }

    
    inline bool NetIdFiltersHasBeenSet() const { return m_netIdFiltersHasBeenSet; }

    
    inline void SetNetIdFilters(const Aws::Vector<Aws::String>& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters = value; }

    
    inline void SetNetIdFilters(Aws::Vector<Aws::String>&& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters = std::move(value); }

    
    inline UpdateWirelessGatewayRequest& WithNetIdFilters(const Aws::Vector<Aws::String>& value) { SetNetIdFilters(value); return *this;}

    
    inline UpdateWirelessGatewayRequest& WithNetIdFilters(Aws::Vector<Aws::String>&& value) { SetNetIdFilters(std::move(value)); return *this;}

    
    inline UpdateWirelessGatewayRequest& AddNetIdFilters(const Aws::String& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters.push_back(value); return *this; }

    
    inline UpdateWirelessGatewayRequest& AddNetIdFilters(Aws::String&& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters.push_back(std::move(value)); return *this; }

    
    inline UpdateWirelessGatewayRequest& AddNetIdFilters(const char* value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_joinEuiFilters;
    bool m_joinEuiFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_netIdFilters;
    bool m_netIdFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
