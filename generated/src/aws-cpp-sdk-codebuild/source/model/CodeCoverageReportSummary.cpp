/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CodeCoverageReportSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

CodeCoverageReportSummary::CodeCoverageReportSummary() : 
    m_lineCoveragePercentage(0.0),
    m_lineCoveragePercentageHasBeenSet(false),
    m_linesCovered(0),
    m_linesCoveredHasBeenSet(false),
    m_linesMissed(0),
    m_linesMissedHasBeenSet(false),
    m_branchCoveragePercentage(0.0),
    m_branchCoveragePercentageHasBeenSet(false),
    m_branchesCovered(0),
    m_branchesCoveredHasBeenSet(false),
    m_branchesMissed(0),
    m_branchesMissedHasBeenSet(false)
{
}

CodeCoverageReportSummary::CodeCoverageReportSummary(JsonView jsonValue) : 
    m_lineCoveragePercentage(0.0),
    m_lineCoveragePercentageHasBeenSet(false),
    m_linesCovered(0),
    m_linesCoveredHasBeenSet(false),
    m_linesMissed(0),
    m_linesMissedHasBeenSet(false),
    m_branchCoveragePercentage(0.0),
    m_branchCoveragePercentageHasBeenSet(false),
    m_branchesCovered(0),
    m_branchesCoveredHasBeenSet(false),
    m_branchesMissed(0),
    m_branchesMissedHasBeenSet(false)
{
  *this = jsonValue;
}

CodeCoverageReportSummary& CodeCoverageReportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lineCoveragePercentage"))
  {
    m_lineCoveragePercentage = jsonValue.GetDouble("lineCoveragePercentage");

    m_lineCoveragePercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linesCovered"))
  {
    m_linesCovered = jsonValue.GetInteger("linesCovered");

    m_linesCoveredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linesMissed"))
  {
    m_linesMissed = jsonValue.GetInteger("linesMissed");

    m_linesMissedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchCoveragePercentage"))
  {
    m_branchCoveragePercentage = jsonValue.GetDouble("branchCoveragePercentage");

    m_branchCoveragePercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchesCovered"))
  {
    m_branchesCovered = jsonValue.GetInteger("branchesCovered");

    m_branchesCoveredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchesMissed"))
  {
    m_branchesMissed = jsonValue.GetInteger("branchesMissed");

    m_branchesMissedHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeCoverageReportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_lineCoveragePercentageHasBeenSet)
  {
   payload.WithDouble("lineCoveragePercentage", m_lineCoveragePercentage);

  }

  if(m_linesCoveredHasBeenSet)
  {
   payload.WithInteger("linesCovered", m_linesCovered);

  }

  if(m_linesMissedHasBeenSet)
  {
   payload.WithInteger("linesMissed", m_linesMissed);

  }

  if(m_branchCoveragePercentageHasBeenSet)
  {
   payload.WithDouble("branchCoveragePercentage", m_branchCoveragePercentage);

  }

  if(m_branchesCoveredHasBeenSet)
  {
   payload.WithInteger("branchesCovered", m_branchesCovered);

  }

  if(m_branchesMissedHasBeenSet)
  {
   payload.WithInteger("branchesMissed", m_branchesMissed);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
