/*
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>CreateStack</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateStackResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API CreateStackResult
  {
  public:
    CreateStackResult();
    CreateStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The stack ID, which is an opaque string that you use to identify the stack
     * when performing actions such as <code>DescribeStacks</code>.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID, which is an opaque string that you use to identify the stack
     * when performing actions such as <code>DescribeStacks</code>.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The stack ID, which is an opaque string that you use to identify the stack
     * when performing actions such as <code>DescribeStacks</code>.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * <p>The stack ID, which is an opaque string that you use to identify the stack
     * when performing actions such as <code>DescribeStacks</code>.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The stack ID, which is an opaque string that you use to identify the stack
     * when performing actions such as <code>DescribeStacks</code>.</p>
     */
    inline CreateStackResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID, which is an opaque string that you use to identify the stack
     * when performing actions such as <code>DescribeStacks</code>.</p>
     */
    inline CreateStackResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID, which is an opaque string that you use to identify the stack
     * when performing actions such as <code>DescribeStacks</code>.</p>
     */
    inline CreateStackResult& WithStackId(const char* value) { SetStackId(value); return *this;}

  private:

    Aws::String m_stackId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
