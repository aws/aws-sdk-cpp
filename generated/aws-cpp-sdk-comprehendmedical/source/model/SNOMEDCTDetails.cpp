/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/SNOMEDCTDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

SNOMEDCTDetails::SNOMEDCTDetails() : 
    m_editionHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_versionDateHasBeenSet(false)
{
}

SNOMEDCTDetails::SNOMEDCTDetails(JsonView jsonValue) : 
    m_editionHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_versionDateHasBeenSet(false)
{
  *this = jsonValue;
}

SNOMEDCTDetails& SNOMEDCTDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = jsonValue.GetString("Edition");

    m_editionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionDate"))
  {
    m_versionDate = jsonValue.GetString("VersionDate");

    m_versionDateHasBeenSet = true;
  }

  return *this;
}

JsonValue SNOMEDCTDetails::Jsonize() const
{
  JsonValue payload;

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", m_edition);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_versionDateHasBeenSet)
  {
   payload.WithString("VersionDate", m_versionDate);

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
