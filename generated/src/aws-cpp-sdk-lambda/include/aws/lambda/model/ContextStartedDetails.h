/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Details about a context that has started.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ContextStartedDetails">AWS
 * API Reference</a></p>
 */
class ContextStartedDetails {
 public:
  AWS_LAMBDA_API ContextStartedDetails() = default;
  AWS_LAMBDA_API ContextStartedDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ContextStartedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
