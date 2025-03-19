/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryInstanceDataReplicationInitiationStepName.h>
#include <aws/drs/model/RecoveryInstanceDataReplicationInitiationStepStatus.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Data replication initiation step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceDataReplicationInitiationStep">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceDataReplicationInitiationStep
  {
  public:
    AWS_DRS_API RecoveryInstanceDataReplicationInitiationStep() = default;
    AWS_DRS_API RecoveryInstanceDataReplicationInitiationStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDataReplicationInitiationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline RecoveryInstanceDataReplicationInitiationStepName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(RecoveryInstanceDataReplicationInitiationStepName value) { m_nameHasBeenSet = true; m_name = value; }
    inline RecoveryInstanceDataReplicationInitiationStep& WithName(RecoveryInstanceDataReplicationInitiationStepName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the step.</p>
     */
    inline RecoveryInstanceDataReplicationInitiationStepStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecoveryInstanceDataReplicationInitiationStepStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RecoveryInstanceDataReplicationInitiationStep& WithStatus(RecoveryInstanceDataReplicationInitiationStepStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    RecoveryInstanceDataReplicationInitiationStepName m_name{RecoveryInstanceDataReplicationInitiationStepName::NOT_SET};
    bool m_nameHasBeenSet = false;

    RecoveryInstanceDataReplicationInitiationStepStatus m_status{RecoveryInstanceDataReplicationInitiationStepStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
