/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
namespace RestJsonProtocol
{
namespace Model
{
  class RecursiveShapesInputOutputNested2;

  class RecursiveShapesInputOutputNested1
  {
  public:
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested1();
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested1(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline RecursiveShapesInputOutputNested1& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline RecursiveShapesInputOutputNested1& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline RecursiveShapesInputOutputNested1& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    AWS_RESTJSONPROTOCOL_API const RecursiveShapesInputOutputNested2& GetNested() const;
    AWS_RESTJSONPROTOCOL_API bool NestedHasBeenSet() const;
    AWS_RESTJSONPROTOCOL_API void SetNested(const RecursiveShapesInputOutputNested2& value);
    AWS_RESTJSONPROTOCOL_API void SetNested(RecursiveShapesInputOutputNested2&& value);
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested1& WithNested(const RecursiveShapesInputOutputNested2& value);
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested1& WithNested(RecursiveShapesInputOutputNested2&& value);
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    std::shared_ptr<RecursiveShapesInputOutputNested2> m_nested;
    bool m_nestedHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
