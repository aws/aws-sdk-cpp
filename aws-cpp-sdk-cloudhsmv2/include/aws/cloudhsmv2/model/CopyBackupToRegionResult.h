/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/DestinationBackup.h>
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
  class AWS_CLOUDHSMV2_API CopyBackupToRegionResult
  {
  public:
    CopyBackupToRegionResult();
    CopyBackupToRegionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CopyBackupToRegionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    DestinationBackup m_destinationBackup;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
