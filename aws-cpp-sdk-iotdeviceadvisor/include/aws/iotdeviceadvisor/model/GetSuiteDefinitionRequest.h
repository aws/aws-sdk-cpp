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
namespace Http
{
    class URI;
} //namespace Http
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class GetSuiteDefinitionRequest : public IoTDeviceAdvisorRequest
  {
  public:
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSuiteDefinition"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;

    AWS_IOTDEVICEADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Suite definition ID of the test suite to get.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Suite definition ID of the test suite to get.</p>
     */
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }

    /**
     * <p>Suite definition ID of the test suite to get.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }

    /**
     * <p>Suite definition ID of the test suite to get.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Suite definition ID of the test suite to get.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }

    /**
     * <p>Suite definition ID of the test suite to get.</p>
     */
    inline GetSuiteDefinitionRequest& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Suite definition ID of the test suite to get.</p>
     */
    inline GetSuiteDefinitionRequest& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Suite definition ID of the test suite to get.</p>
     */
    inline GetSuiteDefinitionRequest& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Suite definition version of the test suite to get.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }

    /**
     * <p>Suite definition version of the test suite to get.</p>
     */
    inline bool SuiteDefinitionVersionHasBeenSet() const { return m_suiteDefinitionVersionHasBeenSet; }

    /**
     * <p>Suite definition version of the test suite to get.</p>
     */
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = value; }

    /**
     * <p>Suite definition version of the test suite to get.</p>
     */
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::move(value); }

    /**
     * <p>Suite definition version of the test suite to get.</p>
     */
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion.assign(value); }

    /**
     * <p>Suite definition version of the test suite to get.</p>
     */
    inline GetSuiteDefinitionRequest& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}

    /**
     * <p>Suite definition version of the test suite to get.</p>
     */
    inline GetSuiteDefinitionRequest& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}

    /**
     * <p>Suite definition version of the test suite to get.</p>
     */
    inline GetSuiteDefinitionRequest& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}

  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
