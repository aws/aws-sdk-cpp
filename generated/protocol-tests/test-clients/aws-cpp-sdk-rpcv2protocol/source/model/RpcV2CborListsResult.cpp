/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2protocol/model/RpcV2CborListsResult.h>
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

  RpcV2CborListsResult::RpcV2CborListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
    {
  *this = result;
  }

  RpcV2CborListsResult& RpcV2CborListsResult::operator =(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
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
                            

    if (keyStr == "stringList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    m_stringList.push_back(ss_0.str());
    ss_0.clear();
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
            if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    m_stringList.push_back(ss_0.str());
    ss_0.clear();
}
    }
  }
}
        m_stringListHasBeenSet = true;
  }
  
    

     else if (keyStr == "stringSet")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringSet.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    m_stringSet.push_back(ss_0.str());
    ss_0.clear();
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
            if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringSet.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    m_stringSet.push_back(ss_0.str());
    ss_0.clear();
}
    }
  }
}
        m_stringSetHasBeenSet = true;
  }
  
    

     else if (keyStr == "integerList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                    auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
    m_integerList.push_back(val.value());
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
                auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
    m_integerList.push_back(val.value());
    }
    }
  }
}
        m_integerListHasBeenSet = true;
  }
  
    

     else if (keyStr == "booleanList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                    auto val = decoder->PopNextBooleanVal();
    if (val.has_value()) {
    m_booleanList.push_back(val.value());
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
                auto val = decoder->PopNextBooleanVal();
    if (val.has_value()) {
    m_booleanList.push_back(val.value());
    }
    }
  }
}
        m_booleanListHasBeenSet = true;
  }
  
    

     else if (keyStr == "timestampList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
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
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
            else if (dateType.value() == Aws::Crt::Cbor::CborType::UInt)
            {
                auto val = decoder->PopNextUnsignedIntVal();
                if (val.has_value()) {
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
            else
            {
                auto val = decoder->PopNextNegativeIntVal();
                if (val.has_value())
                {
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
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
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
            else if (dateType.value() == Aws::Crt::Cbor::CborType::UInt)
            {
                auto val = decoder->PopNextUnsignedIntVal();
                if (val.has_value()) {
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
            else
            {
                auto val = decoder->PopNextNegativeIntVal();
                if (val.has_value())
                {
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
        }
    }
    }
  }
}
        m_timestampListHasBeenSet = true;
  }
  
    

     else if (keyStr == "enumList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                auto val = decoder->PopNextTextVal();
if (val.has_value()) {
    m_enumList.push_back(FooEnumMapper::GetFooEnumForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
            auto val = decoder->PopNextTextVal();
if (val.has_value()) {
    m_enumList.push_back(FooEnumMapper::GetFooEnumForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
    }
    }
  }
}
        m_enumListHasBeenSet = true;
  }
  
    

     else if (keyStr == "intEnumList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                    auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
    m_intEnumList.push_back(val.value());
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
                auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
    m_intEnumList.push_back(val.value());
    }
    }
  }
}
        m_intEnumListHasBeenSet = true;
  }
  
    

     else if (keyStr == "nestedStringList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
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
      m_nestedStringList.push_back(nestedList_1);
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
      m_nestedStringList.push_back(nestedList_2);
    }
    }
  }
}
        m_nestedStringListHasBeenSet = true;
  }
  
    

     else if (keyStr == "structureList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                            m_structureList.push_back(StructureListMember(decoder));
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
                        m_structureList.push_back(StructureListMember(decoder));
        }
  }
}
        m_structureListHasBeenSet = true;
  }
  
    

     else if (keyStr == "blobList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                    if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::IndefBytesStart){
        decoder->ConsumeNextSingleElement();
    }
    auto val = decoder->PopNextBytesVal();
    if (val.has_value()) {
    m_blobList.push_back(Aws::Utils::ByteBuffer(val.value().ptr, val.value().len));
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
                if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::IndefBytesStart){
        decoder->ConsumeNextSingleElement();
    }
    auto val = decoder->PopNextBytesVal();
    if (val.has_value()) {
    m_blobList.push_back(Aws::Utils::ByteBuffer(val.value().ptr, val.value().len));
    }
    }
  }
}
        m_blobListHasBeenSet = true;
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
                        

    if (keyStr == "stringList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    m_stringList.push_back(ss_0.str());
    ss_0.clear();
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
            if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    m_stringList.push_back(ss_0.str());
    ss_0.clear();
}
    }
  }
}
        m_stringListHasBeenSet = true;
  }
  
    

     else if (keyStr == "stringSet")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringSet.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    m_stringSet.push_back(ss_0.str());
    ss_0.clear();
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
            if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_stringSet.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
    m_stringSet.push_back(ss_0.str());
    ss_0.clear();
}
    }
  }
}
        m_stringSetHasBeenSet = true;
  }
  
    

     else if (keyStr == "integerList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                    auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
    m_integerList.push_back(val.value());
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
                auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
    m_integerList.push_back(val.value());
    }
    }
  }
}
        m_integerListHasBeenSet = true;
  }
  
    

     else if (keyStr == "booleanList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                    auto val = decoder->PopNextBooleanVal();
    if (val.has_value()) {
    m_booleanList.push_back(val.value());
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
                auto val = decoder->PopNextBooleanVal();
    if (val.has_value()) {
    m_booleanList.push_back(val.value());
    }
    }
  }
}
        m_booleanListHasBeenSet = true;
  }
  
    

     else if (keyStr == "timestampList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
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
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
            else if (dateType.value() == Aws::Crt::Cbor::CborType::UInt)
            {
                auto val = decoder->PopNextUnsignedIntVal();
                if (val.has_value()) {
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
            else
            {
                auto val = decoder->PopNextNegativeIntVal();
                if (val.has_value())
                {
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
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
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
            else if (dateType.value() == Aws::Crt::Cbor::CborType::UInt)
            {
                auto val = decoder->PopNextUnsignedIntVal();
                if (val.has_value()) {
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
            else
            {
                auto val = decoder->PopNextNegativeIntVal();
                if (val.has_value())
                {
                    m_timestampList.push_back(Aws::Utils::DateTime(val.value()));
                }
            }
        }
    }
    }
  }
}
        m_timestampListHasBeenSet = true;
  }
  
    

     else if (keyStr == "enumList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                auto val = decoder->PopNextTextVal();
if (val.has_value()) {
    m_enumList.push_back(FooEnumMapper::GetFooEnumForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
            auto val = decoder->PopNextTextVal();
if (val.has_value()) {
    m_enumList.push_back(FooEnumMapper::GetFooEnumForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
    }
    }
  }
}
        m_enumListHasBeenSet = true;
  }
  
    

     else if (keyStr == "intEnumList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                    auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
    m_intEnumList.push_back(val.value());
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
                auto val = decoder->PeekType().value() == Aws::Crt::Cbor::CborType::UInt ? decoder->PopNextUnsignedIntVal() : decoder->PopNextNegativeIntVal();
    if (val.has_value()) {
    m_intEnumList.push_back(val.value());
    }
    }
  }
}
        m_intEnumListHasBeenSet = true;
  }
  
    

     else if (keyStr == "nestedStringList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
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
      m_nestedStringList.push_back(nestedList_1);
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
      m_nestedStringList.push_back(nestedList_2);
    }
    }
  }
}
        m_nestedStringListHasBeenSet = true;
  }
  
    

     else if (keyStr == "structureList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                            m_structureList.push_back(StructureListMember(decoder));
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
                        m_structureList.push_back(StructureListMember(decoder));
        }
  }
}
        m_structureListHasBeenSet = true;
  }
  
    

     else if (keyStr == "blobList")
  {
          
auto peekType_0 = decoder->PeekType();
if (peekType_0.has_value() && (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart))
{
  if (peekType_0.value() == CborType::ArrayStart)
  {
    auto listSize_0 = decoder->PopNextArrayStart();
    if(listSize_0.has_value()){
        for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                    if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::IndefBytesStart){
        decoder->ConsumeNextSingleElement();
    }
    auto val = decoder->PopNextBytesVal();
    if (val.has_value()) {
    m_blobList.push_back(Aws::Utils::ByteBuffer(val.value().ptr, val.value().len));
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
                if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::IndefBytesStart){
        decoder->ConsumeNextSingleElement();
    }
    auto val = decoder->PopNextBytesVal();
    if (val.has_value()) {
    m_blobList.push_back(Aws::Utils::ByteBuffer(val.value().ptr, val.value().len));
    }
    }
  }
}
        m_blobListHasBeenSet = true;
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
