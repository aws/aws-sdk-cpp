/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   */
  class DescribeJobExecutionRequest : public IoTJobsDataPlaneRequest
  {
  public:
    AWS_IOTJOBSDATAPLANE_API DescribeJobExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobExecution"; }

    AWS_IOTJOBSDATAPLANE_API Aws::String SerializePayload() const override;

    AWS_IOTJOBSDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeJobExecutionRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    DescribeJobExecutionRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. Unless set to false, the response contains the job document. The
     * default is true.</p>
     */
    inline bool GetIncludeJobDocument() const { return m_includeJobDocument; }
    inline bool IncludeJobDocumentHasBeenSet() const { return m_includeJobDocumentHasBeenSet; }
    inline void SetIncludeJobDocument(bool value) { m_includeJobDocumentHasBeenSet = true; m_includeJobDocument = value; }
    inline DescribeJobExecutionRequest& WithIncludeJobDocument(bool value) { SetIncludeJobDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device. If not specified, the latest job execution is returned.</p>
     */
    inline long long GetExecutionNumber() const { return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline DescribeJobExecutionRequest& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    bool m_includeJobDocument{false};
    bool m_includeJobDocumentHasBeenSet = false;

    long long m_executionNumber{0};
    bool m_executionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
