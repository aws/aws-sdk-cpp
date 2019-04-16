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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/Tag.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ClusterAssociatedToSchedule.h>
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
   * <p>Describes a snapshot schedule. You can set a regular interval for creating
   * snapshots of a cluster. You can also schedule snapshots for specific dates.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SnapshotSchedule">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API SnapshotSchedule
  {
  public:
    SnapshotSchedule();
    SnapshotSchedule(const Aws::Utils::Xml::XmlNode& xmlNode);
    SnapshotSchedule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduleDefinitions() const{ return m_scheduleDefinitions; }

    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline bool ScheduleDefinitionsHasBeenSet() const { return m_scheduleDefinitionsHasBeenSet; }

    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline void SetScheduleDefinitions(const Aws::Vector<Aws::String>& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = value; }

    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline void SetScheduleDefinitions(Aws::Vector<Aws::String>&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = std::move(value); }

    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline SnapshotSchedule& WithScheduleDefinitions(const Aws::Vector<Aws::String>& value) { SetScheduleDefinitions(value); return *this;}

    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline SnapshotSchedule& WithScheduleDefinitions(Aws::Vector<Aws::String>&& value) { SetScheduleDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline SnapshotSchedule& AddScheduleDefinitions(const Aws::String& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline SnapshotSchedule& AddScheduleDefinitions(Aws::String&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline SnapshotSchedule& AddScheduleDefinitions(const char* value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(value); return *this; }


    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const{ return m_scheduleIdentifier; }

    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline void SetScheduleIdentifier(const Aws::String& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = value; }

    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline void SetScheduleIdentifier(Aws::String&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline void SetScheduleIdentifier(const char* value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline SnapshotSchedule& WithScheduleIdentifier(const Aws::String& value) { SetScheduleIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline SnapshotSchedule& WithScheduleIdentifier(Aws::String&& value) { SetScheduleIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline SnapshotSchedule& WithScheduleIdentifier(const char* value) { SetScheduleIdentifier(value); return *this;}


    /**
     * <p>The description of the schedule.</p>
     */
    inline const Aws::String& GetScheduleDescription() const{ return m_scheduleDescription; }

    /**
     * <p>The description of the schedule.</p>
     */
    inline bool ScheduleDescriptionHasBeenSet() const { return m_scheduleDescriptionHasBeenSet; }

    /**
     * <p>The description of the schedule.</p>
     */
    inline void SetScheduleDescription(const Aws::String& value) { m_scheduleDescriptionHasBeenSet = true; m_scheduleDescription = value; }

    /**
     * <p>The description of the schedule.</p>
     */
    inline void SetScheduleDescription(Aws::String&& value) { m_scheduleDescriptionHasBeenSet = true; m_scheduleDescription = std::move(value); }

    /**
     * <p>The description of the schedule.</p>
     */
    inline void SetScheduleDescription(const char* value) { m_scheduleDescriptionHasBeenSet = true; m_scheduleDescription.assign(value); }

    /**
     * <p>The description of the schedule.</p>
     */
    inline SnapshotSchedule& WithScheduleDescription(const Aws::String& value) { SetScheduleDescription(value); return *this;}

    /**
     * <p>The description of the schedule.</p>
     */
    inline SnapshotSchedule& WithScheduleDescription(Aws::String&& value) { SetScheduleDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the schedule.</p>
     */
    inline SnapshotSchedule& WithScheduleDescription(const char* value) { SetScheduleDescription(value); return *this;}


    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline SnapshotSchedule& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline SnapshotSchedule& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline SnapshotSchedule& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline SnapshotSchedule& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetNextInvocations() const{ return m_nextInvocations; }

    /**
     * <p/>
     */
    inline bool NextInvocationsHasBeenSet() const { return m_nextInvocationsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = value; }

    /**
     * <p/>
     */
    inline void SetNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = std::move(value); }

    /**
     * <p/>
     */
    inline SnapshotSchedule& WithNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { SetNextInvocations(value); return *this;}

    /**
     * <p/>
     */
    inline SnapshotSchedule& WithNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { SetNextInvocations(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline SnapshotSchedule& AddNextInvocations(const Aws::Utils::DateTime& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline SnapshotSchedule& AddNextInvocations(Aws::Utils::DateTime&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of clusters associated with the schedule.</p>
     */
    inline int GetAssociatedClusterCount() const{ return m_associatedClusterCount; }

    /**
     * <p>The number of clusters associated with the schedule.</p>
     */
    inline bool AssociatedClusterCountHasBeenSet() const { return m_associatedClusterCountHasBeenSet; }

    /**
     * <p>The number of clusters associated with the schedule.</p>
     */
    inline void SetAssociatedClusterCount(int value) { m_associatedClusterCountHasBeenSet = true; m_associatedClusterCount = value; }

    /**
     * <p>The number of clusters associated with the schedule.</p>
     */
    inline SnapshotSchedule& WithAssociatedClusterCount(int value) { SetAssociatedClusterCount(value); return *this;}


    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline const Aws::Vector<ClusterAssociatedToSchedule>& GetAssociatedClusters() const{ return m_associatedClusters; }

    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline bool AssociatedClustersHasBeenSet() const { return m_associatedClustersHasBeenSet; }

    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline void SetAssociatedClusters(const Aws::Vector<ClusterAssociatedToSchedule>& value) { m_associatedClustersHasBeenSet = true; m_associatedClusters = value; }

    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline void SetAssociatedClusters(Aws::Vector<ClusterAssociatedToSchedule>&& value) { m_associatedClustersHasBeenSet = true; m_associatedClusters = std::move(value); }

    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline SnapshotSchedule& WithAssociatedClusters(const Aws::Vector<ClusterAssociatedToSchedule>& value) { SetAssociatedClusters(value); return *this;}

    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline SnapshotSchedule& WithAssociatedClusters(Aws::Vector<ClusterAssociatedToSchedule>&& value) { SetAssociatedClusters(std::move(value)); return *this;}

    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline SnapshotSchedule& AddAssociatedClusters(const ClusterAssociatedToSchedule& value) { m_associatedClustersHasBeenSet = true; m_associatedClusters.push_back(value); return *this; }

    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline SnapshotSchedule& AddAssociatedClusters(ClusterAssociatedToSchedule&& value) { m_associatedClustersHasBeenSet = true; m_associatedClusters.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline SnapshotSchedule& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SnapshotSchedule& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_scheduleDefinitions;
    bool m_scheduleDefinitionsHasBeenSet;

    Aws::String m_scheduleIdentifier;
    bool m_scheduleIdentifierHasBeenSet;

    Aws::String m_scheduleDescription;
    bool m_scheduleDescriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<Aws::Utils::DateTime> m_nextInvocations;
    bool m_nextInvocationsHasBeenSet;

    int m_associatedClusterCount;
    bool m_associatedClusterCountHasBeenSet;

    Aws::Vector<ClusterAssociatedToSchedule> m_associatedClusters;
    bool m_associatedClustersHasBeenSet;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
