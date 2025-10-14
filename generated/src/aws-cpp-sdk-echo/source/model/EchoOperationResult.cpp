/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/echo/model/EchoOperationResult.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Echo::Model;
using namespace Aws::Crt;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;
using namespace Aws::Utils::Cbor;
using namespace Aws;

  EchoOperationResult::EchoOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
    {
  *this = result;
  }

  EchoOperationResult& EchoOperationResult::operator =(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
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
                            

    if (initialKeyStr == "booleanMember")
  {
          auto val = decoder->PopNextBooleanVal();
if (val.has_value()) {
    m_booleanMember = val.value();
}
        m_booleanMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "stringMember")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_stringMember = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
        m_stringMember = ss.str();
    }
}
        m_stringMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "integerMember")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if(peekType.value() == Aws::Crt::Cbor::CborType::UInt){
        auto val = decoder->PopNextUnsignedIntVal();
        if (val.has_value()) {
            m_integerMember = static_cast<int64_t>(val.value());
        }
    } else {
        auto val = decoder->PopNextNegativeIntVal();
        if (val.has_value()) {
            m_integerMember = static_cast<int64_t>(1 - val.value());
        }
    }
}
        m_integerMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "longMember")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if(peekType.value() == Aws::Crt::Cbor::CborType::UInt){
        auto val = decoder->PopNextUnsignedIntVal();
        if (val.has_value()) {
            m_longMember = static_cast<int64_t>(val.value());
        }
    } else {
        auto val = decoder->PopNextNegativeIntVal();
        if (val.has_value()) {
            m_longMember = static_cast<int64_t>(1 - val.value());
        }
    }
}
        m_longMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "floatMember")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_floatMember = val.value();
}
        m_floatMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "doubleMember")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_doubleMember = val.value();
}
        m_doubleMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "timestampMember")
  {
          auto tag = decoder->PopNextTagVal();
if (tag.has_value() && tag.value() == 1) //1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
{
    auto dateType = decoder->PeekType();
    if (dateType.has_value())
    {
        if (dateType.value() == Aws::Crt::Cbor::CborType::Float)
        {
            auto val = decoder->PopNextFloatVal();
            if (val.has_value()) {
                m_timestampMember = Aws::Utils::DateTime(val.value());
            }
        }
        else
        {
            auto val = decoder->PopNextUnsignedIntVal();
            if (val.has_value()) {
                m_timestampMember = Aws::Utils::DateTime(val.value());
            }
        }
    }
}
        m_timestampMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "blobMember")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if (peekType.value() == Aws::Crt::Cbor::CborType::Bytes) {
        auto val = decoder->PopNextBytesVal();
        if (val.has_value()) {
            m_blobMember = Aws::Utils::ByteBuffer(val.value().ptr, val.value().len);
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
            auto val = decoder->PopNextBytesVal();
            if (val.has_value()) {
                ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
        m_blobMember = Aws::Utils::ByteBuffer(ss.str());
        ss.clear();
    }
}
        m_blobMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "listOfStringsMember")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                auto peekType_1 = decoder->PeekType();
if(peekType_1.has_value()){
    if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_listOfStringsMember.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
        }
    } else {
        decoder->ConsumeNextSingleElement();
        Aws::StringStream ss_1;
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType_1 = decoder->PeekType();
            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                if (nextType_1.has_value()) {
                    decoder->ConsumeNextSingleElement();  // consume the Break
                }
                break;
            }
            auto val = decoder->PopNextTextVal();
            if (val.has_value()) {
                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
        m_listOfStringsMember.push_back(ss_1.str());
        ss_1.clear();
    }
}
        }
    }
  }
  else // IndefArrayStart
  {
    decoder->ConsumeNextSingleElement(); // consume the IndefArrayStart
    while (decoder->LastError() == AWS_ERROR_UNKNOWN)
    {
      auto nextType_0 = decoder->PeekType();
      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break)
      {
        if (nextType_0.has_value())
        {
          decoder->ConsumeNextSingleElement(); // consume the Break
        }
        break;
      }
            auto peekType_1 = decoder->PeekType();
if(peekType_1.has_value()){
    if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_listOfStringsMember.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
        }
    } else {
        decoder->ConsumeNextSingleElement();
        Aws::StringStream ss_1;
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType_1 = decoder->PeekType();
            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                if (nextType_1.has_value()) {
                    decoder->ConsumeNextSingleElement();  // consume the Break
                }
                break;
            }
            auto val = decoder->PopNextTextVal();
            if (val.has_value()) {
                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
        m_listOfStringsMember.push_back(ss_1.str());
        ss_1.clear();
    }
}
    }
  }
}
        m_listOfStringsMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "listOfComplexObjectMember")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                            m_listOfComplexObjectMember.push_back(ComplexStructure(decoder));
            }
    }
  }
  else // IndefArrayStart
  {
    decoder->ConsumeNextSingleElement(); // consume the IndefArrayStart
    while (decoder->LastError() == AWS_ERROR_UNKNOWN)
    {
      auto nextType_0 = decoder->PeekType();
      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break)
      {
        if (nextType_0.has_value())
        {
          decoder->ConsumeNextSingleElement(); // consume the Break
        }
        break;
      }
                        m_listOfComplexObjectMember.push_back(ComplexStructure(decoder));
        }
  }
}
        m_listOfComplexObjectMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "mapOfStringToStringMember")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key_1 = decoder->PopNextTextVal();
