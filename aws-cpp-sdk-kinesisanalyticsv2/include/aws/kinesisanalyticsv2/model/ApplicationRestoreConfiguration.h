/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISANALYTICSV2_API ApplicationRestoreConfiguration
  {
  public:
    ApplicationRestoreConfiguration();
    ApplicationRestoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ApplicationRestoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how the application should be restored.</p>
     */
    inline const ApplicationRestoreType& GetApplicationRestoreType() const{ return m_applicationRestoreType; }

    /**
     * <p>Specifies how the application should be restored.</p>
     */
    inline bool ApplicationRestoreTypeHasBeenSet() const { return m_applicationRestoreTypeHasBeenSet; }

    /**
     * <p>Specifies how the application should be restored.</p>
     */
    inline void SetApplicationRestoreType(const ApplicationRestoreType& value) { m_applicationRestoreTypeHasBeenSet = true; m_applicationRestoreType = value; }

    /**
     * <p>Specifies how the application should be restored.</p>
     */
    inline void SetApplicationRestoreType(ApplicationRestoreType&& value) { m_applicationRestoreTypeHasBeenSet = true; m_applicationRestoreType = std::move(value); }

    /**
     * <p>Specifies how the application should be restored.</p>
     */
    inline ApplicationRestoreConfiguration& WithApplicationRestoreType(const ApplicationRestoreType& value) { SetApplicationRestoreType(value); return *this;}

    /**
     * <p>Specifies how the application should be restored.</p>
     */
    inline ApplicationRestoreConfiguration& WithApplicationRestoreType(ApplicationRestoreType&& value) { SetApplicationRestoreType(std::move(value)); return *this;}


    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline ApplicationRestoreConfiguration& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline ApplicationRestoreConfiguration& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline ApplicationRestoreConfiguration& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}

  private:

    ApplicationRestoreType m_applicationRestoreType;
    bool m_applicationRestoreTypeHasBeenSet;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
