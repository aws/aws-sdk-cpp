﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>If the <a>BatchSuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline const Aws::Vector<UserError>& GetUserErrors() const{ return m_userErrors; }
    inline void SetUserErrors(const Aws::Vector<UserError>& value) { m_userErrors = value; }
    inline void SetUserErrors(Aws::Vector<UserError>&& value) { m_userErrors = std::move(value); }
    inline BatchSuspendUserResult& WithUserErrors(const Aws::Vector<UserError>& value) { SetUserErrors(value); return *this;}
    inline BatchSuspendUserResult& WithUserErrors(Aws::Vector<UserError>&& value) { SetUserErrors(std::move(value)); return *this;}
    inline BatchSuspendUserResult& AddUserErrors(const UserError& value) { m_userErrors.push_back(value); return *this; }
    inline BatchSuspendUserResult& AddUserErrors(UserError&& value) { m_userErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchSuspendUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchSuspendUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchSuspendUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UserError> m_userErrors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
