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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/UpdateTarget.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Defines a maintenance track that determines which Amazon Redshift version to
   * apply during a maintenance window. If the value for
   * <code>MaintenanceTrack</code> is <code>current</code>, the cluster is updated to
   * the most recently certified maintenance release. If the value is
   * <code>trailing</code>, the cluster is updated to the previously certified
   * maintenance release. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/MaintenanceTrack">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API MaintenanceTrack
  {
  public:
    MaintenanceTrack();
    MaintenanceTrack(const Aws::Utils::Xml::XmlNode& xmlNode);
    MaintenanceTrack& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }

    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }

    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }

    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }

    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }

    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline MaintenanceTrack& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}

    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline MaintenanceTrack& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance track. Possible values are <code>current</code>
     * and <code>trailing</code>.</p>
     */
    inline MaintenanceTrack& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}


    /**
     * <p>The version number for the cluster release.</p>
     */
    inline const Aws::String& GetDatabaseVersion() const{ return m_databaseVersion; }

    /**
     * <p>The version number for the cluster release.</p>
     */
    inline bool DatabaseVersionHasBeenSet() const { return m_databaseVersionHasBeenSet; }

    /**
     * <p>The version number for the cluster release.</p>
     */
    inline void SetDatabaseVersion(const Aws::String& value) { m_databaseVersionHasBeenSet = true; m_databaseVersion = value; }

    /**
     * <p>The version number for the cluster release.</p>
     */
    inline void SetDatabaseVersion(Aws::String&& value) { m_databaseVersionHasBeenSet = true; m_databaseVersion = std::move(value); }

    /**
     * <p>The version number for the cluster release.</p>
     */
    inline void SetDatabaseVersion(const char* value) { m_databaseVersionHasBeenSet = true; m_databaseVersion.assign(value); }

    /**
     * <p>The version number for the cluster release.</p>
     */
    inline MaintenanceTrack& WithDatabaseVersion(const Aws::String& value) { SetDatabaseVersion(value); return *this;}

    /**
     * <p>The version number for the cluster release.</p>
     */
    inline MaintenanceTrack& WithDatabaseVersion(Aws::String&& value) { SetDatabaseVersion(std::move(value)); return *this;}

    /**
     * <p>The version number for the cluster release.</p>
     */
    inline MaintenanceTrack& WithDatabaseVersion(const char* value) { SetDatabaseVersion(value); return *this;}


    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline const Aws::Vector<UpdateTarget>& GetUpdateTargets() const{ return m_updateTargets; }

    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline bool UpdateTargetsHasBeenSet() const { return m_updateTargetsHasBeenSet; }

    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline void SetUpdateTargets(const Aws::Vector<UpdateTarget>& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = value; }

    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline void SetUpdateTargets(Aws::Vector<UpdateTarget>&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = std::move(value); }

    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline MaintenanceTrack& WithUpdateTargets(const Aws::Vector<UpdateTarget>& value) { SetUpdateTargets(value); return *this;}

    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline MaintenanceTrack& WithUpdateTargets(Aws::Vector<UpdateTarget>&& value) { SetUpdateTargets(std::move(value)); return *this;}

    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline MaintenanceTrack& AddUpdateTargets(const UpdateTarget& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.push_back(value); return *this; }

    /**
     * <p>An array of <a>UpdateTarget</a> objects to update with the maintenance track.
     * </p>
     */
    inline MaintenanceTrack& AddUpdateTargets(UpdateTarget&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet;

    Aws::String m_databaseVersion;
    bool m_databaseVersionHasBeenSet;

    Aws::Vector<UpdateTarget> m_updateTargets;
    bool m_updateTargetsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
