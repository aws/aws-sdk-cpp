/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>A mapping between one or more workgroups and a capacity
   * reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CapacityAssignment">AWS
   * API Reference</a></p>
   */
  class CapacityAssignment
  {
  public:
    AWS_ATHENA_API CapacityAssignment() = default;
    AWS_ATHENA_API CapacityAssignment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CapacityAssignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkGroupNames() const { return m_workGroupNames; }
    inline bool WorkGroupNamesHasBeenSet() const { return m_workGroupNamesHasBeenSet; }
    template<typename WorkGroupNamesT = Aws::Vector<Aws::String>>
    void SetWorkGroupNames(WorkGroupNamesT&& value) { m_workGroupNamesHasBeenSet = true; m_workGroupNames = std::forward<WorkGroupNamesT>(value); }
    template<typename WorkGroupNamesT = Aws::Vector<Aws::String>>
    CapacityAssignment& WithWorkGroupNames(WorkGroupNamesT&& value) { SetWorkGroupNames(std::forward<WorkGroupNamesT>(value)); return *this;}
    template<typename WorkGroupNamesT = Aws::String>
    CapacityAssignment& AddWorkGroupNames(WorkGroupNamesT&& value) { m_workGroupNamesHasBeenSet = true; m_workGroupNames.emplace_back(std::forward<WorkGroupNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_workGroupNames;
    bool m_workGroupNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
