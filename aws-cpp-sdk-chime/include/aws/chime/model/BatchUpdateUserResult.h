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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/UserError.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API BatchUpdateUserResult
  {
  public:
    BatchUpdateUserResult();
    BatchUpdateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchUpdateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the <a>BatchUpdateUser</a> action fails for one or more of the user IDs in
     * the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline const Aws::Vector<UserError>& GetUserErrors() const{ return m_userErrors; }

    /**
     * <p>If the <a>BatchUpdateUser</a> action fails for one or more of the user IDs in
     * the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline void SetUserErrors(const Aws::Vector<UserError>& value) { m_userErrors = value; }

    /**
     * <p>If the <a>BatchUpdateUser</a> action fails for one or more of the user IDs in
     * the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline void SetUserErrors(Aws::Vector<UserError>&& value) { m_userErrors = std::move(value); }

    /**
     * <p>If the <a>BatchUpdateUser</a> action fails for one or more of the user IDs in
     * the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline BatchUpdateUserResult& WithUserErrors(const Aws::Vector<UserError>& value) { SetUserErrors(value); return *this;}

    /**
     * <p>If the <a>BatchUpdateUser</a> action fails for one or more of the user IDs in
     * the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline BatchUpdateUserResult& WithUserErrors(Aws::Vector<UserError>&& value) { SetUserErrors(std::move(value)); return *this;}

    /**
     * <p>If the <a>BatchUpdateUser</a> action fails for one or more of the user IDs in
     * the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline BatchUpdateUserResult& AddUserErrors(const UserError& value) { m_userErrors.push_back(value); return *this; }

    /**
     * <p>If the <a>BatchUpdateUser</a> action fails for one or more of the user IDs in
     * the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline BatchUpdateUserResult& AddUserErrors(UserError&& value) { m_userErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UserError> m_userErrors;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
