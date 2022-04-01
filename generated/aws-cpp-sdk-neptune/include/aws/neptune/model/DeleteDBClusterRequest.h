﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API DeleteDBClusterRequest : public NeptuneRequest
  {
  public:
    DeleteDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p> Determines whether a final DB cluster snapshot is created before the DB
     * cluster is deleted. If <code>true</code> is specified, no DB cluster snapshot is
     * created. If <code>false</code> is specified, a DB cluster snapshot is created
     * before the DB cluster is deleted.</p>  <p>You must specify a
     * <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p>  <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }

    /**
     * <p> Determines whether a final DB cluster snapshot is created before the DB
     * cluster is deleted. If <code>true</code> is specified, no DB cluster snapshot is
     * created. If <code>false</code> is specified, a DB cluster snapshot is created
     * before the DB cluster is deleted.</p>  <p>You must specify a
     * <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p>  <p>Default:
     * <code>false</code> </p>
     */
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }

    /**
     * <p> Determines whether a final DB cluster snapshot is created before the DB
     * cluster is deleted. If <code>true</code> is specified, no DB cluster snapshot is
     * created. If <code>false</code> is specified, a DB cluster snapshot is created
     * before the DB cluster is deleted.</p>  <p>You must specify a
     * <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p>  <p>Default:
     * <code>false</code> </p>
     */
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }

    /**
     * <p> Determines whether a final DB cluster snapshot is created before the DB
     * cluster is deleted. If <code>true</code> is specified, no DB cluster snapshot is
     * created. If <code>false</code> is specified, a DB cluster snapshot is created
     * before the DB cluster is deleted.</p>  <p>You must specify a
     * <code>FinalDBSnapshotIdentifier</code> parameter if
     * <code>SkipFinalSnapshot</code> is <code>false</code>.</p>  <p>Default:
     * <code>false</code> </p>
     */
    inline DeleteDBClusterRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}


    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const{ return m_finalDBSnapshotIdentifier; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline bool FinalDBSnapshotIdentifierHasBeenSet() const { return m_finalDBSnapshotIdentifierHasBeenSet; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const Aws::String& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(Aws::String&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = std::move(value); }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline void SetFinalDBSnapshotIdentifier(const char* value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier.assign(value); }

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(const Aws::String& value) { SetFinalDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(Aws::String&& value) { SetFinalDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p> The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is set to <code>false</code>.</p>  <p>
     * Specifying this parameter and also setting the <code>SkipFinalShapshot</code>
     * parameter to true results in an error.</p>  <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(const char* value) { SetFinalDBSnapshotIdentifier(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    bool m_skipFinalSnapshot;
    bool m_skipFinalSnapshotHasBeenSet;

    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
