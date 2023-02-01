/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class DescribeUserProfileRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API DescribeUserProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUserProfile"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline DescribeUserProfileRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline DescribeUserProfileRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline DescribeUserProfileRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
