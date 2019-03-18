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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> The WorkerBlock data structure represents a Worker who has been blocked. It
   * has two elements: the WorkerId and the Reason for the block. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/WorkerBlock">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API WorkerBlock
  {
  public:
    WorkerBlock();
    WorkerBlock(Aws::Utils::Json::JsonView jsonValue);
    WorkerBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline WorkerBlock& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline WorkerBlock& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline WorkerBlock& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline WorkerBlock& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline WorkerBlock& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline WorkerBlock& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
