﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class AWS_IOTDEVICEADVISOR_API StopSuiteRunRequest : public IoTDeviceAdvisorRequest
  {
  public:
    StopSuiteRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopSuiteRun"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Suite definition ID of the test suite run to be stopped.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Suite definition ID of the test suite run to be stopped.</p>
     */
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }

    /**
     * <p>Suite definition ID of the test suite run to be stopped.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }

    /**
     * <p>Suite definition ID of the test suite run to be stopped.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Suite definition ID of the test suite run to be stopped.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }

    /**
     * <p>Suite definition ID of the test suite run to be stopped.</p>
     */
    inline StopSuiteRunRequest& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Suite definition ID of the test suite run to be stopped.</p>
     */
    inline StopSuiteRunRequest& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Suite definition ID of the test suite run to be stopped.</p>
     */
    inline StopSuiteRunRequest& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Suite run ID of the test suite run to be stopped.</p>
     */
    inline const Aws::String& GetSuiteRunId() const{ return m_suiteRunId; }

    /**
     * <p>Suite run ID of the test suite run to be stopped.</p>
     */
    inline bool SuiteRunIdHasBeenSet() const { return m_suiteRunIdHasBeenSet; }

    /**
     * <p>Suite run ID of the test suite run to be stopped.</p>
     */
    inline void SetSuiteRunId(const Aws::String& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = value; }

    /**
     * <p>Suite run ID of the test suite run to be stopped.</p>
     */
    inline void SetSuiteRunId(Aws::String&& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = std::move(value); }

    /**
     * <p>Suite run ID of the test suite run to be stopped.</p>
     */
    inline void SetSuiteRunId(const char* value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId.assign(value); }

    /**
     * <p>Suite run ID of the test suite run to be stopped.</p>
     */
    inline StopSuiteRunRequest& WithSuiteRunId(const Aws::String& value) { SetSuiteRunId(value); return *this;}

    /**
     * <p>Suite run ID of the test suite run to be stopped.</p>
     */
    inline StopSuiteRunRequest& WithSuiteRunId(Aws::String&& value) { SetSuiteRunId(std::move(value)); return *this;}

    /**
     * <p>Suite run ID of the test suite run to be stopped.</p>
     */
    inline StopSuiteRunRequest& WithSuiteRunId(const char* value) { SetSuiteRunId(value); return *this;}

  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet;

    Aws::String m_suiteRunId;
    bool m_suiteRunIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
