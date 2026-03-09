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
enum class MedicalScribeMediaEncoding { NOT_SET, pcm, flac };

namespace MedicalScribeMediaEncodingMapper {
AWS_CONNECTHEALTH_API MedicalScribeMediaEncoding GetMedicalScribeMediaEncodingForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForMedicalScribeMediaEncoding(MedicalScribeMediaEncoding value);
}  // namespace MedicalScribeMediaEncodingMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
