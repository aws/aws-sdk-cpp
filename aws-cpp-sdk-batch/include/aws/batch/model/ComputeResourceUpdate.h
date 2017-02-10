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
#include <aws/batch/Batch_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>An object representing the attributes of a compute environment that can be
   * updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeResourceUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ComputeResourceUpdate
  {
  public:
    ComputeResourceUpdate();
    ComputeResourceUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    ComputeResourceUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain.</p>
     */
    inline int GetMinvCpus() const{ return m_minvCpus; }

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain.</p>
     */
    inline void SetMinvCpus(int value) { m_minvCpusHasBeenSet = true; m_minvCpus = value; }

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain.</p>
     */
    inline ComputeResourceUpdate& WithMinvCpus(int value) { SetMinvCpus(value); return *this;}

    /**
     * <p>The maximum number of EC2 vCPUs that an environment can reach.</p>
     */
    inline int GetMaxvCpus() const{ return m_maxvCpus; }

    /**
     * <p>The maximum number of EC2 vCPUs that an environment can reach.</p>
     */
    inline void SetMaxvCpus(int value) { m_maxvCpusHasBeenSet = true; m_maxvCpus = value; }

    /**
     * <p>The maximum number of EC2 vCPUs that an environment can reach.</p>
     */
    inline ComputeResourceUpdate& WithMaxvCpus(int value) { SetMaxvCpus(value); return *this;}

    /**
     * <p>The desired number of EC2 vCPUS in the compute environment.</p>
     */
    inline int GetDesiredvCpus() const{ return m_desiredvCpus; }

    /**
     * <p>The desired number of EC2 vCPUS in the compute environment.</p>
     */
    inline void SetDesiredvCpus(int value) { m_desiredvCpusHasBeenSet = true; m_desiredvCpus = value; }

    /**
     * <p>The desired number of EC2 vCPUS in the compute environment.</p>
     */
    inline ComputeResourceUpdate& WithDesiredvCpus(int value) { SetDesiredvCpus(value); return *this;}

  private:
    int m_minvCpus;
    bool m_minvCpusHasBeenSet;
    int m_maxvCpus;
    bool m_maxvCpusHasBeenSet;
    int m_desiredvCpus;
    bool m_desiredvCpusHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
