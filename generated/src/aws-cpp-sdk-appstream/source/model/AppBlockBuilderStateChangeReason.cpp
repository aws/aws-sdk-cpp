/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlockBuilderStateChangeReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

AppBlockBuilderStateChangeReason::AppBlockBuilderStateChangeReason() : 
    m_code(AppBlockBuilderStateChangeReasonCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

AppBlockBuilderStateChangeReason::AppBlockBuilderStateChangeReason(JsonView jsonValue) : 
    m_code(AppBlockBuilderStateChangeReasonCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

AppBlockBuilderStateChangeReason& AppBlockBuilderStateChangeReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = AppBlockBuilderStateChangeReasonCodeMapper::GetAppBlockBuilderStateChangeReasonCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue AppBlockBuilderStateChangeReason::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", AppBlockBuilderStateChangeReasonCodeMapper::GetNameForAppBlockBuilderStateChangeReasonCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
