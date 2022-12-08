/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/SigninDelegateGroup.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AssociateSigninDelegateGroupsWithAccountRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API AssociateSigninDelegateGroupsWithAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSigninDelegateGroupsWithAccount"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline AssociateSigninDelegateGroupsWithAccountRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline AssociateSigninDelegateGroupsWithAccountRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline AssociateSigninDelegateGroupsWithAccountRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline const Aws::Vector<SigninDelegateGroup>& GetSigninDelegateGroups() const{ return m_signinDelegateGroups; }

    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline bool SigninDelegateGroupsHasBeenSet() const { return m_signinDelegateGroupsHasBeenSet; }

    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline void SetSigninDelegateGroups(const Aws::Vector<SigninDelegateGroup>& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups = value; }

    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline void SetSigninDelegateGroups(Aws::Vector<SigninDelegateGroup>&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups = std::move(value); }

    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline AssociateSigninDelegateGroupsWithAccountRequest& WithSigninDelegateGroups(const Aws::Vector<SigninDelegateGroup>& value) { SetSigninDelegateGroups(value); return *this;}

    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline AssociateSigninDelegateGroupsWithAccountRequest& WithSigninDelegateGroups(Aws::Vector<SigninDelegateGroup>&& value) { SetSigninDelegateGroups(std::move(value)); return *this;}

    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline AssociateSigninDelegateGroupsWithAccountRequest& AddSigninDelegateGroups(const SigninDelegateGroup& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups.push_back(value); return *this; }

    /**
     * <p>The sign-in delegate groups.</p>
     */
    inline AssociateSigninDelegateGroupsWithAccountRequest& AddSigninDelegateGroups(SigninDelegateGroup&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<SigninDelegateGroup> m_signinDelegateGroups;
    bool m_signinDelegateGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
