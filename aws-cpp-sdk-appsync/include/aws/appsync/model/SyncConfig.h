/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ConflictHandlerType.h>
#include <aws/appsync/model/ConflictDetectionType.h>
#include <aws/appsync/model/LambdaConflictHandlerConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a Sync configuration for a resolver.</p> <p>Contains information on
   * which Conflict Detection as well as Resolution strategy should be performed when
   * the resolver is invoked.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/SyncConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API SyncConfig
  {
  public:
    SyncConfig();
    SyncConfig(Aws::Utils::Json::JsonView jsonValue);
    SyncConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Conflict Resolution strategy to perform in the event of a conflict.</p>
     * <ul> <li> <p> <b>OPTIMISTIC_CONCURRENCY</b>: Resolve conflicts by rejecting
     * mutations when versions do not match the latest version at the server.</p> </li>
     * <li> <p> <b>AUTOMERGE</b>: Resolve conflicts with the Automerge conflict
     * resolution strategy.</p> </li> <li> <p> <b>LAMBDA</b>: Resolve conflicts with a
     * Lambda function supplied in the LambdaConflictHandlerConfig.</p> </li> </ul>
     */
    inline const ConflictHandlerType& GetConflictHandler() const{ return m_conflictHandler; }

    /**
     * <p>The Conflict Resolution strategy to perform in the event of a conflict.</p>
     * <ul> <li> <p> <b>OPTIMISTIC_CONCURRENCY</b>: Resolve conflicts by rejecting
     * mutations when versions do not match the latest version at the server.</p> </li>
     * <li> <p> <b>AUTOMERGE</b>: Resolve conflicts with the Automerge conflict
     * resolution strategy.</p> </li> <li> <p> <b>LAMBDA</b>: Resolve conflicts with a
     * Lambda function supplied in the LambdaConflictHandlerConfig.</p> </li> </ul>
     */
    inline bool ConflictHandlerHasBeenSet() const { return m_conflictHandlerHasBeenSet; }

    /**
     * <p>The Conflict Resolution strategy to perform in the event of a conflict.</p>
     * <ul> <li> <p> <b>OPTIMISTIC_CONCURRENCY</b>: Resolve conflicts by rejecting
     * mutations when versions do not match the latest version at the server.</p> </li>
     * <li> <p> <b>AUTOMERGE</b>: Resolve conflicts with the Automerge conflict
     * resolution strategy.</p> </li> <li> <p> <b>LAMBDA</b>: Resolve conflicts with a
     * Lambda function supplied in the LambdaConflictHandlerConfig.</p> </li> </ul>
     */
    inline void SetConflictHandler(const ConflictHandlerType& value) { m_conflictHandlerHasBeenSet = true; m_conflictHandler = value; }

    /**
     * <p>The Conflict Resolution strategy to perform in the event of a conflict.</p>
     * <ul> <li> <p> <b>OPTIMISTIC_CONCURRENCY</b>: Resolve conflicts by rejecting
     * mutations when versions do not match the latest version at the server.</p> </li>
     * <li> <p> <b>AUTOMERGE</b>: Resolve conflicts with the Automerge conflict
     * resolution strategy.</p> </li> <li> <p> <b>LAMBDA</b>: Resolve conflicts with a
     * Lambda function supplied in the LambdaConflictHandlerConfig.</p> </li> </ul>
     */
    inline void SetConflictHandler(ConflictHandlerType&& value) { m_conflictHandlerHasBeenSet = true; m_conflictHandler = std::move(value); }

    /**
     * <p>The Conflict Resolution strategy to perform in the event of a conflict.</p>
     * <ul> <li> <p> <b>OPTIMISTIC_CONCURRENCY</b>: Resolve conflicts by rejecting
     * mutations when versions do not match the latest version at the server.</p> </li>
     * <li> <p> <b>AUTOMERGE</b>: Resolve conflicts with the Automerge conflict
     * resolution strategy.</p> </li> <li> <p> <b>LAMBDA</b>: Resolve conflicts with a
     * Lambda function supplied in the LambdaConflictHandlerConfig.</p> </li> </ul>
     */
    inline SyncConfig& WithConflictHandler(const ConflictHandlerType& value) { SetConflictHandler(value); return *this;}

    /**
     * <p>The Conflict Resolution strategy to perform in the event of a conflict.</p>
     * <ul> <li> <p> <b>OPTIMISTIC_CONCURRENCY</b>: Resolve conflicts by rejecting
     * mutations when versions do not match the latest version at the server.</p> </li>
     * <li> <p> <b>AUTOMERGE</b>: Resolve conflicts with the Automerge conflict
     * resolution strategy.</p> </li> <li> <p> <b>LAMBDA</b>: Resolve conflicts with a
     * Lambda function supplied in the LambdaConflictHandlerConfig.</p> </li> </ul>
     */
    inline SyncConfig& WithConflictHandler(ConflictHandlerType&& value) { SetConflictHandler(std::move(value)); return *this;}


    /**
     * <p>The Conflict Detection strategy to use.</p> <ul> <li> <p> <b>VERSION</b>:
     * Detect conflicts based on object versions for this resolver.</p> </li> <li> <p>
     * <b>NONE</b>: Do not detect conflicts when executing this resolver.</p> </li>
     * </ul>
     */
    inline const ConflictDetectionType& GetConflictDetection() const{ return m_conflictDetection; }

    /**
     * <p>The Conflict Detection strategy to use.</p> <ul> <li> <p> <b>VERSION</b>:
     * Detect conflicts based on object versions for this resolver.</p> </li> <li> <p>
     * <b>NONE</b>: Do not detect conflicts when executing this resolver.</p> </li>
     * </ul>
     */
    inline bool ConflictDetectionHasBeenSet() const { return m_conflictDetectionHasBeenSet; }

    /**
     * <p>The Conflict Detection strategy to use.</p> <ul> <li> <p> <b>VERSION</b>:
     * Detect conflicts based on object versions for this resolver.</p> </li> <li> <p>
     * <b>NONE</b>: Do not detect conflicts when executing this resolver.</p> </li>
     * </ul>
     */
    inline void SetConflictDetection(const ConflictDetectionType& value) { m_conflictDetectionHasBeenSet = true; m_conflictDetection = value; }

    /**
     * <p>The Conflict Detection strategy to use.</p> <ul> <li> <p> <b>VERSION</b>:
     * Detect conflicts based on object versions for this resolver.</p> </li> <li> <p>
     * <b>NONE</b>: Do not detect conflicts when executing this resolver.</p> </li>
     * </ul>
     */
    inline void SetConflictDetection(ConflictDetectionType&& value) { m_conflictDetectionHasBeenSet = true; m_conflictDetection = std::move(value); }

    /**
     * <p>The Conflict Detection strategy to use.</p> <ul> <li> <p> <b>VERSION</b>:
     * Detect conflicts based on object versions for this resolver.</p> </li> <li> <p>
     * <b>NONE</b>: Do not detect conflicts when executing this resolver.</p> </li>
     * </ul>
     */
    inline SyncConfig& WithConflictDetection(const ConflictDetectionType& value) { SetConflictDetection(value); return *this;}

    /**
     * <p>The Conflict Detection strategy to use.</p> <ul> <li> <p> <b>VERSION</b>:
     * Detect conflicts based on object versions for this resolver.</p> </li> <li> <p>
     * <b>NONE</b>: Do not detect conflicts when executing this resolver.</p> </li>
     * </ul>
     */
    inline SyncConfig& WithConflictDetection(ConflictDetectionType&& value) { SetConflictDetection(std::move(value)); return *this;}


    /**
     * <p>The <code>LambdaConflictHandlerConfig</code> when configuring LAMBDA as the
     * Conflict Handler.</p>
     */
    inline const LambdaConflictHandlerConfig& GetLambdaConflictHandlerConfig() const{ return m_lambdaConflictHandlerConfig; }

    /**
     * <p>The <code>LambdaConflictHandlerConfig</code> when configuring LAMBDA as the
     * Conflict Handler.</p>
     */
    inline bool LambdaConflictHandlerConfigHasBeenSet() const { return m_lambdaConflictHandlerConfigHasBeenSet; }

    /**
     * <p>The <code>LambdaConflictHandlerConfig</code> when configuring LAMBDA as the
     * Conflict Handler.</p>
     */
    inline void SetLambdaConflictHandlerConfig(const LambdaConflictHandlerConfig& value) { m_lambdaConflictHandlerConfigHasBeenSet = true; m_lambdaConflictHandlerConfig = value; }

    /**
     * <p>The <code>LambdaConflictHandlerConfig</code> when configuring LAMBDA as the
     * Conflict Handler.</p>
     */
    inline void SetLambdaConflictHandlerConfig(LambdaConflictHandlerConfig&& value) { m_lambdaConflictHandlerConfigHasBeenSet = true; m_lambdaConflictHandlerConfig = std::move(value); }

    /**
     * <p>The <code>LambdaConflictHandlerConfig</code> when configuring LAMBDA as the
     * Conflict Handler.</p>
     */
    inline SyncConfig& WithLambdaConflictHandlerConfig(const LambdaConflictHandlerConfig& value) { SetLambdaConflictHandlerConfig(value); return *this;}

    /**
     * <p>The <code>LambdaConflictHandlerConfig</code> when configuring LAMBDA as the
     * Conflict Handler.</p>
     */
    inline SyncConfig& WithLambdaConflictHandlerConfig(LambdaConflictHandlerConfig&& value) { SetLambdaConflictHandlerConfig(std::move(value)); return *this;}

  private:

    ConflictHandlerType m_conflictHandler;
    bool m_conflictHandlerHasBeenSet;

    ConflictDetectionType m_conflictDetection;
    bool m_conflictDetectionHasBeenSet;

    LambdaConflictHandlerConfig m_lambdaConflictHandlerConfig;
    bool m_lambdaConflictHandlerConfigHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