if (key_1.has_value()) {
    Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
auto peekType_1 = decoder->PeekType();
if(peekType_1){
    if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_mapOfStringToStringMember[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    } else {
        decoder->ConsumeNextSingleElement();
        Aws::StringStream ss_1;
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType_1 = decoder->PeekType();
            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                if (nextType_1.has_value()) {
                    decoder->ConsumeNextSingleElement();  // consume the Break
                }
                break;
            }
            auto val = decoder->PopNextTextVal();
            if (val.has_value()) {
                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
            m_mapOfStringToStringMember[keyStr_1] = ss_1.str();
            ss_1.clear();
    }
}
}        }
    }
  }
  else // IndefMapStart
  {
    decoder->ConsumeNextSingleElement(); // consume the IndefMapStart
    while (decoder->LastError() == AWS_ERROR_UNKNOWN)
    {
      auto nextType_0 = decoder->PeekType();
      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break)
      {
        if (nextType_0.has_value())
        {
          decoder->ConsumeNextSingleElement(); // consume the Break
        }
        break;
      }
            auto key_1 = decoder->PopNextTextVal();
if (key_1.has_value()) {
    Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
auto peekType_1 = decoder->PeekType();
if(peekType_1){
    if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_mapOfStringToStringMember[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    } else {
        decoder->ConsumeNextSingleElement();
        Aws::StringStream ss_1;
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType_1 = decoder->PeekType();
            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                if (nextType_1.has_value()) {
                    decoder->ConsumeNextSingleElement();  // consume the Break
                }
                break;
            }
            auto val = decoder->PopNextTextVal();
            if (val.has_value()) {
                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
            m_mapOfStringToStringMember[keyStr_1] = ss_1.str();
            ss_1.clear();
    }
}
}    }
  }
}
        m_mapOfStringToStringMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "complexStructMember")
  {
                      m_complexStructMember = ComplexStructure(decoder);
            m_complexStructMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "x-amzn-requestid")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
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
    }
}
        m_requestIdHasBeenSet = true;
  }
  
else
{
  // Unknown key, skip the value
  decoder->ConsumeNextWholeDataItem();
}
                        if((decoder->LastError() != AWS_ERROR_UNKNOWN)){
                            AWS_LOG_ERROR("EchoOperationResult", "Invalid data received for %s", initialKeyStr.c_str());
                            break;
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
                auto outerMapNextType = decoder->PeekType();
                if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break)
                {
                    if (outerMapNextType.has_value())
                    {
                        decoder->ConsumeNextSingleElement(); // consume the Break
                    }
                    break;
                }

                auto initialKey = decoder->PopNextTextVal();
                if (initialKey.has_value())
                {
                    Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);
                        

    if (initialKeyStr == "booleanMember")
  {
          auto val = decoder->PopNextBooleanVal();
if (val.has_value()) {
    m_booleanMember = val.value();
}
        m_booleanMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "stringMember")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_stringMember = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
        m_stringMember = ss.str();
    }
}
        m_stringMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "integerMember")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if(peekType.value() == Aws::Crt::Cbor::CborType::UInt){
        auto val = decoder->PopNextUnsignedIntVal();
        if (val.has_value()) {
            m_integerMember = static_cast<int64_t>(val.value());
        }
    } else {
        auto val = decoder->PopNextNegativeIntVal();
        if (val.has_value()) {
            m_integerMember = static_cast<int64_t>(1 - val.value());
        }
    }
}
        m_integerMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "longMember")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if(peekType.value() == Aws::Crt::Cbor::CborType::UInt){
        auto val = decoder->PopNextUnsignedIntVal();
        if (val.has_value()) {
            m_longMember = static_cast<int64_t>(val.value());
        }
    } else {
        auto val = decoder->PopNextNegativeIntVal();
        if (val.has_value()) {
            m_longMember = static_cast<int64_t>(1 - val.value());
        }
    }
}
        m_longMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "floatMember")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_floatMember = val.value();
}
        m_floatMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "doubleMember")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_doubleMember = val.value();
}
        m_doubleMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "timestampMember")
  {
          auto tag = decoder->PopNextTagVal();
if (tag.has_value() && tag.value() == 1) //1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
{
    auto dateType = decoder->PeekType();
    if (dateType.has_value())
    {
        if (dateType.value() == Aws::Crt::Cbor::CborType::Float)
        {
            auto val = decoder->PopNextFloatVal();
            if (val.has_value()) {
                m_timestampMember = Aws::Utils::DateTime(val.value());
            }
        }
        else
        {
            auto val = decoder->PopNextUnsignedIntVal();
            if (val.has_value()) {
                m_timestampMember = Aws::Utils::DateTime(val.value());
            }
        }
    }
}
        m_timestampMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "blobMember")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if (peekType.value() == Aws::Crt::Cbor::CborType::Bytes) {
        auto val = decoder->PopNextBytesVal();
        if (val.has_value()) {
            m_blobMember = Aws::Utils::ByteBuffer(val.value().ptr, val.value().len);
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
            auto val = decoder->PopNextBytesVal();
            if (val.has_value()) {
                ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
        m_blobMember = Aws::Utils::ByteBuffer(ss.str());
        ss.clear();
    }
}
        m_blobMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "listOfStringsMember")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                auto peekType_1 = decoder->PeekType();
