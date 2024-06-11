/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace finspace
{
namespace Model
{

  /**
   * <p>A structure that stores metadata for a kdb user.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxUser">AWS
   * API Reference</a></p>
   */
  class KxUser
  {
  public:
    AWS_FINSPACE_API KxUser();
    AWS_FINSPACE_API KxUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that identifies the user. For more
     * information about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }
    inline KxUser& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline KxUser& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline KxUser& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline KxUser& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline KxUser& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline KxUser& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN that is associated with the user.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }
    inline KxUser& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}
    inline KxUser& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}
    inline KxUser& WithIamRole(const char* value) { SetIamRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the kdb user was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }
    inline KxUser& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}
    inline KxUser& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the kdb user was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTimestamp() const{ return m_updateTimestamp; }
    inline bool UpdateTimestampHasBeenSet() const { return m_updateTimestampHasBeenSet; }
    inline void SetUpdateTimestamp(const Aws::Utils::DateTime& value) { m_updateTimestampHasBeenSet = true; m_updateTimestamp = value; }
    inline void SetUpdateTimestamp(Aws::Utils::DateTime&& value) { m_updateTimestampHasBeenSet = true; m_updateTimestamp = std::move(value); }
    inline KxUser& WithUpdateTimestamp(const Aws::Utils::DateTime& value) { SetUpdateTimestamp(value); return *this;}
    inline KxUser& WithUpdateTimestamp(Aws::Utils::DateTime&& value) { SetUpdateTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updateTimestamp;
    bool m_updateTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
