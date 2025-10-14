/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/echo/Echo_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/echo/model/ComplexStructure.h>
#include <utility>
namespace Aws
{
template<typename RESULT_TYPE>
    class AmazonWebServiceResult;

    namespace Utils
    {
    namespace Cbor
    {
    class CborValue;
    } // namespace Cbor
    } // namespace Utils
        namespace Echo
    {
    namespace Model
    {
            class EchoOperationResult
    {
    public:
    AWS_ECHO_API EchoOperationResult() = default;
    AWS_ECHO_API EchoOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
    AWS_ECHO_API EchoOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

        
    ///@{
    
    inline bool GetBooleanMember() const { return m_booleanMember; }
    inline void SetBooleanMember(bool value) { m_booleanMemberHasBeenSet = true; m_booleanMember = value; }
    inline EchoOperationResult& WithBooleanMember(bool value) { SetBooleanMember(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStringMember() const { return m_stringMember; }
    template<typename StringMemberT = Aws::String>
    void SetStringMember(StringMemberT&& value) { m_stringMemberHasBeenSet = true; m_stringMember = std::forward<StringMemberT>(value); }
    template<typename StringMemberT = Aws::String>
    EchoOperationResult& WithStringMember(StringMemberT&& value) { SetStringMember(std::forward<StringMemberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int64_t GetIntegerMember() const { return m_integerMember; }
    inline void SetIntegerMember(int64_t value) { m_integerMemberHasBeenSet = true; m_integerMember = value; }
    inline EchoOperationResult& WithIntegerMember(int64_t value) { SetIntegerMember(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetLongMember() const { return m_longMember; }
    inline void SetLongMember(long long value) { m_longMemberHasBeenSet = true; m_longMember = value; }
    inline EchoOperationResult& WithLongMember(long long value) { SetLongMember(value); return *this;}
    ///@}

    ///@{
    
    inline double GetFloatMember() const { return m_floatMember; }
    inline void SetFloatMember(double value) { m_floatMemberHasBeenSet = true; m_floatMember = value; }
    inline EchoOperationResult& WithFloatMember(double value) { SetFloatMember(value); return *this;}
    ///@}

    ///@{
    
    inline double GetDoubleMember() const { return m_doubleMember; }
    inline void SetDoubleMember(double value) { m_doubleMemberHasBeenSet = true; m_doubleMember = value; }
    inline EchoOperationResult& WithDoubleMember(double value) { SetDoubleMember(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTimestampMember() const { return m_timestampMember; }
    template<typename TimestampMemberT = Aws::Utils::DateTime>
    void SetTimestampMember(TimestampMemberT&& value) { m_timestampMemberHasBeenSet = true; m_timestampMember = std::forward<TimestampMemberT>(value); }
    template<typename TimestampMemberT = Aws::Utils::DateTime>
    EchoOperationResult& WithTimestampMember(TimestampMemberT&& value) { SetTimestampMember(std::forward<TimestampMemberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::ByteBuffer& GetBlobMember() const { return m_blobMember; }
    template<typename BlobMemberT = Aws::Utils::ByteBuffer>
    void SetBlobMember(BlobMemberT&& value) { m_blobMemberHasBeenSet = true; m_blobMember = std::forward<BlobMemberT>(value); }
    template<typename BlobMemberT = Aws::Utils::ByteBuffer>
    EchoOperationResult& WithBlobMember(BlobMemberT&& value) { SetBlobMember(std::forward<BlobMemberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListOfStringsMember() const { return m_listOfStringsMember; }
    template<typename ListOfStringsMemberT = Aws::Vector<Aws::String>>
    void SetListOfStringsMember(ListOfStringsMemberT&& value) { m_listOfStringsMemberHasBeenSet = true; m_listOfStringsMember = std::forward<ListOfStringsMemberT>(value); }
    template<typename ListOfStringsMemberT = Aws::Vector<Aws::String>>
    EchoOperationResult& WithListOfStringsMember(ListOfStringsMemberT&& value) { SetListOfStringsMember(std::forward<ListOfStringsMemberT>(value)); return *this;}
    template<typename ListOfStringsMemberT = Aws::String>
    EchoOperationResult& AddListOfStringsMember(ListOfStringsMemberT&& value) { m_listOfStringsMemberHasBeenSet = true; m_listOfStringsMember.emplace_back(std::forward<ListOfStringsMemberT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<ComplexStructure>& GetListOfComplexObjectMember() const { return m_listOfComplexObjectMember; }
    template<typename ListOfComplexObjectMemberT = Aws::Vector<ComplexStructure>>
    void SetListOfComplexObjectMember(ListOfComplexObjectMemberT&& value) { m_listOfComplexObjectMemberHasBeenSet = true; m_listOfComplexObjectMember = std::forward<ListOfComplexObjectMemberT>(value); }
    template<typename ListOfComplexObjectMemberT = Aws::Vector<ComplexStructure>>
    EchoOperationResult& WithListOfComplexObjectMember(ListOfComplexObjectMemberT&& value) { SetListOfComplexObjectMember(std::forward<ListOfComplexObjectMemberT>(value)); return *this;}
    template<typename ListOfComplexObjectMemberT = ComplexStructure>
    EchoOperationResult& AddListOfComplexObjectMember(ListOfComplexObjectMemberT&& value) { m_listOfComplexObjectMemberHasBeenSet = true; m_listOfComplexObjectMember.emplace_back(std::forward<ListOfComplexObjectMemberT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMapOfStringToStringMember() const { return m_mapOfStringToStringMember; }
    template<typename MapOfStringToStringMemberT = Aws::Map<Aws::String, Aws::String>>
    void SetMapOfStringToStringMember(MapOfStringToStringMemberT&& value) { m_mapOfStringToStringMemberHasBeenSet = true; m_mapOfStringToStringMember = std::forward<MapOfStringToStringMemberT>(value); }
    template<typename MapOfStringToStringMemberT = Aws::Map<Aws::String, Aws::String>>
    EchoOperationResult& WithMapOfStringToStringMember(MapOfStringToStringMemberT&& value) { SetMapOfStringToStringMember(std::forward<MapOfStringToStringMemberT>(value)); return *this;}
    template<typename MapOfStringToStringMemberKeyT = Aws::String, typename MapOfStringToStringMemberValueT = Aws::String>
    EchoOperationResult& AddMapOfStringToStringMember(MapOfStringToStringMemberKeyT&& key, MapOfStringToStringMemberValueT&& value) {
      m_mapOfStringToStringMemberHasBeenSet = true; m_mapOfStringToStringMember.emplace(std::forward<MapOfStringToStringMemberKeyT>(key), std::forward<MapOfStringToStringMemberValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ComplexStructure& GetComplexStructMember() const { return m_complexStructMember; }
    template<typename ComplexStructMemberT = ComplexStructure>
    void SetComplexStructMember(ComplexStructMemberT&& value) { m_complexStructMemberHasBeenSet = true; m_complexStructMember = std::forward<ComplexStructMemberT>(value); }
    template<typename ComplexStructMemberT = ComplexStructure>
    EchoOperationResult& WithComplexStructMember(ComplexStructMemberT&& value) { SetComplexStructMember(std::forward<ComplexStructMemberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EchoOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_booleanMember{false};
    bool m_booleanMemberHasBeenSet = false;

    Aws::String m_stringMember;
    bool m_stringMemberHasBeenSet = false;

    int64_t m_integerMember{0};
    bool m_integerMemberHasBeenSet = false;

    long long m_longMember{0};
    bool m_longMemberHasBeenSet = false;

    double m_floatMember{0.0};
    bool m_floatMemberHasBeenSet = false;

    double m_doubleMember{0.0};
    bool m_doubleMemberHasBeenSet = false;

    Aws::Utils::DateTime m_timestampMember{};
    bool m_timestampMemberHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blobMember{};
    bool m_blobMemberHasBeenSet = false;

    Aws::Vector<Aws::String> m_listOfStringsMember;
    bool m_listOfStringsMemberHasBeenSet = false;

    Aws::Vector<ComplexStructure> m_listOfComplexObjectMember;
    bool m_listOfComplexObjectMemberHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mapOfStringToStringMember;
    bool m_mapOfStringToStringMemberHasBeenSet = false;

    ComplexStructure m_complexStructMember;
    bool m_complexStructMemberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
    };

    } // namespace Model
    } // namespace Echo
    } // namespace Aws
