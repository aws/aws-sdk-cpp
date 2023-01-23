/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ExportServerSideEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

ExportServerSideEncryption::ExportServerSideEncryption() : 
    m_kmsKeyArnHasBeenSet(false),
    m_type(ServerSideEncryptionTypes::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ExportServerSideEncryption::ExportServerSideEncryption(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false),
    m_type(ServerSideEncryptionTypes::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ExportServerSideEncryption& ExportServerSideEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ServerSideEncryptionTypesMapper::GetServerSideEncryptionTypesForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportServerSideEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ServerSideEncryptionTypesMapper::GetNameForServerSideEncryptionTypes(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
