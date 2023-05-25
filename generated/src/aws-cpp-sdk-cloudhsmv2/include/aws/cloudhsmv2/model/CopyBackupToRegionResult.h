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
    AWS_CLOUDHSMV2_API CopyBackupToRegionResult();
    AWS_CLOUDHSMV2_API CopyBackupToRegionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API CopyBackupToRegionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the backup that will be copied to the destination region,
     * including CreateTimestamp, SourceBackup, SourceCluster, and Source Region.
     * CreateTimestamp of the destination backup will be the same as that of the source
     * backup.</p> <p>You will need to use the <code>sourceBackupID</code> returned in
     * this operation to use the <a>DescribeBackups</a> operation on the backup that
     * will be copied to the destination region.</p>
     */
    inline const DestinationBackup& GetDestinationBackup() const{ return m_destinationBackup; }

    /**
     * <p>Information on the backup that will be copied to the destination region,
     * including CreateTimestamp, SourceBackup, SourceCluster, and Source Region.
     * CreateTimestamp of the destination backup will be the same as that of the source
     * backup.</p> <p>You will need to use the <code>sourceBackupID</code> returned in
     * this operation to use the <a>DescribeBackups</a> operation on the backup that
     * will be copied to the destination region.</p>
     */
    inline void SetDestinationBackup(const DestinationBackup& value) { m_destinationBackup = value; }

    /**
     * <p>Information on the backup that will be copied to the destination region,
     * including CreateTimestamp, SourceBackup, SourceCluster, and Source Region.
     * CreateTimestamp of the destination backup will be the same as that of the source
     * backup.</p> <p>You will need to use the <code>sourceBackupID</code> returned in
     * this operation to use the <a>DescribeBackups</a> operation on the backup that
     * will be copied to the destination region.</p>
     */
    inline void SetDestinationBackup(DestinationBackup&& value) { m_destinationBackup = std::move(value); }

    /**
     * <p>Information on the backup that will be copied to the destination region,
     * including CreateTimestamp, SourceBackup, SourceCluster, and Source Region.
     * CreateTimestamp of the destination backup will be the same as that of the source
     * backup.</p> <p>You will need to use the <code>sourceBackupID</code> returned in
     * this operation to use the <a>DescribeBackups</a> operation on the backup that
     * will be copied to the destination region.</p>
     */
    inline CopyBackupToRegionResult& WithDestinationBackup(const DestinationBackup& value) { SetDestinationBackup(value); return *this;}

    /**
     * <p>Information on the backup that will be copied to the destination region,
     * including CreateTimestamp, SourceBackup, SourceCluster, and Source Region.
     * CreateTimestamp of the destination backup will be the same as that of the source
     * backup.</p> <p>You will need to use the <code>sourceBackupID</code> returned in
     * this operation to use the <a>DescribeBackups</a> operation on the backup that
     * will be copied to the destination region.</p>
     */
    inline CopyBackupToRegionResult& WithDestinationBackup(DestinationBackup&& value) { SetDestinationBackup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CopyBackupToRegionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CopyBackupToRegionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CopyBackupToRegionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DestinationBackup m_destinationBackup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
