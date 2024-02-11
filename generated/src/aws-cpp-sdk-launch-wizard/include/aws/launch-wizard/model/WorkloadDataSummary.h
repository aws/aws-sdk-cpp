/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
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
namespace LaunchWizard
{
namespace Model
{

  /**
   * <p>Describes workload data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/WorkloadDataSummary">AWS
   * API Reference</a></p>
   */
  class WorkloadDataSummary
  {
  public:
    AWS_LAUNCHWIZARD_API WorkloadDataSummary();
    AWS_LAUNCHWIZARD_API WorkloadDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API WorkloadDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display name of the workload data.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the workload data.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the workload data.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the workload data.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the workload data.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the workload data.</p>
     */
    inline WorkloadDataSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the workload data.</p>
     */
    inline WorkloadDataSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the workload data.</p>
     */
    inline WorkloadDataSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    /**
     * <p>The name of the workload.</p>
     */
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    /**
     * <p>The name of the workload.</p>
     */
    inline WorkloadDataSummary& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    /**
     * <p>The name of the workload.</p>
     */
    inline WorkloadDataSummary& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    /**
     * <p>The name of the workload.</p>
     */
    inline WorkloadDataSummary& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}

  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
