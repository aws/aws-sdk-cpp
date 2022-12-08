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
    AWS_GLUE_API GetUserDefinedFunctionsResult();
    AWS_GLUE_API GetUserDefinedFunctionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUserDefinedFunctionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of requested function definitions.</p>
     */
    inline const Aws::Vector<UserDefinedFunction>& GetUserDefinedFunctions() const{ return m_userDefinedFunctions; }

    /**
     * <p>A list of requested function definitions.</p>
     */
    inline void SetUserDefinedFunctions(const Aws::Vector<UserDefinedFunction>& value) { m_userDefinedFunctions = value; }

    /**
     * <p>A list of requested function definitions.</p>
     */
    inline void SetUserDefinedFunctions(Aws::Vector<UserDefinedFunction>&& value) { m_userDefinedFunctions = std::move(value); }

    /**
     * <p>A list of requested function definitions.</p>
     */
    inline GetUserDefinedFunctionsResult& WithUserDefinedFunctions(const Aws::Vector<UserDefinedFunction>& value) { SetUserDefinedFunctions(value); return *this;}

    /**
     * <p>A list of requested function definitions.</p>
     */
    inline GetUserDefinedFunctionsResult& WithUserDefinedFunctions(Aws::Vector<UserDefinedFunction>&& value) { SetUserDefinedFunctions(std::move(value)); return *this;}

    /**
     * <p>A list of requested function definitions.</p>
     */
    inline GetUserDefinedFunctionsResult& AddUserDefinedFunctions(const UserDefinedFunction& value) { m_userDefinedFunctions.push_back(value); return *this; }

    /**
     * <p>A list of requested function definitions.</p>
     */
    inline GetUserDefinedFunctionsResult& AddUserDefinedFunctions(UserDefinedFunction&& value) { m_userDefinedFunctions.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if the list of functions returned does not include the
     * last requested function.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the list of functions returned does not include the
     * last requested function.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the list of functions returned does not include the
     * last requested function.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the list of functions returned does not include the
     * last requested function.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the list of functions returned does not include the
     * last requested function.</p>
     */
    inline GetUserDefinedFunctionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the list of functions returned does not include the
     * last requested function.</p>
     */
    inline GetUserDefinedFunctionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the list of functions returned does not include the
     * last requested function.</p>
     */
    inline GetUserDefinedFunctionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UserDefinedFunction> m_userDefinedFunctions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
