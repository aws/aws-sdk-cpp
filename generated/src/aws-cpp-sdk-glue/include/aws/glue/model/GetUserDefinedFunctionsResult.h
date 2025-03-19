/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/UserDefinedFunction.h>
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
namespace Glue
{
namespace Model
{
  class GetUserDefinedFunctionsResult
  {
  public:
    AWS_GLUE_API GetUserDefinedFunctionsResult() = default;
    AWS_GLUE_API GetUserDefinedFunctionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUserDefinedFunctionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of requested function definitions.</p>
     */
    inline const Aws::Vector<UserDefinedFunction>& GetUserDefinedFunctions() const { return m_userDefinedFunctions; }
    template<typename UserDefinedFunctionsT = Aws::Vector<UserDefinedFunction>>
    void SetUserDefinedFunctions(UserDefinedFunctionsT&& value) { m_userDefinedFunctionsHasBeenSet = true; m_userDefinedFunctions = std::forward<UserDefinedFunctionsT>(value); }
    template<typename UserDefinedFunctionsT = Aws::Vector<UserDefinedFunction>>
    GetUserDefinedFunctionsResult& WithUserDefinedFunctions(UserDefinedFunctionsT&& value) { SetUserDefinedFunctions(std::forward<UserDefinedFunctionsT>(value)); return *this;}
    template<typename UserDefinedFunctionsT = UserDefinedFunction>
    GetUserDefinedFunctionsResult& AddUserDefinedFunctions(UserDefinedFunctionsT&& value) { m_userDefinedFunctionsHasBeenSet = true; m_userDefinedFunctions.emplace_back(std::forward<UserDefinedFunctionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the list of functions returned does not include the
     * last requested function.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetUserDefinedFunctionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserDefinedFunctionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserDefinedFunction> m_userDefinedFunctions;
    bool m_userDefinedFunctionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
