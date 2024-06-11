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
    AWS_DRS_API StartRecoveryRequestSourceServer();
    AWS_DRS_API StartRecoveryRequestSourceServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API StartRecoveryRequestSourceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a Recovery Snapshot we want to recover from. Omit this field to
     * launch from the latest data by taking an on-demand snapshot.</p>
     */
    inline const Aws::String& GetRecoverySnapshotID() const{ return m_recoverySnapshotID; }
    inline bool RecoverySnapshotIDHasBeenSet() const { return m_recoverySnapshotIDHasBeenSet; }
    inline void SetRecoverySnapshotID(const Aws::String& value) { m_recoverySnapshotIDHasBeenSet = true; m_recoverySnapshotID = value; }
    inline void SetRecoverySnapshotID(Aws::String&& value) { m_recoverySnapshotIDHasBeenSet = true; m_recoverySnapshotID = std::move(value); }
    inline void SetRecoverySnapshotID(const char* value) { m_recoverySnapshotIDHasBeenSet = true; m_recoverySnapshotID.assign(value); }
    inline StartRecoveryRequestSourceServer& WithRecoverySnapshotID(const Aws::String& value) { SetRecoverySnapshotID(value); return *this;}
    inline StartRecoveryRequestSourceServer& WithRecoverySnapshotID(Aws::String&& value) { SetRecoverySnapshotID(std::move(value)); return *this;}
    inline StartRecoveryRequestSourceServer& WithRecoverySnapshotID(const char* value) { SetRecoverySnapshotID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Server you want to recover.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline StartRecoveryRequestSourceServer& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline StartRecoveryRequestSourceServer& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline StartRecoveryRequestSourceServer& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
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
