/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/CharLengthSemantics.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines an Oracle endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/OracleSettings">AWS
   * API Reference</a></p>
   */
  class OracleSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API OracleSettings();
    AWS_DATABASEMIGRATIONSERVICE_API OracleSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API OracleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set this attribute to set up table-level supplemental logging for the Oracle
     * database. This attribute enables PRIMARY KEY supplemental logging on all tables
     * selected for a migration task.</p> <p>If you use this option, you still need to
     * enable database-level supplemental logging.</p>
     */
    inline bool GetAddSupplementalLogging() const{ return m_addSupplementalLogging; }

    /**
     * <p>Set this attribute to set up table-level supplemental logging for the Oracle
     * database. This attribute enables PRIMARY KEY supplemental logging on all tables
     * selected for a migration task.</p> <p>If you use this option, you still need to
     * enable database-level supplemental logging.</p>
     */
    inline bool AddSupplementalLoggingHasBeenSet() const { return m_addSupplementalLoggingHasBeenSet; }

    /**
     * <p>Set this attribute to set up table-level supplemental logging for the Oracle
     * database. This attribute enables PRIMARY KEY supplemental logging on all tables
     * selected for a migration task.</p> <p>If you use this option, you still need to
     * enable database-level supplemental logging.</p>
     */
    inline void SetAddSupplementalLogging(bool value) { m_addSupplementalLoggingHasBeenSet = true; m_addSupplementalLogging = value; }

    /**
     * <p>Set this attribute to set up table-level supplemental logging for the Oracle
     * database. This attribute enables PRIMARY KEY supplemental logging on all tables
     * selected for a migration task.</p> <p>If you use this option, you still need to
     * enable database-level supplemental logging.</p>
     */
    inline OracleSettings& WithAddSupplementalLogging(bool value) { SetAddSupplementalLogging(value); return *this;}


    /**
     * <p>Specifies the ID of the destination for the archived redo logs. This value
     * should be the same as a number in the dest_id column of the v$archived_log view.
     * If you work with an additional redo log destination, use the
     * <code>AdditionalArchivedLogDestId</code> option to specify the additional
     * destination ID. Doing this improves performance by ensuring that the correct
     * logs are accessed from the outset.</p>
     */
    inline int GetArchivedLogDestId() const{ return m_archivedLogDestId; }

    /**
     * <p>Specifies the ID of the destination for the archived redo logs. This value
     * should be the same as a number in the dest_id column of the v$archived_log view.
     * If you work with an additional redo log destination, use the
     * <code>AdditionalArchivedLogDestId</code> option to specify the additional
     * destination ID. Doing this improves performance by ensuring that the correct
     * logs are accessed from the outset.</p>
     */
    inline bool ArchivedLogDestIdHasBeenSet() const { return m_archivedLogDestIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the destination for the archived redo logs. This value
     * should be the same as a number in the dest_id column of the v$archived_log view.
     * If you work with an additional redo log destination, use the
     * <code>AdditionalArchivedLogDestId</code> option to specify the additional
     * destination ID. Doing this improves performance by ensuring that the correct
     * logs are accessed from the outset.</p>
     */
    inline void SetArchivedLogDestId(int value) { m_archivedLogDestIdHasBeenSet = true; m_archivedLogDestId = value; }

    /**
     * <p>Specifies the ID of the destination for the archived redo logs. This value
     * should be the same as a number in the dest_id column of the v$archived_log view.
     * If you work with an additional redo log destination, use the
     * <code>AdditionalArchivedLogDestId</code> option to specify the additional
     * destination ID. Doing this improves performance by ensuring that the correct
     * logs are accessed from the outset.</p>
     */
    inline OracleSettings& WithArchivedLogDestId(int value) { SetArchivedLogDestId(value); return *this;}


    /**
     * <p>Set this attribute with <code>ArchivedLogDestId</code> in a primary/ standby
     * setup. This attribute is useful in the case of a switchover. In this case, DMS
     * needs to know which destination to get archive redo logs from to read changes.
     * This need arises because the previous primary instance is now a standby instance
     * after switchover.</p> <p>Although DMS supports the use of the Oracle
     * <code>RESETLOGS</code> option to open the database, never use
     * <code>RESETLOGS</code> unless necessary. For additional information about
     * <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">RMAN
     * Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery User's
     * Guide</i>.</p>
     */
    inline int GetAdditionalArchivedLogDestId() const{ return m_additionalArchivedLogDestId; }

    /**
     * <p>Set this attribute with <code>ArchivedLogDestId</code> in a primary/ standby
     * setup. This attribute is useful in the case of a switchover. In this case, DMS
     * needs to know which destination to get archive redo logs from to read changes.
     * This need arises because the previous primary instance is now a standby instance
     * after switchover.</p> <p>Although DMS supports the use of the Oracle
     * <code>RESETLOGS</code> option to open the database, never use
     * <code>RESETLOGS</code> unless necessary. For additional information about
     * <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">RMAN
     * Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery User's
     * Guide</i>.</p>
     */
    inline bool AdditionalArchivedLogDestIdHasBeenSet() const { return m_additionalArchivedLogDestIdHasBeenSet; }

    /**
     * <p>Set this attribute with <code>ArchivedLogDestId</code> in a primary/ standby
     * setup. This attribute is useful in the case of a switchover. In this case, DMS
     * needs to know which destination to get archive redo logs from to read changes.
     * This need arises because the previous primary instance is now a standby instance
     * after switchover.</p> <p>Although DMS supports the use of the Oracle
     * <code>RESETLOGS</code> option to open the database, never use
     * <code>RESETLOGS</code> unless necessary. For additional information about
     * <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">RMAN
     * Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery User's
     * Guide</i>.</p>
     */
    inline void SetAdditionalArchivedLogDestId(int value) { m_additionalArchivedLogDestIdHasBeenSet = true; m_additionalArchivedLogDestId = value; }

    /**
     * <p>Set this attribute with <code>ArchivedLogDestId</code> in a primary/ standby
     * setup. This attribute is useful in the case of a switchover. In this case, DMS
     * needs to know which destination to get archive redo logs from to read changes.
     * This need arises because the previous primary instance is now a standby instance
     * after switchover.</p> <p>Although DMS supports the use of the Oracle
     * <code>RESETLOGS</code> option to open the database, never use
     * <code>RESETLOGS</code> unless necessary. For additional information about
     * <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">RMAN
     * Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery User's
     * Guide</i>.</p>
     */
    inline OracleSettings& WithAdditionalArchivedLogDestId(int value) { SetAdditionalArchivedLogDestId(value); return *this;}


    /**
     * <p>Specifies the IDs of one more destinations for one or more archived redo
     * logs. These IDs are the values of the <code>dest_id</code> column in the
     * <code>v$archived_log</code> view. Use this setting with the
     * <code>archivedLogDestId</code> extra connection attribute in a primary-to-single
     * setup or a primary-to-multiple-standby setup. </p> <p>This setting is useful in
     * a switchover when you use an Oracle Data Guard database as a source. In this
     * case, DMS needs information about what destination to get archive redo logs from
     * to read changes. DMS needs this because after the switchover the previous
     * primary is a standby instance. For example, in a primary-to-single standby setup
     * you might apply the following settings. </p> <p> <code>archivedLogDestId=1;
     * ExtraArchivedLogDestIds=[2]</code> </p> <p>In a primary-to-multiple-standby
     * setup, you might apply the following settings.</p> <p>
     * <code>archivedLogDestId=1; ExtraArchivedLogDestIds=[2,3,4]</code> </p>
     * <p>Although DMS supports the use of the Oracle <code>RESETLOGS</code> option to
     * open the database, never use <code>RESETLOGS</code> unless it's necessary. For
     * more information about <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">
     * RMAN Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery
     * User's Guide</i>.</p>
     */
    inline const Aws::Vector<int>& GetExtraArchivedLogDestIds() const{ return m_extraArchivedLogDestIds; }

    /**
     * <p>Specifies the IDs of one more destinations for one or more archived redo
     * logs. These IDs are the values of the <code>dest_id</code> column in the
     * <code>v$archived_log</code> view. Use this setting with the
     * <code>archivedLogDestId</code> extra connection attribute in a primary-to-single
     * setup or a primary-to-multiple-standby setup. </p> <p>This setting is useful in
     * a switchover when you use an Oracle Data Guard database as a source. In this
     * case, DMS needs information about what destination to get archive redo logs from
     * to read changes. DMS needs this because after the switchover the previous
     * primary is a standby instance. For example, in a primary-to-single standby setup
     * you might apply the following settings. </p> <p> <code>archivedLogDestId=1;
     * ExtraArchivedLogDestIds=[2]</code> </p> <p>In a primary-to-multiple-standby
     * setup, you might apply the following settings.</p> <p>
     * <code>archivedLogDestId=1; ExtraArchivedLogDestIds=[2,3,4]</code> </p>
     * <p>Although DMS supports the use of the Oracle <code>RESETLOGS</code> option to
     * open the database, never use <code>RESETLOGS</code> unless it's necessary. For
     * more information about <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">
     * RMAN Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery
     * User's Guide</i>.</p>
     */
    inline bool ExtraArchivedLogDestIdsHasBeenSet() const { return m_extraArchivedLogDestIdsHasBeenSet; }

    /**
     * <p>Specifies the IDs of one more destinations for one or more archived redo
     * logs. These IDs are the values of the <code>dest_id</code> column in the
     * <code>v$archived_log</code> view. Use this setting with the
     * <code>archivedLogDestId</code> extra connection attribute in a primary-to-single
     * setup or a primary-to-multiple-standby setup. </p> <p>This setting is useful in
     * a switchover when you use an Oracle Data Guard database as a source. In this
     * case, DMS needs information about what destination to get archive redo logs from
     * to read changes. DMS needs this because after the switchover the previous
     * primary is a standby instance. For example, in a primary-to-single standby setup
     * you might apply the following settings. </p> <p> <code>archivedLogDestId=1;
     * ExtraArchivedLogDestIds=[2]</code> </p> <p>In a primary-to-multiple-standby
     * setup, you might apply the following settings.</p> <p>
     * <code>archivedLogDestId=1; ExtraArchivedLogDestIds=[2,3,4]</code> </p>
     * <p>Although DMS supports the use of the Oracle <code>RESETLOGS</code> option to
     * open the database, never use <code>RESETLOGS</code> unless it's necessary. For
     * more information about <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">
     * RMAN Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery
     * User's Guide</i>.</p>
     */
    inline void SetExtraArchivedLogDestIds(const Aws::Vector<int>& value) { m_extraArchivedLogDestIdsHasBeenSet = true; m_extraArchivedLogDestIds = value; }

    /**
     * <p>Specifies the IDs of one more destinations for one or more archived redo
     * logs. These IDs are the values of the <code>dest_id</code> column in the
     * <code>v$archived_log</code> view. Use this setting with the
     * <code>archivedLogDestId</code> extra connection attribute in a primary-to-single
     * setup or a primary-to-multiple-standby setup. </p> <p>This setting is useful in
     * a switchover when you use an Oracle Data Guard database as a source. In this
     * case, DMS needs information about what destination to get archive redo logs from
     * to read changes. DMS needs this because after the switchover the previous
     * primary is a standby instance. For example, in a primary-to-single standby setup
     * you might apply the following settings. </p> <p> <code>archivedLogDestId=1;
     * ExtraArchivedLogDestIds=[2]</code> </p> <p>In a primary-to-multiple-standby
     * setup, you might apply the following settings.</p> <p>
     * <code>archivedLogDestId=1; ExtraArchivedLogDestIds=[2,3,4]</code> </p>
     * <p>Although DMS supports the use of the Oracle <code>RESETLOGS</code> option to
     * open the database, never use <code>RESETLOGS</code> unless it's necessary. For
     * more information about <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">
     * RMAN Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery
     * User's Guide</i>.</p>
     */
    inline void SetExtraArchivedLogDestIds(Aws::Vector<int>&& value) { m_extraArchivedLogDestIdsHasBeenSet = true; m_extraArchivedLogDestIds = std::move(value); }

    /**
     * <p>Specifies the IDs of one more destinations for one or more archived redo
     * logs. These IDs are the values of the <code>dest_id</code> column in the
     * <code>v$archived_log</code> view. Use this setting with the
     * <code>archivedLogDestId</code> extra connection attribute in a primary-to-single
     * setup or a primary-to-multiple-standby setup. </p> <p>This setting is useful in
     * a switchover when you use an Oracle Data Guard database as a source. In this
     * case, DMS needs information about what destination to get archive redo logs from
     * to read changes. DMS needs this because after the switchover the previous
     * primary is a standby instance. For example, in a primary-to-single standby setup
     * you might apply the following settings. </p> <p> <code>archivedLogDestId=1;
     * ExtraArchivedLogDestIds=[2]</code> </p> <p>In a primary-to-multiple-standby
     * setup, you might apply the following settings.</p> <p>
     * <code>archivedLogDestId=1; ExtraArchivedLogDestIds=[2,3,4]</code> </p>
     * <p>Although DMS supports the use of the Oracle <code>RESETLOGS</code> option to
     * open the database, never use <code>RESETLOGS</code> unless it's necessary. For
     * more information about <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">
     * RMAN Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery
     * User's Guide</i>.</p>
     */
    inline OracleSettings& WithExtraArchivedLogDestIds(const Aws::Vector<int>& value) { SetExtraArchivedLogDestIds(value); return *this;}

    /**
     * <p>Specifies the IDs of one more destinations for one or more archived redo
     * logs. These IDs are the values of the <code>dest_id</code> column in the
     * <code>v$archived_log</code> view. Use this setting with the
     * <code>archivedLogDestId</code> extra connection attribute in a primary-to-single
     * setup or a primary-to-multiple-standby setup. </p> <p>This setting is useful in
     * a switchover when you use an Oracle Data Guard database as a source. In this
     * case, DMS needs information about what destination to get archive redo logs from
     * to read changes. DMS needs this because after the switchover the previous
     * primary is a standby instance. For example, in a primary-to-single standby setup
     * you might apply the following settings. </p> <p> <code>archivedLogDestId=1;
     * ExtraArchivedLogDestIds=[2]</code> </p> <p>In a primary-to-multiple-standby
     * setup, you might apply the following settings.</p> <p>
     * <code>archivedLogDestId=1; ExtraArchivedLogDestIds=[2,3,4]</code> </p>
     * <p>Although DMS supports the use of the Oracle <code>RESETLOGS</code> option to
     * open the database, never use <code>RESETLOGS</code> unless it's necessary. For
     * more information about <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">
     * RMAN Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery
     * User's Guide</i>.</p>
     */
    inline OracleSettings& WithExtraArchivedLogDestIds(Aws::Vector<int>&& value) { SetExtraArchivedLogDestIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the IDs of one more destinations for one or more archived redo
     * logs. These IDs are the values of the <code>dest_id</code> column in the
     * <code>v$archived_log</code> view. Use this setting with the
     * <code>archivedLogDestId</code> extra connection attribute in a primary-to-single
     * setup or a primary-to-multiple-standby setup. </p> <p>This setting is useful in
     * a switchover when you use an Oracle Data Guard database as a source. In this
     * case, DMS needs information about what destination to get archive redo logs from
     * to read changes. DMS needs this because after the switchover the previous
     * primary is a standby instance. For example, in a primary-to-single standby setup
     * you might apply the following settings. </p> <p> <code>archivedLogDestId=1;
     * ExtraArchivedLogDestIds=[2]</code> </p> <p>In a primary-to-multiple-standby
     * setup, you might apply the following settings.</p> <p>
     * <code>archivedLogDestId=1; ExtraArchivedLogDestIds=[2,3,4]</code> </p>
     * <p>Although DMS supports the use of the Oracle <code>RESETLOGS</code> option to
     * open the database, never use <code>RESETLOGS</code> unless it's necessary. For
     * more information about <code>RESETLOGS</code>, see <a
     * href="https://docs.oracle.com/en/database/oracle/oracle-database/19/bradv/rman-data-repair-concepts.html#GUID-1805CCF7-4AF2-482D-B65A-998192F89C2B">
     * RMAN Data Repair Concepts</a> in the <i>Oracle Database Backup and Recovery
     * User's Guide</i>.</p>
     */
    inline OracleSettings& AddExtraArchivedLogDestIds(int value) { m_extraArchivedLogDestIdsHasBeenSet = true; m_extraArchivedLogDestIds.push_back(value); return *this; }


    /**
     * <p>Set this attribute to <code>true</code> to enable replication of Oracle
     * tables containing columns that are nested tables or defined types.</p>
     */
    inline bool GetAllowSelectNestedTables() const{ return m_allowSelectNestedTables; }

    /**
     * <p>Set this attribute to <code>true</code> to enable replication of Oracle
     * tables containing columns that are nested tables or defined types.</p>
     */
    inline bool AllowSelectNestedTablesHasBeenSet() const { return m_allowSelectNestedTablesHasBeenSet; }

    /**
     * <p>Set this attribute to <code>true</code> to enable replication of Oracle
     * tables containing columns that are nested tables or defined types.</p>
     */
    inline void SetAllowSelectNestedTables(bool value) { m_allowSelectNestedTablesHasBeenSet = true; m_allowSelectNestedTables = value; }

    /**
     * <p>Set this attribute to <code>true</code> to enable replication of Oracle
     * tables containing columns that are nested tables or defined types.</p>
     */
    inline OracleSettings& WithAllowSelectNestedTables(bool value) { SetAllowSelectNestedTables(value); return *this;}


    /**
     * <p>Set this attribute to change the number of threads that DMS configures to
     * perform a change data capture (CDC) load using Oracle Automatic Storage
     * Management (ASM). You can specify an integer value between 2 (the default) and 8
     * (the maximum). Use this attribute together with the <code>readAheadBlocks</code>
     * attribute.</p>
     */
    inline int GetParallelAsmReadThreads() const{ return m_parallelAsmReadThreads; }

    /**
     * <p>Set this attribute to change the number of threads that DMS configures to
     * perform a change data capture (CDC) load using Oracle Automatic Storage
     * Management (ASM). You can specify an integer value between 2 (the default) and 8
     * (the maximum). Use this attribute together with the <code>readAheadBlocks</code>
     * attribute.</p>
     */
    inline bool ParallelAsmReadThreadsHasBeenSet() const { return m_parallelAsmReadThreadsHasBeenSet; }

    /**
     * <p>Set this attribute to change the number of threads that DMS configures to
     * perform a change data capture (CDC) load using Oracle Automatic Storage
     * Management (ASM). You can specify an integer value between 2 (the default) and 8
     * (the maximum). Use this attribute together with the <code>readAheadBlocks</code>
     * attribute.</p>
     */
    inline void SetParallelAsmReadThreads(int value) { m_parallelAsmReadThreadsHasBeenSet = true; m_parallelAsmReadThreads = value; }

    /**
     * <p>Set this attribute to change the number of threads that DMS configures to
     * perform a change data capture (CDC) load using Oracle Automatic Storage
     * Management (ASM). You can specify an integer value between 2 (the default) and 8
     * (the maximum). Use this attribute together with the <code>readAheadBlocks</code>
     * attribute.</p>
     */
    inline OracleSettings& WithParallelAsmReadThreads(int value) { SetParallelAsmReadThreads(value); return *this;}


    /**
     * <p>Set this attribute to change the number of read-ahead blocks that DMS
     * configures to perform a change data capture (CDC) load using Oracle Automatic
     * Storage Management (ASM). You can specify an integer value between 1000 (the
     * default) and 200,000 (the maximum).</p>
     */
    inline int GetReadAheadBlocks() const{ return m_readAheadBlocks; }

    /**
     * <p>Set this attribute to change the number of read-ahead blocks that DMS
     * configures to perform a change data capture (CDC) load using Oracle Automatic
     * Storage Management (ASM). You can specify an integer value between 1000 (the
     * default) and 200,000 (the maximum).</p>
     */
    inline bool ReadAheadBlocksHasBeenSet() const { return m_readAheadBlocksHasBeenSet; }

    /**
     * <p>Set this attribute to change the number of read-ahead blocks that DMS
     * configures to perform a change data capture (CDC) load using Oracle Automatic
     * Storage Management (ASM). You can specify an integer value between 1000 (the
     * default) and 200,000 (the maximum).</p>
     */
    inline void SetReadAheadBlocks(int value) { m_readAheadBlocksHasBeenSet = true; m_readAheadBlocks = value; }

    /**
     * <p>Set this attribute to change the number of read-ahead blocks that DMS
     * configures to perform a change data capture (CDC) load using Oracle Automatic
     * Storage Management (ASM). You can specify an integer value between 1000 (the
     * default) and 200,000 (the maximum).</p>
     */
    inline OracleSettings& WithReadAheadBlocks(int value) { SetReadAheadBlocks(value); return *this;}


    /**
     * <p>Set this attribute to <code>false</code> in order to use the Binary Reader to
     * capture change data for an Amazon RDS for Oracle as the source. This tells the
     * DMS instance to not access redo logs through any specified path prefix
     * replacement using direct file access.</p>
     */
    inline bool GetAccessAlternateDirectly() const{ return m_accessAlternateDirectly; }

    /**
     * <p>Set this attribute to <code>false</code> in order to use the Binary Reader to
     * capture change data for an Amazon RDS for Oracle as the source. This tells the
     * DMS instance to not access redo logs through any specified path prefix
     * replacement using direct file access.</p>
     */
    inline bool AccessAlternateDirectlyHasBeenSet() const { return m_accessAlternateDirectlyHasBeenSet; }

    /**
     * <p>Set this attribute to <code>false</code> in order to use the Binary Reader to
     * capture change data for an Amazon RDS for Oracle as the source. This tells the
     * DMS instance to not access redo logs through any specified path prefix
     * replacement using direct file access.</p>
     */
    inline void SetAccessAlternateDirectly(bool value) { m_accessAlternateDirectlyHasBeenSet = true; m_accessAlternateDirectly = value; }

    /**
     * <p>Set this attribute to <code>false</code> in order to use the Binary Reader to
     * capture change data for an Amazon RDS for Oracle as the source. This tells the
     * DMS instance to not access redo logs through any specified path prefix
     * replacement using direct file access.</p>
     */
    inline OracleSettings& WithAccessAlternateDirectly(bool value) { SetAccessAlternateDirectly(value); return *this;}


    /**
     * <p>Set this attribute to <code>true</code> in order to use the Binary Reader to
     * capture change data for an Amazon RDS for Oracle as the source. This tells the
     * DMS instance to use any specified prefix replacement to access all online redo
     * logs.</p>
     */
    inline bool GetUseAlternateFolderForOnline() const{ return m_useAlternateFolderForOnline; }

    /**
     * <p>Set this attribute to <code>true</code> in order to use the Binary Reader to
     * capture change data for an Amazon RDS for Oracle as the source. This tells the
     * DMS instance to use any specified prefix replacement to access all online redo
     * logs.</p>
     */
    inline bool UseAlternateFolderForOnlineHasBeenSet() const { return m_useAlternateFolderForOnlineHasBeenSet; }

    /**
     * <p>Set this attribute to <code>true</code> in order to use the Binary Reader to
     * capture change data for an Amazon RDS for Oracle as the source. This tells the
     * DMS instance to use any specified prefix replacement to access all online redo
     * logs.</p>
     */
    inline void SetUseAlternateFolderForOnline(bool value) { m_useAlternateFolderForOnlineHasBeenSet = true; m_useAlternateFolderForOnline = value; }

    /**
     * <p>Set this attribute to <code>true</code> in order to use the Binary Reader to
     * capture change data for an Amazon RDS for Oracle as the source. This tells the
     * DMS instance to use any specified prefix replacement to access all online redo
     * logs.</p>
     */
    inline OracleSettings& WithUseAlternateFolderForOnline(bool value) { SetUseAlternateFolderForOnline(value); return *this;}


    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the default Oracle root used to access the redo logs.</p>
     */
    inline const Aws::String& GetOraclePathPrefix() const{ return m_oraclePathPrefix; }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the default Oracle root used to access the redo logs.</p>
     */
    inline bool OraclePathPrefixHasBeenSet() const { return m_oraclePathPrefixHasBeenSet; }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the default Oracle root used to access the redo logs.</p>
     */
    inline void SetOraclePathPrefix(const Aws::String& value) { m_oraclePathPrefixHasBeenSet = true; m_oraclePathPrefix = value; }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the default Oracle root used to access the redo logs.</p>
     */
    inline void SetOraclePathPrefix(Aws::String&& value) { m_oraclePathPrefixHasBeenSet = true; m_oraclePathPrefix = std::move(value); }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the default Oracle root used to access the redo logs.</p>
     */
    inline void SetOraclePathPrefix(const char* value) { m_oraclePathPrefixHasBeenSet = true; m_oraclePathPrefix.assign(value); }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the default Oracle root used to access the redo logs.</p>
     */
    inline OracleSettings& WithOraclePathPrefix(const Aws::String& value) { SetOraclePathPrefix(value); return *this;}

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the default Oracle root used to access the redo logs.</p>
     */
    inline OracleSettings& WithOraclePathPrefix(Aws::String&& value) { SetOraclePathPrefix(std::move(value)); return *this;}

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the default Oracle root used to access the redo logs.</p>
     */
    inline OracleSettings& WithOraclePathPrefix(const char* value) { SetOraclePathPrefix(value); return *this;}


    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the path prefix used to replace the default Oracle root to
     * access the redo logs.</p>
     */
    inline const Aws::String& GetUsePathPrefix() const{ return m_usePathPrefix; }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the path prefix used to replace the default Oracle root to
     * access the redo logs.</p>
     */
    inline bool UsePathPrefixHasBeenSet() const { return m_usePathPrefixHasBeenSet; }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the path prefix used to replace the default Oracle root to
     * access the redo logs.</p>
     */
    inline void SetUsePathPrefix(const Aws::String& value) { m_usePathPrefixHasBeenSet = true; m_usePathPrefix = value; }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the path prefix used to replace the default Oracle root to
     * access the redo logs.</p>
     */
    inline void SetUsePathPrefix(Aws::String&& value) { m_usePathPrefixHasBeenSet = true; m_usePathPrefix = std::move(value); }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the path prefix used to replace the default Oracle root to
     * access the redo logs.</p>
     */
    inline void SetUsePathPrefix(const char* value) { m_usePathPrefixHasBeenSet = true; m_usePathPrefix.assign(value); }

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the path prefix used to replace the default Oracle root to
     * access the redo logs.</p>
     */
    inline OracleSettings& WithUsePathPrefix(const Aws::String& value) { SetUsePathPrefix(value); return *this;}

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the path prefix used to replace the default Oracle root to
     * access the redo logs.</p>
     */
    inline OracleSettings& WithUsePathPrefix(Aws::String&& value) { SetUsePathPrefix(std::move(value)); return *this;}

    /**
     * <p>Set this string attribute to the required value in order to use the Binary
     * Reader to capture change data for an Amazon RDS for Oracle as the source. This
     * value specifies the path prefix used to replace the default Oracle root to
     * access the redo logs.</p>
     */
    inline OracleSettings& WithUsePathPrefix(const char* value) { SetUsePathPrefix(value); return *this;}


    /**
     * <p>Set this attribute to true in order to use the Binary Reader to capture
     * change data for an Amazon RDS for Oracle as the source. This setting tells DMS
     * instance to replace the default Oracle root with the specified
     * <code>usePathPrefix</code> setting to access the redo logs.</p>
     */
    inline bool GetReplacePathPrefix() const{ return m_replacePathPrefix; }

    /**
     * <p>Set this attribute to true in order to use the Binary Reader to capture
     * change data for an Amazon RDS for Oracle as the source. This setting tells DMS
     * instance to replace the default Oracle root with the specified
     * <code>usePathPrefix</code> setting to access the redo logs.</p>
     */
    inline bool ReplacePathPrefixHasBeenSet() const { return m_replacePathPrefixHasBeenSet; }

    /**
     * <p>Set this attribute to true in order to use the Binary Reader to capture
     * change data for an Amazon RDS for Oracle as the source. This setting tells DMS
     * instance to replace the default Oracle root with the specified
     * <code>usePathPrefix</code> setting to access the redo logs.</p>
     */
    inline void SetReplacePathPrefix(bool value) { m_replacePathPrefixHasBeenSet = true; m_replacePathPrefix = value; }

    /**
     * <p>Set this attribute to true in order to use the Binary Reader to capture
     * change data for an Amazon RDS for Oracle as the source. This setting tells DMS
     * instance to replace the default Oracle root with the specified
     * <code>usePathPrefix</code> setting to access the redo logs.</p>
     */
    inline OracleSettings& WithReplacePathPrefix(bool value) { SetReplacePathPrefix(value); return *this;}


    /**
     * <p>Set this attribute to enable homogenous tablespace replication and create
     * existing tables or indexes under the same tablespace on the target.</p>
     */
    inline bool GetEnableHomogenousTablespace() const{ return m_enableHomogenousTablespace; }

    /**
     * <p>Set this attribute to enable homogenous tablespace replication and create
     * existing tables or indexes under the same tablespace on the target.</p>
     */
    inline bool EnableHomogenousTablespaceHasBeenSet() const { return m_enableHomogenousTablespaceHasBeenSet; }

    /**
     * <p>Set this attribute to enable homogenous tablespace replication and create
     * existing tables or indexes under the same tablespace on the target.</p>
     */
    inline void SetEnableHomogenousTablespace(bool value) { m_enableHomogenousTablespaceHasBeenSet = true; m_enableHomogenousTablespace = value; }

    /**
     * <p>Set this attribute to enable homogenous tablespace replication and create
     * existing tables or indexes under the same tablespace on the target.</p>
     */
    inline OracleSettings& WithEnableHomogenousTablespace(bool value) { SetEnableHomogenousTablespace(value); return *this;}


    /**
     * <p>When set to <code>true</code>, this attribute helps to increase the commit
     * rate on the Oracle target database by writing directly to tables and not writing
     * a trail to database logs.</p>
     */
    inline bool GetDirectPathNoLog() const{ return m_directPathNoLog; }

    /**
     * <p>When set to <code>true</code>, this attribute helps to increase the commit
     * rate on the Oracle target database by writing directly to tables and not writing
     * a trail to database logs.</p>
     */
    inline bool DirectPathNoLogHasBeenSet() const { return m_directPathNoLogHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, this attribute helps to increase the commit
     * rate on the Oracle target database by writing directly to tables and not writing
     * a trail to database logs.</p>
     */
    inline void SetDirectPathNoLog(bool value) { m_directPathNoLogHasBeenSet = true; m_directPathNoLog = value; }

    /**
     * <p>When set to <code>true</code>, this attribute helps to increase the commit
     * rate on the Oracle target database by writing directly to tables and not writing
     * a trail to database logs.</p>
     */
    inline OracleSettings& WithDirectPathNoLog(bool value) { SetDirectPathNoLog(value); return *this;}


    /**
     * <p>When this field is set to <code>Y</code>, DMS only accesses the archived redo
     * logs. If the archived redo logs are stored on Automatic Storage Management (ASM)
     * only, the DMS user account needs to be granted ASM privileges.</p>
     */
    inline bool GetArchivedLogsOnly() const{ return m_archivedLogsOnly; }

    /**
     * <p>When this field is set to <code>Y</code>, DMS only accesses the archived redo
     * logs. If the archived redo logs are stored on Automatic Storage Management (ASM)
     * only, the DMS user account needs to be granted ASM privileges.</p>
     */
    inline bool ArchivedLogsOnlyHasBeenSet() const { return m_archivedLogsOnlyHasBeenSet; }

    /**
     * <p>When this field is set to <code>Y</code>, DMS only accesses the archived redo
     * logs. If the archived redo logs are stored on Automatic Storage Management (ASM)
     * only, the DMS user account needs to be granted ASM privileges.</p>
     */
    inline void SetArchivedLogsOnly(bool value) { m_archivedLogsOnlyHasBeenSet = true; m_archivedLogsOnly = value; }

    /**
     * <p>When this field is set to <code>Y</code>, DMS only accesses the archived redo
     * logs. If the archived redo logs are stored on Automatic Storage Management (ASM)
     * only, the DMS user account needs to be granted ASM privileges.</p>
     */
    inline OracleSettings& WithArchivedLogsOnly(bool value) { SetArchivedLogsOnly(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline const Aws::String& GetAsmPassword() const{ return m_asmPassword; }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline bool AsmPasswordHasBeenSet() const { return m_asmPasswordHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmPassword(const Aws::String& value) { m_asmPasswordHasBeenSet = true; m_asmPassword = value; }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmPassword(Aws::String&& value) { m_asmPasswordHasBeenSet = true; m_asmPassword = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmPassword(const char* value) { m_asmPasswordHasBeenSet = true; m_asmPassword.assign(value); }

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmPassword(const Aws::String& value) { SetAsmPassword(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmPassword(Aws::String&& value) { SetAsmPassword(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, your Oracle Automatic Storage Management (ASM)
     * password. You can set this value from the <code> <i>asm_user_password</i>
     * </code> value. You set this value as part of the comma-separated value that you
     * set to the <code>Password</code> request parameter when you create the endpoint
     * to access transaction logs using Binary Reader. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmPassword(const char* value) { SetAsmPassword(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline const Aws::String& GetAsmServer() const{ return m_asmServer; }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline bool AsmServerHasBeenSet() const { return m_asmServerHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmServer(const Aws::String& value) { m_asmServerHasBeenSet = true; m_asmServer = value; }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmServer(Aws::String&& value) { m_asmServerHasBeenSet = true; m_asmServer = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmServer(const char* value) { m_asmServerHasBeenSet = true; m_asmServer.assign(value); }

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmServer(const Aws::String& value) { SetAsmServer(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmServer(Aws::String&& value) { SetAsmServer(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, your ASM server address. You can set this
     * value from the <code>asm_server</code> value. You set <code>asm_server</code> as
     * part of the extra connection attribute string to access an Oracle server with
     * Binary Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmServer(const char* value) { SetAsmServer(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline const Aws::String& GetAsmUser() const{ return m_asmUser; }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline bool AsmUserHasBeenSet() const { return m_asmUserHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmUser(const Aws::String& value) { m_asmUserHasBeenSet = true; m_asmUser = value; }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmUser(Aws::String&& value) { m_asmUserHasBeenSet = true; m_asmUser = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline void SetAsmUser(const char* value) { m_asmUserHasBeenSet = true; m_asmUser.assign(value); }

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmUser(const Aws::String& value) { SetAsmUser(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmUser(Aws::String&& value) { SetAsmUser(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, your ASM user name. You can set this value
     * from the <code>asm_user</code> value. You set <code>asm_user</code> as part of
     * the extra connection attribute string to access an Oracle server with Binary
     * Reader that uses ASM. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline OracleSettings& WithAsmUser(const char* value) { SetAsmUser(value); return *this;}


    /**
     * <p>Specifies whether the length of a character column is in bytes or in
     * characters. To indicate that the character column length is in characters, set
     * this attribute to <code>CHAR</code>. Otherwise, the character column length is
     * in bytes.</p> <p>Example: <code>charLengthSemantics=CHAR;</code> </p>
     */
    inline const CharLengthSemantics& GetCharLengthSemantics() const{ return m_charLengthSemantics; }

    /**
     * <p>Specifies whether the length of a character column is in bytes or in
     * characters. To indicate that the character column length is in characters, set
     * this attribute to <code>CHAR</code>. Otherwise, the character column length is
     * in bytes.</p> <p>Example: <code>charLengthSemantics=CHAR;</code> </p>
     */
    inline bool CharLengthSemanticsHasBeenSet() const { return m_charLengthSemanticsHasBeenSet; }

    /**
     * <p>Specifies whether the length of a character column is in bytes or in
     * characters. To indicate that the character column length is in characters, set
     * this attribute to <code>CHAR</code>. Otherwise, the character column length is
     * in bytes.</p> <p>Example: <code>charLengthSemantics=CHAR;</code> </p>
     */
    inline void SetCharLengthSemantics(const CharLengthSemantics& value) { m_charLengthSemanticsHasBeenSet = true; m_charLengthSemantics = value; }

    /**
     * <p>Specifies whether the length of a character column is in bytes or in
     * characters. To indicate that the character column length is in characters, set
     * this attribute to <code>CHAR</code>. Otherwise, the character column length is
     * in bytes.</p> <p>Example: <code>charLengthSemantics=CHAR;</code> </p>
     */
    inline void SetCharLengthSemantics(CharLengthSemantics&& value) { m_charLengthSemanticsHasBeenSet = true; m_charLengthSemantics = std::move(value); }

    /**
     * <p>Specifies whether the length of a character column is in bytes or in
     * characters. To indicate that the character column length is in characters, set
     * this attribute to <code>CHAR</code>. Otherwise, the character column length is
     * in bytes.</p> <p>Example: <code>charLengthSemantics=CHAR;</code> </p>
     */
    inline OracleSettings& WithCharLengthSemantics(const CharLengthSemantics& value) { SetCharLengthSemantics(value); return *this;}

    /**
     * <p>Specifies whether the length of a character column is in bytes or in
     * characters. To indicate that the character column length is in characters, set
     * this attribute to <code>CHAR</code>. Otherwise, the character column length is
     * in bytes.</p> <p>Example: <code>charLengthSemantics=CHAR;</code> </p>
     */
    inline OracleSettings& WithCharLengthSemantics(CharLengthSemantics&& value) { SetCharLengthSemantics(std::move(value)); return *this;}


    /**
     * <p>Database name for the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline OracleSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline OracleSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline OracleSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>When set to <code>true</code>, this attribute specifies a parallel load when
     * <code>useDirectPathFullLoad</code> is set to <code>Y</code>. This attribute also
     * only applies when you use the DMS parallel load feature. Note that the target
     * table cannot have any constraints or indexes.</p>
     */
    inline bool GetDirectPathParallelLoad() const{ return m_directPathParallelLoad; }

    /**
     * <p>When set to <code>true</code>, this attribute specifies a parallel load when
     * <code>useDirectPathFullLoad</code> is set to <code>Y</code>. This attribute also
     * only applies when you use the DMS parallel load feature. Note that the target
     * table cannot have any constraints or indexes.</p>
     */
    inline bool DirectPathParallelLoadHasBeenSet() const { return m_directPathParallelLoadHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, this attribute specifies a parallel load when
     * <code>useDirectPathFullLoad</code> is set to <code>Y</code>. This attribute also
     * only applies when you use the DMS parallel load feature. Note that the target
     * table cannot have any constraints or indexes.</p>
     */
    inline void SetDirectPathParallelLoad(bool value) { m_directPathParallelLoadHasBeenSet = true; m_directPathParallelLoad = value; }

    /**
     * <p>When set to <code>true</code>, this attribute specifies a parallel load when
     * <code>useDirectPathFullLoad</code> is set to <code>Y</code>. This attribute also
     * only applies when you use the DMS parallel load feature. Note that the target
     * table cannot have any constraints or indexes.</p>
     */
    inline OracleSettings& WithDirectPathParallelLoad(bool value) { SetDirectPathParallelLoad(value); return *this;}


    /**
     * <p>When set to <code>true</code>, this attribute causes a task to fail if the
     * actual size of an LOB column is greater than the specified
     * <code>LobMaxSize</code>.</p> <p>If a task is set to limited LOB mode and this
     * option is set to <code>true</code>, the task fails instead of truncating the LOB
     * data.</p>
     */
    inline bool GetFailTasksOnLobTruncation() const{ return m_failTasksOnLobTruncation; }

    /**
     * <p>When set to <code>true</code>, this attribute causes a task to fail if the
     * actual size of an LOB column is greater than the specified
     * <code>LobMaxSize</code>.</p> <p>If a task is set to limited LOB mode and this
     * option is set to <code>true</code>, the task fails instead of truncating the LOB
     * data.</p>
     */
    inline bool FailTasksOnLobTruncationHasBeenSet() const { return m_failTasksOnLobTruncationHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, this attribute causes a task to fail if the
     * actual size of an LOB column is greater than the specified
     * <code>LobMaxSize</code>.</p> <p>If a task is set to limited LOB mode and this
     * option is set to <code>true</code>, the task fails instead of truncating the LOB
     * data.</p>
     */
    inline void SetFailTasksOnLobTruncation(bool value) { m_failTasksOnLobTruncationHasBeenSet = true; m_failTasksOnLobTruncation = value; }

    /**
     * <p>When set to <code>true</code>, this attribute causes a task to fail if the
     * actual size of an LOB column is greater than the specified
     * <code>LobMaxSize</code>.</p> <p>If a task is set to limited LOB mode and this
     * option is set to <code>true</code>, the task fails instead of truncating the LOB
     * data.</p>
     */
    inline OracleSettings& WithFailTasksOnLobTruncation(bool value) { SetFailTasksOnLobTruncation(value); return *this;}


    /**
     * <p>Specifies the number scale. You can select a scale up to 38, or you can
     * select FLOAT. By default, the NUMBER data type is converted to precision 38,
     * scale 10.</p> <p>Example: <code>numberDataTypeScale=12</code> </p>
     */
    inline int GetNumberDatatypeScale() const{ return m_numberDatatypeScale; }

    /**
     * <p>Specifies the number scale. You can select a scale up to 38, or you can
     * select FLOAT. By default, the NUMBER data type is converted to precision 38,
     * scale 10.</p> <p>Example: <code>numberDataTypeScale=12</code> </p>
     */
    inline bool NumberDatatypeScaleHasBeenSet() const { return m_numberDatatypeScaleHasBeenSet; }

    /**
     * <p>Specifies the number scale. You can select a scale up to 38, or you can
     * select FLOAT. By default, the NUMBER data type is converted to precision 38,
     * scale 10.</p> <p>Example: <code>numberDataTypeScale=12</code> </p>
     */
    inline void SetNumberDatatypeScale(int value) { m_numberDatatypeScaleHasBeenSet = true; m_numberDatatypeScale = value; }

    /**
     * <p>Specifies the number scale. You can select a scale up to 38, or you can
     * select FLOAT. By default, the NUMBER data type is converted to precision 38,
     * scale 10.</p> <p>Example: <code>numberDataTypeScale=12</code> </p>
     */
    inline OracleSettings& WithNumberDatatypeScale(int value) { SetNumberDatatypeScale(value); return *this;}


    /**
     * <p>Endpoint connection password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline OracleSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline OracleSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline OracleSettings& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Endpoint TCP port.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline OracleSettings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>When set to <code>true</code>, this attribute supports tablespace
     * replication.</p>
     */
    inline bool GetReadTableSpaceName() const{ return m_readTableSpaceName; }

    /**
     * <p>When set to <code>true</code>, this attribute supports tablespace
     * replication.</p>
     */
    inline bool ReadTableSpaceNameHasBeenSet() const { return m_readTableSpaceNameHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, this attribute supports tablespace
     * replication.</p>
     */
    inline void SetReadTableSpaceName(bool value) { m_readTableSpaceNameHasBeenSet = true; m_readTableSpaceName = value; }

    /**
     * <p>When set to <code>true</code>, this attribute supports tablespace
     * replication.</p>
     */
    inline OracleSettings& WithReadTableSpaceName(bool value) { SetReadTableSpaceName(value); return *this;}


    /**
     * <p>Specifies the number of seconds that the system waits before resending a
     * query.</p> <p>Example: <code>retryInterval=6;</code> </p>
     */
    inline int GetRetryInterval() const{ return m_retryInterval; }

    /**
     * <p>Specifies the number of seconds that the system waits before resending a
     * query.</p> <p>Example: <code>retryInterval=6;</code> </p>
     */
    inline bool RetryIntervalHasBeenSet() const { return m_retryIntervalHasBeenSet; }

    /**
     * <p>Specifies the number of seconds that the system waits before resending a
     * query.</p> <p>Example: <code>retryInterval=6;</code> </p>
     */
    inline void SetRetryInterval(int value) { m_retryIntervalHasBeenSet = true; m_retryInterval = value; }

    /**
     * <p>Specifies the number of seconds that the system waits before resending a
     * query.</p> <p>Example: <code>retryInterval=6;</code> </p>
     */
    inline OracleSettings& WithRetryInterval(int value) { SetRetryInterval(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>. </p>
     */
    inline const Aws::String& GetSecurityDbEncryption() const{ return m_securityDbEncryption; }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>. </p>
     */
    inline bool SecurityDbEncryptionHasBeenSet() const { return m_securityDbEncryptionHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>. </p>
     */
    inline void SetSecurityDbEncryption(const Aws::String& value) { m_securityDbEncryptionHasBeenSet = true; m_securityDbEncryption = value; }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>. </p>
     */
    inline void SetSecurityDbEncryption(Aws::String&& value) { m_securityDbEncryptionHasBeenSet = true; m_securityDbEncryption = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>. </p>
     */
    inline void SetSecurityDbEncryption(const char* value) { m_securityDbEncryptionHasBeenSet = true; m_securityDbEncryption.assign(value); }

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>. </p>
     */
    inline OracleSettings& WithSecurityDbEncryption(const Aws::String& value) { SetSecurityDbEncryption(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>. </p>
     */
    inline OracleSettings& WithSecurityDbEncryption(Aws::String&& value) { SetSecurityDbEncryption(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, the transparent data encryption (TDE) password
     * required by AWM DMS to access Oracle redo logs encrypted by TDE using Binary
     * Reader. It is also the <code> <i>TDE_Password</i> </code> part of the
     * comma-separated value you set to the <code>Password</code> request parameter
     * when you create the endpoint. The <code>SecurityDbEncryptian</code> setting is
     * related to this <code>SecurityDbEncryptionName</code> setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>. </p>
     */
    inline OracleSettings& WithSecurityDbEncryption(const char* value) { SetSecurityDbEncryption(value); return *this;}


    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>.</p>
     */
    inline const Aws::String& GetSecurityDbEncryptionName() const{ return m_securityDbEncryptionName; }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>.</p>
     */
    inline bool SecurityDbEncryptionNameHasBeenSet() const { return m_securityDbEncryptionNameHasBeenSet; }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>.</p>
     */
    inline void SetSecurityDbEncryptionName(const Aws::String& value) { m_securityDbEncryptionNameHasBeenSet = true; m_securityDbEncryptionName = value; }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>.</p>
     */
    inline void SetSecurityDbEncryptionName(Aws::String&& value) { m_securityDbEncryptionNameHasBeenSet = true; m_securityDbEncryptionName = std::move(value); }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>.</p>
     */
    inline void SetSecurityDbEncryptionName(const char* value) { m_securityDbEncryptionNameHasBeenSet = true; m_securityDbEncryptionName.assign(value); }

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>.</p>
     */
    inline OracleSettings& WithSecurityDbEncryptionName(const Aws::String& value) { SetSecurityDbEncryptionName(value); return *this;}

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>.</p>
     */
    inline OracleSettings& WithSecurityDbEncryptionName(Aws::String&& value) { SetSecurityDbEncryptionName(std::move(value)); return *this;}

    /**
     * <p>For an Oracle source endpoint, the name of a key used for the transparent
     * data encryption (TDE) of the columns and tablespaces in an Oracle source
     * database that is encrypted using TDE. The key value is the value of the
     * <code>SecurityDbEncryption</code> setting. For more information on setting the
     * key name value of <code>SecurityDbEncryptionName</code>, see the information and
     * example for setting the <code>securityDbEncryptionName</code> extra connection
     * attribute in <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.Encryption">
     * Supported encryption methods for using Oracle as a source for DMS </a> in the
     * <i>Database Migration Service User Guide</i>.</p>
     */
    inline OracleSettings& WithSecurityDbEncryptionName(const char* value) { SetSecurityDbEncryptionName(value); return *this;}


    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline OracleSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline OracleSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline OracleSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>Use this attribute to convert <code>SDO_GEOMETRY</code> to
     * <code>GEOJSON</code> format. By default, DMS calls the <code>SDO2GEOJSON</code>
     * custom function if present and accessible. Or you can create your own custom
     * function that mimics the operation of <code>SDOGEOJSON</code> and set
     * <code>SpatialDataOptionToGeoJsonFunctionName</code> to call it instead. </p>
     */
    inline const Aws::String& GetSpatialDataOptionToGeoJsonFunctionName() const{ return m_spatialDataOptionToGeoJsonFunctionName; }

    /**
     * <p>Use this attribute to convert <code>SDO_GEOMETRY</code> to
     * <code>GEOJSON</code> format. By default, DMS calls the <code>SDO2GEOJSON</code>
     * custom function if present and accessible. Or you can create your own custom
     * function that mimics the operation of <code>SDOGEOJSON</code> and set
     * <code>SpatialDataOptionToGeoJsonFunctionName</code> to call it instead. </p>
     */
    inline bool SpatialDataOptionToGeoJsonFunctionNameHasBeenSet() const { return m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet; }

    /**
     * <p>Use this attribute to convert <code>SDO_GEOMETRY</code> to
     * <code>GEOJSON</code> format. By default, DMS calls the <code>SDO2GEOJSON</code>
     * custom function if present and accessible. Or you can create your own custom
     * function that mimics the operation of <code>SDOGEOJSON</code> and set
     * <code>SpatialDataOptionToGeoJsonFunctionName</code> to call it instead. </p>
     */
    inline void SetSpatialDataOptionToGeoJsonFunctionName(const Aws::String& value) { m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet = true; m_spatialDataOptionToGeoJsonFunctionName = value; }

    /**
     * <p>Use this attribute to convert <code>SDO_GEOMETRY</code> to
     * <code>GEOJSON</code> format. By default, DMS calls the <code>SDO2GEOJSON</code>
     * custom function if present and accessible. Or you can create your own custom
     * function that mimics the operation of <code>SDOGEOJSON</code> and set
     * <code>SpatialDataOptionToGeoJsonFunctionName</code> to call it instead. </p>
     */
    inline void SetSpatialDataOptionToGeoJsonFunctionName(Aws::String&& value) { m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet = true; m_spatialDataOptionToGeoJsonFunctionName = std::move(value); }

    /**
     * <p>Use this attribute to convert <code>SDO_GEOMETRY</code> to
     * <code>GEOJSON</code> format. By default, DMS calls the <code>SDO2GEOJSON</code>
     * custom function if present and accessible. Or you can create your own custom
     * function that mimics the operation of <code>SDOGEOJSON</code> and set
     * <code>SpatialDataOptionToGeoJsonFunctionName</code> to call it instead. </p>
     */
    inline void SetSpatialDataOptionToGeoJsonFunctionName(const char* value) { m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet = true; m_spatialDataOptionToGeoJsonFunctionName.assign(value); }

    /**
     * <p>Use this attribute to convert <code>SDO_GEOMETRY</code> to
     * <code>GEOJSON</code> format. By default, DMS calls the <code>SDO2GEOJSON</code>
     * custom function if present and accessible. Or you can create your own custom
     * function that mimics the operation of <code>SDOGEOJSON</code> and set
     * <code>SpatialDataOptionToGeoJsonFunctionName</code> to call it instead. </p>
     */
    inline OracleSettings& WithSpatialDataOptionToGeoJsonFunctionName(const Aws::String& value) { SetSpatialDataOptionToGeoJsonFunctionName(value); return *this;}

    /**
     * <p>Use this attribute to convert <code>SDO_GEOMETRY</code> to
     * <code>GEOJSON</code> format. By default, DMS calls the <code>SDO2GEOJSON</code>
     * custom function if present and accessible. Or you can create your own custom
     * function that mimics the operation of <code>SDOGEOJSON</code> and set
     * <code>SpatialDataOptionToGeoJsonFunctionName</code> to call it instead. </p>
     */
    inline OracleSettings& WithSpatialDataOptionToGeoJsonFunctionName(Aws::String&& value) { SetSpatialDataOptionToGeoJsonFunctionName(std::move(value)); return *this;}

    /**
     * <p>Use this attribute to convert <code>SDO_GEOMETRY</code> to
     * <code>GEOJSON</code> format. By default, DMS calls the <code>SDO2GEOJSON</code>
     * custom function if present and accessible. Or you can create your own custom
     * function that mimics the operation of <code>SDOGEOJSON</code> and set
     * <code>SpatialDataOptionToGeoJsonFunctionName</code> to call it instead. </p>
     */
    inline OracleSettings& WithSpatialDataOptionToGeoJsonFunctionName(const char* value) { SetSpatialDataOptionToGeoJsonFunctionName(value); return *this;}


    /**
     * <p>Use this attribute to specify a time in minutes for the delay in standby
     * sync. If the source is an Oracle Active Data Guard standby database, use this
     * attribute to specify the time lag between primary and standby databases.</p>
     * <p>In DMS, you can create an Oracle CDC task that uses an Active Data Guard
     * standby instance as a source for replicating ongoing changes. Doing this
     * eliminates the need to connect to an active database that might be in
     * production.</p>
     */
    inline int GetStandbyDelayTime() const{ return m_standbyDelayTime; }

    /**
     * <p>Use this attribute to specify a time in minutes for the delay in standby
     * sync. If the source is an Oracle Active Data Guard standby database, use this
     * attribute to specify the time lag between primary and standby databases.</p>
     * <p>In DMS, you can create an Oracle CDC task that uses an Active Data Guard
     * standby instance as a source for replicating ongoing changes. Doing this
     * eliminates the need to connect to an active database that might be in
     * production.</p>
     */
    inline bool StandbyDelayTimeHasBeenSet() const { return m_standbyDelayTimeHasBeenSet; }

    /**
     * <p>Use this attribute to specify a time in minutes for the delay in standby
     * sync. If the source is an Oracle Active Data Guard standby database, use this
     * attribute to specify the time lag between primary and standby databases.</p>
     * <p>In DMS, you can create an Oracle CDC task that uses an Active Data Guard
     * standby instance as a source for replicating ongoing changes. Doing this
     * eliminates the need to connect to an active database that might be in
     * production.</p>
     */
    inline void SetStandbyDelayTime(int value) { m_standbyDelayTimeHasBeenSet = true; m_standbyDelayTime = value; }

    /**
     * <p>Use this attribute to specify a time in minutes for the delay in standby
     * sync. If the source is an Oracle Active Data Guard standby database, use this
     * attribute to specify the time lag between primary and standby databases.</p>
     * <p>In DMS, you can create an Oracle CDC task that uses an Active Data Guard
     * standby instance as a source for replicating ongoing changes. Doing this
     * eliminates the need to connect to an active database that might be in
     * production.</p>
     */
    inline OracleSettings& WithStandbyDelayTime(int value) { SetStandbyDelayTime(value); return *this;}


    /**
     * <p>Endpoint connection user name.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline OracleSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline OracleSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline OracleSettings& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>Set this attribute to Y to capture change data using the Binary Reader
     * utility. Set <code>UseLogminerReader</code> to N to set this attribute to Y. To
     * use Binary Reader with Amazon RDS for Oracle as the source, you set additional
     * attributes. For more information about using this setting with Oracle Automatic
     * Storage Management (ASM), see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC">
     * Using Oracle LogMiner or DMS Binary Reader for CDC</a>.</p>
     */
    inline bool GetUseBFile() const{ return m_useBFile; }

    /**
     * <p>Set this attribute to Y to capture change data using the Binary Reader
     * utility. Set <code>UseLogminerReader</code> to N to set this attribute to Y. To
     * use Binary Reader with Amazon RDS for Oracle as the source, you set additional
     * attributes. For more information about using this setting with Oracle Automatic
     * Storage Management (ASM), see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC">
     * Using Oracle LogMiner or DMS Binary Reader for CDC</a>.</p>
     */
    inline bool UseBFileHasBeenSet() const { return m_useBFileHasBeenSet; }

    /**
     * <p>Set this attribute to Y to capture change data using the Binary Reader
     * utility. Set <code>UseLogminerReader</code> to N to set this attribute to Y. To
     * use Binary Reader with Amazon RDS for Oracle as the source, you set additional
     * attributes. For more information about using this setting with Oracle Automatic
     * Storage Management (ASM), see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC">
     * Using Oracle LogMiner or DMS Binary Reader for CDC</a>.</p>
     */
    inline void SetUseBFile(bool value) { m_useBFileHasBeenSet = true; m_useBFile = value; }

    /**
     * <p>Set this attribute to Y to capture change data using the Binary Reader
     * utility. Set <code>UseLogminerReader</code> to N to set this attribute to Y. To
     * use Binary Reader with Amazon RDS for Oracle as the source, you set additional
     * attributes. For more information about using this setting with Oracle Automatic
     * Storage Management (ASM), see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC">
     * Using Oracle LogMiner or DMS Binary Reader for CDC</a>.</p>
     */
    inline OracleSettings& WithUseBFile(bool value) { SetUseBFile(value); return *this;}


    /**
     * <p>Set this attribute to Y to have DMS use a direct path full load. Specify this
     * value to use the direct path protocol in the Oracle Call Interface (OCI). By
     * using this OCI protocol, you can bulk-load Oracle target tables during a full
     * load.</p>
     */
    inline bool GetUseDirectPathFullLoad() const{ return m_useDirectPathFullLoad; }

    /**
     * <p>Set this attribute to Y to have DMS use a direct path full load. Specify this
     * value to use the direct path protocol in the Oracle Call Interface (OCI). By
     * using this OCI protocol, you can bulk-load Oracle target tables during a full
     * load.</p>
     */
    inline bool UseDirectPathFullLoadHasBeenSet() const { return m_useDirectPathFullLoadHasBeenSet; }

    /**
     * <p>Set this attribute to Y to have DMS use a direct path full load. Specify this
     * value to use the direct path protocol in the Oracle Call Interface (OCI). By
     * using this OCI protocol, you can bulk-load Oracle target tables during a full
     * load.</p>
     */
    inline void SetUseDirectPathFullLoad(bool value) { m_useDirectPathFullLoadHasBeenSet = true; m_useDirectPathFullLoad = value; }

    /**
     * <p>Set this attribute to Y to have DMS use a direct path full load. Specify this
     * value to use the direct path protocol in the Oracle Call Interface (OCI). By
     * using this OCI protocol, you can bulk-load Oracle target tables during a full
     * load.</p>
     */
    inline OracleSettings& WithUseDirectPathFullLoad(bool value) { SetUseDirectPathFullLoad(value); return *this;}


    /**
     * <p>Set this attribute to Y to capture change data using the Oracle LogMiner
     * utility (the default). Set this attribute to N if you want to access the redo
     * logs as a binary file. When you set <code>UseLogminerReader</code> to N, also
     * set <code>UseBfile</code> to Y. For more information on this setting and using
     * Oracle ASM, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC">
     * Using Oracle LogMiner or DMS Binary Reader for CDC</a> in the <i>DMS User
     * Guide</i>.</p>
     */
    inline bool GetUseLogminerReader() const{ return m_useLogminerReader; }

    /**
     * <p>Set this attribute to Y to capture change data using the Oracle LogMiner
     * utility (the default). Set this attribute to N if you want to access the redo
     * logs as a binary file. When you set <code>UseLogminerReader</code> to N, also
     * set <code>UseBfile</code> to Y. For more information on this setting and using
     * Oracle ASM, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC">
     * Using Oracle LogMiner or DMS Binary Reader for CDC</a> in the <i>DMS User
     * Guide</i>.</p>
     */
    inline bool UseLogminerReaderHasBeenSet() const { return m_useLogminerReaderHasBeenSet; }

    /**
     * <p>Set this attribute to Y to capture change data using the Oracle LogMiner
     * utility (the default). Set this attribute to N if you want to access the redo
     * logs as a binary file. When you set <code>UseLogminerReader</code> to N, also
     * set <code>UseBfile</code> to Y. For more information on this setting and using
     * Oracle ASM, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC">
     * Using Oracle LogMiner or DMS Binary Reader for CDC</a> in the <i>DMS User
     * Guide</i>.</p>
     */
    inline void SetUseLogminerReader(bool value) { m_useLogminerReaderHasBeenSet = true; m_useLogminerReader = value; }

    /**
     * <p>Set this attribute to Y to capture change data using the Oracle LogMiner
     * utility (the default). Set this attribute to N if you want to access the redo
     * logs as a binary file. When you set <code>UseLogminerReader</code> to N, also
     * set <code>UseBfile</code> to Y. For more information on this setting and using
     * Oracle ASM, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC">
     * Using Oracle LogMiner or DMS Binary Reader for CDC</a> in the <i>DMS User
     * Guide</i>.</p>
     */
    inline OracleSettings& WithUseLogminerReader(bool value) { SetUseLogminerReader(value); return *this;}


    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Oracle endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline const Aws::String& GetSecretsManagerAccessRoleArn() const{ return m_secretsManagerAccessRoleArn; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Oracle endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Oracle endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerAccessRoleArn(const Aws::String& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Oracle endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerAccessRoleArn(Aws::String&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Oracle endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerAccessRoleArn(const char* value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Oracle endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline OracleSettings& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Oracle endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline OracleSettings& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Oracle endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline OracleSettings& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}


    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Oracle endpoint connection
     * details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Oracle endpoint connection
     * details.</p>
     */
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Oracle endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Oracle endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Oracle endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Oracle endpoint connection
     * details.</p>
     */
    inline OracleSettings& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Oracle endpoint connection
     * details.</p>
     */
    inline OracleSettings& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Oracle endpoint connection
     * details.</p>
     */
    inline OracleSettings& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}


    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN of the IAM role that specifies DMS as the trusted entity and
     * grants the required permissions to access the
     * <code>SecretsManagerOracleAsmSecret</code>. This
     * <code>SecretsManagerOracleAsmSecret</code> has the secret value that allows
     * access to the Oracle ASM of the endpoint.</p>  <p>You can specify one of
     * two sets of values for these permissions. You can specify the values for this
     * setting and <code>SecretsManagerOracleAsmSecretId</code>. Or you can specify
     * clear-text values for <code>AsmUserName</code>, <code>AsmPassword</code>, and
     * <code>AsmServerName</code>. You can't specify both. For more information on
     * creating this <code>SecretsManagerOracleAsmSecret</code> and the
     * <code>SecretsManagerOracleAsmAccessRoleArn</code> and
     * <code>SecretsManagerOracleAsmSecretId</code> required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline const Aws::String& GetSecretsManagerOracleAsmAccessRoleArn() const{ return m_secretsManagerOracleAsmAccessRoleArn; }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN of the IAM role that specifies DMS as the trusted entity and
     * grants the required permissions to access the
     * <code>SecretsManagerOracleAsmSecret</code>. This
     * <code>SecretsManagerOracleAsmSecret</code> has the secret value that allows
     * access to the Oracle ASM of the endpoint.</p>  <p>You can specify one of
     * two sets of values for these permissions. You can specify the values for this
     * setting and <code>SecretsManagerOracleAsmSecretId</code>. Or you can specify
     * clear-text values for <code>AsmUserName</code>, <code>AsmPassword</code>, and
     * <code>AsmServerName</code>. You can't specify both. For more information on
     * creating this <code>SecretsManagerOracleAsmSecret</code> and the
     * <code>SecretsManagerOracleAsmAccessRoleArn</code> and
     * <code>SecretsManagerOracleAsmSecretId</code> required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline bool SecretsManagerOracleAsmAccessRoleArnHasBeenSet() const { return m_secretsManagerOracleAsmAccessRoleArnHasBeenSet; }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN of the IAM role that specifies DMS as the trusted entity and
     * grants the required permissions to access the
     * <code>SecretsManagerOracleAsmSecret</code>. This
     * <code>SecretsManagerOracleAsmSecret</code> has the secret value that allows
     * access to the Oracle ASM of the endpoint.</p>  <p>You can specify one of
     * two sets of values for these permissions. You can specify the values for this
     * setting and <code>SecretsManagerOracleAsmSecretId</code>. Or you can specify
     * clear-text values for <code>AsmUserName</code>, <code>AsmPassword</code>, and
     * <code>AsmServerName</code>. You can't specify both. For more information on
     * creating this <code>SecretsManagerOracleAsmSecret</code> and the
     * <code>SecretsManagerOracleAsmAccessRoleArn</code> and
     * <code>SecretsManagerOracleAsmSecretId</code> required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerOracleAsmAccessRoleArn(const Aws::String& value) { m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true; m_secretsManagerOracleAsmAccessRoleArn = value; }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN of the IAM role that specifies DMS as the trusted entity and
     * grants the required permissions to access the
     * <code>SecretsManagerOracleAsmSecret</code>. This
     * <code>SecretsManagerOracleAsmSecret</code> has the secret value that allows
     * access to the Oracle ASM of the endpoint.</p>  <p>You can specify one of
     * two sets of values for these permissions. You can specify the values for this
     * setting and <code>SecretsManagerOracleAsmSecretId</code>. Or you can specify
     * clear-text values for <code>AsmUserName</code>, <code>AsmPassword</code>, and
     * <code>AsmServerName</code>. You can't specify both. For more information on
     * creating this <code>SecretsManagerOracleAsmSecret</code> and the
     * <code>SecretsManagerOracleAsmAccessRoleArn</code> and
     * <code>SecretsManagerOracleAsmSecretId</code> required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerOracleAsmAccessRoleArn(Aws::String&& value) { m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true; m_secretsManagerOracleAsmAccessRoleArn = std::move(value); }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN of the IAM role that specifies DMS as the trusted entity and
     * grants the required permissions to access the
     * <code>SecretsManagerOracleAsmSecret</code>. This
     * <code>SecretsManagerOracleAsmSecret</code> has the secret value that allows
     * access to the Oracle ASM of the endpoint.</p>  <p>You can specify one of
     * two sets of values for these permissions. You can specify the values for this
     * setting and <code>SecretsManagerOracleAsmSecretId</code>. Or you can specify
     * clear-text values for <code>AsmUserName</code>, <code>AsmPassword</code>, and
     * <code>AsmServerName</code>. You can't specify both. For more information on
     * creating this <code>SecretsManagerOracleAsmSecret</code> and the
     * <code>SecretsManagerOracleAsmAccessRoleArn</code> and
     * <code>SecretsManagerOracleAsmSecretId</code> required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline void SetSecretsManagerOracleAsmAccessRoleArn(const char* value) { m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true; m_secretsManagerOracleAsmAccessRoleArn.assign(value); }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN of the IAM role that specifies DMS as the trusted entity and
     * grants the required permissions to access the
     * <code>SecretsManagerOracleAsmSecret</code>. This
     * <code>SecretsManagerOracleAsmSecret</code> has the secret value that allows
     * access to the Oracle ASM of the endpoint.</p>  <p>You can specify one of
     * two sets of values for these permissions. You can specify the values for this
     * setting and <code>SecretsManagerOracleAsmSecretId</code>. Or you can specify
     * clear-text values for <code>AsmUserName</code>, <code>AsmPassword</code>, and
     * <code>AsmServerName</code>. You can't specify both. For more information on
     * creating this <code>SecretsManagerOracleAsmSecret</code> and the
     * <code>SecretsManagerOracleAsmAccessRoleArn</code> and
     * <code>SecretsManagerOracleAsmSecretId</code> required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline OracleSettings& WithSecretsManagerOracleAsmAccessRoleArn(const Aws::String& value) { SetSecretsManagerOracleAsmAccessRoleArn(value); return *this;}

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN of the IAM role that specifies DMS as the trusted entity and
     * grants the required permissions to access the
     * <code>SecretsManagerOracleAsmSecret</code>. This
     * <code>SecretsManagerOracleAsmSecret</code> has the secret value that allows
     * access to the Oracle ASM of the endpoint.</p>  <p>You can specify one of
     * two sets of values for these permissions. You can specify the values for this
     * setting and <code>SecretsManagerOracleAsmSecretId</code>. Or you can specify
     * clear-text values for <code>AsmUserName</code>, <code>AsmPassword</code>, and
     * <code>AsmServerName</code>. You can't specify both. For more information on
     * creating this <code>SecretsManagerOracleAsmSecret</code> and the
     * <code>SecretsManagerOracleAsmAccessRoleArn</code> and
     * <code>SecretsManagerOracleAsmSecretId</code> required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline OracleSettings& WithSecretsManagerOracleAsmAccessRoleArn(Aws::String&& value) { SetSecretsManagerOracleAsmAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN of the IAM role that specifies DMS as the trusted entity and
     * grants the required permissions to access the
     * <code>SecretsManagerOracleAsmSecret</code>. This
     * <code>SecretsManagerOracleAsmSecret</code> has the secret value that allows
     * access to the Oracle ASM of the endpoint.</p>  <p>You can specify one of
     * two sets of values for these permissions. You can specify the values for this
     * setting and <code>SecretsManagerOracleAsmSecretId</code>. Or you can specify
     * clear-text values for <code>AsmUserName</code>, <code>AsmPassword</code>, and
     * <code>AsmServerName</code>. You can't specify both. For more information on
     * creating this <code>SecretsManagerOracleAsmSecret</code> and the
     * <code>SecretsManagerOracleAsmAccessRoleArn</code> and
     * <code>SecretsManagerOracleAsmSecretId</code> required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline OracleSettings& WithSecretsManagerOracleAsmAccessRoleArn(const char* value) { SetSecretsManagerOracleAsmAccessRoleArn(value); return *this;}


    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerOracleAsmSecret</code> that contains the Oracle ASM
     * connection details for the Oracle endpoint.</p>
     */
    inline const Aws::String& GetSecretsManagerOracleAsmSecretId() const{ return m_secretsManagerOracleAsmSecretId; }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerOracleAsmSecret</code> that contains the Oracle ASM
     * connection details for the Oracle endpoint.</p>
     */
    inline bool SecretsManagerOracleAsmSecretIdHasBeenSet() const { return m_secretsManagerOracleAsmSecretIdHasBeenSet; }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerOracleAsmSecret</code> that contains the Oracle ASM
     * connection details for the Oracle endpoint.</p>
     */
    inline void SetSecretsManagerOracleAsmSecretId(const Aws::String& value) { m_secretsManagerOracleAsmSecretIdHasBeenSet = true; m_secretsManagerOracleAsmSecretId = value; }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerOracleAsmSecret</code> that contains the Oracle ASM
     * connection details for the Oracle endpoint.</p>
     */
    inline void SetSecretsManagerOracleAsmSecretId(Aws::String&& value) { m_secretsManagerOracleAsmSecretIdHasBeenSet = true; m_secretsManagerOracleAsmSecretId = std::move(value); }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerOracleAsmSecret</code> that contains the Oracle ASM
     * connection details for the Oracle endpoint.</p>
     */
    inline void SetSecretsManagerOracleAsmSecretId(const char* value) { m_secretsManagerOracleAsmSecretIdHasBeenSet = true; m_secretsManagerOracleAsmSecretId.assign(value); }

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerOracleAsmSecret</code> that contains the Oracle ASM
     * connection details for the Oracle endpoint.</p>
     */
    inline OracleSettings& WithSecretsManagerOracleAsmSecretId(const Aws::String& value) { SetSecretsManagerOracleAsmSecretId(value); return *this;}

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerOracleAsmSecret</code> that contains the Oracle ASM
     * connection details for the Oracle endpoint.</p>
     */
    inline OracleSettings& WithSecretsManagerOracleAsmSecretId(Aws::String&& value) { SetSecretsManagerOracleAsmSecretId(std::move(value)); return *this;}

    /**
     * <p>Required only if your Oracle endpoint uses Automatic Storage Management
     * (ASM). The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerOracleAsmSecret</code> that contains the Oracle ASM
     * connection details for the Oracle endpoint.</p>
     */
    inline OracleSettings& WithSecretsManagerOracleAsmSecretId(const char* value) { SetSecretsManagerOracleAsmSecretId(value); return *this;}


    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline bool GetTrimSpaceInChar() const{ return m_trimSpaceInChar; }

    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline bool TrimSpaceInCharHasBeenSet() const { return m_trimSpaceInCharHasBeenSet; }

    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline void SetTrimSpaceInChar(bool value) { m_trimSpaceInCharHasBeenSet = true; m_trimSpaceInChar = value; }

    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline OracleSettings& WithTrimSpaceInChar(bool value) { SetTrimSpaceInChar(value); return *this;}

  private:

    bool m_addSupplementalLogging;
    bool m_addSupplementalLoggingHasBeenSet = false;

    int m_archivedLogDestId;
    bool m_archivedLogDestIdHasBeenSet = false;

    int m_additionalArchivedLogDestId;
    bool m_additionalArchivedLogDestIdHasBeenSet = false;

    Aws::Vector<int> m_extraArchivedLogDestIds;
    bool m_extraArchivedLogDestIdsHasBeenSet = false;

    bool m_allowSelectNestedTables;
    bool m_allowSelectNestedTablesHasBeenSet = false;

    int m_parallelAsmReadThreads;
    bool m_parallelAsmReadThreadsHasBeenSet = false;

    int m_readAheadBlocks;
    bool m_readAheadBlocksHasBeenSet = false;

    bool m_accessAlternateDirectly;
    bool m_accessAlternateDirectlyHasBeenSet = false;

    bool m_useAlternateFolderForOnline;
    bool m_useAlternateFolderForOnlineHasBeenSet = false;

    Aws::String m_oraclePathPrefix;
    bool m_oraclePathPrefixHasBeenSet = false;

    Aws::String m_usePathPrefix;
    bool m_usePathPrefixHasBeenSet = false;

    bool m_replacePathPrefix;
    bool m_replacePathPrefixHasBeenSet = false;

    bool m_enableHomogenousTablespace;
    bool m_enableHomogenousTablespaceHasBeenSet = false;

    bool m_directPathNoLog;
    bool m_directPathNoLogHasBeenSet = false;

    bool m_archivedLogsOnly;
    bool m_archivedLogsOnlyHasBeenSet = false;

    Aws::String m_asmPassword;
    bool m_asmPasswordHasBeenSet = false;

    Aws::String m_asmServer;
    bool m_asmServerHasBeenSet = false;

    Aws::String m_asmUser;
    bool m_asmUserHasBeenSet = false;

    CharLengthSemantics m_charLengthSemantics;
    bool m_charLengthSemanticsHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    bool m_directPathParallelLoad;
    bool m_directPathParallelLoadHasBeenSet = false;

    bool m_failTasksOnLobTruncation;
    bool m_failTasksOnLobTruncationHasBeenSet = false;

    int m_numberDatatypeScale;
    bool m_numberDatatypeScaleHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    bool m_readTableSpaceName;
    bool m_readTableSpaceNameHasBeenSet = false;

    int m_retryInterval;
    bool m_retryIntervalHasBeenSet = false;

    Aws::String m_securityDbEncryption;
    bool m_securityDbEncryptionHasBeenSet = false;

    Aws::String m_securityDbEncryptionName;
    bool m_securityDbEncryptionNameHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_spatialDataOptionToGeoJsonFunctionName;
    bool m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet = false;

    int m_standbyDelayTime;
    bool m_standbyDelayTimeHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    bool m_useBFile;
    bool m_useBFileHasBeenSet = false;

    bool m_useDirectPathFullLoad;
    bool m_useDirectPathFullLoadHasBeenSet = false;

    bool m_useLogminerReader;
    bool m_useLogminerReaderHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    Aws::String m_secretsManagerOracleAsmAccessRoleArn;
    bool m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerOracleAsmSecretId;
    bool m_secretsManagerOracleAsmSecretIdHasBeenSet = false;

    bool m_trimSpaceInChar;
    bool m_trimSpaceInCharHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
