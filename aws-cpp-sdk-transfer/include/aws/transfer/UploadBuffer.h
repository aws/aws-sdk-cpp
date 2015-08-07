
/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/utils/Array.h>

namespace Aws
{
namespace Transfer
{

// may change to a different class or an AWS version of std::array<uint8_t, 5M>
using UploadBuffer = Aws::Utils::Array<uint8_t>;

static const uint32_t UPLOAD_BUFFER_SIZE = 5 * 1024 * 1024;

} // namespace Transfer
} // namespace Aws
