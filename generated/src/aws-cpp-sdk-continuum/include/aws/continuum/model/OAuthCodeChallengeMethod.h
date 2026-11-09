/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class OAuthCodeChallengeMethod { NOT_SET, S256 };

namespace OAuthCodeChallengeMethodMapper {
AWS_CONTINUUM_API OAuthCodeChallengeMethod GetOAuthCodeChallengeMethodForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForOAuthCodeChallengeMethod(OAuthCodeChallengeMethod value);
}  // namespace OAuthCodeChallengeMethodMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
