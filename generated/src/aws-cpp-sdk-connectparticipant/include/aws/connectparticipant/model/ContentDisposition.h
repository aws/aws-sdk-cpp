/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectParticipant {
namespace Model {
enum class ContentDisposition { NOT_SET, INLINE, ATTACHMENT };

namespace ContentDispositionMapper {
AWS_CONNECTPARTICIPANT_API ContentDisposition GetContentDispositionForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForContentDisposition(ContentDisposition value);
}  // namespace ContentDispositionMapper
}  // namespace Model
}  // namespace ConnectParticipant
}  // namespace Aws
