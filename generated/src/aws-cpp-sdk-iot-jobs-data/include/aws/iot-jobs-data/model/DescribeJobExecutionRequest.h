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
    AWS_IOTJOBSDATAPLANE_API DescribeJobExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobExecution"; }

    AWS_IOTJOBSDATAPLANE_API Aws::String SerializePayload() const override;

    AWS_IOTJOBSDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline DescribeJobExecutionRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline DescribeJobExecutionRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline DescribeJobExecutionRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline DescribeJobExecutionRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline DescribeJobExecutionRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The thing name associated with the device the job execution is running
     * on.</p>
     */
    inline DescribeJobExecutionRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline bool GetIncludeJobDocument() const{ return m_includeJobDocument; }

    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline bool IncludeJobDocumentHasBeenSet() const { return m_includeJobDocumentHasBeenSet; }

    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline void SetIncludeJobDocument(bool value) { m_includeJobDocumentHasBeenSet = true; m_includeJobDocument = value; }

    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline DescribeJobExecutionRequest& WithIncludeJobDocument(bool value) { SetIncludeJobDocument(value); return *this;}


    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device. If not specified, the latest job execution is returned.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }

    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device. If not specified, the latest job execution is returned.</p>
     */
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }

    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device. If not specified, the latest job execution is returned.</p>
     */
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }

    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device. If not specified, the latest job execution is returned.</p>
     */
    inline DescribeJobExecutionRequest& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    bool m_includeJobDocument;
    bool m_includeJobDocumentHasBeenSet = false;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
