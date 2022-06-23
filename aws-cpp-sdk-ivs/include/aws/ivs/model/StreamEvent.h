/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying a stream’s events. For a list of events, see <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
   * Amazon EventBridge with Amazon IVS</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StreamEvent">AWS API
   * Reference</a></p>
   */
  class AWS_IVS_API StreamEvent
  {
  public:
    StreamEvent();
    StreamEvent(Aws::Utils::Json::JsonView jsonValue);
    StreamEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>UTC ISO-8601 formatted timestamp of when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>UTC ISO-8601 formatted timestamp of when the event occurred.</p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p>UTC ISO-8601 formatted timestamp of when the event occurred.</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>UTC ISO-8601 formatted timestamp of when the event occurred.</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>UTC ISO-8601 formatted timestamp of when the event occurred.</p>
     */
    inline StreamEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>UTC ISO-8601 formatted timestamp of when the event occurred.</p>
     */
    inline StreamEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}


    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline StreamEvent& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline StreamEvent& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline StreamEvent& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Logical group for certain events.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Logical group for certain events.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Logical group for certain events.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Logical group for certain events.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Logical group for certain events.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Logical group for certain events.</p>
     */
    inline StreamEvent& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Logical group for certain events.</p>
     */
    inline StreamEvent& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Logical group for certain events.</p>
     */
    inline StreamEvent& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
