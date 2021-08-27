/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/IPSetReferenceStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

IPSetReferenceStatement::IPSetReferenceStatement() : 
    m_aRNHasBeenSet(false),
    m_iPSetForwardedIPConfigHasBeenSet(false)
{
}

IPSetReferenceStatement::IPSetReferenceStatement(JsonView jsonValue) : 
    m_aRNHasBeenSet(false),
    m_iPSetForwardedIPConfigHasBeenSet(false)
{
  *this = jsonValue;
}

IPSetReferenceStatement& IPSetReferenceStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPSetForwardedIPConfig"))
  {
    m_iPSetForwardedIPConfig = jsonValue.GetObject("IPSetForwardedIPConfig");

    m_iPSetForwardedIPConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSetReferenceStatement::Jsonize() const
{
  JsonValue payload;

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_iPSetForwardedIPConfigHasBeenSet)
  {
   payload.WithObject("IPSetForwardedIPConfig", m_iPSetForwardedIPConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
