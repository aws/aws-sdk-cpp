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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API RestoreServerRequest : public OpsWorksCMRequest
  {
  public:
    RestoreServerRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p> The ID of the backup that you want to use to restore a server. </p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p> The ID of the backup that you want to use to restore a server. </p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p> The ID of the backup that you want to use to restore a server. </p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p> The ID of the backup that you want to use to restore a server. </p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p> The ID of the backup that you want to use to restore a server. </p>
     */
    inline RestoreServerRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p> The ID of the backup that you want to use to restore a server. </p>
     */
    inline RestoreServerRequest& WithBackupId(Aws::String&& value) { SetBackupId(value); return *this;}

    /**
     * <p> The ID of the backup that you want to use to restore a server. </p>
     */
    inline RestoreServerRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}

    /**
     * <p> The name of the server that you want to restore. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p> The name of the server that you want to restore. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p> The name of the server that you want to restore. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p> The name of the server that you want to restore. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p> The name of the server that you want to restore. </p>
     */
    inline RestoreServerRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p> The name of the server that you want to restore. </p>
     */
    inline RestoreServerRequest& WithServerName(Aws::String&& value) { SetServerName(value); return *this;}

    /**
     * <p> The name of the server that you want to restore. </p>
     */
    inline RestoreServerRequest& WithServerName(const char* value) { SetServerName(value); return *this;}

    /**
     * <p> The type of the instance to create. Valid values must be specified in the
     * following format: <code>^([cm][34]|t2).*</code> For example,
     * <code>c3.large</code>. If you do not specify this parameter, RestoreServer uses
     * the instance type from the specified backup. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The type of the instance to create. Valid values must be specified in the
     * following format: <code>^([cm][34]|t2).*</code> For example,
     * <code>c3.large</code>. If you do not specify this parameter, RestoreServer uses
     * the instance type from the specified backup. </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The type of the instance to create. Valid values must be specified in the
     * following format: <code>^([cm][34]|t2).*</code> For example,
     * <code>c3.large</code>. If you do not specify this parameter, RestoreServer uses
     * the instance type from the specified backup. </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The type of the instance to create. Valid values must be specified in the
     * following format: <code>^([cm][34]|t2).*</code> For example,
     * <code>c3.large</code>. If you do not specify this parameter, RestoreServer uses
     * the instance type from the specified backup. </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p> The type of the instance to create. Valid values must be specified in the
     * following format: <code>^([cm][34]|t2).*</code> For example,
     * <code>c3.large</code>. If you do not specify this parameter, RestoreServer uses
     * the instance type from the specified backup. </p>
     */
    inline RestoreServerRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The type of the instance to create. Valid values must be specified in the
     * following format: <code>^([cm][34]|t2).*</code> For example,
     * <code>c3.large</code>. If you do not specify this parameter, RestoreServer uses
     * the instance type from the specified backup. </p>
     */
    inline RestoreServerRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The type of the instance to create. Valid values must be specified in the
     * following format: <code>^([cm][34]|t2).*</code> For example,
     * <code>c3.large</code>. If you do not specify this parameter, RestoreServer uses
     * the instance type from the specified backup. </p>
     */
    inline RestoreServerRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

    /**
     * <p> The name of the key pair to set on the new EC2 instance. This can be helpful
     * if any of the administrators who manage the server no longer have the SSH key.
     * </p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p> The name of the key pair to set on the new EC2 instance. This can be helpful
     * if any of the administrators who manage the server no longer have the SSH key.
     * </p>
     */
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p> The name of the key pair to set on the new EC2 instance. This can be helpful
     * if any of the administrators who manage the server no longer have the SSH key.
     * </p>
     */
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p> The name of the key pair to set on the new EC2 instance. This can be helpful
     * if any of the administrators who manage the server no longer have the SSH key.
     * </p>
     */
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }

    /**
     * <p> The name of the key pair to set on the new EC2 instance. This can be helpful
     * if any of the administrators who manage the server no longer have the SSH key.
     * </p>
     */
    inline RestoreServerRequest& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}

    /**
     * <p> The name of the key pair to set on the new EC2 instance. This can be helpful
     * if any of the administrators who manage the server no longer have the SSH key.
     * </p>
     */
    inline RestoreServerRequest& WithKeyPair(Aws::String&& value) { SetKeyPair(value); return *this;}

    /**
     * <p> The name of the key pair to set on the new EC2 instance. This can be helpful
     * if any of the administrators who manage the server no longer have the SSH key.
     * </p>
     */
    inline RestoreServerRequest& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}

  private:
    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;
    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;
    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;
    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
