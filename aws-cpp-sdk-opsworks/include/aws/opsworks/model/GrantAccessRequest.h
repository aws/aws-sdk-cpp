﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API GrantAccessRequest : public OpsWorksRequest
  {
  public:
    GrantAccessRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The instance's AWS OpsWorks ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance's AWS OpsWorks ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance's AWS OpsWorks ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance's AWS OpsWorks ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance's AWS OpsWorks ID.</p>
     */
    inline GrantAccessRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance's AWS OpsWorks ID.</p>
     */
    inline GrantAccessRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance's AWS OpsWorks ID.</p>
     */
    inline GrantAccessRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The length of time (in minutes) that the grant is valid. When the grant
     * expires at the end of this period, the user will no longer be able to use the
     * credentials to log in. If the user is logged in at the time, he or she
     * automatically will be logged out.</p>
     */
    inline int GetValidForInMinutes() const{ return m_validForInMinutes; }

    /**
     * <p>The length of time (in minutes) that the grant is valid. When the grant
     * expires at the end of this period, the user will no longer be able to use the
     * credentials to log in. If the user is logged in at the time, he or she
     * automatically will be logged out.</p>
     */
    inline void SetValidForInMinutes(int value) { m_validForInMinutesHasBeenSet = true; m_validForInMinutes = value; }

    /**
     * <p>The length of time (in minutes) that the grant is valid. When the grant
     * expires at the end of this period, the user will no longer be able to use the
     * credentials to log in. If the user is logged in at the time, he or she
     * automatically will be logged out.</p>
     */
    inline GrantAccessRequest& WithValidForInMinutes(int value) { SetValidForInMinutes(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    int m_validForInMinutes;
    bool m_validForInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
