/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/email/SESErrors.h>
#include <aws/email/model/ConfigurationSetDoesNotExistException.h>
#include <aws/email/model/InvalidFirehoseDestinationException.h>
#include <aws/email/model/InvalidSnsTopicException.h>
#include <aws/email/model/TrackingOptionsDoesNotExistException.h>
#include <aws/email/model/ConfigurationSetSendingPausedException.h>
#include <aws/email/model/InvalidS3ConfigurationException.h>
#include <aws/email/model/EventDestinationDoesNotExistException.h>
#include <aws/email/model/TemplateDoesNotExistException.h>
#include <aws/email/model/MissingRenderingAttributeException.h>
#include <aws/email/model/ConfigurationSetAlreadyExistsException.h>
#include <aws/email/model/EventDestinationAlreadyExistsException.h>
#include <aws/email/model/CustomVerificationEmailTemplateDoesNotExistException.h>
#include <aws/email/model/InvalidLambdaFunctionException.h>
#include <aws/email/model/InvalidCloudWatchDestinationException.h>
#include <aws/email/model/InvalidRenderingParameterException.h>
#include <aws/email/model/InvalidSNSDestinationException.h>
#include <aws/email/model/AlreadyExistsException.h>
#include <aws/email/model/TrackingOptionsAlreadyExistsException.h>
#include <aws/email/model/InvalidTemplateException.h>
#include <aws/email/model/FromEmailAddressNotVerifiedException.h>
#include <aws/email/model/CannotDeleteException.h>
#include <aws/email/model/RuleSetDoesNotExistException.h>
#include <aws/email/model/CustomVerificationEmailTemplateAlreadyExistsException.h>
#include <aws/email/model/RuleDoesNotExistException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SES;
using namespace Aws::SES::Model;

