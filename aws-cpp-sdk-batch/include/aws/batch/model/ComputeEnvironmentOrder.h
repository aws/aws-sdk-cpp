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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>The order in which compute environments are tried for job placement within a
   * queue. Compute environments are tried in ascending order. For example, if two
   * compute environments are associated with a job queue, the compute environment
   * with a lower order integer value is tried for job placement first.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeEnvironmentOrder">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ComputeEnvironmentOrder
  {
  public:
    ComputeEnvironmentOrder();
    ComputeEnvironmentOrder(Aws::Utils::Json::JsonView jsonValue);
    ComputeEnvironmentOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The order of the compute environment.</p>
     */
    inline int GetOrder() const{ return m_order; }

    /**
     * <p>The order of the compute environment.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order of the compute environment.</p>
     */
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order of the compute environment.</p>
     */
    inline ComputeEnvironmentOrder& WithOrder(int value) { SetOrder(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline const Aws::String& GetComputeEnvironment() const{ return m_computeEnvironment; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline bool ComputeEnvironmentHasBeenSet() const { return m_computeEnvironmentHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironment(const Aws::String& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironment(Aws::String&& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironment(const char* value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentOrder& WithComputeEnvironment(const Aws::String& value) { SetComputeEnvironment(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentOrder& WithComputeEnvironment(Aws::String&& value) { SetComputeEnvironment(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentOrder& WithComputeEnvironment(const char* value) { SetComputeEnvironment(value); return *this;}

  private:

    int m_order;
    bool m_orderHasBeenSet;

    Aws::String m_computeEnvironment;
    bool m_computeEnvironmentHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
