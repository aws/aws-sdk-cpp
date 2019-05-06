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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sdb/SimpleDBErrors.h>

using namespace Aws::Client;
using namespace Aws::SimpleDB;
using namespace Aws::Utils;

namespace Aws
{
namespace SimpleDB
{
namespace SimpleDBErrorMapper
{

static const int NUMBER_SUBMITTED_ITEMS_EXCEEDED_HASH = HashingUtils::HashString("NumberSubmittedItemsExceeded");
static const int NUMBER_DOMAIN_ATTRIBUTES_EXCEEDED_HASH = HashingUtils::HashString("NumberDomainAttributesExceeded");
static const int INVALID_NUMBER_PREDICATES_HASH = HashingUtils::HashString("InvalidNumberPredicates");
static const int TOO_MANY_REQUESTED_ATTRIBUTES_HASH = HashingUtils::HashString("TooManyRequestedAttributes");
static const int NO_SUCH_DOMAIN_HASH = HashingUtils::HashString("NoSuchDomain");
static const int INVALID_NUMBER_VALUE_TESTS_HASH = HashingUtils::HashString("InvalidNumberValueTests");
static const int NUMBER_ITEM_ATTRIBUTES_EXCEEDED_HASH = HashingUtils::HashString("NumberItemAttributesExceeded");
static const int NUMBER_DOMAINS_EXCEEDED_HASH = HashingUtils::HashString("NumberDomainsExceeded");
static const int INVALID_QUERY_EXPRESSION_HASH = HashingUtils::HashString("InvalidQueryExpression");
static const int DUPLICATE_ITEM_NAME_HASH = HashingUtils::HashString("DuplicateItemName");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextToken");
static const int ATTRIBUTE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AttributeDoesNotExist");
static const int NUMBER_DOMAIN_BYTES_EXCEEDED_HASH = HashingUtils::HashString("NumberDomainBytesExceeded");
static const int NUMBER_SUBMITTED_ATTRIBUTES_EXCEEDED_HASH = HashingUtils::HashString("NumberSubmittedAttributesExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NUMBER_SUBMITTED_ITEMS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_SUBMITTED_ITEMS_EXCEEDED), false);
  }
  else if (hashCode == NUMBER_DOMAIN_ATTRIBUTES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_DOMAIN_ATTRIBUTES_EXCEEDED), false);
  }
  else if (hashCode == INVALID_NUMBER_PREDICATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::INVALID_NUMBER_PREDICATES), false);
  }
  else if (hashCode == TOO_MANY_REQUESTED_ATTRIBUTES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::TOO_MANY_REQUESTED_ATTRIBUTES), false);
  }
  else if (hashCode == NO_SUCH_DOMAIN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NO_SUCH_DOMAIN), false);
  }
  else if (hashCode == INVALID_NUMBER_VALUE_TESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::INVALID_NUMBER_VALUE_TESTS), false);
  }
  else if (hashCode == NUMBER_ITEM_ATTRIBUTES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_ITEM_ATTRIBUTES_EXCEEDED), false);
  }
  else if (hashCode == NUMBER_DOMAINS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_DOMAINS_EXCEEDED), false);
  }
  else if (hashCode == INVALID_QUERY_EXPRESSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::INVALID_QUERY_EXPRESSION), false);
  }
  else if (hashCode == DUPLICATE_ITEM_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::DUPLICATE_ITEM_NAME), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == ATTRIBUTE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::ATTRIBUTE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == NUMBER_DOMAIN_BYTES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_DOMAIN_BYTES_EXCEEDED), false);
  }
  else if (hashCode == NUMBER_SUBMITTED_ATTRIBUTES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_SUBMITTED_ATTRIBUTES_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SimpleDBErrorMapper
} // namespace SimpleDB
} // namespace Aws
