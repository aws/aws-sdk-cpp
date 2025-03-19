/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/DestinationBackup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudHSMV2
{
namespace Model
{
  class CopyBackupToRegionResult
  {
  public:
    AWS_CLOUDHSMV2_API CopyBackupToRegionResult() = default;
    AWS_CLOUDHSMV2_API CopyBackupToRegionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API CopyBackupToRegionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information on the backup that will be copied to the destination region,
     * including CreateTimestamp, SourceBackup, SourceCluster, and Source Region.
     * CreateTimestamp of the destination backup will be the same as that of the source
     * backup.</p> <p>You will need to use the <code>sourceBackupID</code> returned in
     * this operation to use the <a>DescribeBackups</a> operation on the backup that
     * will be copied to the destination region.</p>
     */
    inline const DestinationBackup& GetDestinationBackup() const { return m_destinationBackup; }
    template<typename DestinationBackupT = DestinationBackup>
    void SetDestinationBackup(DestinationBackupT&& value) { m_destinationBackupHasBeenSet = true; m_destinationBackup = std::forward<DestinationBackupT>(value); }
    template<typename DestinationBackupT = DestinationBackup>
    CopyBackupToRegionResult& WithDestinationBackup(DestinationBackupT&& value) { SetDestinationBackup(std::forward<DestinationBackupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CopyBackupToRegionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DestinationBackup m_destinationBackup;
    bool m_destinationBackupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
