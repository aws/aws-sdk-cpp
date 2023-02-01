/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   */
  class GetUserRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API GetUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUser"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the user to get data for.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier of the user to get data for.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The unique identifier of the user to get data for.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The unique identifier of the user to get data for.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The unique identifier of the user to get data for.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The unique identifier of the user to get data for.</p>
     */
    inline GetUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier of the user to get data for.</p>
     */
    inline GetUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the user to get data for.</p>
     */
    inline GetUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
