/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ServerlessV2ScalingConfiguration.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class RestoreDBClusterToPointInTimeRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API RestoreDBClusterToPointInTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBClusterToPointInTime"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p>
     */
    inline const Aws::String& GetRestoreType() const{ return m_restoreType; }

    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p>
     */
    inline bool RestoreTypeHasBeenSet() const { return m_restoreTypeHasBeenSet; }

    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p>
     */
    inline void SetRestoreType(const Aws::String& value) { m_restoreTypeHasBeenSet = true; m_restoreType = value; }

    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p>
     */
    inline void SetRestoreType(Aws::String&& value) { m_restoreTypeHasBeenSet = true; m_restoreType = std::move(value); }

    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p>
     */
    inline void SetRestoreType(const char* value) { m_restoreTypeHasBeenSet = true; m_restoreType.assign(value); }

    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(const Aws::String& value) { SetRestoreType(value); return *this;}

    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(Aws::String&& value) { SetRestoreType(std::move(value)); return *this;}

    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(const char* value) { SetRestoreType(value); return *this;}


    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBClusterIdentifier() const{ return m_sourceDBClusterIdentifier; }

    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul>
     */
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul>
     */
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }

    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul>
     */
    inline void SetSourceDBClusterIdentifier(Aws::String&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul>
     */
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(Aws::String&& value) { SetSourceDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}


    /**
     * <p>The date and time to restore the DB cluster to.</p> <p>Valid Values: Value
     * must be a time in Universal Coordinated Time (UTC) format</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be before the latest restorable time for
     * the DB instance</p> </li> <li> <p>Must be specified if
     * <code>UseLatestRestorableTime</code> parameter is not provided</p> </li> <li>
     * <p>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is
     * true</p> </li> <li> <p>Cannot be specified if <code>RestoreType</code> parameter
     * is <code>copy-on-write</code> </p> </li> </ul> <p>Example:
     * <code>2015-03-07T23:45:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetRestoreToTime() const{ return m_restoreToTime; }

    /**
     * <p>The date and time to restore the DB cluster to.</p> <p>Valid Values: Value
     * must be a time in Universal Coordinated Time (UTC) format</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be before the latest restorable time for
     * the DB instance</p> </li> <li> <p>Must be specified if
     * <code>UseLatestRestorableTime</code> parameter is not provided</p> </li> <li>
     * <p>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is
     * true</p> </li> <li> <p>Cannot be specified if <code>RestoreType</code> parameter
     * is <code>copy-on-write</code> </p> </li> </ul> <p>Example:
     * <code>2015-03-07T23:45:00Z</code> </p>
     */
    inline bool RestoreToTimeHasBeenSet() const { return m_restoreToTimeHasBeenSet; }

    /**
     * <p>The date and time to restore the DB cluster to.</p> <p>Valid Values: Value
     * must be a time in Universal Coordinated Time (UTC) format</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be before the latest restorable time for
     * the DB instance</p> </li> <li> <p>Must be specified if
     * <code>UseLatestRestorableTime</code> parameter is not provided</p> </li> <li>
     * <p>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is
     * true</p> </li> <li> <p>Cannot be specified if <code>RestoreType</code> parameter
     * is <code>copy-on-write</code> </p> </li> </ul> <p>Example:
     * <code>2015-03-07T23:45:00Z</code> </p>
     */
    inline void SetRestoreToTime(const Aws::Utils::DateTime& value) { m_restoreToTimeHasBeenSet = true; m_restoreToTime = value; }

    /**
     * <p>The date and time to restore the DB cluster to.</p> <p>Valid Values: Value
     * must be a time in Universal Coordinated Time (UTC) format</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be before the latest restorable time for
     * the DB instance</p> </li> <li> <p>Must be specified if
     * <code>UseLatestRestorableTime</code> parameter is not provided</p> </li> <li>
     * <p>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is
     * true</p> </li> <li> <p>Cannot be specified if <code>RestoreType</code> parameter
     * is <code>copy-on-write</code> </p> </li> </ul> <p>Example:
     * <code>2015-03-07T23:45:00Z</code> </p>
     */
    inline void SetRestoreToTime(Aws::Utils::DateTime&& value) { m_restoreToTimeHasBeenSet = true; m_restoreToTime = std::move(value); }

    /**
     * <p>The date and time to restore the DB cluster to.</p> <p>Valid Values: Value
     * must be a time in Universal Coordinated Time (UTC) format</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be before the latest restorable time for
     * the DB instance</p> </li> <li> <p>Must be specified if
     * <code>UseLatestRestorableTime</code> parameter is not provided</p> </li> <li>
     * <p>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is
     * true</p> </li> <li> <p>Cannot be specified if <code>RestoreType</code> parameter
     * is <code>copy-on-write</code> </p> </li> </ul> <p>Example:
     * <code>2015-03-07T23:45:00Z</code> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreToTime(const Aws::Utils::DateTime& value) { SetRestoreToTime(value); return *this;}

    /**
     * <p>The date and time to restore the DB cluster to.</p> <p>Valid Values: Value
     * must be a time in Universal Coordinated Time (UTC) format</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be before the latest restorable time for
     * the DB instance</p> </li> <li> <p>Must be specified if
     * <code>UseLatestRestorableTime</code> parameter is not provided</p> </li> <li>
     * <p>Cannot be specified if <code>UseLatestRestorableTime</code> parameter is
     * true</p> </li> <li> <p>Cannot be specified if <code>RestoreType</code> parameter
     * is <code>copy-on-write</code> </p> </li> </ul> <p>Example:
     * <code>2015-03-07T23:45:00Z</code> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreToTime(Aws::Utils::DateTime&& value) { SetRestoreToTime(std::move(value)); return *this;}


    /**
     * <p>A value that is set to <code>true</code> to restore the DB cluster to the
     * latest restorable backup time, and <code>false</code> otherwise.</p> <p>Default:
     * <code>false</code> </p> <p>Constraints: Cannot be specified if
     * <code>RestoreToTime</code> parameter is provided.</p>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }

    /**
     * <p>A value that is set to <code>true</code> to restore the DB cluster to the
     * latest restorable backup time, and <code>false</code> otherwise.</p> <p>Default:
     * <code>false</code> </p> <p>Constraints: Cannot be specified if
     * <code>RestoreToTime</code> parameter is provided.</p>
     */
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }

    /**
     * <p>A value that is set to <code>true</code> to restore the DB cluster to the
     * latest restorable backup time, and <code>false</code> otherwise.</p> <p>Default:
     * <code>false</code> </p> <p>Constraints: Cannot be specified if
     * <code>RestoreToTime</code> parameter is provided.</p>
     */
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }

    /**
     * <p>A value that is set to <code>true</code> to restore the DB cluster to the
     * latest restorable backup time, and <code>false</code> otherwise.</p> <p>Default:
     * <code>false</code> </p> <p>Constraints: Cannot be specified if
     * <code>RestoreToTime</code> parameter is provided.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}


    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The tags to be applied to the restored DB cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be applied to the restored DB cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be applied to the restored DB cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be applied to the restored DB cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be applied to the restored DB cluster.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be applied to the restored DB cluster.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be applied to the restored DB cluster.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be applied to the restored DB cluster.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon KMS key identifier to use when restoring an encrypted DB cluster
     * from an encrypted DB cluster.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same Amazon account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>You can restore to a new DB cluster and
     * encrypt the new DB cluster with a KMS key that is different than the KMS key
     * used to encrypt the source DB cluster. The new DB cluster is encrypted with the
     * KMS key identified by the <code>KmsKeyId</code> parameter.</p> <p>If you do not
     * specify a value for the <code>KmsKeyId</code> parameter, then the following will
     * occur:</p> <ul> <li> <p>If the DB cluster is encrypted, then the restored DB
     * cluster is encrypted using the KMS key that was used to encrypt the source DB
     * cluster.</p> </li> <li> <p>If the DB cluster is not encrypted, then the restored
     * DB cluster is not encrypted.</p> </li> </ul> <p>If
     * <code>DBClusterIdentifier</code> refers to a DB cluster that is not encrypted,
     * then the restore request is rejected.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon KMS key identifier to use when restoring an encrypted DB cluster
     * from an encrypted DB cluster.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same Amazon account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>You can restore to a new DB cluster and
     * encrypt the new DB cluster with a KMS key that is different than the KMS key
     * used to encrypt the source DB cluster. The new DB cluster is encrypted with the
     * KMS key identified by the <code>KmsKeyId</code> parameter.</p> <p>If you do not
     * specify a value for the <code>KmsKeyId</code> parameter, then the following will
     * occur:</p> <ul> <li> <p>If the DB cluster is encrypted, then the restored DB
     * cluster is encrypted using the KMS key that was used to encrypt the source DB
     * cluster.</p> </li> <li> <p>If the DB cluster is not encrypted, then the restored
     * DB cluster is not encrypted.</p> </li> </ul> <p>If
     * <code>DBClusterIdentifier</code> refers to a DB cluster that is not encrypted,
     * then the restore request is rejected.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon KMS key identifier to use when restoring an encrypted DB cluster
     * from an encrypted DB cluster.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same Amazon account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>You can restore to a new DB cluster and
     * encrypt the new DB cluster with a KMS key that is different than the KMS key
     * used to encrypt the source DB cluster. The new DB cluster is encrypted with the
     * KMS key identified by the <code>KmsKeyId</code> parameter.</p> <p>If you do not
     * specify a value for the <code>KmsKeyId</code> parameter, then the following will
     * occur:</p> <ul> <li> <p>If the DB cluster is encrypted, then the restored DB
     * cluster is encrypted using the KMS key that was used to encrypt the source DB
     * cluster.</p> </li> <li> <p>If the DB cluster is not encrypted, then the restored
     * DB cluster is not encrypted.</p> </li> </ul> <p>If
     * <code>DBClusterIdentifier</code> refers to a DB cluster that is not encrypted,
     * then the restore request is rejected.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon KMS key identifier to use when restoring an encrypted DB cluster
     * from an encrypted DB cluster.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same Amazon account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>You can restore to a new DB cluster and
     * encrypt the new DB cluster with a KMS key that is different than the KMS key
     * used to encrypt the source DB cluster. The new DB cluster is encrypted with the
     * KMS key identified by the <code>KmsKeyId</code> parameter.</p> <p>If you do not
     * specify a value for the <code>KmsKeyId</code> parameter, then the following will
     * occur:</p> <ul> <li> <p>If the DB cluster is encrypted, then the restored DB
     * cluster is encrypted using the KMS key that was used to encrypt the source DB
     * cluster.</p> </li> <li> <p>If the DB cluster is not encrypted, then the restored
     * DB cluster is not encrypted.</p> </li> </ul> <p>If
     * <code>DBClusterIdentifier</code> refers to a DB cluster that is not encrypted,
     * then the restore request is rejected.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon KMS key identifier to use when restoring an encrypted DB cluster
     * from an encrypted DB cluster.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same Amazon account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>You can restore to a new DB cluster and
     * encrypt the new DB cluster with a KMS key that is different than the KMS key
     * used to encrypt the source DB cluster. The new DB cluster is encrypted with the
     * KMS key identified by the <code>KmsKeyId</code> parameter.</p> <p>If you do not
     * specify a value for the <code>KmsKeyId</code> parameter, then the following will
     * occur:</p> <ul> <li> <p>If the DB cluster is encrypted, then the restored DB
     * cluster is encrypted using the KMS key that was used to encrypt the source DB
     * cluster.</p> </li> <li> <p>If the DB cluster is not encrypted, then the restored
     * DB cluster is not encrypted.</p> </li> </ul> <p>If
     * <code>DBClusterIdentifier</code> refers to a DB cluster that is not encrypted,
     * then the restore request is rejected.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon KMS key identifier to use when restoring an encrypted DB cluster
     * from an encrypted DB cluster.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same Amazon account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>You can restore to a new DB cluster and
     * encrypt the new DB cluster with a KMS key that is different than the KMS key
     * used to encrypt the source DB cluster. The new DB cluster is encrypted with the
     * KMS key identified by the <code>KmsKeyId</code> parameter.</p> <p>If you do not
     * specify a value for the <code>KmsKeyId</code> parameter, then the following will
     * occur:</p> <ul> <li> <p>If the DB cluster is encrypted, then the restored DB
     * cluster is encrypted using the KMS key that was used to encrypt the source DB
     * cluster.</p> </li> <li> <p>If the DB cluster is not encrypted, then the restored
     * DB cluster is not encrypted.</p> </li> </ul> <p>If
     * <code>DBClusterIdentifier</code> refers to a DB cluster that is not encrypted,
     * then the restore request is rejected.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon KMS key identifier to use when restoring an encrypted DB cluster
     * from an encrypted DB cluster.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same Amazon account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>You can restore to a new DB cluster and
     * encrypt the new DB cluster with a KMS key that is different than the KMS key
     * used to encrypt the source DB cluster. The new DB cluster is encrypted with the
     * KMS key identified by the <code>KmsKeyId</code> parameter.</p> <p>If you do not
     * specify a value for the <code>KmsKeyId</code> parameter, then the following will
     * occur:</p> <ul> <li> <p>If the DB cluster is encrypted, then the restored DB
     * cluster is encrypted using the KMS key that was used to encrypt the source DB
     * cluster.</p> </li> <li> <p>If the DB cluster is not encrypted, then the restored
     * DB cluster is not encrypted.</p> </li> </ul> <p>If
     * <code>DBClusterIdentifier</code> refers to a DB cluster that is not encrypted,
     * then the restore request is rejected.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon KMS key identifier to use when restoring an encrypted DB cluster
     * from an encrypted DB cluster.</p> <p>The KMS key identifier is the Amazon
     * Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same Amazon account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>You can restore to a new DB cluster and
     * encrypt the new DB cluster with a KMS key that is different than the KMS key
     * used to encrypt the source DB cluster. The new DB cluster is encrypted with the
     * KMS key identified by the <code>KmsKeyId</code> parameter.</p> <p>If you do not
     * specify a value for the <code>KmsKeyId</code> parameter, then the following will
     * occur:</p> <ul> <li> <p>If the DB cluster is encrypted, then the restored DB
     * cluster is encrypted using the KMS key that was used to encrypt the source DB
     * cluster.</p> </li> <li> <p>If the DB cluster is not encrypted, then the restored
     * DB cluster is not encrypted.</p> </li> </ul> <p>If
     * <code>DBClusterIdentifier</code> refers to a DB cluster that is not encrypted,
     * then the restore request is rejected.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>True to enable mapping of Amazon Identity and Access Management (IAM)
     * accounts to database accounts, and otherwise false.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>True to enable mapping of Amazon Identity and Access Management (IAM)
     * accounts to database accounts, and otherwise false.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>True to enable mapping of Amazon Identity and Access Management (IAM)
     * accounts to database accounts, and otherwise false.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>True to enable mapping of Amazon Identity and Access Management (IAM)
     * accounts to database accounts, and otherwise false.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs.</p>
     */
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The name of the DB cluster parameter group to associate with the new DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the new DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the new DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the new DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with the new DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with the new DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with the new DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with the new DB
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline RestoreDBClusterToPointInTimeRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }

    
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }

    
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }

    
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }

    
    inline RestoreDBClusterToPointInTimeRequest& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { SetServerlessV2ScalingConfiguration(value); return *this;}

    
    inline RestoreDBClusterToPointInTimeRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_restoreType;
    bool m_restoreTypeHasBeenSet = false;

    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_restoreToTime;
    bool m_restoreToTimeHasBeenSet = false;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
