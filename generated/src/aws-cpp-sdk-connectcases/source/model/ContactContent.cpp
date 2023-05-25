/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/ContactContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

ContactContent::ContactContent() : 
    m_channelHasBeenSet(false),
    m_connectedToSystemTimeHasBeenSet(false),
    m_contactArnHasBeenSet(false)
{
}

ContactContent::ContactContent(JsonView jsonValue) : 
    m_channelHasBeenSet(false),
    m_connectedToSystemTimeHasBeenSet(false),
    m_contactArnHasBeenSet(false)
{
  *this = jsonValue;
}

ContactContent& ContactContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channel"))
  {
    m_channel = jsonValue.GetString("channel");

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectedToSystemTime"))
  {
    m_connectedToSystemTime = jsonValue.GetString("connectedToSystemTime");

    m_connectedToSystemTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contactArn"))
  {
    m_contactArn = jsonValue.GetString("contactArn");

    m_contactArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactContent::Jsonize() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   payload.WithString("channel", m_channel);

  }

  if(m_connectedToSystemTimeHasBeenSet)
  {
   payload.WithString("connectedToSystemTime", m_connectedToSystemTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("contactArn", m_contactArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
