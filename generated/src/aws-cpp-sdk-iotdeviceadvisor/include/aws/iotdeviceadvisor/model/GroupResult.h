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
    AWS_IOTDEVICEADVISOR_API GroupResult() = default;
    AWS_IOTDEVICEADVISOR_API GroupResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API GroupResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Group result ID.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    GroupResult& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Group Result Name.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    GroupResult& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tests under Group Result.</p>
     */
    inline const Aws::Vector<TestCaseRun>& GetTests() const { return m_tests; }
    inline bool TestsHasBeenSet() const { return m_testsHasBeenSet; }
    template<typename TestsT = Aws::Vector<TestCaseRun>>
    void SetTests(TestsT&& value) { m_testsHasBeenSet = true; m_tests = std::forward<TestsT>(value); }
    template<typename TestsT = Aws::Vector<TestCaseRun>>
    GroupResult& WithTests(TestsT&& value) { SetTests(std::forward<TestsT>(value)); return *this;}
    template<typename TestsT = TestCaseRun>
    GroupResult& AddTests(TestsT&& value) { m_testsHasBeenSet = true; m_tests.emplace_back(std::forward<TestsT>(value)); return *this; }
    ///@}
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
