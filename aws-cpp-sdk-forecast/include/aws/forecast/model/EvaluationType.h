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
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ForecastService
{
namespace Model
{
  enum class EvaluationType
  {
    NOT_SET,
    SUMMARY,
    COMPUTED
  };

namespace EvaluationTypeMapper
{
AWS_FORECASTSERVICE_API EvaluationType GetEvaluationTypeForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForEvaluationType(EvaluationType value);
} // namespace EvaluationTypeMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
