/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeStar
{
namespace Model
{
  class DeleteUserProfileResult
  {
  public:
    AWS_CODESTAR_API DeleteUserProfileResult();
    AWS_CODESTAR_API DeleteUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTAR_API DeleteUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the user deleted from AWS CodeStar.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user deleted from AWS CodeStar.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user deleted from AWS CodeStar.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user deleted from AWS CodeStar.</p>
     */
    inline void SetUserArn(const char* value) { m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user deleted from AWS CodeStar.</p>
     */
    inline DeleteUserProfileResult& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user deleted from AWS CodeStar.</p>
     */
    inline DeleteUserProfileResult& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user deleted from AWS CodeStar.</p>
     */
    inline DeleteUserProfileResult& WithUserArn(const char* value) { SetUserArn(value); return *this;}

  private:

    Aws::String m_userArn;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
