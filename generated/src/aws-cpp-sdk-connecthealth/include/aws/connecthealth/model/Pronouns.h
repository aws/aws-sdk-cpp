/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class Pronouns { NOT_SET, HE_HIM, SHE_HER, THEY_THEM };

namespace PronounsMapper {
AWS_CONNECTHEALTH_API Pronouns GetPronounsForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForPronouns(Pronouns value);
}  // namespace PronounsMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
