/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateRoleAliasRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateRoleAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoleAlias"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The role alias to update.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }
    inline bool RoleAliasHasBeenSet() const { return m_roleAliasHasBeenSet; }
    inline void SetRoleAlias(const Aws::String& value) { m_roleAliasHasBeenSet = true; m_roleAlias = value; }
    inline void SetRoleAlias(Aws::String&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::move(value); }
    inline void SetRoleAlias(const char* value) { m_roleAliasHasBeenSet = true; m_roleAlias.assign(value); }
    inline UpdateRoleAliasRequest& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}
    inline UpdateRoleAliasRequest& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}
    inline UpdateRoleAliasRequest& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateRoleAliasRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateRoleAliasRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateRoleAliasRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds the credential will be valid.</p> <p>This value must be
     * less than or equal to the maximum session duration of the IAM role that the role
     * alias references.</p>
     */
    inline int GetCredentialDurationSeconds() const{ return m_credentialDurationSeconds; }
    inline bool CredentialDurationSecondsHasBeenSet() const { return m_credentialDurationSecondsHasBeenSet; }
    inline void SetCredentialDurationSeconds(int value) { m_credentialDurationSecondsHasBeenSet = true; m_credentialDurationSeconds = value; }
    inline UpdateRoleAliasRequest& WithCredentialDurationSeconds(int value) { SetCredentialDurationSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_roleAlias;
    bool m_roleAliasHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_credentialDurationSeconds;
    bool m_credentialDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