namespace Aws
{
namespace SES
{
template<> AWS_SES_API ConfigurationSetDoesNotExistException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::CONFIGURATION_SET_DOES_NOT_EXIST);
  return ConfigurationSetDoesNotExistException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API InvalidFirehoseDestinationException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::INVALID_FIREHOSE_DESTINATION);
  return InvalidFirehoseDestinationException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API InvalidSnsTopicException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::INVALID_SNS_TOPIC);
  return InvalidSnsTopicException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API TrackingOptionsDoesNotExistException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::TRACKING_OPTIONS_DOES_NOT_EXIST);
  return TrackingOptionsDoesNotExistException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API ConfigurationSetSendingPausedException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::CONFIGURATION_SET_SENDING_PAUSED);
  return ConfigurationSetSendingPausedException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API InvalidS3ConfigurationException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::INVALID_S3_CONFIGURATION);
  return InvalidS3ConfigurationException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API EventDestinationDoesNotExistException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::EVENT_DESTINATION_DOES_NOT_EXIST);
  return EventDestinationDoesNotExistException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API TemplateDoesNotExistException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::TEMPLATE_DOES_NOT_EXIST);
  return TemplateDoesNotExistException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API MissingRenderingAttributeException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::MISSING_RENDERING_ATTRIBUTE);
  return MissingRenderingAttributeException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API ConfigurationSetAlreadyExistsException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::CONFIGURATION_SET_ALREADY_EXISTS);
  return ConfigurationSetAlreadyExistsException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API EventDestinationAlreadyExistsException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::EVENT_DESTINATION_ALREADY_EXISTS);
  return EventDestinationAlreadyExistsException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API CustomVerificationEmailTemplateDoesNotExistException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::CUSTOM_VERIFICATION_EMAIL_TEMPLATE_DOES_NOT_EXIST);
  return CustomVerificationEmailTemplateDoesNotExistException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API InvalidLambdaFunctionException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::INVALID_LAMBDA_FUNCTION);
  return InvalidLambdaFunctionException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API InvalidCloudWatchDestinationException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::INVALID_CLOUD_WATCH_DESTINATION);
  return InvalidCloudWatchDestinationException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API InvalidRenderingParameterException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::INVALID_RENDERING_PARAMETER);
  return InvalidRenderingParameterException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API InvalidSNSDestinationException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::INVALID_S_N_S_DESTINATION);
  return InvalidSNSDestinationException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API AlreadyExistsException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::ALREADY_EXISTS);
  return AlreadyExistsException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API TrackingOptionsAlreadyExistsException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::TRACKING_OPTIONS_ALREADY_EXISTS);
  return TrackingOptionsAlreadyExistsException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API InvalidTemplateException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::INVALID_TEMPLATE);
  return InvalidTemplateException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API FromEmailAddressNotVerifiedException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::FROM_EMAIL_ADDRESS_NOT_VERIFIED);
  return FromEmailAddressNotVerifiedException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API CannotDeleteException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::CANNOT_DELETE);
  return CannotDeleteException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API RuleSetDoesNotExistException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::RULE_SET_DOES_NOT_EXIST);
  return RuleSetDoesNotExistException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API CustomVerificationEmailTemplateAlreadyExistsException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::CUSTOM_VERIFICATION_EMAIL_TEMPLATE_ALREADY_EXISTS);
  return CustomVerificationEmailTemplateAlreadyExistsException(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SES_API RuleDoesNotExistException SESError::GetModeledError()
{
  assert(this->GetErrorType() == SESErrors::RULE_DOES_NOT_EXIST);
  return RuleDoesNotExistException(this->GetXmlPayload().GetRootElement());
}

namespace SESErrorMapper
{

static const int CONFIGURATION_SET_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ConfigurationSetDoesNotExist");
static const int INVALID_FIREHOSE_DESTINATION_HASH = HashingUtils::HashString("InvalidFirehoseDestination");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceeded");
static const int INVALID_TRACKING_OPTIONS_HASH = HashingUtils::HashString("InvalidTrackingOptions");
static const int INVALID_SNS_TOPIC_HASH = HashingUtils::HashString("InvalidSnsTopic");
static const int PRODUCTION_ACCESS_NOT_GRANTED_HASH = HashingUtils::HashString("ProductionAccessNotGranted");
static const int TRACKING_OPTIONS_DOES_NOT_EXIST_HASH = HashingUtils::HashString("TrackingOptionsDoesNotExistException");
static const int CONFIGURATION_SET_SENDING_PAUSED_HASH = HashingUtils::HashString("ConfigurationSetSendingPausedException");
static const int INVALID_S3_CONFIGURATION_HASH = HashingUtils::HashString("InvalidS3Configuration");
static const int EVENT_DESTINATION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("EventDestinationDoesNotExist");
static const int TEMPLATE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("TemplateDoesNotExist");
static const int MISSING_RENDERING_ATTRIBUTE_HASH = HashingUtils::HashString("MissingRenderingAttribute");
static const int CONFIGURATION_SET_ALREADY_EXISTS_HASH = HashingUtils::HashString("ConfigurationSetAlreadyExists");
static const int INVALID_DELIVERY_OPTIONS_HASH = HashingUtils::HashString("InvalidDeliveryOptions");
static const int EVENT_DESTINATION_ALREADY_EXISTS_HASH = HashingUtils::HashString("EventDestinationAlreadyExists");
static const int CUSTOM_VERIFICATION_EMAIL_TEMPLATE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("CustomVerificationEmailTemplateDoesNotExist");
static const int INVALID_LAMBDA_FUNCTION_HASH = HashingUtils::HashString("InvalidLambdaFunction");
static const int ACCOUNT_SENDING_PAUSED_HASH = HashingUtils::HashString("AccountSendingPausedException");
static const int INVALID_CONFIGURATION_SET_HASH = HashingUtils::HashString("InvalidConfigurationSet");
static const int INVALID_CLOUD_WATCH_DESTINATION_HASH = HashingUtils::HashString("InvalidCloudWatchDestination");
static const int INVALID_POLICY_HASH = HashingUtils::HashString("InvalidPolicy");
static const int INVALID_RENDERING_PARAMETER_HASH = HashingUtils::HashString("InvalidRenderingParameter");
static const int INVALID_S_N_S_DESTINATION_HASH = HashingUtils::HashString("InvalidSNSDestination");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExists");
static const int TRACKING_OPTIONS_ALREADY_EXISTS_HASH = HashingUtils::HashString("TrackingOptionsAlreadyExistsException");
static const int INVALID_TEMPLATE_HASH = HashingUtils::HashString("InvalidTemplate");
static const int CUSTOM_VERIFICATION_EMAIL_INVALID_CONTENT_HASH = HashingUtils::HashString("CustomVerificationEmailInvalidContent");
static const int MESSAGE_REJECTED_HASH = HashingUtils::HashString("MessageRejected");
static const int FROM_EMAIL_ADDRESS_NOT_VERIFIED_HASH = HashingUtils::HashString("FromEmailAddressNotVerified");
static const int MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH = HashingUtils::HashString("MailFromDomainNotVerifiedException");
static const int CANNOT_DELETE_HASH = HashingUtils::HashString("CannotDelete");
static const int RULE_SET_DOES_NOT_EXIST_HASH = HashingUtils::HashString("RuleSetDoesNotExist");
static const int CUSTOM_VERIFICATION_EMAIL_TEMPLATE_ALREADY_EXISTS_HASH = HashingUtils::HashString("CustomVerificationEmailTemplateAlreadyExists");
static const int RULE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("RuleDoesNotExist");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFIGURATION_SET_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::CONFIGURATION_SET_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_FIREHOSE_DESTINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_FIREHOSE_DESTINATION), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_TRACKING_OPTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_TRACKING_OPTIONS), false);
  }
  else if (hashCode == INVALID_SNS_TOPIC_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_SNS_TOPIC), false);
  }
  else if (hashCode == PRODUCTION_ACCESS_NOT_GRANTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::PRODUCTION_ACCESS_NOT_GRANTED), false);
  }
  else if (hashCode == TRACKING_OPTIONS_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::TRACKING_OPTIONS_DOES_NOT_EXIST), false);
  }
  else if (hashCode == CONFIGURATION_SET_SENDING_PAUSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::CONFIGURATION_SET_SENDING_PAUSED), false);
  }
  else if (hashCode == INVALID_S3_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_S3_CONFIGURATION), false);
  }
  else if (hashCode == EVENT_DESTINATION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::EVENT_DESTINATION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == TEMPLATE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::TEMPLATE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == MISSING_RENDERING_ATTRIBUTE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::MISSING_RENDERING_ATTRIBUTE), false);
  }
  else if (hashCode == CONFIGURATION_SET_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::CONFIGURATION_SET_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_DELIVERY_OPTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_DELIVERY_OPTIONS), false);
  }
  else if (hashCode == EVENT_DESTINATION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::EVENT_DESTINATION_ALREADY_EXISTS), false);
  }
  else if (hashCode == CUSTOM_VERIFICATION_EMAIL_TEMPLATE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::CUSTOM_VERIFICATION_EMAIL_TEMPLATE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_LAMBDA_FUNCTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_LAMBDA_FUNCTION), false);
  }
  else if (hashCode == ACCOUNT_SENDING_PAUSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::ACCOUNT_SENDING_PAUSED), false);
  }
  else if (hashCode == INVALID_CONFIGURATION_SET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_CONFIGURATION_SET), false);
  }
  else if (hashCode == INVALID_CLOUD_WATCH_DESTINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_CLOUD_WATCH_DESTINATION), false);
  }
  else if (hashCode == INVALID_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_POLICY), false);
  }
  else if (hashCode == INVALID_RENDERING_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_RENDERING_PARAMETER), false);
  }
  else if (hashCode == INVALID_S_N_S_DESTINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_S_N_S_DESTINATION), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == TRACKING_OPTIONS_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::TRACKING_OPTIONS_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_TEMPLATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::INVALID_TEMPLATE), false);
  }
  else if (hashCode == CUSTOM_VERIFICATION_EMAIL_INVALID_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::CUSTOM_VERIFICATION_EMAIL_INVALID_CONTENT), false);
  }
  else if (hashCode == MESSAGE_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::MESSAGE_REJECTED), false);
  }
  else if (hashCode == FROM_EMAIL_ADDRESS_NOT_VERIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::FROM_EMAIL_ADDRESS_NOT_VERIFIED), false);
  }
  else if (hashCode == MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::MAIL_FROM_DOMAIN_NOT_VERIFIED), false);
  }
  else if (hashCode == CANNOT_DELETE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::CANNOT_DELETE), false);
  }
  else if (hashCode == RULE_SET_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::RULE_SET_DOES_NOT_EXIST), false);
  }
  else if (hashCode == CUSTOM_VERIFICATION_EMAIL_TEMPLATE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::CUSTOM_VERIFICATION_EMAIL_TEMPLATE_ALREADY_EXISTS), false);
  }
  else if (hashCode == RULE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::RULE_DOES_NOT_EXIST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SESErrorMapper
} // namespace SES
} // namespace Aws
