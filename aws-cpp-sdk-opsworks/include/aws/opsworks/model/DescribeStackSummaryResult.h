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
#include <aws/opsworks/model/StackSummary.h>
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
   * <p>Contains the response to a <code>DescribeStackSummary</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackSummaryResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeStackSummaryResult
  {
  public:
    DescribeStackSummaryResult();
    DescribeStackSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStackSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline const StackSummary& GetStackSummary() const{ return m_stackSummary; }

    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline void SetStackSummary(const StackSummary& value) { m_stackSummary = value; }

    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline void SetStackSummary(StackSummary&& value) { m_stackSummary = std::move(value); }

    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline DescribeStackSummaryResult& WithStackSummary(const StackSummary& value) { SetStackSummary(value); return *this;}

    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline DescribeStackSummaryResult& WithStackSummary(StackSummary&& value) { SetStackSummary(std::move(value)); return *this;}

  private:

    StackSummary m_stackSummary;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
