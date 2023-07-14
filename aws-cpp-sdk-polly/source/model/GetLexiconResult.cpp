/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/GetLexiconResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLexiconResult::GetLexiconResult()
{
}

GetLexiconResult::GetLexiconResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLexiconResult& GetLexiconResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Lexicon"))
  {
    m_lexicon = jsonValue.GetObject("Lexicon");

  }

  if(jsonValue.ValueExists("LexiconAttributes"))
  {
    m_lexiconAttributes = jsonValue.GetObject("LexiconAttributes");

  }



  return *this;
}
