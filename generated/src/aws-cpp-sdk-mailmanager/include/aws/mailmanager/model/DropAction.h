/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>

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
namespace MailManager
{
namespace Model
{

  /**
   * <p>This action causes processing to stop and the email to be dropped. If the
   * action applies only to certain recipients, only those recipients are dropped,
   * and processing continues for other recipients.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DropAction">AWS
   * API Reference</a></p>
   */
  class DropAction
  {
  public:
    AWS_MAILMANAGER_API DropAction() = default;
    AWS_MAILMANAGER_API DropAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API DropAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
