/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2protocol/model/Float16Result.h>
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

  Float16Result::Float16Result(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
    {
  *this = result;
  }

  Float16Result& Float16Result::operator =(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result)
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
                            

    if (keyStr == "value")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_value = val.value();
}
        m_valueHasBeenSet = true;
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
                        

    if (keyStr == "value")
  {
          auto val = decoder->PopNextFloatVal();
if (val.has_value()) {
    m_value = val.value();
}
        m_valueHasBeenSet = true;
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
