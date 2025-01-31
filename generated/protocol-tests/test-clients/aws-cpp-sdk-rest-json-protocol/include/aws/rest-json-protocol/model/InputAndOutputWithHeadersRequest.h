/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/model/FooEnum.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class InputAndOutputWithHeadersRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API InputAndOutputWithHeadersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InputAndOutputWithHeaders"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetHeaderString() const{ return m_headerString; }
    inline bool HeaderStringHasBeenSet() const { return m_headerStringHasBeenSet; }
    inline void SetHeaderString(const Aws::String& value) { m_headerStringHasBeenSet = true; m_headerString = value; }
    inline void SetHeaderString(Aws::String&& value) { m_headerStringHasBeenSet = true; m_headerString = std::move(value); }
    inline void SetHeaderString(const char* value) { m_headerStringHasBeenSet = true; m_headerString.assign(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderString(const Aws::String& value) { SetHeaderString(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderString(Aws::String&& value) { SetHeaderString(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderString(const char* value) { SetHeaderString(value); return *this;}
    ///@}

    ///@{
    
    inline int GetHeaderByte() const{ return m_headerByte; }
    inline bool HeaderByteHasBeenSet() const { return m_headerByteHasBeenSet; }
    inline void SetHeaderByte(int value) { m_headerByteHasBeenSet = true; m_headerByte = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderByte(int value) { SetHeaderByte(value); return *this;}
    ///@}

    ///@{
    
    inline int GetHeaderShort() const{ return m_headerShort; }
    inline bool HeaderShortHasBeenSet() const { return m_headerShortHasBeenSet; }
    inline void SetHeaderShort(int value) { m_headerShortHasBeenSet = true; m_headerShort = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderShort(int value) { SetHeaderShort(value); return *this;}
    ///@}

    ///@{
    
    inline int GetHeaderInteger() const{ return m_headerInteger; }
    inline bool HeaderIntegerHasBeenSet() const { return m_headerIntegerHasBeenSet; }
    inline void SetHeaderInteger(int value) { m_headerIntegerHasBeenSet = true; m_headerInteger = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderInteger(int value) { SetHeaderInteger(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetHeaderLong() const{ return m_headerLong; }
    inline bool HeaderLongHasBeenSet() const { return m_headerLongHasBeenSet; }
    inline void SetHeaderLong(long long value) { m_headerLongHasBeenSet = true; m_headerLong = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderLong(long long value) { SetHeaderLong(value); return *this;}
    ///@}

    ///@{
    
    inline double GetHeaderFloat() const{ return m_headerFloat; }
    inline bool HeaderFloatHasBeenSet() const { return m_headerFloatHasBeenSet; }
    inline void SetHeaderFloat(double value) { m_headerFloatHasBeenSet = true; m_headerFloat = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderFloat(double value) { SetHeaderFloat(value); return *this;}
    ///@}

    ///@{
    
    inline double GetHeaderDouble() const{ return m_headerDouble; }
    inline bool HeaderDoubleHasBeenSet() const { return m_headerDoubleHasBeenSet; }
    inline void SetHeaderDouble(double value) { m_headerDoubleHasBeenSet = true; m_headerDouble = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderDouble(double value) { SetHeaderDouble(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetHeaderTrueBool() const{ return m_headerTrueBool; }
    inline bool HeaderTrueBoolHasBeenSet() const { return m_headerTrueBoolHasBeenSet; }
    inline void SetHeaderTrueBool(bool value) { m_headerTrueBoolHasBeenSet = true; m_headerTrueBool = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderTrueBool(bool value) { SetHeaderTrueBool(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetHeaderFalseBool() const{ return m_headerFalseBool; }
    inline bool HeaderFalseBoolHasBeenSet() const { return m_headerFalseBoolHasBeenSet; }
    inline void SetHeaderFalseBool(bool value) { m_headerFalseBoolHasBeenSet = true; m_headerFalseBool = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderFalseBool(bool value) { SetHeaderFalseBool(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetHeaderStringList() const{ return m_headerStringList; }
    inline bool HeaderStringListHasBeenSet() const { return m_headerStringListHasBeenSet; }
    inline void SetHeaderStringList(const Aws::Vector<Aws::String>& value) { m_headerStringListHasBeenSet = true; m_headerStringList = value; }
    inline void SetHeaderStringList(Aws::Vector<Aws::String>&& value) { m_headerStringListHasBeenSet = true; m_headerStringList = std::move(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderStringList(const Aws::Vector<Aws::String>& value) { SetHeaderStringList(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderStringList(Aws::Vector<Aws::String>&& value) { SetHeaderStringList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& AddHeaderStringList(const Aws::String& value) { m_headerStringListHasBeenSet = true; m_headerStringList.push_back(value); return *this; }
    inline InputAndOutputWithHeadersRequest& AddHeaderStringList(Aws::String&& value) { m_headerStringListHasBeenSet = true; m_headerStringList.push_back(std::move(value)); return *this; }
    inline InputAndOutputWithHeadersRequest& AddHeaderStringList(const char* value) { m_headerStringListHasBeenSet = true; m_headerStringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetHeaderStringSet() const{ return m_headerStringSet; }
    inline bool HeaderStringSetHasBeenSet() const { return m_headerStringSetHasBeenSet; }
    inline void SetHeaderStringSet(const Aws::Vector<Aws::String>& value) { m_headerStringSetHasBeenSet = true; m_headerStringSet = value; }
    inline void SetHeaderStringSet(Aws::Vector<Aws::String>&& value) { m_headerStringSetHasBeenSet = true; m_headerStringSet = std::move(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderStringSet(const Aws::Vector<Aws::String>& value) { SetHeaderStringSet(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderStringSet(Aws::Vector<Aws::String>&& value) { SetHeaderStringSet(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& AddHeaderStringSet(const Aws::String& value) { m_headerStringSetHasBeenSet = true; m_headerStringSet.push_back(value); return *this; }
    inline InputAndOutputWithHeadersRequest& AddHeaderStringSet(Aws::String&& value) { m_headerStringSetHasBeenSet = true; m_headerStringSet.push_back(std::move(value)); return *this; }
    inline InputAndOutputWithHeadersRequest& AddHeaderStringSet(const char* value) { m_headerStringSetHasBeenSet = true; m_headerStringSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetHeaderIntegerList() const{ return m_headerIntegerList; }
    inline bool HeaderIntegerListHasBeenSet() const { return m_headerIntegerListHasBeenSet; }
    inline void SetHeaderIntegerList(const Aws::Vector<int>& value) { m_headerIntegerListHasBeenSet = true; m_headerIntegerList = value; }
    inline void SetHeaderIntegerList(Aws::Vector<int>&& value) { m_headerIntegerListHasBeenSet = true; m_headerIntegerList = std::move(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderIntegerList(const Aws::Vector<int>& value) { SetHeaderIntegerList(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderIntegerList(Aws::Vector<int>&& value) { SetHeaderIntegerList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& AddHeaderIntegerList(int value) { m_headerIntegerListHasBeenSet = true; m_headerIntegerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetHeaderBooleanList() const{ return m_headerBooleanList; }
    inline bool HeaderBooleanListHasBeenSet() const { return m_headerBooleanListHasBeenSet; }
    inline void SetHeaderBooleanList(const Aws::Vector<bool>& value) { m_headerBooleanListHasBeenSet = true; m_headerBooleanList = value; }
    inline void SetHeaderBooleanList(Aws::Vector<bool>&& value) { m_headerBooleanListHasBeenSet = true; m_headerBooleanList = std::move(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderBooleanList(const Aws::Vector<bool>& value) { SetHeaderBooleanList(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderBooleanList(Aws::Vector<bool>&& value) { SetHeaderBooleanList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& AddHeaderBooleanList(bool value) { m_headerBooleanListHasBeenSet = true; m_headerBooleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetHeaderTimestampList() const{ return m_headerTimestampList; }
    inline bool HeaderTimestampListHasBeenSet() const { return m_headerTimestampListHasBeenSet; }
    inline void SetHeaderTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_headerTimestampListHasBeenSet = true; m_headerTimestampList = value; }
    inline void SetHeaderTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_headerTimestampListHasBeenSet = true; m_headerTimestampList = std::move(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetHeaderTimestampList(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetHeaderTimestampList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& AddHeaderTimestampList(const Aws::Utils::DateTime& value) { m_headerTimestampListHasBeenSet = true; m_headerTimestampList.push_back(value); return *this; }
    inline InputAndOutputWithHeadersRequest& AddHeaderTimestampList(Aws::Utils::DateTime&& value) { m_headerTimestampListHasBeenSet = true; m_headerTimestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const FooEnum& GetHeaderEnum() const{ return m_headerEnum; }
    inline bool HeaderEnumHasBeenSet() const { return m_headerEnumHasBeenSet; }
    inline void SetHeaderEnum(const FooEnum& value) { m_headerEnumHasBeenSet = true; m_headerEnum = value; }
    inline void SetHeaderEnum(FooEnum&& value) { m_headerEnumHasBeenSet = true; m_headerEnum = std::move(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderEnum(const FooEnum& value) { SetHeaderEnum(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderEnum(FooEnum&& value) { SetHeaderEnum(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetHeaderEnumList() const{ return m_headerEnumList; }
    inline bool HeaderEnumListHasBeenSet() const { return m_headerEnumListHasBeenSet; }
    inline void SetHeaderEnumList(const Aws::Vector<FooEnum>& value) { m_headerEnumListHasBeenSet = true; m_headerEnumList = value; }
    inline void SetHeaderEnumList(Aws::Vector<FooEnum>&& value) { m_headerEnumListHasBeenSet = true; m_headerEnumList = std::move(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderEnumList(const Aws::Vector<FooEnum>& value) { SetHeaderEnumList(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderEnumList(Aws::Vector<FooEnum>&& value) { SetHeaderEnumList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& AddHeaderEnumList(const FooEnum& value) { m_headerEnumListHasBeenSet = true; m_headerEnumList.push_back(value); return *this; }
    inline InputAndOutputWithHeadersRequest& AddHeaderEnumList(FooEnum&& value) { m_headerEnumListHasBeenSet = true; m_headerEnumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetHeaderIntegerEnum() const{ return m_headerIntegerEnum; }
    inline bool HeaderIntegerEnumHasBeenSet() const { return m_headerIntegerEnumHasBeenSet; }
    inline void SetHeaderIntegerEnum(int value) { m_headerIntegerEnumHasBeenSet = true; m_headerIntegerEnum = value; }
    inline InputAndOutputWithHeadersRequest& WithHeaderIntegerEnum(int value) { SetHeaderIntegerEnum(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetHeaderIntegerEnumList() const{ return m_headerIntegerEnumList; }
    inline bool HeaderIntegerEnumListHasBeenSet() const { return m_headerIntegerEnumListHasBeenSet; }
    inline void SetHeaderIntegerEnumList(const Aws::Vector<int>& value) { m_headerIntegerEnumListHasBeenSet = true; m_headerIntegerEnumList = value; }
    inline void SetHeaderIntegerEnumList(Aws::Vector<int>&& value) { m_headerIntegerEnumListHasBeenSet = true; m_headerIntegerEnumList = std::move(value); }
    inline InputAndOutputWithHeadersRequest& WithHeaderIntegerEnumList(const Aws::Vector<int>& value) { SetHeaderIntegerEnumList(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithHeaderIntegerEnumList(Aws::Vector<int>&& value) { SetHeaderIntegerEnumList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& AddHeaderIntegerEnumList(int value) { m_headerIntegerEnumListHasBeenSet = true; m_headerIntegerEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline InputAndOutputWithHeadersRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InputAndOutputWithHeadersRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_headerString;
    bool m_headerStringHasBeenSet = false;

    int m_headerByte;
    bool m_headerByteHasBeenSet = false;

    int m_headerShort;
    bool m_headerShortHasBeenSet = false;

    int m_headerInteger;
    bool m_headerIntegerHasBeenSet = false;

    long long m_headerLong;
    bool m_headerLongHasBeenSet = false;

    double m_headerFloat;
    bool m_headerFloatHasBeenSet = false;

    double m_headerDouble;
    bool m_headerDoubleHasBeenSet = false;

    bool m_headerTrueBool;
    bool m_headerTrueBoolHasBeenSet = false;

    bool m_headerFalseBool;
    bool m_headerFalseBoolHasBeenSet = false;

    Aws::Vector<Aws::String> m_headerStringList;
    bool m_headerStringListHasBeenSet = false;

    Aws::Vector<Aws::String> m_headerStringSet;
    bool m_headerStringSetHasBeenSet = false;

    Aws::Vector<int> m_headerIntegerList;
    bool m_headerIntegerListHasBeenSet = false;

    Aws::Vector<bool> m_headerBooleanList;
    bool m_headerBooleanListHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_headerTimestampList;
    bool m_headerTimestampListHasBeenSet = false;

    FooEnum m_headerEnum;
    bool m_headerEnumHasBeenSet = false;

    Aws::Vector<FooEnum> m_headerEnumList;
    bool m_headerEnumListHasBeenSet = false;

    int m_headerIntegerEnum;
    bool m_headerIntegerEnumHasBeenSet = false;

    Aws::Vector<int> m_headerIntegerEnumList;
    bool m_headerIntegerEnumListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
