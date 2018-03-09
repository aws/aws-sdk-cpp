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

#include <aws/servicediscovery/model/DnsRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

DnsRecord::DnsRecord() : 
    m_type(RecordType::NOT_SET),
    m_typeHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false)
{
}

DnsRecord::DnsRecord(const JsonValue& jsonValue) : 
    m_type(RecordType::NOT_SET),
    m_typeHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false)
{
  *this = jsonValue;
}

DnsRecord& DnsRecord::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RecordTypeMapper::GetRecordTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TTL"))
  {
    m_tTL = jsonValue.GetInt64("TTL");

    m_tTLHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsRecord::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RecordTypeMapper::GetNameForRecordType(m_type));
  }

  if(m_tTLHasBeenSet)
  {
   payload.WithInt64("TTL", m_tTL);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
