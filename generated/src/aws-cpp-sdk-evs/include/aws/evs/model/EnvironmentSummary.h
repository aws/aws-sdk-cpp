/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/model/VcfVersion.h>
#include <aws/evs/model/CheckResult.h>
#include <aws/evs/model/EnvironmentState.h>
#include <aws/core/utils/DateTime.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>A list of environments with summarized environment details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/EnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentSummary
  {
  public:
    AWS_EVS_API EnvironmentSummary() = default;
    AWS_EVS_API EnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API EnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique ID for the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    EnvironmentSummary& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    EnvironmentSummary& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VCF version of the environment.</p>
     */
    inline VcfVersion GetVcfVersion() const { return m_vcfVersion; }
    inline bool VcfVersionHasBeenSet() const { return m_vcfVersionHasBeenSet; }
    inline void SetVcfVersion(VcfVersion value) { m_vcfVersionHasBeenSet = true; m_vcfVersion = value; }
    inline EnvironmentSummary& WithVcfVersion(VcfVersion value) { SetVcfVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * environment, such as impaired reachability.</p>
     */
    inline CheckResult GetEnvironmentStatus() const { return m_environmentStatus; }
    inline bool EnvironmentStatusHasBeenSet() const { return m_environmentStatusHasBeenSet; }
    inline void SetEnvironmentStatus(CheckResult value) { m_environmentStatusHasBeenSet = true; m_environmentStatus = value; }
    inline EnvironmentSummary& WithEnvironmentStatus(CheckResult value) { SetEnvironmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of an environment.</p>
     */
    inline EnvironmentState GetEnvironmentState() const { return m_environmentState; }
    inline bool EnvironmentStateHasBeenSet() const { return m_environmentStateHasBeenSet; }
    inline void SetEnvironmentState(EnvironmentState value) { m_environmentStateHasBeenSet = true; m_environmentState = value; }
    inline EnvironmentSummary& WithEnvironmentState(EnvironmentState value) { SetEnvironmentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    EnvironmentSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the environment was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    EnvironmentSummary& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
    template<typename EnvironmentArnT = Aws::String>
    void SetEnvironmentArn(EnvironmentArnT&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::forward<EnvironmentArnT>(value); }
    template<typename EnvironmentArnT = Aws::String>
    EnvironmentSummary& WithEnvironmentArn(EnvironmentArnT&& value) { SetEnvironmentArn(std::forward<EnvironmentArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    VcfVersion m_vcfVersion{VcfVersion::NOT_SET};
    bool m_vcfVersionHasBeenSet = false;

    CheckResult m_environmentStatus{CheckResult::NOT_SET};
    bool m_environmentStatusHasBeenSet = false;

    EnvironmentState m_environmentState{EnvironmentState::NOT_SET};
    bool m_environmentStateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
