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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API BatchUnsuspendUserRequest : public ChimeRequest
  {
  public:
    BatchUnsuspendUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUnsuspendUser"; }

    Aws::String SerializePayload() const override;


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
    inline BatchUnsuspendUserRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline BatchUnsuspendUserRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline BatchUnsuspendUserRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdList() const{ return m_userIdList; }

    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline bool UserIdListHasBeenSet() const { return m_userIdListHasBeenSet; }

    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline void SetUserIdList(const Aws::Vector<Aws::String>& value) { m_userIdListHasBeenSet = true; m_userIdList = value; }

    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline void SetUserIdList(Aws::Vector<Aws::String>&& value) { m_userIdListHasBeenSet = true; m_userIdList = std::move(value); }

    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline BatchUnsuspendUserRequest& WithUserIdList(const Aws::Vector<Aws::String>& value) { SetUserIdList(value); return *this;}

    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline BatchUnsuspendUserRequest& WithUserIdList(Aws::Vector<Aws::String>&& value) { SetUserIdList(std::move(value)); return *this;}

    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline BatchUnsuspendUserRequest& AddUserIdList(const Aws::String& value) { m_userIdListHasBeenSet = true; m_userIdList.push_back(value); return *this; }

    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline BatchUnsuspendUserRequest& AddUserIdList(Aws::String&& value) { m_userIdListHasBeenSet = true; m_userIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>The request containing the user IDs to unsuspend.</p>
     */
    inline BatchUnsuspendUserRequest& AddUserIdList(const char* value) { m_userIdListHasBeenSet = true; m_userIdList.push_back(value); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::Vector<Aws::String> m_userIdList;
    bool m_userIdListHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
