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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class ExtendedKeyUsageName
  {
    NOT_SET,
    TLS_WEB_SERVER_AUTHENTICATION,
    TLS_WEB_CLIENT_AUTHENTICATION,
    CODE_SIGNING,
    EMAIL_PROTECTION,
    TIME_STAMPING,
    OCSP_SIGNING,
    IPSEC_END_SYSTEM,
    IPSEC_TUNNEL,
    IPSEC_USER,
    ANY,
    NONE,
    CUSTOM
  };

namespace ExtendedKeyUsageNameMapper
{
AWS_ACM_API ExtendedKeyUsageName GetExtendedKeyUsageNameForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForExtendedKeyUsageName(ExtendedKeyUsageName value);
} // namespace ExtendedKeyUsageNameMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
