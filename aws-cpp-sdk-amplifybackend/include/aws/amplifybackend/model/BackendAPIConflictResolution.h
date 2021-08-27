/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/ResolutionStrategy.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes the conflict resolution configuration for the data model configured
   * in your Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendAPIConflictResolution">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFYBACKEND_API BackendAPIConflictResolution
  {
  public:
    BackendAPIConflictResolution();
    BackendAPIConflictResolution(Aws::Utils::Json::JsonView jsonValue);
    BackendAPIConflictResolution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The strategy for conflict resolution.</p>
     */
    inline const ResolutionStrategy& GetResolutionStrategy() const{ return m_resolutionStrategy; }

    /**
     * <p>The strategy for conflict resolution.</p>
     */
    inline bool ResolutionStrategyHasBeenSet() const { return m_resolutionStrategyHasBeenSet; }

    /**
     * <p>The strategy for conflict resolution.</p>
     */
    inline void SetResolutionStrategy(const ResolutionStrategy& value) { m_resolutionStrategyHasBeenSet = true; m_resolutionStrategy = value; }

    /**
     * <p>The strategy for conflict resolution.</p>
     */
    inline void SetResolutionStrategy(ResolutionStrategy&& value) { m_resolutionStrategyHasBeenSet = true; m_resolutionStrategy = std::move(value); }

    /**
     * <p>The strategy for conflict resolution.</p>
     */
    inline BackendAPIConflictResolution& WithResolutionStrategy(const ResolutionStrategy& value) { SetResolutionStrategy(value); return *this;}

    /**
     * <p>The strategy for conflict resolution.</p>
     */
    inline BackendAPIConflictResolution& WithResolutionStrategy(ResolutionStrategy&& value) { SetResolutionStrategy(std::move(value)); return *this;}

  private:

    ResolutionStrategy m_resolutionStrategy;
    bool m_resolutionStrategyHasBeenSet;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
