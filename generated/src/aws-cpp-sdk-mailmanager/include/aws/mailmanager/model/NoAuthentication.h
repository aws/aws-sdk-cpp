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
   * <p>Explicitly indicate that the relay destination server does not require SMTP
   * credential authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/NoAuthentication">AWS
   * API Reference</a></p>
   */
  class NoAuthentication
  {
  public:
    AWS_MAILMANAGER_API NoAuthentication() = default;
    AWS_MAILMANAGER_API NoAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API NoAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
