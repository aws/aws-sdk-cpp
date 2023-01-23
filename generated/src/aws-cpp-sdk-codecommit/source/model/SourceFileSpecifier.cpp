/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/SourceFileSpecifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

SourceFileSpecifier::SourceFileSpecifier() : 
    m_filePathHasBeenSet(false),
    m_isMove(false),
    m_isMoveHasBeenSet(false)
{
}

SourceFileSpecifier::SourceFileSpecifier(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_isMove(false),
    m_isMoveHasBeenSet(false)
{
  *this = jsonValue;
}

SourceFileSpecifier& SourceFileSpecifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isMove"))
  {
    m_isMove = jsonValue.GetBool("isMove");

    m_isMoveHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceFileSpecifier::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_isMoveHasBeenSet)
  {
   payload.WithBool("isMove", m_isMove);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
