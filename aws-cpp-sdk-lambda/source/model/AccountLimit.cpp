/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lambda/model/AccountLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

AccountLimit::AccountLimit() : 
    m_totalCodeSize(0),
    m_totalCodeSizeHasBeenSet(false),
    m_codeSizeUnzipped(0),
    m_codeSizeUnzippedHasBeenSet(false),
    m_codeSizeZipped(0),
    m_codeSizeZippedHasBeenSet(false),
    m_concurrentExecutions(0),
    m_concurrentExecutionsHasBeenSet(false)
{
}

AccountLimit::AccountLimit(const JsonValue& jsonValue) : 
    m_totalCodeSize(0),
    m_totalCodeSizeHasBeenSet(false),
    m_codeSizeUnzipped(0),
    m_codeSizeUnzippedHasBeenSet(false),
    m_codeSizeZipped(0),
    m_codeSizeZippedHasBeenSet(false),
    m_concurrentExecutions(0),
    m_concurrentExecutionsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountLimit& AccountLimit::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TotalCodeSize"))
  {
    m_totalCodeSize = jsonValue.GetInt64("TotalCodeSize");

    m_totalCodeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSizeUnzipped"))
  {
    m_codeSizeUnzipped = jsonValue.GetInt64("CodeSizeUnzipped");

    m_codeSizeUnzippedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSizeZipped"))
  {
    m_codeSizeZipped = jsonValue.GetInt64("CodeSizeZipped");

    m_codeSizeZippedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConcurrentExecutions"))
  {
    m_concurrentExecutions = jsonValue.GetInteger("ConcurrentExecutions");

    m_concurrentExecutionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountLimit::Jsonize() const
{
  JsonValue payload;

  if(m_totalCodeSizeHasBeenSet)
  {
   payload.WithInt64("TotalCodeSize", m_totalCodeSize);

  }

  if(m_codeSizeUnzippedHasBeenSet)
  {
   payload.WithInt64("CodeSizeUnzipped", m_codeSizeUnzipped);

  }

  if(m_codeSizeZippedHasBeenSet)
  {
   payload.WithInt64("CodeSizeZipped", m_codeSizeZipped);

  }

  if(m_concurrentExecutionsHasBeenSet)
  {
   payload.WithInteger("ConcurrentExecutions", m_concurrentExecutions);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws