/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   * <p>Provides test case definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TestCaseDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_IOTDEVICEADVISOR_API TestCaseDefinition
  {
  public:
    TestCaseDefinition();
    TestCaseDefinition(Aws::Utils::Json::JsonView jsonValue);
    TestCaseDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides test case definition Id.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Provides test case definition Id.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Provides test case definition Id.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Provides test case definition Id.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Provides test case definition Id.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Provides test case definition Id.</p>
     */
    inline TestCaseDefinition& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Provides test case definition Id.</p>
     */
    inline TestCaseDefinition& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Provides test case definition Id.</p>
     */
    inline TestCaseDefinition& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Provides test case definition version.</p>
     */
    inline const Aws::String& GetTestCaseVersion() const{ return m_testCaseVersion; }

    /**
     * <p>Provides test case definition version.</p>
     */
    inline bool TestCaseVersionHasBeenSet() const { return m_testCaseVersionHasBeenSet; }

    /**
     * <p>Provides test case definition version.</p>
     */
    inline void SetTestCaseVersion(const Aws::String& value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion = value; }

    /**
     * <p>Provides test case definition version.</p>
     */
    inline void SetTestCaseVersion(Aws::String&& value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion = std::move(value); }

    /**
     * <p>Provides test case definition version.</p>
     */
    inline void SetTestCaseVersion(const char* value) { m_testCaseVersionHasBeenSet = true; m_testCaseVersion.assign(value); }

    /**
     * <p>Provides test case definition version.</p>
     */
    inline TestCaseDefinition& WithTestCaseVersion(const Aws::String& value) { SetTestCaseVersion(value); return *this;}

    /**
     * <p>Provides test case definition version.</p>
     */
    inline TestCaseDefinition& WithTestCaseVersion(Aws::String&& value) { SetTestCaseVersion(std::move(value)); return *this;}

    /**
     * <p>Provides test case definition version.</p>
     */
    inline TestCaseDefinition& WithTestCaseVersion(const char* value) { SetTestCaseVersion(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_testCaseVersion;
    bool m_testCaseVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
