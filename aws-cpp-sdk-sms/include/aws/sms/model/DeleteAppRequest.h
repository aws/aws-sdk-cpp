/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class AWS_SMS_API DeleteAppRequest : public SMSRequest
  {
  public:
    DeleteAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApp"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the application to delete.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>ID of the application to delete.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>ID of the application to delete.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>ID of the application to delete.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>ID of the application to delete.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>ID of the application to delete.</p>
     */
    inline DeleteAppRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>ID of the application to delete.</p>
     */
    inline DeleteAppRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>ID of the application to delete.</p>
     */
    inline DeleteAppRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>While deleting the application, stop all replication jobs corresponding to
     * the servers in the application.</p>
     */
    inline bool GetForceStopAppReplication() const{ return m_forceStopAppReplication; }

    /**
     * <p>While deleting the application, stop all replication jobs corresponding to
     * the servers in the application.</p>
     */
    inline bool ForceStopAppReplicationHasBeenSet() const { return m_forceStopAppReplicationHasBeenSet; }

    /**
     * <p>While deleting the application, stop all replication jobs corresponding to
     * the servers in the application.</p>
     */
    inline void SetForceStopAppReplication(bool value) { m_forceStopAppReplicationHasBeenSet = true; m_forceStopAppReplication = value; }

    /**
     * <p>While deleting the application, stop all replication jobs corresponding to
     * the servers in the application.</p>
     */
    inline DeleteAppRequest& WithForceStopAppReplication(bool value) { SetForceStopAppReplication(value); return *this;}


    /**
     * <p>While deleting the application, terminate the stack corresponding to the
     * application.</p>
     */
    inline bool GetForceTerminateApp() const{ return m_forceTerminateApp; }

    /**
     * <p>While deleting the application, terminate the stack corresponding to the
     * application.</p>
     */
    inline bool ForceTerminateAppHasBeenSet() const { return m_forceTerminateAppHasBeenSet; }

    /**
     * <p>While deleting the application, terminate the stack corresponding to the
     * application.</p>
     */
    inline void SetForceTerminateApp(bool value) { m_forceTerminateAppHasBeenSet = true; m_forceTerminateApp = value; }

    /**
     * <p>While deleting the application, terminate the stack corresponding to the
     * application.</p>
     */
    inline DeleteAppRequest& WithForceTerminateApp(bool value) { SetForceTerminateApp(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    bool m_forceStopAppReplication;
    bool m_forceStopAppReplicationHasBeenSet;

    bool m_forceTerminateApp;
    bool m_forceTerminateAppHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
