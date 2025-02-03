/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/EC2ProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/ec2-protocol/model/FooEnum.h>
#include <utility>

namespace Aws
{
namespace EC2Protocol
{
namespace Model
{

  /**
   */
  class SimpleInputParamsRequest : public EC2ProtocolRequest
  {
  public:
    AWS_EC2PROTOCOL_API SimpleInputParamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SimpleInputParams"; }

    AWS_EC2PROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2PROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    
    inline const Aws::String& GetHasQueryName() const{ return m_hasQueryName; }
    inline bool HasQueryNameHasBeenSet() const { return m_hasQueryNameHasBeenSet; }
    inline void SetHasQueryName(const Aws::String& value) { m_hasQueryNameHasBeenSet = true; m_hasQueryName = value; }
    inline void SetHasQueryName(Aws::String&& value) { m_hasQueryNameHasBeenSet = true; m_hasQueryName = std::move(value); }
    inline void SetHasQueryName(const char* value) { m_hasQueryNameHasBeenSet = true; m_hasQueryName.assign(value); }
    inline SimpleInputParamsRequest& WithHasQueryName(const Aws::String& value) { SetHasQueryName(value); return *this;}
    inline SimpleInputParamsRequest& WithHasQueryName(Aws::String&& value) { SetHasQueryName(std::move(value)); return *this;}
    inline SimpleInputParamsRequest& WithHasQueryName(const char* value) { SetHasQueryName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetHasQueryAndXmlName() const{ return m_hasQueryAndXmlName; }
    inline bool HasQueryAndXmlNameHasBeenSet() const { return m_hasQueryAndXmlNameHasBeenSet; }
    inline void SetHasQueryAndXmlName(const Aws::String& value) { m_hasQueryAndXmlNameHasBeenSet = true; m_hasQueryAndXmlName = value; }
    inline void SetHasQueryAndXmlName(Aws::String&& value) { m_hasQueryAndXmlNameHasBeenSet = true; m_hasQueryAndXmlName = std::move(value); }
    inline void SetHasQueryAndXmlName(const char* value) { m_hasQueryAndXmlNameHasBeenSet = true; m_hasQueryAndXmlName.assign(value); }
    inline SimpleInputParamsRequest& WithHasQueryAndXmlName(const Aws::String& value) { SetHasQueryAndXmlName(value); return *this;}
    inline SimpleInputParamsRequest& WithHasQueryAndXmlName(Aws::String&& value) { SetHasQueryAndXmlName(std::move(value)); return *this;}
    inline SimpleInputParamsRequest& WithHasQueryAndXmlName(const char* value) { SetHasQueryAndXmlName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetUsesXmlName() const{ return m_usesXmlName; }
    inline bool UsesXmlNameHasBeenSet() const { return m_usesXmlNameHasBeenSet; }
    inline void SetUsesXmlName(const Aws::String& value) { m_usesXmlNameHasBeenSet = true; m_usesXmlName = value; }
    inline void SetUsesXmlName(Aws::String&& value) { m_usesXmlNameHasBeenSet = true; m_usesXmlName = std::move(value); }
    inline void SetUsesXmlName(const char* value) { m_usesXmlNameHasBeenSet = true; m_usesXmlName.assign(value); }
    inline SimpleInputParamsRequest& WithUsesXmlName(const Aws::String& value) { SetUsesXmlName(value); return *this;}
    inline SimpleInputParamsRequest& WithUsesXmlName(Aws::String&& value) { SetUsesXmlName(std::move(value)); return *this;}
    inline SimpleInputParamsRequest& WithUsesXmlName(const char* value) { SetUsesXmlName(value); return *this;}
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

    Aws::String m_hasQueryName;
    bool m_hasQueryNameHasBeenSet = false;

    Aws::String m_hasQueryAndXmlName;
    bool m_hasQueryAndXmlNameHasBeenSet = false;

    Aws::String m_usesXmlName;
    bool m_usesXmlNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
