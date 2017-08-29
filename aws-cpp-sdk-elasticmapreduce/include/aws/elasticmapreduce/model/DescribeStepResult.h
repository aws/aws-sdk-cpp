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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/Step.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p>This output contains the description of the cluster step.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStepOutput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API DescribeStepResult
  {
  public:
    DescribeStepResult();
    DescribeStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The step details for the requested step identifier.</p>
     */
    inline const Step& GetStep() const{ return m_step; }

    /**
     * <p>The step details for the requested step identifier.</p>
     */
    inline void SetStep(const Step& value) { m_step = value; }

    /**
     * <p>The step details for the requested step identifier.</p>
     */
    inline void SetStep(Step&& value) { m_step = std::move(value); }

    /**
     * <p>The step details for the requested step identifier.</p>
     */
    inline DescribeStepResult& WithStep(const Step& value) { SetStep(value); return *this;}

    /**
     * <p>The step details for the requested step identifier.</p>
     */
    inline DescribeStepResult& WithStep(Step&& value) { SetStep(std::move(value)); return *this;}

  private:

    Step m_step;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
