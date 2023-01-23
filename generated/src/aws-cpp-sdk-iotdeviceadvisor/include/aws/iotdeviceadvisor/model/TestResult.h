/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotdeviceadvisor/model/GroupResult.h>
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
   * <p>Show each group result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TestResult">AWS
   * API Reference</a></p>
   */
  class TestResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API TestResult();
    AWS_IOTDEVICEADVISOR_API TestResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API TestResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Show each group of test results.</p>
     */
    inline const Aws::Vector<GroupResult>& GetGroups() const{ return m_groups; }

    /**
     * <p>Show each group of test results.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>Show each group of test results.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupResult>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>Show each group of test results.</p>
     */
    inline void SetGroups(Aws::Vector<GroupResult>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>Show each group of test results.</p>
     */
    inline TestResult& WithGroups(const Aws::Vector<GroupResult>& value) { SetGroups(value); return *this;}

    /**
     * <p>Show each group of test results.</p>
     */
    inline TestResult& WithGroups(Aws::Vector<GroupResult>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>Show each group of test results.</p>
     */
    inline TestResult& AddGroups(const GroupResult& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>Show each group of test results.</p>
     */
    inline TestResult& AddGroups(GroupResult&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GroupResult> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
