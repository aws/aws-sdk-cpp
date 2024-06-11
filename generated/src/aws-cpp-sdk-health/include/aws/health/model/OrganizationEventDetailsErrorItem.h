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
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetailsForOrganization.html">DescribeEventDetailsForOrganization</a>
   * operation can't find a specified event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/OrganizationEventDetailsErrorItem">AWS
   * API Reference</a></p>
   */
  class OrganizationEventDetailsErrorItem
  {
  public:
    AWS_HEALTH_API OrganizationEventDetailsErrorItem();
    AWS_HEALTH_API OrganizationEventDetailsErrorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API OrganizationEventDetailsErrorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error information returned when a <a
     * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetailsForOrganization.html">DescribeEventDetailsForOrganization</a>
     * operation can't find a specified event.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline OrganizationEventDetailsErrorItem& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline OrganizationEventDetailsErrorItem& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline OrganizationEventDetailsErrorItem& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::move(value); }
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }
    inline OrganizationEventDetailsErrorItem& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}
    inline OrganizationEventDetailsErrorItem& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}
    inline OrganizationEventDetailsErrorItem& WithEventArn(const char* value) { SetEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the error.</p>
     */
    inline const Aws::String& GetErrorName() const{ return m_errorName; }
    inline bool ErrorNameHasBeenSet() const { return m_errorNameHasBeenSet; }
    inline void SetErrorName(const Aws::String& value) { m_errorNameHasBeenSet = true; m_errorName = value; }
    inline void SetErrorName(Aws::String&& value) { m_errorNameHasBeenSet = true; m_errorName = std::move(value); }
    inline void SetErrorName(const char* value) { m_errorNameHasBeenSet = true; m_errorName.assign(value); }
    inline OrganizationEventDetailsErrorItem& WithErrorName(const Aws::String& value) { SetErrorName(value); return *this;}
    inline OrganizationEventDetailsErrorItem& WithErrorName(Aws::String&& value) { SetErrorName(std::move(value)); return *this;}
    inline OrganizationEventDetailsErrorItem& WithErrorName(const char* value) { SetErrorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the error.</p> <p>If you call the
     * <code>DescribeEventDetailsForOrganization</code> operation and receive one of
     * the following errors, follow the recommendations in the message:</p> <ul> <li>
     * <p>We couldn't find a public event that matches your request. To find an event
     * that is account specific, you must enter an Amazon Web Services account ID in
     * the request.</p> </li> <li> <p>We couldn't find an account specific event for
     * the specified Amazon Web Services account. To find an event that is public, you
     * must enter a null value for the Amazon Web Services account ID in the
     * request.</p> </li> <li> <p>Your Amazon Web Services account doesn't include the
     * Amazon Web Services Support plan required to use the Health API. You must have
     * either a Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline OrganizationEventDetailsErrorItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline OrganizationEventDetailsErrorItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline OrganizationEventDetailsErrorItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

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
