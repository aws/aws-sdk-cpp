/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the identity of the person who performed the action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UserUnion">AWS
   * API Reference</a></p>
   */
  class UserUnion
  {
  public:
    AWS_CONNECTCASES_API UserUnion();
    AWS_CONNECTCASES_API UserUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API UserUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the Amazon Connect ARN of the user.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>Represents the Amazon Connect ARN of the user.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>Represents the Amazon Connect ARN of the user.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>Represents the Amazon Connect ARN of the user.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>Represents the Amazon Connect ARN of the user.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>Represents the Amazon Connect ARN of the user.</p>
     */
    inline UserUnion& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>Represents the Amazon Connect ARN of the user.</p>
     */
    inline UserUnion& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>Represents the Amazon Connect ARN of the user.</p>
     */
    inline UserUnion& WithUserArn(const char* value) { SetUserArn(value); return *this;}

  private:

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
