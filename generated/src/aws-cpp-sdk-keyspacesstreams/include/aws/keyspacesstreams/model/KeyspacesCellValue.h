/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/keyspacesstreams/model/KeyspacesCell.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspacesstreams/model/KeyspacesCellMapDefinition.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KeyspacesStreams
{
namespace Model
{
  class KeyspacesCell;
  class KeyspacesCellMapDefinition;

  /**
   * <p>Represents the value of a cell in an Amazon Keyspaces table, supporting
   * various data types with type-specific fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/KeyspacesCellValue">AWS
   * API Reference</a></p>
   */
  class KeyspacesCellValue
  {
  public:
    AWS_KEYSPACESSTREAMS_API KeyspacesCellValue() = default;
    AWS_KEYSPACESSTREAMS_API KeyspacesCellValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API KeyspacesCellValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A value of ASCII text type, containing US-ASCII characters. </p>
     */
    inline const Aws::String& GetAsciiT() const { return m_asciiT; }
    inline bool AsciiTHasBeenSet() const { return m_asciiTHasBeenSet; }
    template<typename AsciiTT = Aws::String>
    void SetAsciiT(AsciiTT&& value) { m_asciiTHasBeenSet = true; m_asciiT = std::forward<AsciiTT>(value); }
    template<typename AsciiTT = Aws::String>
    KeyspacesCellValue& WithAsciiT(AsciiTT&& value) { SetAsciiT(std::forward<AsciiTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A 64-bit signed integer value. </p>
     */
    inline const Aws::String& GetBigintT() const { return m_bigintT; }
    inline bool BigintTHasBeenSet() const { return m_bigintTHasBeenSet; }
    template<typename BigintTT = Aws::String>
    void SetBigintT(BigintTT&& value) { m_bigintTHasBeenSet = true; m_bigintT = std::forward<BigintTT>(value); }
    template<typename BigintTT = Aws::String>
    KeyspacesCellValue& WithBigintT(BigintTT&& value) { SetBigintT(std::forward<BigintTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A binary large object (BLOB) value stored as a Base64-encoded string. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlobT() const { return m_blobT; }
    inline bool BlobTHasBeenSet() const { return m_blobTHasBeenSet; }
    template<typename BlobTT = Aws::Utils::ByteBuffer>
    void SetBlobT(BlobTT&& value) { m_blobTHasBeenSet = true; m_blobT = std::forward<BlobTT>(value); }
    template<typename BlobTT = Aws::Utils::ByteBuffer>
    KeyspacesCellValue& WithBlobT(BlobTT&& value) { SetBlobT(std::forward<BlobTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value, either <code>true</code> or <code>false</code>. </p>
     */
    inline bool GetBoolT() const { return m_boolT; }
    inline bool BoolTHasBeenSet() const { return m_boolTHasBeenSet; }
    inline void SetBoolT(bool value) { m_boolTHasBeenSet = true; m_boolT = value; }
    inline KeyspacesCellValue& WithBoolT(bool value) { SetBoolT(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A distributed counter value that can be incremented and decremented. </p>
     */
    inline const Aws::String& GetCounterT() const { return m_counterT; }
    inline bool CounterTHasBeenSet() const { return m_counterTHasBeenSet; }
    template<typename CounterTT = Aws::String>
    void SetCounterT(CounterTT&& value) { m_counterTHasBeenSet = true; m_counterT = std::forward<CounterTT>(value); }
    template<typename CounterTT = Aws::String>
    KeyspacesCellValue& WithCounterT(CounterTT&& value) { SetCounterT(std::forward<CounterTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A date value without a time component, represented as days since epoch
     * (January 1, 1970). </p>
     */
    inline const Aws::String& GetDateT() const { return m_dateT; }
    inline bool DateTHasBeenSet() const { return m_dateTHasBeenSet; }
    template<typename DateTT = Aws::String>
    void SetDateT(DateTT&& value) { m_dateTHasBeenSet = true; m_dateT = std::forward<DateTT>(value); }
    template<typename DateTT = Aws::String>
    KeyspacesCellValue& WithDateT(DateTT&& value) { SetDateT(std::forward<DateTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A variable-precision decimal number value. </p>
     */
    inline const Aws::String& GetDecimalT() const { return m_decimalT; }
    inline bool DecimalTHasBeenSet() const { return m_decimalTHasBeenSet; }
    template<typename DecimalTT = Aws::String>
    void SetDecimalT(DecimalTT&& value) { m_decimalTHasBeenSet = true; m_decimalT = std::forward<DecimalTT>(value); }
    template<typename DecimalTT = Aws::String>
    KeyspacesCellValue& WithDecimalT(DecimalTT&& value) { SetDecimalT(std::forward<DecimalTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A 64-bit double-precision floating point value. </p>
     */
    inline const Aws::String& GetDoubleT() const { return m_doubleT; }
    inline bool DoubleTHasBeenSet() const { return m_doubleTHasBeenSet; }
    template<typename DoubleTT = Aws::String>
    void SetDoubleT(DoubleTT&& value) { m_doubleTHasBeenSet = true; m_doubleT = std::forward<DoubleTT>(value); }
    template<typename DoubleTT = Aws::String>
    KeyspacesCellValue& WithDoubleT(DoubleTT&& value) { SetDoubleT(std::forward<DoubleTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A 32-bit single-precision floating point value. </p>
     */
    inline const Aws::String& GetFloatT() const { return m_floatT; }
    inline bool FloatTHasBeenSet() const { return m_floatTHasBeenSet; }
    template<typename FloatTT = Aws::String>
    void SetFloatT(FloatTT&& value) { m_floatTHasBeenSet = true; m_floatT = std::forward<FloatTT>(value); }
    template<typename FloatTT = Aws::String>
    KeyspacesCellValue& WithFloatT(FloatTT&& value) { SetFloatT(std::forward<FloatTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IP address value, either IPv4 or IPv6 format. </p>
     */
    inline const Aws::String& GetInetT() const { return m_inetT; }
    inline bool InetTHasBeenSet() const { return m_inetTHasBeenSet; }
    template<typename InetTT = Aws::String>
    void SetInetT(InetTT&& value) { m_inetTHasBeenSet = true; m_inetT = std::forward<InetTT>(value); }
    template<typename InetTT = Aws::String>
    KeyspacesCellValue& WithInetT(InetTT&& value) { SetInetT(std::forward<InetTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A 32-bit signed integer value. </p>
     */
    inline const Aws::String& GetIntT() const { return m_intT; }
    inline bool IntTHasBeenSet() const { return m_intTHasBeenSet; }
    template<typename IntTT = Aws::String>
    void SetIntT(IntTT&& value) { m_intTHasBeenSet = true; m_intT = std::forward<IntTT>(value); }
    template<typename IntTT = Aws::String>
    KeyspacesCellValue& WithIntT(IntTT&& value) { SetIntT(std::forward<IntTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ordered collection of elements that can contain duplicate values. </p>
     */
    inline const Aws::Vector<KeyspacesCell>& GetListT() const { return m_listT; }
    inline bool ListTHasBeenSet() const { return m_listTHasBeenSet; }
    template<typename ListTT = Aws::Vector<KeyspacesCell>>
    void SetListT(ListTT&& value) { m_listTHasBeenSet = true; m_listT = std::forward<ListTT>(value); }
    template<typename ListTT = Aws::Vector<KeyspacesCell>>
    KeyspacesCellValue& WithListT(ListTT&& value) { SetListT(std::forward<ListTT>(value)); return *this;}
    template<typename ListTT = KeyspacesCell>
    KeyspacesCellValue& AddListT(ListTT&& value) { m_listTHasBeenSet = true; m_listT.emplace_back(std::forward<ListTT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of key-value pairs where each key is unique. </p>
     */
    inline const Aws::Vector<KeyspacesCellMapDefinition>& GetMapT() const { return m_mapT; }
    inline bool MapTHasBeenSet() const { return m_mapTHasBeenSet; }
    template<typename MapTT = Aws::Vector<KeyspacesCellMapDefinition>>
    void SetMapT(MapTT&& value) { m_mapTHasBeenSet = true; m_mapT = std::forward<MapTT>(value); }
    template<typename MapTT = Aws::Vector<KeyspacesCellMapDefinition>>
    KeyspacesCellValue& WithMapT(MapTT&& value) { SetMapT(std::forward<MapTT>(value)); return *this;}
    template<typename MapTT = KeyspacesCellMapDefinition>
    KeyspacesCellValue& AddMapT(MapTT&& value) { m_mapTHasBeenSet = true; m_mapT.emplace_back(std::forward<MapTT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An unordered collection of unique elements. </p>
     */
    inline const Aws::Vector<KeyspacesCell>& GetSetT() const { return m_setT; }
    inline bool SetTHasBeenSet() const { return m_setTHasBeenSet; }
    template<typename SetTT = Aws::Vector<KeyspacesCell>>
    void SetSetT(SetTT&& value) { m_setTHasBeenSet = true; m_setT = std::forward<SetTT>(value); }
    template<typename SetTT = Aws::Vector<KeyspacesCell>>
    KeyspacesCellValue& WithSetT(SetTT&& value) { SetSetT(std::forward<SetTT>(value)); return *this;}
    template<typename SetTT = KeyspacesCell>
    KeyspacesCellValue& AddSetT(SetTT&& value) { m_setTHasBeenSet = true; m_setT.emplace_back(std::forward<SetTT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A 16-bit signed integer value. </p>
     */
    inline const Aws::String& GetSmallintT() const { return m_smallintT; }
    inline bool SmallintTHasBeenSet() const { return m_smallintTHasBeenSet; }
    template<typename SmallintTT = Aws::String>
    void SetSmallintT(SmallintTT&& value) { m_smallintTHasBeenSet = true; m_smallintT = std::forward<SmallintTT>(value); }
    template<typename SmallintTT = Aws::String>
    KeyspacesCellValue& WithSmallintT(SmallintTT&& value) { SetSmallintT(std::forward<SmallintTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTF-8 encoded string value. </p>
     */
    inline const Aws::String& GetTextT() const { return m_textT; }
    inline bool TextTHasBeenSet() const { return m_textTHasBeenSet; }
    template<typename TextTT = Aws::String>
    void SetTextT(TextTT&& value) { m_textTHasBeenSet = true; m_textT = std::forward<TextTT>(value); }
    template<typename TextTT = Aws::String>
    KeyspacesCellValue& WithTextT(TextTT&& value) { SetTextT(std::forward<TextTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time value without a date component, with nanosecond precision. </p>
     */
    inline const Aws::String& GetTimeT() const { return m_timeT; }
    inline bool TimeTHasBeenSet() const { return m_timeTHasBeenSet; }
    template<typename TimeTT = Aws::String>
    void SetTimeT(TimeTT&& value) { m_timeTHasBeenSet = true; m_timeT = std::forward<TimeTT>(value); }
    template<typename TimeTT = Aws::String>
    KeyspacesCellValue& WithTimeT(TimeTT&& value) { SetTimeT(std::forward<TimeTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp value representing date and time with millisecond precision. </p>
     */
    inline const Aws::String& GetTimestampT() const { return m_timestampT; }
    inline bool TimestampTHasBeenSet() const { return m_timestampTHasBeenSet; }
    template<typename TimestampTT = Aws::String>
    void SetTimestampT(TimestampTT&& value) { m_timestampTHasBeenSet = true; m_timestampT = std::forward<TimestampTT>(value); }
    template<typename TimestampTT = Aws::String>
    KeyspacesCellValue& WithTimestampT(TimestampTT&& value) { SetTimestampT(std::forward<TimestampTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A universally unique identifier (UUID) that includes a timestamp component,
     * ensuring both uniqueness and time ordering. </p>
     */
    inline const Aws::String& GetTimeuuidT() const { return m_timeuuidT; }
    inline bool TimeuuidTHasBeenSet() const { return m_timeuuidTHasBeenSet; }
    template<typename TimeuuidTT = Aws::String>
    void SetTimeuuidT(TimeuuidTT&& value) { m_timeuuidTHasBeenSet = true; m_timeuuidT = std::forward<TimeuuidTT>(value); }
    template<typename TimeuuidTT = Aws::String>
    KeyspacesCellValue& WithTimeuuidT(TimeuuidTT&& value) { SetTimeuuidT(std::forward<TimeuuidTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An 8-bit signed integer value. </p>
     */
    inline const Aws::String& GetTinyintT() const { return m_tinyintT; }
    inline bool TinyintTHasBeenSet() const { return m_tinyintTHasBeenSet; }
    template<typename TinyintTT = Aws::String>
    void SetTinyintT(TinyintTT&& value) { m_tinyintTHasBeenSet = true; m_tinyintT = std::forward<TinyintTT>(value); }
    template<typename TinyintTT = Aws::String>
    KeyspacesCellValue& WithTinyintT(TinyintTT&& value) { SetTinyintT(std::forward<TinyintTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A fixed-length ordered list of elements, where each element can be of a
     * different data type. </p>
     */
    inline const Aws::Vector<KeyspacesCell>& GetTupleT() const { return m_tupleT; }
    inline bool TupleTHasBeenSet() const { return m_tupleTHasBeenSet; }
    template<typename TupleTT = Aws::Vector<KeyspacesCell>>
    void SetTupleT(TupleTT&& value) { m_tupleTHasBeenSet = true; m_tupleT = std::forward<TupleTT>(value); }
    template<typename TupleTT = Aws::Vector<KeyspacesCell>>
    KeyspacesCellValue& WithTupleT(TupleTT&& value) { SetTupleT(std::forward<TupleTT>(value)); return *this;}
    template<typename TupleTT = KeyspacesCell>
    KeyspacesCellValue& AddTupleT(TupleTT&& value) { m_tupleTHasBeenSet = true; m_tupleT.emplace_back(std::forward<TupleTT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A universally unique identifier (UUID) value. </p>
     */
    inline const Aws::String& GetUuidT() const { return m_uuidT; }
    inline bool UuidTHasBeenSet() const { return m_uuidTHasBeenSet; }
    template<typename UuidTT = Aws::String>
    void SetUuidT(UuidTT&& value) { m_uuidTHasBeenSet = true; m_uuidT = std::forward<UuidTT>(value); }
    template<typename UuidTT = Aws::String>
    KeyspacesCellValue& WithUuidT(UuidTT&& value) { SetUuidT(std::forward<UuidTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTF-8 encoded string value, functionally equivalent to text type. </p>
     */
    inline const Aws::String& GetVarcharT() const { return m_varcharT; }
    inline bool VarcharTHasBeenSet() const { return m_varcharTHasBeenSet; }
    template<typename VarcharTT = Aws::String>
    void SetVarcharT(VarcharTT&& value) { m_varcharTHasBeenSet = true; m_varcharT = std::forward<VarcharTT>(value); }
    template<typename VarcharTT = Aws::String>
    KeyspacesCellValue& WithVarcharT(VarcharTT&& value) { SetVarcharT(std::forward<VarcharTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A variable precision integer value with arbitrary length. </p>
     */
    inline const Aws::String& GetVarintT() const { return m_varintT; }
    inline bool VarintTHasBeenSet() const { return m_varintTHasBeenSet; }
    template<typename VarintTT = Aws::String>
    void SetVarintT(VarintTT&& value) { m_varintTHasBeenSet = true; m_varintT = std::forward<VarintTT>(value); }
    template<typename VarintTT = Aws::String>
    KeyspacesCellValue& WithVarintT(VarintTT&& value) { SetVarintT(std::forward<VarintTT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined type (UDT) value consisting of named fields, each with its own
     * data type. </p>
     */
    inline const Aws::Map<Aws::String, KeyspacesCell>& GetUdtT() const { return m_udtT; }
    inline bool UdtTHasBeenSet() const { return m_udtTHasBeenSet; }
    template<typename UdtTT = Aws::Map<Aws::String, KeyspacesCell>>
    void SetUdtT(UdtTT&& value) { m_udtTHasBeenSet = true; m_udtT = std::forward<UdtTT>(value); }
    template<typename UdtTT = Aws::Map<Aws::String, KeyspacesCell>>
    KeyspacesCellValue& WithUdtT(UdtTT&& value) { SetUdtT(std::forward<UdtTT>(value)); return *this;}
    template<typename UdtTKeyT = Aws::String, typename UdtTValueT = KeyspacesCell>
    KeyspacesCellValue& AddUdtT(UdtTKeyT&& key, UdtTValueT&& value) {
      m_udtTHasBeenSet = true; m_udtT.emplace(std::forward<UdtTKeyT>(key), std::forward<UdtTValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_asciiT;
    bool m_asciiTHasBeenSet = false;

    Aws::String m_bigintT;
    bool m_bigintTHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blobT{};
    bool m_blobTHasBeenSet = false;

    bool m_boolT{false};
    bool m_boolTHasBeenSet = false;

    Aws::String m_counterT;
    bool m_counterTHasBeenSet = false;

    Aws::String m_dateT;
    bool m_dateTHasBeenSet = false;

    Aws::String m_decimalT;
    bool m_decimalTHasBeenSet = false;

    Aws::String m_doubleT;
    bool m_doubleTHasBeenSet = false;

    Aws::String m_floatT;
    bool m_floatTHasBeenSet = false;

    Aws::String m_inetT;
    bool m_inetTHasBeenSet = false;

    Aws::String m_intT;
    bool m_intTHasBeenSet = false;

    Aws::Vector<KeyspacesCell> m_listT;
    bool m_listTHasBeenSet = false;

    Aws::Vector<KeyspacesCellMapDefinition> m_mapT;
    bool m_mapTHasBeenSet = false;

    Aws::Vector<KeyspacesCell> m_setT;
    bool m_setTHasBeenSet = false;

    Aws::String m_smallintT;
    bool m_smallintTHasBeenSet = false;

    Aws::String m_textT;
    bool m_textTHasBeenSet = false;

    Aws::String m_timeT;
    bool m_timeTHasBeenSet = false;

    Aws::String m_timestampT;
    bool m_timestampTHasBeenSet = false;

    Aws::String m_timeuuidT;
    bool m_timeuuidTHasBeenSet = false;

    Aws::String m_tinyintT;
    bool m_tinyintTHasBeenSet = false;

    Aws::Vector<KeyspacesCell> m_tupleT;
    bool m_tupleTHasBeenSet = false;

    Aws::String m_uuidT;
    bool m_uuidTHasBeenSet = false;

    Aws::String m_varcharT;
    bool m_varcharTHasBeenSet = false;

    Aws::String m_varintT;
    bool m_varintTHasBeenSet = false;

    Aws::Map<Aws::String, KeyspacesCell> m_udtT;
    bool m_udtTHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
