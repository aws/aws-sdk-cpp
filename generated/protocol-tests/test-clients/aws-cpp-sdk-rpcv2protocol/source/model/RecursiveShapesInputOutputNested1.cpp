/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/rpcv2protocol/model/RecursiveShapesInputOutputNested2.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws
{
namespace RpcV2Protocol
{
namespace Model
{

RecursiveShapesInputOutputNested1::RecursiveShapesInputOutputNested1(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder)
{
*this = decoder;
}

RecursiveShapesInputOutputNested1& RecursiveShapesInputOutputNested1::operator =(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder)
{
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
                            

    if (keyStr == "foo")
  {
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_foo = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
    m_foo = ss.str();
    ss.clear();
}
        m_fooHasBeenSet = true;
  }
  
    

     else if (keyStr == "nested")
  {
                      m_nested = Aws::MakeShared<RecursiveShapesInputOutputNested2>("RecursiveShapesInputOutputNested1", RecursiveShapesInputOutputNested2(decoder));
            m_nestedHasBeenSet = true;
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
                        

    if (keyStr == "foo")
  {
          if (decoder->PeekType().value() == Aws::Crt::Cbor::CborType::Text) {
    auto val = decoder->PopNextTextVal();
    if (val.has_value()) {
        m_foo = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
    m_foo = ss.str();
    ss.clear();
}
        m_fooHasBeenSet = true;
  }
  
    

     else if (keyStr == "nested")
  {
                      m_nested = Aws::MakeShared<RecursiveShapesInputOutputNested2>("RecursiveShapesInputOutputNested1", RecursiveShapesInputOutputNested2(decoder));
            m_nestedHasBeenSet = true;
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

return *this;
}

void RecursiveShapesInputOutputNested1::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const
{

    // Calculate map size
    size_t mapSize = 0;
                                        if(m_fooHasBeenSet) mapSize++;
                                                            if(m_nestedHasBeenSet) mapSize++;
                        
  encoder.WriteMapStart(mapSize);
    

    if(m_fooHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("foo"));
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_foo.c_str()));
     }


    if(m_nestedHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("nested"));
                     m_nested->CborEncode(encoder);
         }
}

} // namespace Model
} // namespace RpcV2Protocol
} // namespace Aws