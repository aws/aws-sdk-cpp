/**
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
  class BatchUnsuspendUserResult
  {
  public:
    AWS_CHIME_API BatchUnsuspendUserResult() = default;
    AWS_CHIME_API BatchUnsuspendUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API BatchUnsuspendUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the <a>BatchUnsuspendUser</a> action fails for one or more of the user IDs
     * in the request, a list of the user IDs is returned, along with error codes and
     * error messages.</p>
     */
    inline const Aws::Vector<UserError>& GetUserErrors() const { return m_userErrors; }
    template<typename UserErrorsT = Aws::Vector<UserError>>
    void SetUserErrors(UserErrorsT&& value) { m_userErrorsHasBeenSet = true; m_userErrors = std::forward<UserErrorsT>(value); }
    template<typename UserErrorsT = Aws::Vector<UserError>>
    BatchUnsuspendUserResult& WithUserErrors(UserErrorsT&& value) { SetUserErrors(std::forward<UserErrorsT>(value)); return *this;}
    template<typename UserErrorsT = UserError>
    BatchUnsuspendUserResult& AddUserErrors(UserErrorsT&& value) { m_userErrorsHasBeenSet = true; m_userErrors.emplace_back(std::forward<UserErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUnsuspendUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserError> m_userErrors;
    bool m_userErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
