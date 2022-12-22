/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotdeviceadvisor/model/TestCaseRun.h>
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
   * <p>Show Group Result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/GroupResult">AWS
   * API Reference</a></p>
   */
  class GroupResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API GroupResult();
    AWS_IOTDEVICEADVISOR_API GroupResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API GroupResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Group result ID.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>Group result ID.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>Group result ID.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>Group result ID.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>Group result ID.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>Group result ID.</p>
     */
    inline GroupResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>Group result ID.</p>
     */
    inline GroupResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>Group result ID.</p>
     */
    inline GroupResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>Group Result Name.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>Group Result Name.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>Group Result Name.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>Group Result Name.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>Group Result Name.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>Group Result Name.</p>
     */
    inline GroupResult& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>Group Result Name.</p>
     */
    inline GroupResult& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>Group Result Name.</p>
     */
    inline GroupResult& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>Tests under Group Result.</p>
     */
    inline const Aws::Vector<TestCaseRun>& GetTests() const{ return m_tests; }

    /**
     * <p>Tests under Group Result.</p>
     */
    inline bool TestsHasBeenSet() const { return m_testsHasBeenSet; }

    /**
     * <p>Tests under Group Result.</p>
     */
    inline void SetTests(const Aws::Vector<TestCaseRun>& value) { m_testsHasBeenSet = true; m_tests = value; }

    /**
     * <p>Tests under Group Result.</p>
     */
    inline void SetTests(Aws::Vector<TestCaseRun>&& value) { m_testsHasBeenSet = true; m_tests = std::move(value); }

    /**
     * <p>Tests under Group Result.</p>
     */
    inline GroupResult& WithTests(const Aws::Vector<TestCaseRun>& value) { SetTests(value); return *this;}

    /**
     * <p>Tests under Group Result.</p>
     */
    inline GroupResult& WithTests(Aws::Vector<TestCaseRun>&& value) { SetTests(std::move(value)); return *this;}

    /**
     * <p>Tests under Group Result.</p>
     */
    inline GroupResult& AddTests(const TestCaseRun& value) { m_testsHasBeenSet = true; m_tests.push_back(value); return *this; }

    /**
     * <p>Tests under Group Result.</p>
     */
    inline GroupResult& AddTests(TestCaseRun&& value) { m_testsHasBeenSet = true; m_tests.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Vector<TestCaseRun> m_tests;
    bool m_testsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
