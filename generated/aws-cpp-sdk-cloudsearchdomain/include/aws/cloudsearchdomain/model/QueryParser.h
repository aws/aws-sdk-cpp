/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{
  enum class QueryParser
  {
    NOT_SET,
    simple,
    structured,
    lucene,
    dismax
  };

namespace QueryParserMapper
{
AWS_CLOUDSEARCHDOMAIN_API QueryParser GetQueryParserForName(const Aws::String& name);

AWS_CLOUDSEARCHDOMAIN_API Aws::String GetNameForQueryParser(QueryParser value);
} // namespace QueryParserMapper
} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
