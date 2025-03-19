/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/UserUnion.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Information of the user which performed the audit.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/AuditEventPerformedBy">AWS
   * API Reference</a></p>
   */
  class AuditEventPerformedBy
  {
  public:
    AWS_CONNECTCASES_API AuditEventPerformedBy() = default;
    AWS_CONNECTCASES_API AuditEventPerformedBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API AuditEventPerformedBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of an IAM role.</p>
     */
    inline const Aws::String& GetIamPrincipalArn() const { return m_iamPrincipalArn; }
    inline bool IamPrincipalArnHasBeenSet() const { return m_iamPrincipalArnHasBeenSet; }
    template<typename IamPrincipalArnT = Aws::String>
    void SetIamPrincipalArn(IamPrincipalArnT&& value) { m_iamPrincipalArnHasBeenSet = true; m_iamPrincipalArn = std::forward<IamPrincipalArnT>(value); }
    template<typename IamPrincipalArnT = Aws::String>
    AuditEventPerformedBy& WithIamPrincipalArn(IamPrincipalArnT&& value) { SetIamPrincipalArn(std::forward<IamPrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserUnion& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = UserUnion>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = UserUnion>
    AuditEventPerformedBy& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iamPrincipalArn;
    bool m_iamPrincipalArnHasBeenSet = false;

    UserUnion m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
