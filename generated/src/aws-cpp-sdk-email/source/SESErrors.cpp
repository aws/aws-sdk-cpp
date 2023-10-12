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

static constexpr uint32_t CONFIGURATION_SET_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ConfigurationSetDoesNotExist");
static constexpr uint32_t INVALID_FIREHOSE_DESTINATION_HASH = ConstExprHashingUtils::HashString("InvalidFirehoseDestination");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceeded");
static constexpr uint32_t INVALID_TRACKING_OPTIONS_HASH = ConstExprHashingUtils::HashString("InvalidTrackingOptions");
static constexpr uint32_t INVALID_SNS_TOPIC_HASH = ConstExprHashingUtils::HashString("InvalidSnsTopic");
static constexpr uint32_t PRODUCTION_ACCESS_NOT_GRANTED_HASH = ConstExprHashingUtils::HashString("ProductionAccessNotGranted");
static constexpr uint32_t TRACKING_OPTIONS_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("TrackingOptionsDoesNotExistException");
static constexpr uint32_t CONFIGURATION_SET_SENDING_PAUSED_HASH = ConstExprHashingUtils::HashString("ConfigurationSetSendingPausedException");
static constexpr uint32_t INVALID_S3_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidS3Configuration");
static constexpr uint32_t EVENT_DESTINATION_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("EventDestinationDoesNotExist");
static constexpr uint32_t TEMPLATE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("TemplateDoesNotExist");
static constexpr uint32_t MISSING_RENDERING_ATTRIBUTE_HASH = ConstExprHashingUtils::HashString("MissingRenderingAttribute");
static constexpr uint32_t CONFIGURATION_SET_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ConfigurationSetAlreadyExists");
static constexpr uint32_t INVALID_DELIVERY_OPTIONS_HASH = ConstExprHashingUtils::HashString("InvalidDeliveryOptions");
static constexpr uint32_t EVENT_DESTINATION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("EventDestinationAlreadyExists");
static constexpr uint32_t CUSTOM_VERIFICATION_EMAIL_TEMPLATE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("CustomVerificationEmailTemplateDoesNotExist");
static constexpr uint32_t INVALID_LAMBDA_FUNCTION_HASH = ConstExprHashingUtils::HashString("InvalidLambdaFunction");
static constexpr uint32_t ACCOUNT_SENDING_PAUSED_HASH = ConstExprHashingUtils::HashString("AccountSendingPausedException");
static constexpr uint32_t INVALID_CONFIGURATION_SET_HASH = ConstExprHashingUtils::HashString("InvalidConfigurationSet");
static constexpr uint32_t INVALID_CLOUD_WATCH_DESTINATION_HASH = ConstExprHashingUtils::HashString("InvalidCloudWatchDestination");
static constexpr uint32_t INVALID_POLICY_HASH = ConstExprHashingUtils::HashString("InvalidPolicy");
static constexpr uint32_t INVALID_RENDERING_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidRenderingParameter");
static constexpr uint32_t INVALID_S_N_S_DESTINATION_HASH = ConstExprHashingUtils::HashString("InvalidSNSDestination");
static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AlreadyExists");
static constexpr uint32_t TRACKING_OPTIONS_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("TrackingOptionsAlreadyExistsException");
static constexpr uint32_t INVALID_TEMPLATE_HASH = ConstExprHashingUtils::HashString("InvalidTemplate");
static constexpr uint32_t CUSTOM_VERIFICATION_EMAIL_INVALID_CONTENT_HASH = ConstExprHashingUtils::HashString("CustomVerificationEmailInvalidContent");
static constexpr uint32_t MESSAGE_REJECTED_HASH = ConstExprHashingUtils::HashString("MessageRejected");
static constexpr uint32_t FROM_EMAIL_ADDRESS_NOT_VERIFIED_HASH = ConstExprHashingUtils::HashString("FromEmailAddressNotVerified");
static constexpr uint32_t MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH = ConstExprHashingUtils::HashString("MailFromDomainNotVerifiedException");
static constexpr uint32_t CANNOT_DELETE_HASH = ConstExprHashingUtils::HashString("CannotDelete");
static constexpr uint32_t RULE_SET_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("RuleSetDoesNotExist");
static constexpr uint32_t CUSTOM_VERIFICATION_EMAIL_TEMPLATE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("CustomVerificationEmailTemplateAlreadyExists");
static constexpr uint32_t RULE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("RuleDoesNotExist");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
