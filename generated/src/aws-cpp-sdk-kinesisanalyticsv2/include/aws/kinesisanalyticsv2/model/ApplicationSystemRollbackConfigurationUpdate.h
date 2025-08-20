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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSystemRollbackConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ApplicationSystemRollbackConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationSystemRollbackConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API ApplicationSystemRollbackConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationSystemRollbackConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether system rollbacks are enabled for a Managed Service for
     * Apache Flink application.</p>
     */
    inline bool GetRollbackEnabledUpdate() const { return m_rollbackEnabledUpdate; }
    inline bool RollbackEnabledUpdateHasBeenSet() const { return m_rollbackEnabledUpdateHasBeenSet; }
    inline void SetRollbackEnabledUpdate(bool value) { m_rollbackEnabledUpdateHasBeenSet = true; m_rollbackEnabledUpdate = value; }
    inline ApplicationSystemRollbackConfigurationUpdate& WithRollbackEnabledUpdate(bool value) { SetRollbackEnabledUpdate(value); return *this;}
    ///@}
  private:

    bool m_rollbackEnabledUpdate{false};
    bool m_rollbackEnabledUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
