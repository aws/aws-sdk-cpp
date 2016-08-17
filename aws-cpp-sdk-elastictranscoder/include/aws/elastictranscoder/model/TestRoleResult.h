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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p>The <code>TestRoleResponse</code> structure.</p>
   */
  class AWS_ELASTICTRANSCODER_API TestRoleResult
  {
  public:
    TestRoleResult();
    TestRoleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestRoleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>If the operation is successful, this value is <code>true</code>; otherwise,
     * the value is <code>false</code>.</p>
     */
    inline const Aws::String& GetSuccess() const{ return m_success; }

    /**
     * <p>If the operation is successful, this value is <code>true</code>; otherwise,
     * the value is <code>false</code>.</p>
     */
    inline void SetSuccess(const Aws::String& value) { m_success = value; }

    /**
     * <p>If the operation is successful, this value is <code>true</code>; otherwise,
     * the value is <code>false</code>.</p>
     */
    inline void SetSuccess(Aws::String&& value) { m_success = value; }

    /**
     * <p>If the operation is successful, this value is <code>true</code>; otherwise,
     * the value is <code>false</code>.</p>
     */
    inline void SetSuccess(const char* value) { m_success.assign(value); }

    /**
     * <p>If the operation is successful, this value is <code>true</code>; otherwise,
     * the value is <code>false</code>.</p>
     */
    inline TestRoleResult& WithSuccess(const Aws::String& value) { SetSuccess(value); return *this;}

    /**
     * <p>If the operation is successful, this value is <code>true</code>; otherwise,
     * the value is <code>false</code>.</p>
     */
    inline TestRoleResult& WithSuccess(Aws::String&& value) { SetSuccess(value); return *this;}

    /**
     * <p>If the operation is successful, this value is <code>true</code>; otherwise,
     * the value is <code>false</code>.</p>
     */
    inline TestRoleResult& WithSuccess(const char* value) { SetSuccess(value); return *this;}

    /**
     * <p>If the <code>Success</code> element contains <code>false</code>, this value
     * is an array of one or more error messages that were generated during the test
     * process.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMessages() const{ return m_messages; }

    /**
     * <p>If the <code>Success</code> element contains <code>false</code>, this value
     * is an array of one or more error messages that were generated during the test
     * process.</p>
     */
    inline void SetMessages(const Aws::Vector<Aws::String>& value) { m_messages = value; }

    /**
     * <p>If the <code>Success</code> element contains <code>false</code>, this value
     * is an array of one or more error messages that were generated during the test
     * process.</p>
     */
    inline void SetMessages(Aws::Vector<Aws::String>&& value) { m_messages = value; }

    /**
     * <p>If the <code>Success</code> element contains <code>false</code>, this value
     * is an array of one or more error messages that were generated during the test
     * process.</p>
     */
    inline TestRoleResult& WithMessages(const Aws::Vector<Aws::String>& value) { SetMessages(value); return *this;}

    /**
     * <p>If the <code>Success</code> element contains <code>false</code>, this value
     * is an array of one or more error messages that were generated during the test
     * process.</p>
     */
    inline TestRoleResult& WithMessages(Aws::Vector<Aws::String>&& value) { SetMessages(value); return *this;}

    /**
     * <p>If the <code>Success</code> element contains <code>false</code>, this value
     * is an array of one or more error messages that were generated during the test
     * process.</p>
     */
    inline TestRoleResult& AddMessages(const Aws::String& value) { m_messages.push_back(value); return *this; }

    /**
     * <p>If the <code>Success</code> element contains <code>false</code>, this value
     * is an array of one or more error messages that were generated during the test
     * process.</p>
     */
    inline TestRoleResult& AddMessages(Aws::String&& value) { m_messages.push_back(value); return *this; }

    /**
     * <p>If the <code>Success</code> element contains <code>false</code>, this value
     * is an array of one or more error messages that were generated during the test
     * process.</p>
     */
    inline TestRoleResult& AddMessages(const char* value) { m_messages.push_back(value); return *this; }

  private:
    Aws::String m_success;
    Aws::Vector<Aws::String> m_messages;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
