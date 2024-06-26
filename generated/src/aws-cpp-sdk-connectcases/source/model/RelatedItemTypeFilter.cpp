﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RelatedItemTypeFilter.h>
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

RelatedItemTypeFilter::RelatedItemTypeFilter() : 
    m_commentHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_fileHasBeenSet(false)
{
}

RelatedItemTypeFilter::RelatedItemTypeFilter(JsonView jsonValue)
  : RelatedItemTypeFilter()
{
  *this = jsonValue;
}

RelatedItemTypeFilter& RelatedItemTypeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetObject("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contact"))
  {
    m_contact = jsonValue.GetObject("contact");

    m_contactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("file"))
  {
    m_file = jsonValue.GetObject("file");

    m_fileHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedItemTypeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithObject("comment", m_comment.Jsonize());

  }

  if(m_contactHasBeenSet)
  {
   payload.WithObject("contact", m_contact.Jsonize());

  }

  if(m_fileHasBeenSet)
  {
   payload.WithObject("file", m_file.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
