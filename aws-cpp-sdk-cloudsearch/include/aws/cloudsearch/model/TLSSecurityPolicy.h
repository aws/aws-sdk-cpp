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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{
  enum class TLSSecurityPolicy
  {
    NOT_SET,
    Policy_Min_TLS_1_0_2019_07,
    Policy_Min_TLS_1_2_2019_07
  };

namespace TLSSecurityPolicyMapper
{
AWS_CLOUDSEARCH_API TLSSecurityPolicy GetTLSSecurityPolicyForName(const Aws::String& name);

AWS_CLOUDSEARCH_API Aws::String GetNameForTLSSecurityPolicy(TLSSecurityPolicy value);
} // namespace TLSSecurityPolicyMapper
} // namespace Model
} // namespace CloudSearch
} // namespace Aws
