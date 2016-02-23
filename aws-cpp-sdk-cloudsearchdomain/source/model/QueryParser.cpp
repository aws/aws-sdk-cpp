/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearchdomain/model/QueryParser.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int simple_HASH = HashingUtils::HashString("simple");
static const int structured_HASH = HashingUtils::HashString("structured");
static const int lucene_HASH = HashingUtils::HashString("lucene");
static const int dismax_HASH = HashingUtils::HashString("dismax");

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{
namespace QueryParserMapper
{


QueryParser GetQueryParserForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == simple_HASH)
  {
     return QueryParser::simple;
  }
  else if (hashCode == structured_HASH)
  {
     return QueryParser::structured;
  }
  else if (hashCode == lucene_HASH)
  {
     return QueryParser::lucene;
  }
  else if (hashCode == dismax_HASH)
  {
     return QueryParser::dismax;
  }
  return QueryParser::NOT_SET;
}

Aws::String GetNameForQueryParser(QueryParser enumValue)
{
  switch(value)
  {
  case QueryParser::simple:
    return "simple";
  case QueryParser::structured:
    return "structured";
  case QueryParser::lucene:
    return "lucene";
  case QueryParser::dismax:
    return "dismax";
  default:
    return "";
  }
}

} // namespace QueryParserMapper
} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
