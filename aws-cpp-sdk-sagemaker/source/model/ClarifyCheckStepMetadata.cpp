/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyCheckStepMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ClarifyCheckStepMetadata::ClarifyCheckStepMetadata() : 
    m_checkTypeHasBeenSet(false),
    m_baselineUsedForDriftCheckConstraintsHasBeenSet(false),
    m_calculatedBaselineConstraintsHasBeenSet(false),
    m_modelPackageGroupNameHasBeenSet(false),
    m_violationReportHasBeenSet(false),
    m_checkJobArnHasBeenSet(false),
    m_skipCheck(false),
    m_skipCheckHasBeenSet(false),
    m_registerNewBaseline(false),
    m_registerNewBaselineHasBeenSet(false)
{
}

ClarifyCheckStepMetadata::ClarifyCheckStepMetadata(JsonView jsonValue) : 
    m_checkTypeHasBeenSet(false),
    m_baselineUsedForDriftCheckConstraintsHasBeenSet(false),
    m_calculatedBaselineConstraintsHasBeenSet(false),
    m_modelPackageGroupNameHasBeenSet(false),
    m_violationReportHasBeenSet(false),
    m_checkJobArnHasBeenSet(false),
    m_skipCheck(false),
    m_skipCheckHasBeenSet(false),
    m_registerNewBaseline(false),
    m_registerNewBaselineHasBeenSet(false)
{
  *this = jsonValue;
}

ClarifyCheckStepMetadata& ClarifyCheckStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CheckType"))
  {
    m_checkType = jsonValue.GetString("CheckType");

    m_checkTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineUsedForDriftCheckConstraints"))
  {
    m_baselineUsedForDriftCheckConstraints = jsonValue.GetString("BaselineUsedForDriftCheckConstraints");

    m_baselineUsedForDriftCheckConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CalculatedBaselineConstraints"))
  {
    m_calculatedBaselineConstraints = jsonValue.GetString("CalculatedBaselineConstraints");

    m_calculatedBaselineConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageGroupName"))
  {
    m_modelPackageGroupName = jsonValue.GetString("ModelPackageGroupName");

    m_modelPackageGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolationReport"))
  {
    m_violationReport = jsonValue.GetString("ViolationReport");

    m_violationReportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CheckJobArn"))
  {
    m_checkJobArn = jsonValue.GetString("CheckJobArn");

    m_checkJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkipCheck"))
  {
    m_skipCheck = jsonValue.GetBool("SkipCheck");

    m_skipCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisterNewBaseline"))
  {
    m_registerNewBaseline = jsonValue.GetBool("RegisterNewBaseline");

    m_registerNewBaselineHasBeenSet = true;
  }

  return *this;
}

JsonValue ClarifyCheckStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_checkTypeHasBeenSet)
  {
   payload.WithString("CheckType", m_checkType);

  }

  if(m_baselineUsedForDriftCheckConstraintsHasBeenSet)
  {
   payload.WithString("BaselineUsedForDriftCheckConstraints", m_baselineUsedForDriftCheckConstraints);

  }

  if(m_calculatedBaselineConstraintsHasBeenSet)
  {
   payload.WithString("CalculatedBaselineConstraints", m_calculatedBaselineConstraints);

  }

  if(m_modelPackageGroupNameHasBeenSet)
  {
   payload.WithString("ModelPackageGroupName", m_modelPackageGroupName);

  }

  if(m_violationReportHasBeenSet)
  {
   payload.WithString("ViolationReport", m_violationReport);

  }

  if(m_checkJobArnHasBeenSet)
  {
   payload.WithString("CheckJobArn", m_checkJobArn);

  }

  if(m_skipCheckHasBeenSet)
  {
   payload.WithBool("SkipCheck", m_skipCheck);

  }

  if(m_registerNewBaselineHasBeenSet)
  {
   payload.WithBool("RegisterNewBaseline", m_registerNewBaseline);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
