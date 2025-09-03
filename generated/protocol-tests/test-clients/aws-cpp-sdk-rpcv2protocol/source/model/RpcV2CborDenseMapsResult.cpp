/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2protocol/model/RpcV2CborDenseMapsResult.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;
using namespace Aws::Utils::Cbor;
using namespace Aws;

  RpcV2CborDenseMapsResult::RpcV2CborDenseMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
    {
  *this = result;
  }

  RpcV2CborDenseMapsResult& RpcV2CborDenseMapsResult::operator =(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
    {
    const auto& cborValue = result.GetPayload();
    const auto decoder = cborValue.GetDecoder();

        if (decoder != nullptr)
{
    auto peekType = decoder->PeekType();
    if (peekType.has_value() && (peekType.value() == CborType::MapStart || peekType.value() == CborType::IndefMapStart))
    {
        if (peekType.value() == CborType::MapStart)
        {
            auto mapSize = decoder->PopNextMapStart();
            if (mapSize.has_value())
            {
                for (size_t i = 0; i < mapSize.value(); ++i)
                {
                    auto key = decoder->PopNextTextVal();
                    if (key.has_value())
                    {
                        Aws::String keyStr(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
                            

    if (keyStr == "denseStructMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
            m_denseStructMap[keyStr] = GreetingStruct(decoder);
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
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
            m_denseStructMap[keyStr] = GreetingStruct(decoder);
    }    }
  }
}
        m_denseStructMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "denseNumberMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
        m_denseNumberMap[keyStr] = val.value();
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
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
        m_denseNumberMap[keyStr] = val.value();
    }
}    }
  }
}
        m_denseNumberMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "denseBooleanMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto val = decoder->PopNextBooleanVal();
    if (val.has_value()) {
        m_denseBooleanMap[keyStr] = val.value();
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
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto val = decoder->PopNextBooleanVal();
    if (val.has_value()) {
        m_denseBooleanMap[keyStr] = val.value();
    }
}    }
  }
}
        m_denseBooleanMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "denseStringMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_denseStringMap[keyStr] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss_0;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType_0 = decoder->PeekType();
        if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
            if (nextType_0.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss_0 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
        m_denseStringMap[keyStr] = ss_0.str();
        ss_0.clear();
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
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_denseStringMap[keyStr] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss_0;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType_0 = decoder->PeekType();
        if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
            if (nextType_0.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss_0 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
        m_denseStringMap[keyStr] = ss_0.str();
        ss_0.clear();
    }
}    }
  }
}
        m_denseStringMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "denseSetMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto nestedList_1 = Vector<Aws::String>();
    auto peekType_1 = decoder->PeekType();
    if (peekType_1.has_value() && (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart))
    {
      if (peekType_1.value() == CborType::ArrayStart)
      {
        auto listSize_1 = decoder->PopNextArrayStart();
        if(listSize_1.has_value()){
        for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
        if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    nestedList_1.push_back(ss_1.str());
    ss_1.clear();
}
        }
        }
      }
      else // IndefArrayStart
      {
        decoder->ConsumeNextSingleElement(); // consume the IndefArrayStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN)
        {
          auto nextType_1 = decoder->PeekType();
          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break)
          {
            if (nextType_1.has_value())
            {
              decoder->ConsumeNextSingleElement(); // consume the Break
            }
            break;
          }
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    nestedList_1.push_back(ss_1.str());
    ss_1.clear();
}
        }
      }
      m_denseSetMap[keyStr] = nestedList_1;
    }
}        }
    }
  }
  else // IndefMapStart
  {
    decoder->ConsumeNextSingleElement(); // consume the IndefMapStart
    while (decoder->LastError() == AWS_ERROR_UNKNOWN)
    {
      auto nextType_1 = decoder->PeekType();
      if (!nextType_1.has_value() || nextType_1.value() == CborType::Break)
      {
        if (nextType_1.has_value())
        {
          decoder->ConsumeNextSingleElement(); // consume the Break
        }
        break;
      }
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto nestedList_2 = Vector<Aws::String>();
    auto peekType_2 = decoder->PeekType();
    if (peekType_2.has_value() && (peekType_2.value() == CborType::ArrayStart || peekType_2.value() == CborType::IndefArrayStart))
    {
      if (peekType_2.value() == CborType::ArrayStart)
      {
        auto listSize_2 = decoder->PopNextArrayStart();
        if(listSize_2.has_value()){
        for (size_t j_2 = 0; j_2 < listSize_2.value(); j_2++) {
        if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        nestedList_2.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss_2;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType_2 = decoder->PeekType();
        if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
            if (nextType_2.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
    nestedList_2.push_back(ss_2.str());
    ss_2.clear();
}
        }
        }
      }
      else // IndefArrayStart
      {
        decoder->ConsumeNextSingleElement(); // consume the IndefArrayStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN)
        {
          auto nextType_2 = decoder->PeekType();
          if (!nextType_2.has_value() || nextType_2.value() == CborType::Break)
          {
            if (nextType_2.has_value())
            {
              decoder->ConsumeNextSingleElement(); // consume the Break
            }
            break;
          }
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        nestedList_2.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss_2;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType_2 = decoder->PeekType();
        if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
            if (nextType_2.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
    nestedList_2.push_back(ss_2.str());
    ss_2.clear();
}
        }
      }
      m_denseSetMap[keyStr] = nestedList_2;
    }
}    }
  }
}
        m_denseSetMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "x-amzn-requestid")
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

                auto key = decoder->PopNextTextVal();
                if (key.has_value())
                {
                    Aws::String keyStr(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
                        

    if (keyStr == "denseStructMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
            m_denseStructMap[keyStr] = GreetingStruct(decoder);
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
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
            m_denseStructMap[keyStr] = GreetingStruct(decoder);
    }    }
  }
}
        m_denseStructMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "denseNumberMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
        m_denseNumberMap[keyStr] = val.value();
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
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
        m_denseNumberMap[keyStr] = val.value();
    }
}    }
  }
}
        m_denseNumberMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "denseBooleanMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto val = decoder->PopNextBooleanVal();
    if (val.has_value()) {
        m_denseBooleanMap[keyStr] = val.value();
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
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto val = decoder->PopNextBooleanVal();
    if (val.has_value()) {
        m_denseBooleanMap[keyStr] = val.value();
    }
}    }
  }
}
        m_denseBooleanMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "denseStringMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_denseStringMap[keyStr] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss_0;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType_0 = decoder->PeekType();
        if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
            if (nextType_0.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss_0 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
        m_denseStringMap[keyStr] = ss_0.str();
        ss_0.clear();
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
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_denseStringMap[keyStr] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss_0;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType_0 = decoder->PeekType();
        if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
            if (nextType_0.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss_0 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
        m_denseStringMap[keyStr] = ss_0.str();
        ss_0.clear();
    }
}    }
  }
}
        m_denseStringMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "denseSetMap")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart))
{
  if (peekType_0.value() == CborType::MapStart)
  {
    auto mapSize_0 = decoder->PopNextMapStart();
    if(mapSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto nestedList_1 = Vector<Aws::String>();
    auto peekType_1 = decoder->PeekType();
    if (peekType_1.has_value() && (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart))
    {
      if (peekType_1.value() == CborType::ArrayStart)
      {
        auto listSize_1 = decoder->PopNextArrayStart();
        if(listSize_1.has_value()){
        for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
        if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    nestedList_1.push_back(ss_1.str());
    ss_1.clear();
}
        }
        }
      }
      else // IndefArrayStart
      {
        decoder->ConsumeNextSingleElement(); // consume the IndefArrayStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN)
        {
          auto nextType_1 = decoder->PeekType();
          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break)
          {
            if (nextType_1.has_value())
            {
              decoder->ConsumeNextSingleElement(); // consume the Break
            }
            break;
          }
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    nestedList_1.push_back(ss_1.str());
    ss_1.clear();
}
        }
      }
      m_denseSetMap[keyStr] = nestedList_1;
    }
}        }
    }
  }
  else // IndefMapStart
  {
    decoder->ConsumeNextSingleElement(); // consume the IndefMapStart
    while (decoder->LastError() == AWS_ERROR_UNKNOWN)
    {
      auto nextType_1 = decoder->PeekType();
      if (!nextType_1.has_value() || nextType_1.value() == CborType::Break)
      {
        if (nextType_1.has_value())
        {
          decoder->ConsumeNextSingleElement(); // consume the Break
        }
        break;
      }
            auto key = decoder->PopNextTextVal();
if (key.has_value()) {
    Aws::String keyStr = Aws::String(reinterpret_cast<const char*>(key.value().ptr), key.value().len);
    auto nestedList_2 = Vector<Aws::String>();
    auto peekType_2 = decoder->PeekType();
    if (peekType_2.has_value() && (peekType_2.value() == CborType::ArrayStart || peekType_2.value() == CborType::IndefArrayStart))
    {
      if (peekType_2.value() == CborType::ArrayStart)
      {
        auto listSize_2 = decoder->PopNextArrayStart();
        if(listSize_2.has_value()){
        for (size_t j_2 = 0; j_2 < listSize_2.value(); j_2++) {
        if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        nestedList_2.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss_2;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType_2 = decoder->PeekType();
        if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
            if (nextType_2.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
    nestedList_2.push_back(ss_2.str());
    ss_2.clear();
}
        }
        }
      }
      else // IndefArrayStart
      {
        decoder->ConsumeNextSingleElement(); // consume the IndefArrayStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN)
        {
          auto nextType_2 = decoder->PeekType();
          if (!nextType_2.has_value() || nextType_2.value() == CborType::Break)
          {
            if (nextType_2.has_value())
            {
              decoder->ConsumeNextSingleElement(); // consume the Break
            }
            break;
          }
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        nestedList_2.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
    }
} else {
    decoder->ConsumeNextSingleElement();
    Aws::StringStream ss_2;
    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
        auto nextType_2 = decoder->PeekType();
        if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
            if (nextType_2.has_value()) {
                decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
        }
        auto val = decoder->PopNextTextVal();
        if (val.has_value()) {
            ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
        }
    }
    nestedList_2.push_back(ss_2.str());
    ss_2.clear();
}
        }
      }
      m_denseSetMap[keyStr] = nestedList_2;
    }
}    }
  }
}
        m_denseSetMapHasBeenSet = true;
  }
  
    

     else if (keyStr == "x-amzn-requestid")
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
