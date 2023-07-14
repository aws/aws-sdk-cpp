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
  enum class ContentType
  {
    NOT_SET,
    application_json,
    application_xml
  };

namespace ContentTypeMapper
{
AWS_CLOUDSEARCHDOMAIN_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_CLOUDSEARCHDOMAIN_API Aws::String GetNameForContentType(ContentType value);
} // namespace ContentTypeMapper
} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
