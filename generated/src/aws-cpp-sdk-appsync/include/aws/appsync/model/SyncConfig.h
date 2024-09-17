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
   * <p>Describes a Sync configuration for a resolver.</p> <p>Specifies which
   * Conflict Detection strategy and Resolution strategy to use when the resolver is
   * invoked.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/SyncConfig">AWS
   * API Reference</a></p>
   */
  class SyncConfig
  {
  public:
    AWS_APPSYNC_API SyncConfig();
    AWS_APPSYNC_API SyncConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API SyncConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Conflict Resolution strategy to perform in the event of a conflict.</p>
     * <ul> <li> <p> <b>OPTIMISTIC_CONCURRENCY</b>: Resolve conflicts by rejecting
     * mutations when versions don't match the latest version at the server.</p> </li>
     * <li> <p> <b>AUTOMERGE</b>: Resolve conflicts with the Automerge conflict
     * resolution strategy.</p> </li> <li> <p> <b>LAMBDA</b>: Resolve conflicts with an
     * Lambda function supplied in the <code>LambdaConflictHandlerConfig</code>.</p>
     * </li> </ul>
     */
    inline const ConflictHandlerType& GetConflictHandler() const{ return m_conflictHandler; }
    inline bool ConflictHandlerHasBeenSet() const { return m_conflictHandlerHasBeenSet; }
    inline void SetConflictHandler(const ConflictHandlerType& value) { m_conflictHandlerHasBeenSet = true; m_conflictHandler = value; }
    inline void SetConflictHandler(ConflictHandlerType&& value) { m_conflictHandlerHasBeenSet = true; m_conflictHandler = std::move(value); }
    inline SyncConfig& WithConflictHandler(const ConflictHandlerType& value) { SetConflictHandler(value); return *this;}
    inline SyncConfig& WithConflictHandler(ConflictHandlerType&& value) { SetConflictHandler(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Conflict Detection strategy to use.</p> <ul> <li> <p> <b>VERSION</b>:
     * Detect conflicts based on object versions for this resolver.</p> </li> <li> <p>
     * <b>NONE</b>: Do not detect conflicts when invoking this resolver.</p> </li>
     * </ul>
     */
    inline const ConflictDetectionType& GetConflictDetection() const{ return m_conflictDetection; }
    inline bool ConflictDetectionHasBeenSet() const { return m_conflictDetectionHasBeenSet; }
    inline void SetConflictDetection(const ConflictDetectionType& value) { m_conflictDetectionHasBeenSet = true; m_conflictDetection = value; }
    inline void SetConflictDetection(ConflictDetectionType&& value) { m_conflictDetectionHasBeenSet = true; m_conflictDetection = std::move(value); }
    inline SyncConfig& WithConflictDetection(const ConflictDetectionType& value) { SetConflictDetection(value); return *this;}
    inline SyncConfig& WithConflictDetection(ConflictDetectionType&& value) { SetConflictDetection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>LambdaConflictHandlerConfig</code> when configuring
     * <code>LAMBDA</code> as the Conflict Handler.</p>
     */
    inline const LambdaConflictHandlerConfig& GetLambdaConflictHandlerConfig() const{ return m_lambdaConflictHandlerConfig; }
    inline bool LambdaConflictHandlerConfigHasBeenSet() const { return m_lambdaConflictHandlerConfigHasBeenSet; }
    inline void SetLambdaConflictHandlerConfig(const LambdaConflictHandlerConfig& value) { m_lambdaConflictHandlerConfigHasBeenSet = true; m_lambdaConflictHandlerConfig = value; }
    inline void SetLambdaConflictHandlerConfig(LambdaConflictHandlerConfig&& value) { m_lambdaConflictHandlerConfigHasBeenSet = true; m_lambdaConflictHandlerConfig = std::move(value); }
    inline SyncConfig& WithLambdaConflictHandlerConfig(const LambdaConflictHandlerConfig& value) { SetLambdaConflictHandlerConfig(value); return *this;}
    inline SyncConfig& WithLambdaConflictHandlerConfig(LambdaConflictHandlerConfig&& value) { SetLambdaConflictHandlerConfig(std::move(value)); return *this;}
    ///@}
  private:

    ConflictHandlerType m_conflictHandler;
    bool m_conflictHandlerHasBeenSet = false;

    ConflictDetectionType m_conflictDetection;
    bool m_conflictDetectionHasBeenSet = false;

    LambdaConflictHandlerConfig m_lambdaConflictHandlerConfig;
    bool m_lambdaConflictHandlerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
