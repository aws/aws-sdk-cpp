/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace MailManager {
namespace Model {

/**
 * <p>This action causes processing to stop and the email to be dropped. If the
 * action applies only to certain recipients, only those recipients are dropped,
 * and processing continues for other recipients.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DropAction">AWS
 * API Reference</a></p>
 */
class DropAction {
 public:
  AWS_MAILMANAGER_API DropAction() = default;
  AWS_MAILMANAGER_API DropAction(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API DropAction& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
