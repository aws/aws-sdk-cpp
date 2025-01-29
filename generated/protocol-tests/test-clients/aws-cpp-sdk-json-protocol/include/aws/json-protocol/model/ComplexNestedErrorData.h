/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace JsonProtocol
{
namespace Model
{

  class ComplexNestedErrorData
  {
  public:
    AWS_JSONPROTOCOL_API ComplexNestedErrorData();
    AWS_JSONPROTOCOL_API ComplexNestedErrorData(Aws::Utils::Json::JsonView jsonValue);
    AWS_JSONPROTOCOL_API ComplexNestedErrorData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline ComplexNestedErrorData& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline ComplexNestedErrorData& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline ComplexNestedErrorData& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
