/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
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
namespace Health
{
namespace Model
{

  /**
   * <p>Error information returned when a <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetails.html">DescribeEventDetails</a>
   * operation can't find a specified event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EventDetailsErrorItem">AWS
   * API Reference</a></p>
   */
  class EventDetailsErrorItem
  {
  public:
    AWS_HEALTH_API EventDetailsErrorItem();
    AWS_HEALTH_API EventDetailsErrorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API EventDetailsErrorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::move(value); }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline EventDetailsErrorItem& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline EventDetailsErrorItem& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline EventDetailsErrorItem& WithEventArn(const char* value) { SetEventArn(value); return *this;}


    /**
     * <p>The name of the error.</p>
     */
    inline const Aws::String& GetErrorName() const{ return m_errorName; }

    /**
     * <p>The name of the error.</p>
     */
    inline bool ErrorNameHasBeenSet() const { return m_errorNameHasBeenSet; }

    /**
     * <p>The name of the error.</p>
     */
    inline void SetErrorName(const Aws::String& value) { m_errorNameHasBeenSet = true; m_errorName = value; }

    /**
     * <p>The name of the error.</p>
     */
    inline void SetErrorName(Aws::String&& value) { m_errorNameHasBeenSet = true; m_errorName = std::move(value); }

    /**
     * <p>The name of the error.</p>
     */
    inline void SetErrorName(const char* value) { m_errorNameHasBeenSet = true; m_errorName.assign(value); }

    /**
     * <p>The name of the error.</p>
     */
    inline EventDetailsErrorItem& WithErrorName(const Aws::String& value) { SetErrorName(value); return *this;}

    /**
     * <p>The name of the error.</p>
     */
    inline EventDetailsErrorItem& WithErrorName(Aws::String&& value) { SetErrorName(std::move(value)); return *this;}

    /**
     * <p>The name of the error.</p>
     */
    inline EventDetailsErrorItem& WithErrorName(const char* value) { SetErrorName(value); return *this;}


    /**
     * <p>A message that describes the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message that describes the error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message that describes the error.</p>
     */
    inline EventDetailsErrorItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message that describes the error.</p>
     */
    inline EventDetailsErrorItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message that describes the error.</p>
     */
    inline EventDetailsErrorItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    Aws::String m_errorName;
    bool m_errorNameHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
