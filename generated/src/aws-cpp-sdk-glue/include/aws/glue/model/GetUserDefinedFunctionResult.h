/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UserDefinedFunction.h>
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
namespace Glue
{
namespace Model
{
  class GetUserDefinedFunctionResult
  {
  public:
    AWS_GLUE_API GetUserDefinedFunctionResult() = default;
    AWS_GLUE_API GetUserDefinedFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUserDefinedFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested function definition.</p>
     */
    inline const UserDefinedFunction& GetUserDefinedFunction() const { return m_userDefinedFunction; }
    template<typename UserDefinedFunctionT = UserDefinedFunction>
    void SetUserDefinedFunction(UserDefinedFunctionT&& value) { m_userDefinedFunctionHasBeenSet = true; m_userDefinedFunction = std::forward<UserDefinedFunctionT>(value); }
    template<typename UserDefinedFunctionT = UserDefinedFunction>
    GetUserDefinedFunctionResult& WithUserDefinedFunction(UserDefinedFunctionT&& value) { SetUserDefinedFunction(std::forward<UserDefinedFunctionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserDefinedFunctionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UserDefinedFunction m_userDefinedFunction;
    bool m_userDefinedFunctionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
