/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about the start of an activity during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ActivityStartedEventDetails">AWS
   * API Reference</a></p>
   */
  class ActivityStartedEventDetails
  {
  public:
    AWS_SFN_API ActivityStartedEventDetails();
    AWS_SFN_API ActivityStartedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ActivityStartedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline const Aws::String& GetWorkerName() const{ return m_workerName; }

    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline bool WorkerNameHasBeenSet() const { return m_workerNameHasBeenSet; }

    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline void SetWorkerName(const Aws::String& value) { m_workerNameHasBeenSet = true; m_workerName = value; }

    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline void SetWorkerName(Aws::String&& value) { m_workerNameHasBeenSet = true; m_workerName = std::move(value); }

    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline void SetWorkerName(const char* value) { m_workerNameHasBeenSet = true; m_workerName.assign(value); }

    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline ActivityStartedEventDetails& WithWorkerName(const Aws::String& value) { SetWorkerName(value); return *this;}

    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline ActivityStartedEventDetails& WithWorkerName(Aws::String&& value) { SetWorkerName(std::move(value)); return *this;}

    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline ActivityStartedEventDetails& WithWorkerName(const char* value) { SetWorkerName(value); return *this;}

  private:

    Aws::String m_workerName;
    bool m_workerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
