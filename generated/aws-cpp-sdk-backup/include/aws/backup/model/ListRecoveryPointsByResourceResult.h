﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/RecoveryPointByResource.h>
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
namespace Backup
{
namespace Model
{
  class AWS_BACKUP_API ListRecoveryPointsByResourceResult
  {
  public:
    ListRecoveryPointsByResourceResult();
    ListRecoveryPointsByResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRecoveryPointsByResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRecoveryPointsByResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRecoveryPointsByResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRecoveryPointsByResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of objects that contain detailed information about recovery points
     * of the specified resource type.</p>  <p>Only Amazon EFS and Amazon EC2
     * recovery points return BackupVaultName.</p> 
     */
    inline const Aws::Vector<RecoveryPointByResource>& GetRecoveryPoints() const{ return m_recoveryPoints; }

    /**
     * <p>An array of objects that contain detailed information about recovery points
     * of the specified resource type.</p>  <p>Only Amazon EFS and Amazon EC2
     * recovery points return BackupVaultName.</p> 
     */
    inline void SetRecoveryPoints(const Aws::Vector<RecoveryPointByResource>& value) { m_recoveryPoints = value; }

    /**
     * <p>An array of objects that contain detailed information about recovery points
     * of the specified resource type.</p>  <p>Only Amazon EFS and Amazon EC2
     * recovery points return BackupVaultName.</p> 
     */
    inline void SetRecoveryPoints(Aws::Vector<RecoveryPointByResource>&& value) { m_recoveryPoints = std::move(value); }

    /**
     * <p>An array of objects that contain detailed information about recovery points
     * of the specified resource type.</p>  <p>Only Amazon EFS and Amazon EC2
     * recovery points return BackupVaultName.</p> 
     */
    inline ListRecoveryPointsByResourceResult& WithRecoveryPoints(const Aws::Vector<RecoveryPointByResource>& value) { SetRecoveryPoints(value); return *this;}

    /**
     * <p>An array of objects that contain detailed information about recovery points
     * of the specified resource type.</p>  <p>Only Amazon EFS and Amazon EC2
     * recovery points return BackupVaultName.</p> 
     */
    inline ListRecoveryPointsByResourceResult& WithRecoveryPoints(Aws::Vector<RecoveryPointByResource>&& value) { SetRecoveryPoints(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contain detailed information about recovery points
     * of the specified resource type.</p>  <p>Only Amazon EFS and Amazon EC2
     * recovery points return BackupVaultName.</p> 
     */
    inline ListRecoveryPointsByResourceResult& AddRecoveryPoints(const RecoveryPointByResource& value) { m_recoveryPoints.push_back(value); return *this; }

    /**
     * <p>An array of objects that contain detailed information about recovery points
     * of the specified resource type.</p>  <p>Only Amazon EFS and Amazon EC2
     * recovery points return BackupVaultName.</p> 
     */
    inline ListRecoveryPointsByResourceResult& AddRecoveryPoints(RecoveryPointByResource&& value) { m_recoveryPoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecoveryPointByResource> m_recoveryPoints;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
