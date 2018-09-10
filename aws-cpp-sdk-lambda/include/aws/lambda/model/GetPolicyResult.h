﻿/*
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
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetPolicyResponse">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API GetPolicyResult
  {
  public:
    GetPolicyResult();
    GetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

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
    inline GetPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The resource policy associated with the specified function. The response
     * returns the same as a string using a backslash ("\") as an escape character in
     * the JSON.</p>
     */
    inline GetPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline GetPolicyResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline GetPolicyResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline GetPolicyResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_policy;

    Aws::String m_revisionId;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
