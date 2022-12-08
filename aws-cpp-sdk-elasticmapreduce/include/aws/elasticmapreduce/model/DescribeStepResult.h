/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeStepResult
  {
  public:
    AWS_EMR_API DescribeStepResult();
    AWS_EMR_API DescribeStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API DescribeStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
