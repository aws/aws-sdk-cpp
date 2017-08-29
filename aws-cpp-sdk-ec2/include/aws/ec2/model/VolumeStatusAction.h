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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a volume status operation code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeStatusAction">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VolumeStatusAction
  {
  public:
    VolumeStatusAction();
    VolumeStatusAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    VolumeStatusAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The code identifying the operation, for example,
     * <code>enable-volume-io</code>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The code identifying the operation, for example,
     * <code>enable-volume-io</code>.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code identifying the operation, for example,
     * <code>enable-volume-io</code>.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code identifying the operation, for example,
     * <code>enable-volume-io</code>.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The code identifying the operation, for example,
     * <code>enable-volume-io</code>.</p>
     */
    inline VolumeStatusAction& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The code identifying the operation, for example,
     * <code>enable-volume-io</code>.</p>
     */
    inline VolumeStatusAction& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The code identifying the operation, for example,
     * <code>enable-volume-io</code>.</p>
     */
    inline VolumeStatusAction& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A description of the operation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the operation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the operation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the operation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the operation.</p>
     */
    inline VolumeStatusAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the operation.</p>
     */
    inline VolumeStatusAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the operation.</p>
     */
    inline VolumeStatusAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the event associated with this operation.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the event associated with this operation.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event associated with this operation.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The ID of the event associated with this operation.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The ID of the event associated with this operation.</p>
     */
    inline VolumeStatusAction& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event associated with this operation.</p>
     */
    inline VolumeStatusAction& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event associated with this operation.</p>
     */
    inline VolumeStatusAction& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The event type associated with this operation.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>The event type associated with this operation.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The event type associated with this operation.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The event type associated with this operation.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>The event type associated with this operation.</p>
     */
    inline VolumeStatusAction& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>The event type associated with this operation.</p>
     */
    inline VolumeStatusAction& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>The event type associated with this operation.</p>
     */
    inline VolumeStatusAction& WithEventType(const char* value) { SetEventType(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
