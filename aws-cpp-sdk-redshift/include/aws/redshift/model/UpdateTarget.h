/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateTarget
  {
  public:
    AWS_REDSHIFT_API UpdateTarget();
    AWS_REDSHIFT_API UpdateTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API UpdateTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_maintenanceTrackNameHasBeenSet = false;

    Aws::String m_databaseVersion;
    bool m_databaseVersionHasBeenSet = false;

    Aws::Vector<SupportedOperation> m_supportedOperations;
    bool m_supportedOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
