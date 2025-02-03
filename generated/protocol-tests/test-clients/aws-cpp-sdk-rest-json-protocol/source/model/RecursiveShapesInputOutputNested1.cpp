/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

RecursiveShapesInputOutputNested1::RecursiveShapesInputOutputNested1() : 
    m_fooHasBeenSet(false),
    m_nestedHasBeenSet(false)
{
}

RecursiveShapesInputOutputNested1::RecursiveShapesInputOutputNested1(JsonView jsonValue)
  : RecursiveShapesInputOutputNested1()
{
  *this = jsonValue;
}

const RecursiveShapesInputOutputNested2& RecursiveShapesInputOutputNested1::GetNested() const{ return *m_nested; }
bool RecursiveShapesInputOutputNested1::NestedHasBeenSet() const { return m_nestedHasBeenSet; }
void RecursiveShapesInputOutputNested1::SetNested(const RecursiveShapesInputOutputNested2& value) { m_nestedHasBeenSet = true; m_nested = Aws::MakeShared<RecursiveShapesInputOutputNested2>("RecursiveShapesInputOutputNested1", value); }
void RecursiveShapesInputOutputNested1::SetNested(RecursiveShapesInputOutputNested2&& value) { m_nestedHasBeenSet = true; m_nested = Aws::MakeShared<RecursiveShapesInputOutputNested2>("RecursiveShapesInputOutputNested1", std::move(value)); }
RecursiveShapesInputOutputNested1& RecursiveShapesInputOutputNested1::WithNested(const RecursiveShapesInputOutputNested2& value) { SetNested(value); return *this;}
RecursiveShapesInputOutputNested1& RecursiveShapesInputOutputNested1::WithNested(RecursiveShapesInputOutputNested2&& value) { SetNested(std::move(value)); return *this;}

RecursiveShapesInputOutputNested1& RecursiveShapesInputOutputNested1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("foo"))
  {
    m_foo = jsonValue.GetString("foo");

    m_fooHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nested"))
  {
    m_nested = Aws::MakeShared<RecursiveShapesInputOutputNested2>("RecursiveShapesInputOutputNested1", jsonValue.GetObject("nested"));

    m_nestedHasBeenSet = true;
  }

  return *this;
}

JsonValue RecursiveShapesInputOutputNested1::Jsonize() const
{
  JsonValue payload;

  if(m_fooHasBeenSet)
  {
   payload.WithString("foo", m_foo);

  }

  if(m_nestedHasBeenSet)
  {
   payload.WithObject("nested", m_nested->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
