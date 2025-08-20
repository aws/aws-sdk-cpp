/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the system rollback configuration for a Managed Service for Apache
   * Flink application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSystemRollbackConfiguration">AWS
   * API Reference</a></p>
   */
  class ApplicationSystemRollbackConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationSystemRollbackConfiguration() = default;
    AWS_KINESISANALYTICSV2_API ApplicationSystemRollbackConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationSystemRollbackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether system rollbacks are enabled for a Managed Service for
     * Apache Flink application.</p>
     */
    inline bool GetRollbackEnabled() const { return m_rollbackEnabled; }
    inline bool RollbackEnabledHasBeenSet() const { return m_rollbackEnabledHasBeenSet; }
    inline void SetRollbackEnabled(bool value) { m_rollbackEnabledHasBeenSet = true; m_rollbackEnabled = value; }
    inline ApplicationSystemRollbackConfiguration& WithRollbackEnabled(bool value) { SetRollbackEnabled(value); return *this;}
    ///@}
  private:

    bool m_rollbackEnabled{false};
    bool m_rollbackEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
