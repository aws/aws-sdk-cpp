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
#include <aws/redshift/model/EventInfoMap.h>
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
   * <p>Describes event categories.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EventCategoriesMap">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API EventCategoriesMap
  {
  public:
    EventCategoriesMap();
    EventCategoriesMap(const Aws::Utils::Xml::XmlNode& xmlNode);
    EventCategoriesMap& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The source type, such as cluster or cluster-snapshot, that the returned
     * categories belong to.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type, such as cluster or cluster-snapshot, that the returned
     * categories belong to.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type, such as cluster or cluster-snapshot, that the returned
     * categories belong to.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type, such as cluster or cluster-snapshot, that the returned
     * categories belong to.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type, such as cluster or cluster-snapshot, that the returned
     * categories belong to.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type, such as cluster or cluster-snapshot, that the returned
     * categories belong to.</p>
     */
    inline EventCategoriesMap& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type, such as cluster or cluster-snapshot, that the returned
     * categories belong to.</p>
     */
    inline EventCategoriesMap& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type, such as cluster or cluster-snapshot, that the returned
     * categories belong to.</p>
     */
    inline EventCategoriesMap& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The events in the event category.</p>
     */
    inline const Aws::Vector<EventInfoMap>& GetEvents() const{ return m_events; }

    /**
     * <p>The events in the event category.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>The events in the event category.</p>
     */
    inline void SetEvents(const Aws::Vector<EventInfoMap>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The events in the event category.</p>
     */
    inline void SetEvents(Aws::Vector<EventInfoMap>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>The events in the event category.</p>
     */
    inline EventCategoriesMap& WithEvents(const Aws::Vector<EventInfoMap>& value) { SetEvents(value); return *this;}

    /**
     * <p>The events in the event category.</p>
     */
    inline EventCategoriesMap& WithEvents(Aws::Vector<EventInfoMap>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The events in the event category.</p>
     */
    inline EventCategoriesMap& AddEvents(const EventInfoMap& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The events in the event category.</p>
     */
    inline EventCategoriesMap& AddEvents(EventInfoMap&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::Vector<EventInfoMap> m_events;
    bool m_eventsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
