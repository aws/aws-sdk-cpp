﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerDocuments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntityRecognizerDocuments::EntityRecognizerDocuments() : 
    m_s3UriHasBeenSet(false),
    m_testS3UriHasBeenSet(false),
    m_inputFormat(InputFormat::NOT_SET),
    m_inputFormatHasBeenSet(false)
{
}

EntityRecognizerDocuments::EntityRecognizerDocuments(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_testS3UriHasBeenSet(false),
    m_inputFormat(InputFormat::NOT_SET),
    m_inputFormatHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerDocuments& EntityRecognizerDocuments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TestS3Uri"))
  {
    m_testS3Uri = jsonValue.GetString("TestS3Uri");

    m_testS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputFormat"))
  {
    m_inputFormat = InputFormatMapper::GetInputFormatForName(jsonValue.GetString("InputFormat"));

    m_inputFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerDocuments::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_testS3UriHasBeenSet)
  {
   payload.WithString("TestS3Uri", m_testS3Uri);

  }

  if(m_inputFormatHasBeenSet)
  {
   payload.WithString("InputFormat", InputFormatMapper::GetNameForInputFormat(m_inputFormat));
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
