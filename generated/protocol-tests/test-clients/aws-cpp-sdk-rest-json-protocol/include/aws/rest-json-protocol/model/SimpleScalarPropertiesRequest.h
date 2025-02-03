/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class SimpleScalarPropertiesRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API SimpleScalarPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SimpleScalarProperties"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline SimpleScalarPropertiesRequest& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline SimpleScalarPropertiesRequest& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline SimpleScalarPropertiesRequest& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline SimpleScalarPropertiesRequest& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline SimpleScalarPropertiesRequest& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline SimpleScalarPropertiesRequest& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetTrueBooleanValue() const{ return m_trueBooleanValue; }
    inline bool TrueBooleanValueHasBeenSet() const { return m_trueBooleanValueHasBeenSet; }
    inline void SetTrueBooleanValue(bool value) { m_trueBooleanValueHasBeenSet = true; m_trueBooleanValue = value; }
    inline SimpleScalarPropertiesRequest& WithTrueBooleanValue(bool value) { SetTrueBooleanValue(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetFalseBooleanValue() const{ return m_falseBooleanValue; }
    inline bool FalseBooleanValueHasBeenSet() const { return m_falseBooleanValueHasBeenSet; }
    inline void SetFalseBooleanValue(bool value) { m_falseBooleanValueHasBeenSet = true; m_falseBooleanValue = value; }
    inline SimpleScalarPropertiesRequest& WithFalseBooleanValue(bool value) { SetFalseBooleanValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetByteValue() const{ return m_byteValue; }
    inline bool ByteValueHasBeenSet() const { return m_byteValueHasBeenSet; }
    inline void SetByteValue(int value) { m_byteValueHasBeenSet = true; m_byteValue = value; }
    inline SimpleScalarPropertiesRequest& WithByteValue(int value) { SetByteValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetShortValue() const{ return m_shortValue; }
    inline bool ShortValueHasBeenSet() const { return m_shortValueHasBeenSet; }
    inline void SetShortValue(int value) { m_shortValueHasBeenSet = true; m_shortValue = value; }
    inline SimpleScalarPropertiesRequest& WithShortValue(int value) { SetShortValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntegerValue() const{ return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline SimpleScalarPropertiesRequest& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetLongValue() const{ return m_longValue; }
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }
    inline SimpleScalarPropertiesRequest& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetFloatValue() const{ return m_floatValue; }
    inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
    inline void SetFloatValue(double value) { m_floatValueHasBeenSet = true; m_floatValue = value; }
    inline SimpleScalarPropertiesRequest& WithFloatValue(double value) { SetFloatValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetDoubleValue() const{ return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline SimpleScalarPropertiesRequest& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline SimpleScalarPropertiesRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SimpleScalarPropertiesRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SimpleScalarPropertiesRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    bool m_trueBooleanValue;
    bool m_trueBooleanValueHasBeenSet = false;

    bool m_falseBooleanValue;
    bool m_falseBooleanValueHasBeenSet = false;

    int m_byteValue;
    bool m_byteValueHasBeenSet = false;

    int m_shortValue;
    bool m_shortValueHasBeenSet = false;

    int m_integerValue;
    bool m_integerValueHasBeenSet = false;

    long long m_longValue;
    bool m_longValueHasBeenSet = false;

    double m_floatValue;
    bool m_floatValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
