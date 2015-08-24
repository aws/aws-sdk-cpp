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

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSAllocator.h>

#include <string>

namespace Aws
{

typedef std::basic_string< char, std::char_traits< char >, Aws::Allocator< char > > String;

#ifdef _WIN32
typedef std::basic_string< wchar_t, std::char_traits< wchar_t >, Aws::Allocator< wchar_t > > WString;
#endif

} // namespace Aws
