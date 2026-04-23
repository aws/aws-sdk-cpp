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
   * <p>Describes event information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EventInfoMap">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API EventInfoMap
  {
  public:
    EventInfoMap();
    EventInfoMap(const Aws::Utils::Xml::XmlNode& xmlNode);
    EventInfoMap& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>The category of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }


    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline const Aws::String& GetEventDescription() const{ return m_eventDescription; }

    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline bool EventDescriptionHasBeenSet() const { return m_eventDescriptionHasBeenSet; }

    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline void SetEventDescription(const Aws::String& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = value; }

    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline void SetEventDescription(Aws::String&& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = std::move(value); }

    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline void SetEventDescription(const char* value) { m_eventDescriptionHasBeenSet = true; m_eventDescription.assign(value); }

    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& WithEventDescription(const Aws::String& value) { SetEventDescription(value); return *this;}

    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& WithEventDescription(Aws::String&& value) { SetEventDescription(std::move(value)); return *this;}

    /**
     * <p>The description of an Amazon Redshift event.</p>
     */
    inline EventInfoMap& WithEventDescription(const char* value) { SetEventDescription(value); return *this;}


    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline EventInfoMap& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline EventInfoMap& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>The severity of the event.</p> <p>Values: ERROR, INFO</p>
     */
    inline EventInfoMap& WithSeverity(const char* value) { SetSeverity(value); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet;

    Aws::String m_eventDescription;
    bool m_eventDescriptionHasBeenSet;

    Aws::String m_severity;
    bool m_severityHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
