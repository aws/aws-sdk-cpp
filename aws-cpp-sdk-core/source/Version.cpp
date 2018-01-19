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

#include <aws/core/Version.h>
#include <aws/core/VersionConfig.h>

namespace Aws
{
namespace Version
{
  const char* GetVersionString()
  {
    return AWS_SDK_VERSION_STRING;
  }

  unsigned GetVersionMajor()
  {
    return AWS_SDK_VERSION_MAJOR;
  }

  unsigned GetVersionMinor()
  {
    return AWS_SDK_VERSION_MINOR;
  }

  unsigned GetVersionPatch()
  {
    return AWS_SDK_VERSION_PATCH;
  }
} //namespace Version
} //namespace Aws


