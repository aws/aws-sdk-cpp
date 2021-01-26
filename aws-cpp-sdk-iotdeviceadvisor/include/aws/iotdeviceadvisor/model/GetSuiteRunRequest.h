/**
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
  class AWS_IOTDEVICEADVISOR_API GetSuiteRunRequest : public IoTDeviceAdvisorRequest
  {
  public:
    GetSuiteRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSuiteRun"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * definition Id.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * definition Id.</p>
     */
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * definition Id.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * definition Id.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * definition Id.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * definition Id.</p>
     */
    inline GetSuiteRunRequest& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * definition Id.</p>
     */
    inline GetSuiteRunRequest& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * definition Id.</p>
     */
    inline GetSuiteRunRequest& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * run Id.</p>
     */
    inline const Aws::String& GetSuiteRunId() const{ return m_suiteRunId; }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * run Id.</p>
     */
    inline bool SuiteRunIdHasBeenSet() const { return m_suiteRunIdHasBeenSet; }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * run Id.</p>
     */
    inline void SetSuiteRunId(const Aws::String& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = value; }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * run Id.</p>
     */
    inline void SetSuiteRunId(Aws::String&& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = std::move(value); }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * run Id.</p>
     */
    inline void SetSuiteRunId(const char* value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId.assign(value); }

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * run Id.</p>
     */
    inline GetSuiteRunRequest& WithSuiteRunId(const Aws::String& value) { SetSuiteRunId(value); return *this;}

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * run Id.</p>
     */
    inline GetSuiteRunRequest& WithSuiteRunId(Aws::String&& value) { SetSuiteRunId(std::move(value)); return *this;}

    /**
     * <p>Requests the information about Device Advisor test suite run based on suite
     * run Id.</p>
     */
    inline GetSuiteRunRequest& WithSuiteRunId(const char* value) { SetSuiteRunId(value); return *this;}

  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet;

    Aws::String m_suiteRunId;
    bool m_suiteRunIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
