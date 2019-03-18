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
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes a <code>RevisionTarget</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RevisionTarget">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API RevisionTarget
  {
  public:
    RevisionTarget();
    RevisionTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    RevisionTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline const Aws::String& GetDatabaseRevision() const{ return m_databaseRevision; }

    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline bool DatabaseRevisionHasBeenSet() const { return m_databaseRevisionHasBeenSet; }

    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline void SetDatabaseRevision(const Aws::String& value) { m_databaseRevisionHasBeenSet = true; m_databaseRevision = value; }

    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline void SetDatabaseRevision(Aws::String&& value) { m_databaseRevisionHasBeenSet = true; m_databaseRevision = std::move(value); }

    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline void SetDatabaseRevision(const char* value) { m_databaseRevisionHasBeenSet = true; m_databaseRevision.assign(value); }

    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline RevisionTarget& WithDatabaseRevision(const Aws::String& value) { SetDatabaseRevision(value); return *this;}

    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline RevisionTarget& WithDatabaseRevision(Aws::String&& value) { SetDatabaseRevision(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the version to update the cluster to. You can
     * use this value in <a>ModifyClusterDbRevision</a>.</p>
     */
    inline RevisionTarget& WithDatabaseRevision(const char* value) { SetDatabaseRevision(value); return *this;}


    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline RevisionTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline RevisionTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A string that describes the changes and features that will be applied to the
     * cluster when it is updated to the corresponding <a>ClusterDbRevision</a>.</p>
     */
    inline RevisionTarget& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline const Aws::Utils::DateTime& GetDatabaseRevisionReleaseDate() const{ return m_databaseRevisionReleaseDate; }

    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline bool DatabaseRevisionReleaseDateHasBeenSet() const { return m_databaseRevisionReleaseDateHasBeenSet; }

    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline void SetDatabaseRevisionReleaseDate(const Aws::Utils::DateTime& value) { m_databaseRevisionReleaseDateHasBeenSet = true; m_databaseRevisionReleaseDate = value; }

    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline void SetDatabaseRevisionReleaseDate(Aws::Utils::DateTime&& value) { m_databaseRevisionReleaseDateHasBeenSet = true; m_databaseRevisionReleaseDate = std::move(value); }

    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline RevisionTarget& WithDatabaseRevisionReleaseDate(const Aws::Utils::DateTime& value) { SetDatabaseRevisionReleaseDate(value); return *this;}

    /**
     * <p>The date on which the database revision was released.</p>
     */
    inline RevisionTarget& WithDatabaseRevisionReleaseDate(Aws::Utils::DateTime&& value) { SetDatabaseRevisionReleaseDate(std::move(value)); return *this;}

  private:

    Aws::String m_databaseRevision;
    bool m_databaseRevisionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_databaseRevisionReleaseDate;
    bool m_databaseRevisionReleaseDateHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
