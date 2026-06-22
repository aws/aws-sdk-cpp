/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Specifies that logging is disabled for the MicroVM.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/LoggingDisabled">AWS
 * API Reference</a></p>
 */
class LoggingDisabled {
 public:
  AWS_LAMBDAMICROVMS_API LoggingDisabled() = default;
  AWS_LAMBDAMICROVMS_API LoggingDisabled(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API LoggingDisabled& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
