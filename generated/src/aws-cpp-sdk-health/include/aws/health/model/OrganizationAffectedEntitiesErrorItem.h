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
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
   * operation can't find or process a specific entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/OrganizationAffectedEntitiesErrorItem">AWS
   * API Reference</a></p>
   */
  class OrganizationAffectedEntitiesErrorItem
  {
  public:
    AWS_HEALTH_API OrganizationAffectedEntitiesErrorItem() = default;
    AWS_HEALTH_API OrganizationAffectedEntitiesErrorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API OrganizationAffectedEntitiesErrorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    OrganizationAffectedEntitiesErrorItem& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
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
    inline const Aws::String& GetEventArn() const { return m_eventArn; }
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }
    template<typename EventArnT = Aws::String>
    void SetEventArn(EventArnT&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::forward<EventArnT>(value); }
    template<typename EventArnT = Aws::String>
    OrganizationAffectedEntitiesErrorItem& WithEventArn(EventArnT&& value) { SetEventArn(std::forward<EventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the error.</p>
     */
    inline const Aws::String& GetErrorName() const { return m_errorName; }
    inline bool ErrorNameHasBeenSet() const { return m_errorNameHasBeenSet; }
    template<typename ErrorNameT = Aws::String>
    void SetErrorName(ErrorNameT&& value) { m_errorNameHasBeenSet = true; m_errorName = std::forward<ErrorNameT>(value); }
    template<typename ErrorNameT = Aws::String>
    OrganizationAffectedEntitiesErrorItem& WithErrorName(ErrorNameT&& value) { SetErrorName(std::forward<ErrorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the error. Follow the error message and retry your
     * request.</p> <p>For example, the <code>InvalidAccountInputError</code> error
     * message appears if you call the
     * <code>DescribeAffectedEntitiesForOrganization</code> operation and specify the
     * <code>AccountSpecific</code> value for the <code>EventScopeCode</code>
     * parameter, but don't specify an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    OrganizationAffectedEntitiesErrorItem& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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
