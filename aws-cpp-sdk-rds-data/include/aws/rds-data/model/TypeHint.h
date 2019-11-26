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
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDSDataService
{
namespace Model
{
  enum class TypeHint
  {
    NOT_SET,
    DATE,
    DECIMAL,
    TIME,
    TIMESTAMP
  };

namespace TypeHintMapper
{
AWS_RDSDATASERVICE_API TypeHint GetTypeHintForName(const Aws::String& name);

AWS_RDSDATASERVICE_API Aws::String GetNameForTypeHint(TypeHint value);
} // namespace TypeHintMapper
} // namespace Model
} // namespace RDSDataService
} // namespace Aws
