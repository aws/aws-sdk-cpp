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
    AWS_GLUE_API GetUserDefinedFunctionResult();
    AWS_GLUE_API GetUserDefinedFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUserDefinedFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested function definition.</p>
     */
    inline const UserDefinedFunction& GetUserDefinedFunction() const{ return m_userDefinedFunction; }

    /**
     * <p>The requested function definition.</p>
     */
    inline void SetUserDefinedFunction(const UserDefinedFunction& value) { m_userDefinedFunction = value; }

    /**
     * <p>The requested function definition.</p>
     */
    inline void SetUserDefinedFunction(UserDefinedFunction&& value) { m_userDefinedFunction = std::move(value); }

    /**
     * <p>The requested function definition.</p>
     */
    inline GetUserDefinedFunctionResult& WithUserDefinedFunction(const UserDefinedFunction& value) { SetUserDefinedFunction(value); return *this;}

    /**
     * <p>The requested function definition.</p>
     */
    inline GetUserDefinedFunctionResult& WithUserDefinedFunction(UserDefinedFunction&& value) { SetUserDefinedFunction(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetUserDefinedFunctionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetUserDefinedFunctionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetUserDefinedFunctionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    UserDefinedFunction m_userDefinedFunction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
