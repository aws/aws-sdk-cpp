/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class DeleteAccessTokenRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API DeleteAccessTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessToken"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the personal access token to delete. You can find the IDs of all
     * PATs associated with your user account by calling <a>ListAccessTokens</a>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the personal access token to delete. You can find the IDs of all
     * PATs associated with your user account by calling <a>ListAccessTokens</a>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the personal access token to delete. You can find the IDs of all
     * PATs associated with your user account by calling <a>ListAccessTokens</a>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the personal access token to delete. You can find the IDs of all
     * PATs associated with your user account by calling <a>ListAccessTokens</a>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the personal access token to delete. You can find the IDs of all
     * PATs associated with your user account by calling <a>ListAccessTokens</a>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the personal access token to delete. You can find the IDs of all
     * PATs associated with your user account by calling <a>ListAccessTokens</a>.</p>
     */
    inline DeleteAccessTokenRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the personal access token to delete. You can find the IDs of all
     * PATs associated with your user account by calling <a>ListAccessTokens</a>.</p>
     */
    inline DeleteAccessTokenRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the personal access token to delete. You can find the IDs of all
     * PATs associated with your user account by calling <a>ListAccessTokens</a>.</p>
     */
    inline DeleteAccessTokenRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
