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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BacktrackDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API BacktrackDBClusterRequest : public RDSRequest
  {
  public:
    BacktrackDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BacktrackDBCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline BacktrackDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline BacktrackDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline BacktrackDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The timestamp of the time to backtrack the DB cluster to, specified in ISO
     * 8601 format. For more information about ISO 8601, see the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <note> <p>If the specified time is not a consistent time for the DB cluster,
     * Aurora automatically chooses the nearest possible consistent time for the DB
     * cluster.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must contain a valid ISO
     * 8601 timestamp.</p> </li> <li> <p>Can't contain a timestamp set in the
     * future.</p> </li> </ul> <p>Example: <code>2017-07-08T18:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackTo() const{ return m_backtrackTo; }

    /**
     * <p>The timestamp of the time to backtrack the DB cluster to, specified in ISO
     * 8601 format. For more information about ISO 8601, see the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <note> <p>If the specified time is not a consistent time for the DB cluster,
     * Aurora automatically chooses the nearest possible consistent time for the DB
     * cluster.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must contain a valid ISO
     * 8601 timestamp.</p> </li> <li> <p>Can't contain a timestamp set in the
     * future.</p> </li> </ul> <p>Example: <code>2017-07-08T18:00Z</code> </p>
     */
    inline bool BacktrackToHasBeenSet() const { return m_backtrackToHasBeenSet; }

    /**
     * <p>The timestamp of the time to backtrack the DB cluster to, specified in ISO
     * 8601 format. For more information about ISO 8601, see the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <note> <p>If the specified time is not a consistent time for the DB cluster,
     * Aurora automatically chooses the nearest possible consistent time for the DB
     * cluster.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must contain a valid ISO
     * 8601 timestamp.</p> </li> <li> <p>Can't contain a timestamp set in the
     * future.</p> </li> </ul> <p>Example: <code>2017-07-08T18:00Z</code> </p>
     */
    inline void SetBacktrackTo(const Aws::Utils::DateTime& value) { m_backtrackToHasBeenSet = true; m_backtrackTo = value; }

    /**
     * <p>The timestamp of the time to backtrack the DB cluster to, specified in ISO
     * 8601 format. For more information about ISO 8601, see the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <note> <p>If the specified time is not a consistent time for the DB cluster,
     * Aurora automatically chooses the nearest possible consistent time for the DB
     * cluster.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must contain a valid ISO
     * 8601 timestamp.</p> </li> <li> <p>Can't contain a timestamp set in the
     * future.</p> </li> </ul> <p>Example: <code>2017-07-08T18:00Z</code> </p>
     */
    inline void SetBacktrackTo(Aws::Utils::DateTime&& value) { m_backtrackToHasBeenSet = true; m_backtrackTo = std::move(value); }

    /**
     * <p>The timestamp of the time to backtrack the DB cluster to, specified in ISO
     * 8601 format. For more information about ISO 8601, see the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <note> <p>If the specified time is not a consistent time for the DB cluster,
     * Aurora automatically chooses the nearest possible consistent time for the DB
     * cluster.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must contain a valid ISO
     * 8601 timestamp.</p> </li> <li> <p>Can't contain a timestamp set in the
     * future.</p> </li> </ul> <p>Example: <code>2017-07-08T18:00Z</code> </p>
     */
    inline BacktrackDBClusterRequest& WithBacktrackTo(const Aws::Utils::DateTime& value) { SetBacktrackTo(value); return *this;}

    /**
     * <p>The timestamp of the time to backtrack the DB cluster to, specified in ISO
     * 8601 format. For more information about ISO 8601, see the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <note> <p>If the specified time is not a consistent time for the DB cluster,
     * Aurora automatically chooses the nearest possible consistent time for the DB
     * cluster.</p> </note> <p>Constraints:</p> <ul> <li> <p>Must contain a valid ISO
     * 8601 timestamp.</p> </li> <li> <p>Can't contain a timestamp set in the
     * future.</p> </li> </ul> <p>Example: <code>2017-07-08T18:00Z</code> </p>
     */
    inline BacktrackDBClusterRequest& WithBacktrackTo(Aws::Utils::DateTime&& value) { SetBacktrackTo(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether to force the DB cluster to backtrack when
     * binary logging is enabled. Otherwise, an error occurs when binary logging is
     * enabled.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>A value that indicates whether to force the DB cluster to backtrack when
     * binary logging is enabled. Otherwise, an error occurs when binary logging is
     * enabled.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>A value that indicates whether to force the DB cluster to backtrack when
     * binary logging is enabled. Otherwise, an error occurs when binary logging is
     * enabled.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>A value that indicates whether to force the DB cluster to backtrack when
     * binary logging is enabled. Otherwise, an error occurs when binary logging is
     * enabled.</p>
     */
    inline BacktrackDBClusterRequest& WithForce(bool value) { SetForce(value); return *this;}


    /**
     * <p>A value that indicates whether to backtrack the DB cluster to the earliest
     * possible backtrack time when <i>BacktrackTo</i> is set to a timestamp earlier
     * than the earliest backtrack time. When this parameter is disabled and
     * <i>BacktrackTo</i> is set to a timestamp earlier than the earliest backtrack
     * time, an error occurs.</p>
     */
    inline bool GetUseEarliestTimeOnPointInTimeUnavailable() const{ return m_useEarliestTimeOnPointInTimeUnavailable; }

    /**
     * <p>A value that indicates whether to backtrack the DB cluster to the earliest
     * possible backtrack time when <i>BacktrackTo</i> is set to a timestamp earlier
     * than the earliest backtrack time. When this parameter is disabled and
     * <i>BacktrackTo</i> is set to a timestamp earlier than the earliest backtrack
     * time, an error occurs.</p>
     */
    inline bool UseEarliestTimeOnPointInTimeUnavailableHasBeenSet() const { return m_useEarliestTimeOnPointInTimeUnavailableHasBeenSet; }

    /**
     * <p>A value that indicates whether to backtrack the DB cluster to the earliest
     * possible backtrack time when <i>BacktrackTo</i> is set to a timestamp earlier
     * than the earliest backtrack time. When this parameter is disabled and
     * <i>BacktrackTo</i> is set to a timestamp earlier than the earliest backtrack
     * time, an error occurs.</p>
     */
    inline void SetUseEarliestTimeOnPointInTimeUnavailable(bool value) { m_useEarliestTimeOnPointInTimeUnavailableHasBeenSet = true; m_useEarliestTimeOnPointInTimeUnavailable = value; }

    /**
     * <p>A value that indicates whether to backtrack the DB cluster to the earliest
     * possible backtrack time when <i>BacktrackTo</i> is set to a timestamp earlier
     * than the earliest backtrack time. When this parameter is disabled and
     * <i>BacktrackTo</i> is set to a timestamp earlier than the earliest backtrack
     * time, an error occurs.</p>
     */
    inline BacktrackDBClusterRequest& WithUseEarliestTimeOnPointInTimeUnavailable(bool value) { SetUseEarliestTimeOnPointInTimeUnavailable(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::Utils::DateTime m_backtrackTo;
    bool m_backtrackToHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;

    bool m_useEarliestTimeOnPointInTimeUnavailable;
    bool m_useEarliestTimeOnPointInTimeUnavailableHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
