/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CertificateValidationRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

CertificateValidationRecord::CertificateValidationRecord() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_status(CertificateValidationRecordStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CertificateValidationRecord::CertificateValidationRecord(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_status(CertificateValidationRecordStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateValidationRecord& CertificateValidationRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CertificateValidationRecordStatusMapper::GetCertificateValidationRecordStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateValidationRecord::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateValidationRecordStatusMapper::GetNameForCertificateValidationRecordStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
