/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
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
namespace RestJsonProtocol
{
namespace Model
{

  class UnionWithJsonName
  {
  public:
    AWS_RESTJSONPROTOCOL_API UnionWithJsonName();
    AWS_RESTJSONPROTOCOL_API UnionWithJsonName(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API UnionWithJsonName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline UnionWithJsonName& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline UnionWithJsonName& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline UnionWithJsonName& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBar() const{ return m_bar; }
    inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
    inline void SetBar(const Aws::String& value) { m_barHasBeenSet = true; m_bar = value; }
    inline void SetBar(Aws::String&& value) { m_barHasBeenSet = true; m_bar = std::move(value); }
    inline void SetBar(const char* value) { m_barHasBeenSet = true; m_bar.assign(value); }
    inline UnionWithJsonName& WithBar(const Aws::String& value) { SetBar(value); return *this;}
    inline UnionWithJsonName& WithBar(Aws::String&& value) { SetBar(std::move(value)); return *this;}
    inline UnionWithJsonName& WithBar(const char* value) { SetBar(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBaz() const{ return m_baz; }
    inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
    inline void SetBaz(const Aws::String& value) { m_bazHasBeenSet = true; m_baz = value; }
    inline void SetBaz(Aws::String&& value) { m_bazHasBeenSet = true; m_baz = std::move(value); }
    inline void SetBaz(const char* value) { m_bazHasBeenSet = true; m_baz.assign(value); }
    inline UnionWithJsonName& WithBaz(const Aws::String& value) { SetBaz(value); return *this;}
    inline UnionWithJsonName& WithBaz(Aws::String&& value) { SetBaz(std::move(value)); return *this;}
    inline UnionWithJsonName& WithBaz(const char* value) { SetBaz(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    Aws::String m_bar;
    bool m_barHasBeenSet = false;

    Aws::String m_baz;
    bool m_bazHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
