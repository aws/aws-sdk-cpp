/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensReviewReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

LensReviewReport::LensReviewReport() : 
    m_lensAliasHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_base64StringHasBeenSet(false)
{
}

LensReviewReport::LensReviewReport(JsonView jsonValue) : 
    m_lensAliasHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_base64StringHasBeenSet(false)
{
  *this = jsonValue;
}

LensReviewReport& LensReviewReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

    m_lensAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

    m_lensArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Base64String"))
  {
    m_base64String = jsonValue.GetString("Base64String");

    m_base64StringHasBeenSet = true;
  }

  return *this;
}

JsonValue LensReviewReport::Jsonize() const
{
  JsonValue payload;

  if(m_lensAliasHasBeenSet)
  {
   payload.WithString("LensAlias", m_lensAlias);

  }

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_base64StringHasBeenSet)
  {
   payload.WithString("Base64String", m_base64String);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
