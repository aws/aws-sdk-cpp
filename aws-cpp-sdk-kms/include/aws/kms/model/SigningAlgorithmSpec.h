/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{
  enum class SigningAlgorithmSpec
  {
    NOT_SET,
    RSASSA_PSS_SHA_256,
    RSASSA_PSS_SHA_384,
    RSASSA_PSS_SHA_512,
    RSASSA_PKCS1_V1_5_SHA_256,
    RSASSA_PKCS1_V1_5_SHA_384,
    RSASSA_PKCS1_V1_5_SHA_512,
    ECDSA_SHA_256,
    ECDSA_SHA_384,
    ECDSA_SHA_512
  };

namespace SigningAlgorithmSpecMapper
{
AWS_KMS_API SigningAlgorithmSpec GetSigningAlgorithmSpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForSigningAlgorithmSpec(SigningAlgorithmSpec value);
} // namespace SigningAlgorithmSpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
