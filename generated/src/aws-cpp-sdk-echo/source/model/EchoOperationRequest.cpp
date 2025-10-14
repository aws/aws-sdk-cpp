/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/echo/model/EchoOperationRequest.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>
    
    using namespace Aws::Echo::Model;
    using namespace Aws::Crt::Cbor;
    using namespace Aws::Utils;
    
    Aws::String EchoOperationRequest::SerializePayload() const
    {
            Aws::Crt::Cbor::CborEncoder encoder;
        
        // Calculate map size
        size_t mapSize = 0;
                                                        if(m_booleanMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_stringMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_integerMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_longMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_floatMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_doubleMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_timestampMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_blobMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_listOfStringsMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_listOfComplexObjectMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_mapOfStringToStringMemberHasBeenSet){
                        mapSize++;
                    }
                                                                                    if(m_complexStructMemberHasBeenSet){
                        mapSize++;
                    }
                                            
        encoder.WriteMapStart(mapSize);

                

    if(m_booleanMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("booleanMember"));
                encoder.WriteBool(m_booleanMember);
     }


    if(m_stringMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("stringMember"));
                encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stringMember.c_str()));
     }


    if(m_integerMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("integerMember"));
                (m_integerMember >= 0) ? encoder.WriteUInt(m_integerMember) : encoder.WriteNegInt(m_integerMember);
     }


    if(m_longMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("longMember"));
                (m_longMember >= 0) ? encoder.WriteUInt(m_longMember) : encoder.WriteNegInt(m_longMember);
     }


    if(m_floatMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("floatMember"));
                encoder.WriteFloat(m_floatMember);
     }


    if(m_doubleMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("doubleMember"));
                encoder.WriteFloat(m_doubleMember);
     }


    if(m_timestampMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("timestampMember"));
                encoder.WriteTag(1); //1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
encoder.WriteUInt(m_timestampMember.Millis());
     }


    if(m_blobMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("blobMember"));
                encoder.WriteBytes(Aws::Crt::ByteCursorFromCString(reinterpret_cast<const char*>(m_blobMember.GetUnderlyingData())));
     }


    if(m_listOfStringsMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("listOfStringsMember"));
                encoder.WriteArrayStart(m_listOfStringsMember.size());
for(const auto& item_0 : m_listOfStringsMember) {
encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
}
     }


    if(m_listOfComplexObjectMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("listOfComplexObjectMember"));
                encoder.WriteArrayStart(m_listOfComplexObjectMember.size());
for(const auto& item_0 : m_listOfComplexObjectMember) {
            item_0.CborEncode(encoder);
    }
     }


    if(m_mapOfStringToStringMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("mapOfStringToStringMember"));
                encoder.WriteMapStart(m_mapOfStringToStringMember.size());
for(const auto& item_0 : m_mapOfStringToStringMember) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
}
     }


    if(m_complexStructMemberHasBeenSet)
    {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString("complexStructMember"));
                            m_complexStructMember.CborEncode(encoder);
         }
        const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
        return str;
        }

        Aws::Http::HeaderValueCollection EchoOperationRequest::GetRequestSpecificHeaders() const
    {
        Aws::Http::HeaderValueCollection headers;
                    headers.emplace("smithy-protocol", "rpc-v2-cbor");
                    headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
                    headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
                        return headers;
    }
    
    
                

