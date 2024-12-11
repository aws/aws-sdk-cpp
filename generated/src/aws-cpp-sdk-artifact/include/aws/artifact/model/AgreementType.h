/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Artifact
{
namespace Model
{
  enum class AgreementType
  {
    NOT_SET,
    CUSTOM,
    DEFAULT,
    MODIFIED
  };

namespace AgreementTypeMapper
{
AWS_ARTIFACT_API AgreementType GetAgreementTypeForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForAgreementType(AgreementType value);
} // namespace AgreementTypeMapper
} // namespace Model
} // namespace Artifact
} // namespace Aws
