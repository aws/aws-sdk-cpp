/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /*
    <p> </p>
  */
  class AWS_REDSHIFT_API EnableSnapshotCopyRequest : public RedshiftRequest
  {
  public:
    EnableSnapshotCopyRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The unique identifier of the source cluster to copy snapshots from. </p> <p> Constraints: Must be the valid name of an existing cluster that does not already have cross-region snapshot copy enabled. </p>
    */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    /*
     <p> The unique identifier of the source cluster to copy snapshots from. </p> <p> Constraints: Must be the valid name of an existing cluster that does not already have cross-region snapshot copy enabled. </p>
    */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }

    /*
     <p> The unique identifier of the source cluster to copy snapshots from. </p> <p> Constraints: Must be the valid name of an existing cluster that does not already have cross-region snapshot copy enabled. </p>
    */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }

    /*
     <p> The unique identifier of the source cluster to copy snapshots from. </p> <p> Constraints: Must be the valid name of an existing cluster that does not already have cross-region snapshot copy enabled. </p>
    */
    inline EnableSnapshotCopyRequest&  WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /*
     <p> The unique identifier of the source cluster to copy snapshots from. </p> <p> Constraints: Must be the valid name of an existing cluster that does not already have cross-region snapshot copy enabled. </p>
    */
    inline EnableSnapshotCopyRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

    /*
     <p> The destination region that you want to copy snapshots to. </p> <p> Constraints: Must be the name of a valid region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions and Endpoints</a> in the Amazon Web Services General Reference. </p>
    */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }
    /*
     <p> The destination region that you want to copy snapshots to. </p> <p> Constraints: Must be the name of a valid region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions and Endpoints</a> in the Amazon Web Services General Reference. </p>
    */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegion = value; }

    /*
     <p> The destination region that you want to copy snapshots to. </p> <p> Constraints: Must be the name of a valid region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions and Endpoints</a> in the Amazon Web Services General Reference. </p>
    */
    inline void SetDestinationRegion(const char* value) { m_destinationRegion.assign(value); }

    /*
     <p> The destination region that you want to copy snapshots to. </p> <p> Constraints: Must be the name of a valid region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions and Endpoints</a> in the Amazon Web Services General Reference. </p>
    */
    inline EnableSnapshotCopyRequest&  WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /*
     <p> The destination region that you want to copy snapshots to. </p> <p> Constraints: Must be the name of a valid region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions and Endpoints</a> in the Amazon Web Services General Reference. </p>
    */
    inline EnableSnapshotCopyRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}

    /*
     <p> The number of days to retain automated snapshots in the destination region after they are copied from the source region. </p> <p> Default: 7. </p> <p> Constraints: Must be at least 1 and no more than 35. </p>
    */
    inline long GetRetentionPeriod() const{ return m_retentionPeriod; }
    /*
     <p> The number of days to retain automated snapshots in the destination region after they are copied from the source region. </p> <p> Default: 7. </p> <p> Constraints: Must be at least 1 and no more than 35. </p>
    */
    inline void SetRetentionPeriod(long value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /*
     <p> The number of days to retain automated snapshots in the destination region after they are copied from the source region. </p> <p> Default: 7. </p> <p> Constraints: Must be at least 1 and no more than 35. </p>
    */
    inline EnableSnapshotCopyRequest&  WithRetentionPeriod(long value) { SetRetentionPeriod(value); return *this;}

  private:
    Aws::String m_clusterIdentifier;
    Aws::String m_destinationRegion;
    long m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
