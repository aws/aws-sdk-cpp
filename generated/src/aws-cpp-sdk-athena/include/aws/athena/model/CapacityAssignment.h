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
    AWS_ATHENA_API CapacityAssignment();
    AWS_ATHENA_API CapacityAssignment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CapacityAssignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkGroupNames() const{ return m_workGroupNames; }

    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline bool WorkGroupNamesHasBeenSet() const { return m_workGroupNamesHasBeenSet; }

    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline void SetWorkGroupNames(const Aws::Vector<Aws::String>& value) { m_workGroupNamesHasBeenSet = true; m_workGroupNames = value; }

    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline void SetWorkGroupNames(Aws::Vector<Aws::String>&& value) { m_workGroupNamesHasBeenSet = true; m_workGroupNames = std::move(value); }

    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline CapacityAssignment& WithWorkGroupNames(const Aws::Vector<Aws::String>& value) { SetWorkGroupNames(value); return *this;}

    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline CapacityAssignment& WithWorkGroupNames(Aws::Vector<Aws::String>&& value) { SetWorkGroupNames(std::move(value)); return *this;}

    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline CapacityAssignment& AddWorkGroupNames(const Aws::String& value) { m_workGroupNamesHasBeenSet = true; m_workGroupNames.push_back(value); return *this; }

    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline CapacityAssignment& AddWorkGroupNames(Aws::String&& value) { m_workGroupNamesHasBeenSet = true; m_workGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of workgroup names for the capacity assignment.</p>
     */
    inline CapacityAssignment& AddWorkGroupNames(const char* value) { m_workGroupNamesHasBeenSet = true; m_workGroupNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_workGroupNames;
    bool m_workGroupNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
