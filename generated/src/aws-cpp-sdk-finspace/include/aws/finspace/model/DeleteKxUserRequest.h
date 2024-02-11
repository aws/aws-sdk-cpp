/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace finspace
{
namespace Model
{

  /**
   */
  class DeleteKxUserRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API DeleteKxUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKxUser"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;

    AWS_FINSPACE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A unique identifier for the user that you want to delete.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique identifier for the user that you want to delete.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A unique identifier for the user that you want to delete.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A unique identifier for the user that you want to delete.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A unique identifier for the user that you want to delete.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A unique identifier for the user that you want to delete.</p>
     */
    inline DeleteKxUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique identifier for the user that you want to delete.</p>
     */
    inline DeleteKxUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the user that you want to delete.</p>
     */
    inline DeleteKxUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline DeleteKxUserRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline DeleteKxUserRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline DeleteKxUserRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeleteKxUserRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeleteKxUserRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeleteKxUserRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
