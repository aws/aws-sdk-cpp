/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2protocol/model/SimpleScalarPropertiesResult.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;
using namespace Aws::Utils::Cbor;
using namespace Aws;

  SimpleScalarPropertiesResult::SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
    {
  *this = result;
  }

  SimpleScalarPropertiesResult& SimpleScalarPropertiesResult::operator =(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
    {
    const auto& cborValue = result.GetPayload();
    const auto decoder = cborValue.GetDecoder();

        if (decoder != nullptr)
{
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart))
    {
        if (initialMapType.value() == CborType::MapStart)
        {
            auto mapSize = decoder->PopNextMapStart();
            if (mapSize.has_value())
            {
                for (size_t i = 0; i < mapSize.value(); ++i)
                {
                    auto initialKey = decoder->PopNextTextVal();
                    if (initialKey.has_value())
                    {
                        Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);
                            

    if (initialKeyStr == "trueBooleanValue")
  {
          auto val = decoder->PopNextBooleanVal();
if (val.has_value()) {
    m_trueBooleanValue = val.value();
}
        m_trueBooleanValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "falseBooleanValue")
  {
          auto val = decoder->PopNextBooleanVal();
if (val.has_value()) {
    m_falseBooleanValue = val.value();
}
        m_falseBooleanValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "byteValue")
  {
          auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
if (val.has_value()) {
    m_byteValue = val.value();
}
        m_byteValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "doubleValue")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_doubleValue = val.value();
}
        m_doubleValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "floatValue")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_floatValue = val.value();
}
        m_floatValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "integerValue")
  {
          auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
if (val.has_value()) {
    m_integerValue = val.value();
}
        m_integerValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "longValue")
  {
          auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
if (val.has_value()) {
    m_longValue = val.value();
}
        m_longValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "shortValue")
  {
          auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
if (val.has_value()) {
    m_shortValue = val.value();
}
        m_shortValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "stringValue")
  {
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringValue = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType = decoder->PeekType();
        if (!nextType.has_value() || nextType.value() == CborType::Break) {
            if (nextType.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
    m_stringValue = ss.str();
    ss.clear();
}
        m_stringValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "blobValue")
  {
          auto val = decoder->PopNextBytesVal();
if (val.has_value()) {
    m_blobValue = Aws::Utils::ByteBuffer(val.value().ptr, val.value().len);
}
        m_blobValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "x-amzn-requestid")
  {
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_requestId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType = decoder->PeekType();
        if (!nextType.has_value() || nextType.value() == CborType::Break) {
            if (nextType.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
    m_requestId = ss.str();
    ss.clear();
}
        m_requestIdHasBeenSet = true;
  }
  
else
{
  // Unknown key, skip the value
  decoder->ConsumeNextWholeDataItem();
}
                    }
                }
            }
        }
        else // IndefMapStart
        {
            decoder->ConsumeNextSingleElement(); // consume the IndefMapStart
            while (decoder->LastError() == AWS_ERROR_UNKNOWN)
            {
                auto nextType = decoder->PeekType();
                if (!nextType.has_value() || nextType.value() == CborType::Break)
                {
                    if (nextType.has_value())
                    {
                        decoder->ConsumeNextSingleElement(); // consume the Break
                    }
                    break;
                }

                auto initialKey = decoder->PopNextTextVal();
                if (initialKey.has_value())
                {
                    Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);
                        

    if (initialKeyStr == "trueBooleanValue")
  {
          auto val = decoder->PopNextBooleanVal();
if (val.has_value()) {
    m_trueBooleanValue = val.value();
}
        m_trueBooleanValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "falseBooleanValue")
  {
          auto val = decoder->PopNextBooleanVal();
if (val.has_value()) {
    m_falseBooleanValue = val.value();
}
        m_falseBooleanValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "byteValue")
  {
          auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
if (val.has_value()) {
    m_byteValue = val.value();
}
        m_byteValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "doubleValue")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_doubleValue = val.value();
}
        m_doubleValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "floatValue")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_floatValue = val.value();
}
        m_floatValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "integerValue")
  {
          auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
if (val.has_value()) {
    m_integerValue = val.value();
}
        m_integerValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "longValue")
  {
          auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
if (val.has_value()) {
    m_longValue = val.value();
}
        m_longValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "shortValue")
  {
          auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
if (val.has_value()) {
    m_shortValue = val.value();
}
        m_shortValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "stringValue")
  {
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringValue = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType = decoder->PeekType();
        if (!nextType.has_value() || nextType.value() == CborType::Break) {
            if (nextType.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
    m_stringValue = ss.str();
    ss.clear();
}
        m_stringValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "blobValue")
  {
          auto val = decoder->PopNextBytesVal();
if (val.has_value()) {
    m_blobValue = Aws::Utils::ByteBuffer(val.value().ptr, val.value().len);
}
        m_blobValueHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "x-amzn-requestid")
  {
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_requestId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType = decoder->PeekType();
        if (!nextType.has_value() || nextType.value() == CborType::Break) {
            if (nextType.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
    m_requestId = ss.str();
    ss.clear();
}
        m_requestIdHasBeenSet = true;
  }
  
else
{
  // Unknown key, skip the value
  decoder->ConsumeNextWholeDataItem();
}
                }
            }
        }
    }
}

      const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

        return *this;
    }
