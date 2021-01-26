/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotdeviceadvisor/model/TestCaseDefinition.h>
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
   * <p>Shows tests in a test group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TestCase">AWS
   * API Reference</a></p>
   */
  class AWS_IOTDEVICEADVISOR_API TestCase
  {
  public:
    TestCase();
    TestCase(Aws::Utils::Json::JsonView jsonValue);
    TestCase& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Shows test case name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Shows test case name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Shows test case name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Shows test case name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Shows test case name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Shows test case name.</p>
     */
    inline TestCase& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Shows test case name.</p>
     */
    inline TestCase& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Shows test case name.</p>
     */
    inline TestCase& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Shows test case configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Shows test case configuration.</p>
     */
    inline TestCase& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }


    /**
     * <p>Specifies a test.</p>
     */
    inline const TestCaseDefinition& GetTest() const{ return m_test; }

    /**
     * <p>Specifies a test.</p>
     */
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }

    /**
     * <p>Specifies a test.</p>
     */
    inline void SetTest(const TestCaseDefinition& value) { m_testHasBeenSet = true; m_test = value; }

    /**
     * <p>Specifies a test.</p>
     */
    inline void SetTest(TestCaseDefinition&& value) { m_testHasBeenSet = true; m_test = std::move(value); }

    /**
     * <p>Specifies a test.</p>
     */
    inline TestCase& WithTest(const TestCaseDefinition& value) { SetTest(value); return *this;}

    /**
     * <p>Specifies a test.</p>
     */
    inline TestCase& WithTest(TestCaseDefinition&& value) { SetTest(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_configuration;
    bool m_configurationHasBeenSet;

    TestCaseDefinition m_test;
    bool m_testHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
