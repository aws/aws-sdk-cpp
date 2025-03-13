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
   * <p>Describes the conflict resolution configuration for your data model
   * configured in your Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendAPIConflictResolution">AWS
   * API Reference</a></p>
   */
  class BackendAPIConflictResolution
  {
  public:
    AWS_AMPLIFYBACKEND_API BackendAPIConflictResolution() = default;
    AWS_AMPLIFYBACKEND_API BackendAPIConflictResolution(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAPIConflictResolution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The strategy for conflict resolution.</p>
     */
    inline ResolutionStrategy GetResolutionStrategy() const { return m_resolutionStrategy; }
    inline bool ResolutionStrategyHasBeenSet() const { return m_resolutionStrategyHasBeenSet; }
    inline void SetResolutionStrategy(ResolutionStrategy value) { m_resolutionStrategyHasBeenSet = true; m_resolutionStrategy = value; }
    inline BackendAPIConflictResolution& WithResolutionStrategy(ResolutionStrategy value) { SetResolutionStrategy(value); return *this;}
    ///@}
  private:

    ResolutionStrategy m_resolutionStrategy{ResolutionStrategy::NOT_SET};
    bool m_resolutionStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
