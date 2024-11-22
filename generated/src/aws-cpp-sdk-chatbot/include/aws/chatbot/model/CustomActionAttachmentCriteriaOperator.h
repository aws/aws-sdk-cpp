/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace chatbot
{
namespace Model
{
  enum class CustomActionAttachmentCriteriaOperator
  {
    NOT_SET,
    HAS_VALUE,
    EQUALS
  };

namespace CustomActionAttachmentCriteriaOperatorMapper
{
AWS_CHATBOT_API CustomActionAttachmentCriteriaOperator GetCustomActionAttachmentCriteriaOperatorForName(const Aws::String& name);

AWS_CHATBOT_API Aws::String GetNameForCustomActionAttachmentCriteriaOperator(CustomActionAttachmentCriteriaOperator value);
} // namespace CustomActionAttachmentCriteriaOperatorMapper
} // namespace Model
} // namespace chatbot
} // namespace Aws
