/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/qldb-session/QLDBSessionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb-session/model/StartSessionRequest.h>
#include <aws/qldb-session/model/StartTransactionRequest.h>
#include <aws/qldb-session/model/EndSessionRequest.h>
#include <aws/qldb-session/model/CommitTransactionRequest.h>
#include <aws/qldb-session/model/AbortTransactionRequest.h>
#include <aws/qldb-session/model/ExecuteStatementRequest.h>
#include <aws/qldb-session/model/FetchPageRequest.h>
#include <utility>

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

  /**
   */
  class SendCommandRequest : public QLDBSessionRequest
  {
  public:
    AWS_QLDBSESSION_API SendCommandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendCommand"; }

    AWS_QLDBSESSION_API Aws::String SerializePayload() const override;

    AWS_QLDBSESSION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline SendCommandRequest& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline SendCommandRequest& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>Specifies the session token for the current command. A session token is
     * constant throughout the life of the session.</p> <p>To obtain a session token,
     * run the <code>StartSession</code> command. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline SendCommandRequest& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}


    /**
     * <p>Command to start a new session. A session token is obtained as part of the
     * response.</p>
     */
    inline const StartSessionRequest& GetStartSession() const{ return m_startSession; }

    /**
     * <p>Command to start a new session. A session token is obtained as part of the
     * response.</p>
     */
    inline bool StartSessionHasBeenSet() const { return m_startSessionHasBeenSet; }

    /**
     * <p>Command to start a new session. A session token is obtained as part of the
     * response.</p>
     */
    inline void SetStartSession(const StartSessionRequest& value) { m_startSessionHasBeenSet = true; m_startSession = value; }

    /**
     * <p>Command to start a new session. A session token is obtained as part of the
     * response.</p>
     */
    inline void SetStartSession(StartSessionRequest&& value) { m_startSessionHasBeenSet = true; m_startSession = std::move(value); }

    /**
     * <p>Command to start a new session. A session token is obtained as part of the
     * response.</p>
     */
    inline SendCommandRequest& WithStartSession(const StartSessionRequest& value) { SetStartSession(value); return *this;}

    /**
     * <p>Command to start a new session. A session token is obtained as part of the
     * response.</p>
     */
    inline SendCommandRequest& WithStartSession(StartSessionRequest&& value) { SetStartSession(std::move(value)); return *this;}


    /**
     * <p>Command to start a new transaction.</p>
     */
    inline const StartTransactionRequest& GetStartTransaction() const{ return m_startTransaction; }

    /**
     * <p>Command to start a new transaction.</p>
     */
    inline bool StartTransactionHasBeenSet() const { return m_startTransactionHasBeenSet; }

    /**
     * <p>Command to start a new transaction.</p>
     */
    inline void SetStartTransaction(const StartTransactionRequest& value) { m_startTransactionHasBeenSet = true; m_startTransaction = value; }

    /**
     * <p>Command to start a new transaction.</p>
     */
    inline void SetStartTransaction(StartTransactionRequest&& value) { m_startTransactionHasBeenSet = true; m_startTransaction = std::move(value); }

    /**
     * <p>Command to start a new transaction.</p>
     */
    inline SendCommandRequest& WithStartTransaction(const StartTransactionRequest& value) { SetStartTransaction(value); return *this;}

    /**
     * <p>Command to start a new transaction.</p>
     */
    inline SendCommandRequest& WithStartTransaction(StartTransactionRequest&& value) { SetStartTransaction(std::move(value)); return *this;}


    /**
     * <p>Command to end the current session.</p>
     */
    inline const EndSessionRequest& GetEndSession() const{ return m_endSession; }

    /**
     * <p>Command to end the current session.</p>
     */
    inline bool EndSessionHasBeenSet() const { return m_endSessionHasBeenSet; }

    /**
     * <p>Command to end the current session.</p>
     */
    inline void SetEndSession(const EndSessionRequest& value) { m_endSessionHasBeenSet = true; m_endSession = value; }

    /**
     * <p>Command to end the current session.</p>
     */
    inline void SetEndSession(EndSessionRequest&& value) { m_endSessionHasBeenSet = true; m_endSession = std::move(value); }

    /**
     * <p>Command to end the current session.</p>
     */
    inline SendCommandRequest& WithEndSession(const EndSessionRequest& value) { SetEndSession(value); return *this;}

    /**
     * <p>Command to end the current session.</p>
     */
    inline SendCommandRequest& WithEndSession(EndSessionRequest&& value) { SetEndSession(std::move(value)); return *this;}


    /**
     * <p>Command to commit the specified transaction.</p>
     */
    inline const CommitTransactionRequest& GetCommitTransaction() const{ return m_commitTransaction; }

    /**
     * <p>Command to commit the specified transaction.</p>
     */
    inline bool CommitTransactionHasBeenSet() const { return m_commitTransactionHasBeenSet; }

    /**
     * <p>Command to commit the specified transaction.</p>
     */
    inline void SetCommitTransaction(const CommitTransactionRequest& value) { m_commitTransactionHasBeenSet = true; m_commitTransaction = value; }

    /**
     * <p>Command to commit the specified transaction.</p>
     */
    inline void SetCommitTransaction(CommitTransactionRequest&& value) { m_commitTransactionHasBeenSet = true; m_commitTransaction = std::move(value); }

    /**
     * <p>Command to commit the specified transaction.</p>
     */
    inline SendCommandRequest& WithCommitTransaction(const CommitTransactionRequest& value) { SetCommitTransaction(value); return *this;}

    /**
     * <p>Command to commit the specified transaction.</p>
     */
    inline SendCommandRequest& WithCommitTransaction(CommitTransactionRequest&& value) { SetCommitTransaction(std::move(value)); return *this;}


    /**
     * <p>Command to abort the current transaction.</p>
     */
    inline const AbortTransactionRequest& GetAbortTransaction() const{ return m_abortTransaction; }

    /**
     * <p>Command to abort the current transaction.</p>
     */
    inline bool AbortTransactionHasBeenSet() const { return m_abortTransactionHasBeenSet; }

    /**
     * <p>Command to abort the current transaction.</p>
     */
    inline void SetAbortTransaction(const AbortTransactionRequest& value) { m_abortTransactionHasBeenSet = true; m_abortTransaction = value; }

    /**
     * <p>Command to abort the current transaction.</p>
     */
    inline void SetAbortTransaction(AbortTransactionRequest&& value) { m_abortTransactionHasBeenSet = true; m_abortTransaction = std::move(value); }

    /**
     * <p>Command to abort the current transaction.</p>
     */
    inline SendCommandRequest& WithAbortTransaction(const AbortTransactionRequest& value) { SetAbortTransaction(value); return *this;}

    /**
     * <p>Command to abort the current transaction.</p>
     */
    inline SendCommandRequest& WithAbortTransaction(AbortTransactionRequest&& value) { SetAbortTransaction(std::move(value)); return *this;}


    /**
     * <p>Command to execute a statement in the specified transaction.</p>
     */
    inline const ExecuteStatementRequest& GetExecuteStatement() const{ return m_executeStatement; }

    /**
     * <p>Command to execute a statement in the specified transaction.</p>
     */
    inline bool ExecuteStatementHasBeenSet() const { return m_executeStatementHasBeenSet; }

    /**
     * <p>Command to execute a statement in the specified transaction.</p>
     */
    inline void SetExecuteStatement(const ExecuteStatementRequest& value) { m_executeStatementHasBeenSet = true; m_executeStatement = value; }

    /**
     * <p>Command to execute a statement in the specified transaction.</p>
     */
    inline void SetExecuteStatement(ExecuteStatementRequest&& value) { m_executeStatementHasBeenSet = true; m_executeStatement = std::move(value); }

    /**
     * <p>Command to execute a statement in the specified transaction.</p>
     */
    inline SendCommandRequest& WithExecuteStatement(const ExecuteStatementRequest& value) { SetExecuteStatement(value); return *this;}

    /**
     * <p>Command to execute a statement in the specified transaction.</p>
     */
    inline SendCommandRequest& WithExecuteStatement(ExecuteStatementRequest&& value) { SetExecuteStatement(std::move(value)); return *this;}


    /**
     * <p>Command to fetch a page.</p>
     */
    inline const FetchPageRequest& GetFetchPage() const{ return m_fetchPage; }

    /**
     * <p>Command to fetch a page.</p>
     */
    inline bool FetchPageHasBeenSet() const { return m_fetchPageHasBeenSet; }

    /**
     * <p>Command to fetch a page.</p>
     */
    inline void SetFetchPage(const FetchPageRequest& value) { m_fetchPageHasBeenSet = true; m_fetchPage = value; }

    /**
     * <p>Command to fetch a page.</p>
     */
    inline void SetFetchPage(FetchPageRequest&& value) { m_fetchPageHasBeenSet = true; m_fetchPage = std::move(value); }

    /**
     * <p>Command to fetch a page.</p>
     */
    inline SendCommandRequest& WithFetchPage(const FetchPageRequest& value) { SetFetchPage(value); return *this;}

    /**
     * <p>Command to fetch a page.</p>
     */
    inline SendCommandRequest& WithFetchPage(FetchPageRequest&& value) { SetFetchPage(std::move(value)); return *this;}

  private:

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    StartSessionRequest m_startSession;
    bool m_startSessionHasBeenSet = false;

    StartTransactionRequest m_startTransaction;
    bool m_startTransactionHasBeenSet = false;

    EndSessionRequest m_endSession;
    bool m_endSessionHasBeenSet = false;

    CommitTransactionRequest m_commitTransaction;
    bool m_commitTransactionHasBeenSet = false;

    AbortTransactionRequest m_abortTransaction;
    bool m_abortTransactionHasBeenSet = false;

    ExecuteStatementRequest m_executeStatement;
    bool m_executeStatementHasBeenSet = false;

    FetchPageRequest m_fetchPage;
    bool m_fetchPageHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
