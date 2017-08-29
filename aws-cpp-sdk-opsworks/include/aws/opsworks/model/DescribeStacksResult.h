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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Stack.h>
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
   * <p>Contains the response to a <code>DescribeStacks</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStacksResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeStacksResult
  {
  public:
    DescribeStacksResult();
    DescribeStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Stack</code> objects that describe the stacks.</p>
     */
    inline const Aws::Vector<Stack>& GetStacks() const{ return m_stacks; }

    /**
     * <p>An array of <code>Stack</code> objects that describe the stacks.</p>
     */
    inline void SetStacks(const Aws::Vector<Stack>& value) { m_stacks = value; }

    /**
     * <p>An array of <code>Stack</code> objects that describe the stacks.</p>
     */
    inline void SetStacks(Aws::Vector<Stack>&& value) { m_stacks = std::move(value); }

    /**
     * <p>An array of <code>Stack</code> objects that describe the stacks.</p>
     */
    inline DescribeStacksResult& WithStacks(const Aws::Vector<Stack>& value) { SetStacks(value); return *this;}

    /**
     * <p>An array of <code>Stack</code> objects that describe the stacks.</p>
     */
    inline DescribeStacksResult& WithStacks(Aws::Vector<Stack>&& value) { SetStacks(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Stack</code> objects that describe the stacks.</p>
     */
    inline DescribeStacksResult& AddStacks(const Stack& value) { m_stacks.push_back(value); return *this; }

    /**
     * <p>An array of <code>Stack</code> objects that describe the stacks.</p>
     */
    inline DescribeStacksResult& AddStacks(Stack&& value) { m_stacks.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Stack> m_stacks;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
