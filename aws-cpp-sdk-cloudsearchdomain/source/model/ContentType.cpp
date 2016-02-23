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
#include <aws/cloudsearchdomain/model/ContentType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int application_json_HASH = HashingUtils::HashString("application/json");
static const int application_xml_HASH = HashingUtils::HashString("application/xml");

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{
namespace ContentTypeMapper
{
ContentType GetContentTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == application_json_HASH)
  {
    return ContentType::application_json;
  }
  else if (hashCode == application_xml_HASH)
  {
    return ContentType::application_xml;
  }

  return ContentType::NOT_SET;
}

Aws::String GetNameForContentType(ContentType value)
{
  switch(value)
  {
  case ContentType::application_json:
    return "application/json";
  case ContentType::application_xml:
    return "application/xml";
  default:
    return "";
  }
}

} // namespace ContentTypeMapper
} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
