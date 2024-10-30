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
    AWS_APPSYNC_API UpdateApiRequest();

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
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline UpdateApiRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline UpdateApiRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline UpdateApiRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Api.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateApiRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner contact information for the <code>Api</code>.</p>
     */
    inline const Aws::String& GetOwnerContact() const{ return m_ownerContact; }
    inline bool OwnerContactHasBeenSet() const { return m_ownerContactHasBeenSet; }
    inline void SetOwnerContact(const Aws::String& value) { m_ownerContactHasBeenSet = true; m_ownerContact = value; }
    inline void SetOwnerContact(Aws::String&& value) { m_ownerContactHasBeenSet = true; m_ownerContact = std::move(value); }
    inline void SetOwnerContact(const char* value) { m_ownerContactHasBeenSet = true; m_ownerContact.assign(value); }
    inline UpdateApiRequest& WithOwnerContact(const Aws::String& value) { SetOwnerContact(value); return *this;}
    inline UpdateApiRequest& WithOwnerContact(Aws::String&& value) { SetOwnerContact(std::move(value)); return *this;}
    inline UpdateApiRequest& WithOwnerContact(const char* value) { SetOwnerContact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new event configuration. This includes the default authorization
     * configuration for connecting, publishing, and subscribing to an Event API.</p>
     */
    inline const EventConfig& GetEventConfig() const{ return m_eventConfig; }
    inline bool EventConfigHasBeenSet() const { return m_eventConfigHasBeenSet; }
    inline void SetEventConfig(const EventConfig& value) { m_eventConfigHasBeenSet = true; m_eventConfig = value; }
    inline void SetEventConfig(EventConfig&& value) { m_eventConfigHasBeenSet = true; m_eventConfig = std::move(value); }
    inline UpdateApiRequest& WithEventConfig(const EventConfig& value) { SetEventConfig(value); return *this;}
    inline UpdateApiRequest& WithEventConfig(EventConfig&& value) { SetEventConfig(std::move(value)); return *this;}
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
