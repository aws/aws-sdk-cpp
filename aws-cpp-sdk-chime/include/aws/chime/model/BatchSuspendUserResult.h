/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchSuspendUserResult
  {
  public:
    AWS_CHIME_API BatchSuspendUserResult();
    AWS_CHIME_API BatchSuspendUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API BatchSuspendUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the <a>BatchSuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline const Aws::Vector<UserError>& GetUserErrors() const{ return m_userErrors; }

    /**
     * <p>If the <a>BatchSuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline void SetUserErrors(const Aws::Vector<UserError>& value) { m_userErrors = value; }

    /**
     * <p>If the <a>BatchSuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline void SetUserErrors(Aws::Vector<UserError>&& value) { m_userErrors = std::move(value); }

    /**
     * <p>If the <a>BatchSuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline BatchSuspendUserResult& WithUserErrors(const Aws::Vector<UserError>& value) { SetUserErrors(value); return *this;}

    /**
     * <p>If the <a>BatchSuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline BatchSuspendUserResult& WithUserErrors(Aws::Vector<UserError>&& value) { SetUserErrors(std::move(value)); return *this;}

    /**
     * <p>If the <a>BatchSuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline BatchSuspendUserResult& AddUserErrors(const UserError& value) { m_userErrors.push_back(value); return *this; }

    /**
     * <p>If the <a>BatchSuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline BatchSuspendUserResult& AddUserErrors(UserError&& value) { m_userErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UserError> m_userErrors;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
