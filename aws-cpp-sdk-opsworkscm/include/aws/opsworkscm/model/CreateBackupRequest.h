/*
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
  class AWS_OPSWORKSCM_API CreateBackupRequest : public OpsWorksCMRequest
  {
  public:
    CreateBackupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline CreateBackupRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline CreateBackupRequest& WithServerName(Aws::String&& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server that you want to back up. </p>
     */
    inline CreateBackupRequest& WithServerName(const char* value) { SetServerName(value); return *this;}

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline CreateBackupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline CreateBackupRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p> A user-defined description of the backup. </p>
     */
    inline CreateBackupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
