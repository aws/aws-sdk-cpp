/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeJobExecutionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeJobExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobExecution"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline DescribeJobExecutionRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline DescribeJobExecutionRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline DescribeJobExecutionRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing on which the job execution is running.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline DescribeJobExecutionRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline DescribeJobExecutionRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline DescribeJobExecutionRequest& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string (consisting of the digits "0" through "9" which is used to specify a
     * particular job execution on a particular device.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline DescribeJobExecutionRequest& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
