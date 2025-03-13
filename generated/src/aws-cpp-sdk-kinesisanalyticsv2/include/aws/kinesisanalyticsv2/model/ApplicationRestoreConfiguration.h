/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationRestoreType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Specifies the method and snapshot to use when restarting an application using
   * previously saved application state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationRestoreConfiguration">AWS
   * API Reference</a></p>
   */
  class ApplicationRestoreConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationRestoreConfiguration() = default;
    AWS_KINESISANALYTICSV2_API ApplicationRestoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationRestoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how the application should be restored.</p>
     */
    inline ApplicationRestoreType GetApplicationRestoreType() const { return m_applicationRestoreType; }
    inline bool ApplicationRestoreTypeHasBeenSet() const { return m_applicationRestoreTypeHasBeenSet; }
    inline void SetApplicationRestoreType(ApplicationRestoreType value) { m_applicationRestoreTypeHasBeenSet = true; m_applicationRestoreType = value; }
    inline ApplicationRestoreConfiguration& WithApplicationRestoreType(ApplicationRestoreType value) { SetApplicationRestoreType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    ApplicationRestoreConfiguration& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}
  private:

    ApplicationRestoreType m_applicationRestoreType{ApplicationRestoreType::NOT_SET};
    bool m_applicationRestoreTypeHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
