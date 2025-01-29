/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/query-protocol/model/FooEnum.h>
#include <utility>

namespace Aws
{
namespace QueryProtocol
{
namespace Model
{

  /**
   */
  class SimpleInputParamsRequest : public QueryProtocolRequest
  {
  public:
    AWS_QUERYPROTOCOL_API SimpleInputParamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SimpleInputParams"; }

    AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline SimpleInputParamsRequest& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline SimpleInputParamsRequest& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline SimpleInputParamsRequest& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBar() const{ return m_bar; }
    inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
    inline void SetBar(const Aws::String& value) { m_barHasBeenSet = true; m_bar = value; }
    inline void SetBar(Aws::String&& value) { m_barHasBeenSet = true; m_bar = std::move(value); }
    inline void SetBar(const char* value) { m_barHasBeenSet = true; m_bar.assign(value); }
    inline SimpleInputParamsRequest& WithBar(const Aws::String& value) { SetBar(value); return *this;}
    inline SimpleInputParamsRequest& WithBar(Aws::String&& value) { SetBar(std::move(value)); return *this;}
    inline SimpleInputParamsRequest& WithBar(const char* value) { SetBar(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetBaz() const{ return m_baz; }
    inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
    inline void SetBaz(bool value) { m_bazHasBeenSet = true; m_baz = value; }
    inline SimpleInputParamsRequest& WithBaz(bool value) { SetBaz(value); return *this;}
    ///@}

    ///@{
    
    inline int GetBam() const{ return m_bam; }
    inline bool BamHasBeenSet() const { return m_bamHasBeenSet; }
    inline void SetBam(int value) { m_bamHasBeenSet = true; m_bam = value; }
    inline SimpleInputParamsRequest& WithBam(int value) { SetBam(value); return *this;}
    ///@}

    ///@{
    
    inline double GetFloatValue() const{ return m_floatValue; }
    inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
    inline void SetFloatValue(double value) { m_floatValueHasBeenSet = true; m_floatValue = value; }
    inline SimpleInputParamsRequest& WithFloatValue(double value) { SetFloatValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetBoo() const{ return m_boo; }
    inline bool BooHasBeenSet() const { return m_booHasBeenSet; }
    inline void SetBoo(double value) { m_booHasBeenSet = true; m_boo = value; }
    inline SimpleInputParamsRequest& WithBoo(double value) { SetBoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::ByteBuffer& GetQux() const{ return m_qux; }
    inline bool QuxHasBeenSet() const { return m_quxHasBeenSet; }
    inline void SetQux(const Aws::Utils::ByteBuffer& value) { m_quxHasBeenSet = true; m_qux = value; }
    inline void SetQux(Aws::Utils::ByteBuffer&& value) { m_quxHasBeenSet = true; m_qux = std::move(value); }
    inline SimpleInputParamsRequest& WithQux(const Aws::Utils::ByteBuffer& value) { SetQux(value); return *this;}
    inline SimpleInputParamsRequest& WithQux(Aws::Utils::ByteBuffer&& value) { SetQux(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FooEnum& GetFooEnum() const{ return m_fooEnum; }
    inline bool FooEnumHasBeenSet() const { return m_fooEnumHasBeenSet; }
    inline void SetFooEnum(const FooEnum& value) { m_fooEnumHasBeenSet = true; m_fooEnum = value; }
    inline void SetFooEnum(FooEnum&& value) { m_fooEnumHasBeenSet = true; m_fooEnum = std::move(value); }
    inline SimpleInputParamsRequest& WithFooEnum(const FooEnum& value) { SetFooEnum(value); return *this;}
    inline SimpleInputParamsRequest& WithFooEnum(FooEnum&& value) { SetFooEnum(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetIntegerEnum() const{ return m_integerEnum; }
    inline bool IntegerEnumHasBeenSet() const { return m_integerEnumHasBeenSet; }
    inline void SetIntegerEnum(int value) { m_integerEnumHasBeenSet = true; m_integerEnum = value; }
    inline SimpleInputParamsRequest& WithIntegerEnum(int value) { SetIntegerEnum(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    Aws::String m_bar;
    bool m_barHasBeenSet = false;

    bool m_baz;
    bool m_bazHasBeenSet = false;

    int m_bam;
    bool m_bamHasBeenSet = false;

    double m_floatValue;
    bool m_floatValueHasBeenSet = false;

    double m_boo;
    bool m_booHasBeenSet = false;

    Aws::Utils::ByteBuffer m_qux;
    bool m_quxHasBeenSet = false;

    FooEnum m_fooEnum;
    bool m_fooEnumHasBeenSet = false;

    int m_integerEnum;
    bool m_integerEnumHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
