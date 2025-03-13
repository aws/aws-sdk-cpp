/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/EventConfig.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class UpdateApiRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API UpdateApiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApi"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>Api</code> ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    UpdateApiRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Api.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateApiRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner contact information for the <code>Api</code>.</p>
     */
    inline const Aws::String& GetOwnerContact() const { return m_ownerContact; }
    inline bool OwnerContactHasBeenSet() const { return m_ownerContactHasBeenSet; }
    template<typename OwnerContactT = Aws::String>
    void SetOwnerContact(OwnerContactT&& value) { m_ownerContactHasBeenSet = true; m_ownerContact = std::forward<OwnerContactT>(value); }
    template<typename OwnerContactT = Aws::String>
    UpdateApiRequest& WithOwnerContact(OwnerContactT&& value) { SetOwnerContact(std::forward<OwnerContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new event configuration. This includes the default authorization
     * configuration for connecting, publishing, and subscribing to an Event API.</p>
     */
    inline const EventConfig& GetEventConfig() const { return m_eventConfig; }
    inline bool EventConfigHasBeenSet() const { return m_eventConfigHasBeenSet; }
    template<typename EventConfigT = EventConfig>
    void SetEventConfig(EventConfigT&& value) { m_eventConfigHasBeenSet = true; m_eventConfig = std::forward<EventConfigT>(value); }
    template<typename EventConfigT = EventConfig>
    UpdateApiRequest& WithEventConfig(EventConfigT&& value) { SetEventConfig(std::forward<EventConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerContact;
    bool m_ownerContactHasBeenSet = false;

    EventConfig m_eventConfig;
    bool m_eventConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
