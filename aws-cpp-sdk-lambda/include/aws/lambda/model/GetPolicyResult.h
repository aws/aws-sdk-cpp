/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace Lambda
{
namespace Model
{
  /**
   * <p/>
   */
  class AWS_LAMBDA_API GetPolicyResult
  {
  public:
    GetPolicyResult();
    GetPolicyResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The resource policy associated with the specified function. The response
     * returns the same as a string using a backslash ("\") as an escape character in
     * the JSON.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The resource policy associated with the specified function. The response
     * returns the same as a string using a backslash ("\") as an escape character in
     * the JSON.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The resource policy associated with the specified function. The response
     * returns the same as a string using a backslash ("\") as an escape character in
     * the JSON.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = value; }

    /**
     * <p>The resource policy associated with the specified function. The response
     * returns the same as a string using a backslash ("\") as an escape character in
     * the JSON.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The resource policy associated with the specified function. The response
     * returns the same as a string using a backslash ("\") as an escape character in
     * the JSON.</p>
     */
    inline GetPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The resource policy associated with the specified function. The response
     * returns the same as a string using a backslash ("\") as an escape character in
     * the JSON.</p>
     */
    inline GetPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>The resource policy associated with the specified function. The response
     * returns the same as a string using a backslash ("\") as an escape character in
     * the JSON.</p>
     */
    inline GetPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:
    Aws::String m_policy;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
