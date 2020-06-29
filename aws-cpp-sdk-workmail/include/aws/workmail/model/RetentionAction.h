/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class RetentionAction
  {
    NOT_SET,
    NONE,
    DELETE_,
    PERMANENTLY_DELETE
  };

namespace RetentionActionMapper
{
AWS_WORKMAIL_API RetentionAction GetRetentionActionForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForRetentionAction(RetentionAction value);
} // namespace RetentionActionMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
