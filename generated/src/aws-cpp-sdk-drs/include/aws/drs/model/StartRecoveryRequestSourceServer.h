/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object representing the Source Server to recover.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartRecoveryRequestSourceServer">AWS
   * API Reference</a></p>
   */
  class StartRecoveryRequestSourceServer
  {
  public:
    AWS_DRS_API StartRecoveryRequestSourceServer() = default;
    AWS_DRS_API StartRecoveryRequestSourceServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API StartRecoveryRequestSourceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a Recovery Snapshot we want to recover from. Omit this field to
     * launch from the latest data by taking an on-demand snapshot.</p>
     */
    inline const Aws::String& GetRecoverySnapshotID() const { return m_recoverySnapshotID; }
    inline bool RecoverySnapshotIDHasBeenSet() const { return m_recoverySnapshotIDHasBeenSet; }
    template<typename RecoverySnapshotIDT = Aws::String>
    void SetRecoverySnapshotID(RecoverySnapshotIDT&& value) { m_recoverySnapshotIDHasBeenSet = true; m_recoverySnapshotID = std::forward<RecoverySnapshotIDT>(value); }
    template<typename RecoverySnapshotIDT = Aws::String>
    StartRecoveryRequestSourceServer& WithRecoverySnapshotID(RecoverySnapshotIDT&& value) { SetRecoverySnapshotID(std::forward<RecoverySnapshotIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Server you want to recover.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    StartRecoveryRequestSourceServer& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recoverySnapshotID;
    bool m_recoverySnapshotIDHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
