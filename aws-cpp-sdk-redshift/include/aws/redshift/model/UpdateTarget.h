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
#include <aws/redshift/model/SupportedOperation.h>
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
   * <p>A maintenance track that you can switch the current track to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/UpdateTarget">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API UpdateTarget
  {
  public:
    UpdateTarget();
    UpdateTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    UpdateTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }

    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }

    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }

    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }

    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }

    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline UpdateTarget& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}

    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline UpdateTarget& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}

    /**
     * <p>The name of the new maintenance track.</p>
     */
    inline UpdateTarget& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}


    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline const Aws::String& GetDatabaseVersion() const{ return m_databaseVersion; }

    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline bool DatabaseVersionHasBeenSet() const { return m_databaseVersionHasBeenSet; }

    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline void SetDatabaseVersion(const Aws::String& value) { m_databaseVersionHasBeenSet = true; m_databaseVersion = value; }

    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline void SetDatabaseVersion(Aws::String&& value) { m_databaseVersionHasBeenSet = true; m_databaseVersion = std::move(value); }

    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline void SetDatabaseVersion(const char* value) { m_databaseVersionHasBeenSet = true; m_databaseVersion.assign(value); }

    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline UpdateTarget& WithDatabaseVersion(const Aws::String& value) { SetDatabaseVersion(value); return *this;}

    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline UpdateTarget& WithDatabaseVersion(Aws::String&& value) { SetDatabaseVersion(std::move(value)); return *this;}

    /**
     * <p>The cluster version for the new maintenance track.</p>
     */
    inline UpdateTarget& WithDatabaseVersion(const char* value) { SetDatabaseVersion(value); return *this;}


    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline const Aws::Vector<SupportedOperation>& GetSupportedOperations() const{ return m_supportedOperations; }

    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline bool SupportedOperationsHasBeenSet() const { return m_supportedOperationsHasBeenSet; }

    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline void SetSupportedOperations(const Aws::Vector<SupportedOperation>& value) { m_supportedOperationsHasBeenSet = true; m_supportedOperations = value; }

    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline void SetSupportedOperations(Aws::Vector<SupportedOperation>&& value) { m_supportedOperationsHasBeenSet = true; m_supportedOperations = std::move(value); }

    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline UpdateTarget& WithSupportedOperations(const Aws::Vector<SupportedOperation>& value) { SetSupportedOperations(value); return *this;}

    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline UpdateTarget& WithSupportedOperations(Aws::Vector<SupportedOperation>&& value) { SetSupportedOperations(std::move(value)); return *this;}

    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline UpdateTarget& AddSupportedOperations(const SupportedOperation& value) { m_supportedOperationsHasBeenSet = true; m_supportedOperations.push_back(value); return *this; }

    /**
     * <p>A list of operations supported by the maintenance track.</p>
     */
    inline UpdateTarget& AddSupportedOperations(SupportedOperation&& value) { m_supportedOperationsHasBeenSet = true; m_supportedOperations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet;

    Aws::String m_databaseVersion;
    bool m_databaseVersionHasBeenSet;

    Aws::Vector<SupportedOperation> m_supportedOperations;
    bool m_supportedOperationsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