if(peekType_1.has_value()){
    if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_listOfStringsMember.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
        }
    } else {
        decoder->ConsumeNextSingleElement();
        Aws::StringStream ss_1;
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType_1 = decoder->PeekType();
            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                if (nextType_1.has_value()) {
                    decoder->ConsumeNextSingleElement();  // consume the Break
                }
                break;
            }
            auto val = decoder->PopNextTextVal();
            if (val.has_value()) {
                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
        m_listOfStringsMember.push_back(ss_1.str());
        ss_1.clear();
    }
}
        }
    }
  }
  else // IndefArrayStart
  {
    decoder->ConsumeNextSingleElement(); // consume the IndefArrayStart
    while (decoder->LastError() == AWS_ERROR_UNKNOWN)
    {
      auto nextType_0 = decoder->PeekType();
      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break)
      {
        if (nextType_0.has_value())
        {
          decoder->ConsumeNextSingleElement(); // consume the Break
        }
        break;
      }
            auto peekType_1 = decoder->PeekType();
if(peekType_1.has_value()){
    if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_listOfStringsMember.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
        }
    } else {
        decoder->ConsumeNextSingleElement();
        Aws::StringStream ss_1;
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType_1 = decoder->PeekType();
            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                if (nextType_1.has_value()) {
                    decoder->ConsumeNextSingleElement();  // consume the Break
                }
                break;
            }
            auto val = decoder->PopNextTextVal();
            if (val.has_value()) {
                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
        m_listOfStringsMember.push_back(ss_1.str());
        ss_1.clear();
    }
}
    }
  }
}
        m_listOfStringsMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "listOfComplexObjectMember")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                            m_listOfComplexObjectMember.push_back(ComplexStructure(decoder));
            }
    }
  }
  else // IndefArrayStart
  {
    decoder->ConsumeNextSingleElement(); // consume the IndefArrayStart
    while (decoder->LastError() == AWS_ERROR_UNKNOWN)
    {
      auto nextType_0 = decoder->PeekType();
      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break)
      {
        if (nextType_0.has_value())
        {
          decoder->ConsumeNextSingleElement(); // consume the Break
        }
        break;
      }
                        m_listOfComplexObjectMember.push_back(ComplexStructure(decoder));
        }
  }
}
        m_listOfComplexObjectMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "mapOfStringToStringMember")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key_1 = decoder->PopNextTextVal();
if (key_1.has_value()) {
    Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
auto peekType_1 = decoder->PeekType();
if(peekType_1){
    if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_mapOfStringToStringMember[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    } else {
        decoder->ConsumeNextSingleElement();
        Aws::StringStream ss_1;
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType_1 = decoder->PeekType();
            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                if (nextType_1.has_value()) {
                    decoder->ConsumeNextSingleElement();  // consume the Break
                }
                break;
            }
            auto val = decoder->PopNextTextVal();
            if (val.has_value()) {
                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
            m_mapOfStringToStringMember[keyStr_1] = ss_1.str();
            ss_1.clear();
    }
}
}        }
    }
  }
  else // IndefMapStart
  {
    decoder->ConsumeNextSingleElement(); // consume the IndefMapStart
    while (decoder->LastError() == AWS_ERROR_UNKNOWN)
    {
      auto nextType_0 = decoder->PeekType();
      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break)
      {
        if (nextType_0.has_value())
        {
          decoder->ConsumeNextSingleElement(); // consume the Break
        }
        break;
      }
            auto key_1 = decoder->PopNextTextVal();
if (key_1.has_value()) {
    Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
auto peekType_1 = decoder->PeekType();
if(peekType_1){
    if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            m_mapOfStringToStringMember[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    } else {
        decoder->ConsumeNextSingleElement();
        Aws::StringStream ss_1;
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
            auto nextType_1 = decoder->PeekType();
            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                if (nextType_1.has_value()) {
                    decoder->ConsumeNextSingleElement();  // consume the Break
                }
                break;
            }
            auto val = decoder->PopNextTextVal();
            if (val.has_value()) {
                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
            }
        }
            m_mapOfStringToStringMember[keyStr_1] = ss_1.str();
            ss_1.clear();
    }
}
}    }
  }
}
        m_mapOfStringToStringMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "complexStructMember")
  {
                      m_complexStructMember = ComplexStructure(decoder);
            m_complexStructMemberHasBeenSet = true;
  }
  
    

     else if (initialKeyStr == "x-amzn-requestid")
  {
          auto peekType = decoder->PeekType();
if (peekType.has_value()) {
    if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
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
    }
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
