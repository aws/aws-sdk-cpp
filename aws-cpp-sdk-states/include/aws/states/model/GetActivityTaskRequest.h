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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class AWS_SFN_API GetActivityTaskRequest : public SFNRequest
  {
  public:
    GetActivityTaskRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the activity to retrieve tasks from.</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to retrieve tasks from.</p>
     */
    inline void SetActivityArn(const Aws::String& value) { m_activityArnHasBeenSet = true; m_activityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to retrieve tasks from.</p>
     */
    inline void SetActivityArn(Aws::String&& value) { m_activityArnHasBeenSet = true; m_activityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to retrieve tasks from.</p>
     */
    inline void SetActivityArn(const char* value) { m_activityArnHasBeenSet = true; m_activityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to retrieve tasks from.</p>
     */
    inline GetActivityTaskRequest& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to retrieve tasks from.</p>
     */
    inline GetActivityTaskRequest& WithActivityArn(Aws::String&& value) { SetActivityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to retrieve tasks from.</p>
     */
    inline GetActivityTaskRequest& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}

    /**
     * <p>An arbitrary name may be provided in order to identify the worker that the
     * task is assigned to. This name will be used when it is logged in the execution
     * history.</p>
     */
    inline const Aws::String& GetWorkerName() const{ return m_workerName; }

    /**
     * <p>An arbitrary name may be provided in order to identify the worker that the
     * task is assigned to. This name will be used when it is logged in the execution
     * history.</p>
     */
    inline void SetWorkerName(const Aws::String& value) { m_workerNameHasBeenSet = true; m_workerName = value; }

    /**
     * <p>An arbitrary name may be provided in order to identify the worker that the
     * task is assigned to. This name will be used when it is logged in the execution
     * history.</p>
     */
    inline void SetWorkerName(Aws::String&& value) { m_workerNameHasBeenSet = true; m_workerName = value; }

    /**
     * <p>An arbitrary name may be provided in order to identify the worker that the
     * task is assigned to. This name will be used when it is logged in the execution
     * history.</p>
     */
    inline void SetWorkerName(const char* value) { m_workerNameHasBeenSet = true; m_workerName.assign(value); }

    /**
     * <p>An arbitrary name may be provided in order to identify the worker that the
     * task is assigned to. This name will be used when it is logged in the execution
     * history.</p>
     */
    inline GetActivityTaskRequest& WithWorkerName(const Aws::String& value) { SetWorkerName(value); return *this;}

    /**
     * <p>An arbitrary name may be provided in order to identify the worker that the
     * task is assigned to. This name will be used when it is logged in the execution
     * history.</p>
     */
    inline GetActivityTaskRequest& WithWorkerName(Aws::String&& value) { SetWorkerName(value); return *this;}

    /**
     * <p>An arbitrary name may be provided in order to identify the worker that the
     * task is assigned to. This name will be used when it is logged in the execution
     * history.</p>
     */
    inline GetActivityTaskRequest& WithWorkerName(const char* value) { SetWorkerName(value); return *this;}

  private:
    Aws::String m_activityArn;
    bool m_activityArnHasBeenSet;
    Aws::String m_workerName;
    bool m_workerNameHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
