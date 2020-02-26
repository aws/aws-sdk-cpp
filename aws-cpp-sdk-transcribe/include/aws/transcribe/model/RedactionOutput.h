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
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{
  enum class RedactionOutput
  {
    NOT_SET,
    redacted,
    redacted_and_unredacted
  };

namespace RedactionOutputMapper
{
AWS_TRANSCRIBESERVICE_API RedactionOutput GetRedactionOutputForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForRedactionOutput(RedactionOutput value);
} // namespace RedactionOutputMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
