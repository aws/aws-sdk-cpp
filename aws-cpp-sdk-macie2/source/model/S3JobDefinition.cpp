﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/S3JobDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

S3JobDefinition::S3JobDefinition() : 
    m_bucketDefinitionsHasBeenSet(false),
    m_scopingHasBeenSet(false),
    m_bucketCriteriaHasBeenSet(false)
{
}

S3JobDefinition::S3JobDefinition(JsonView jsonValue) : 
    m_bucketDefinitionsHasBeenSet(false),
    m_scopingHasBeenSet(false),
    m_bucketCriteriaHasBeenSet(false)
{
  *this = jsonValue;
}

S3JobDefinition& S3JobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketDefinitions"))
  {
    Array<JsonView> bucketDefinitionsJsonList = jsonValue.GetArray("bucketDefinitions");
    for(unsigned bucketDefinitionsIndex = 0; bucketDefinitionsIndex < bucketDefinitionsJsonList.GetLength(); ++bucketDefinitionsIndex)
    {
      m_bucketDefinitions.push_back(bucketDefinitionsJsonList[bucketDefinitionsIndex].AsObject());
    }
    m_bucketDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scoping"))
  {
    m_scoping = jsonValue.GetObject("scoping");

    m_scopingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketCriteria"))
  {
    m_bucketCriteria = jsonValue.GetObject("bucketCriteria");

    m_bucketCriteriaHasBeenSet = true;
  }

  return *this;
}

JsonValue S3JobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_bucketDefinitionsHasBeenSet)
  {
   Array<JsonValue> bucketDefinitionsJsonList(m_bucketDefinitions.size());
   for(unsigned bucketDefinitionsIndex = 0; bucketDefinitionsIndex < bucketDefinitionsJsonList.GetLength(); ++bucketDefinitionsIndex)
   {
     bucketDefinitionsJsonList[bucketDefinitionsIndex].AsObject(m_bucketDefinitions[bucketDefinitionsIndex].Jsonize());
   }
   payload.WithArray("bucketDefinitions", std::move(bucketDefinitionsJsonList));

  }

  if(m_scopingHasBeenSet)
  {
   payload.WithObject("scoping", m_scoping.Jsonize());

  }

  if(m_bucketCriteriaHasBeenSet)
  {
   payload.WithObject("bucketCriteria", m_bucketCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
