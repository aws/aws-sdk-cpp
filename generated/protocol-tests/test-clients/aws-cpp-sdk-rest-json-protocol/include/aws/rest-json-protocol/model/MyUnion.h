/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rest-json-protocol/model/FooEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/rest-json-protocol/model/GreetingStruct.h>
#include <aws/rest-json-protocol/model/RenamedGreeting.h>
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
namespace RestJsonProtocol
{
namespace Model
{

  /**
   * <p>A union with a representative set of types for members.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/MyUnion">AWS
   * API Reference</a></p>
   */
  class MyUnion
  {
  public:
    AWS_RESTJSONPROTOCOL_API MyUnion();
    AWS_RESTJSONPROTOCOL_API MyUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API MyUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline MyUnion& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline MyUnion& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline MyUnion& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetBooleanValue() const{ return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline MyUnion& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetNumberValue() const{ return m_numberValue; }
    inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
    inline void SetNumberValue(int value) { m_numberValueHasBeenSet = true; m_numberValue = value; }
    inline MyUnion& WithNumberValue(int value) { SetNumberValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::ByteBuffer& GetBlobValue() const{ return m_blobValue; }
    inline bool BlobValueHasBeenSet() const { return m_blobValueHasBeenSet; }
    inline void SetBlobValue(const Aws::Utils::ByteBuffer& value) { m_blobValueHasBeenSet = true; m_blobValue = value; }
    inline void SetBlobValue(Aws::Utils::ByteBuffer&& value) { m_blobValueHasBeenSet = true; m_blobValue = std::move(value); }
    inline MyUnion& WithBlobValue(const Aws::Utils::ByteBuffer& value) { SetBlobValue(value); return *this;}
    inline MyUnion& WithBlobValue(Aws::Utils::ByteBuffer&& value) { SetBlobValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTimestampValue() const{ return m_timestampValue; }
    inline bool TimestampValueHasBeenSet() const { return m_timestampValueHasBeenSet; }
    inline void SetTimestampValue(const Aws::Utils::DateTime& value) { m_timestampValueHasBeenSet = true; m_timestampValue = value; }
    inline void SetTimestampValue(Aws::Utils::DateTime&& value) { m_timestampValueHasBeenSet = true; m_timestampValue = std::move(value); }
    inline MyUnion& WithTimestampValue(const Aws::Utils::DateTime& value) { SetTimestampValue(value); return *this;}
    inline MyUnion& WithTimestampValue(Aws::Utils::DateTime&& value) { SetTimestampValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FooEnum& GetEnumValue() const{ return m_enumValue; }
    inline bool EnumValueHasBeenSet() const { return m_enumValueHasBeenSet; }
    inline void SetEnumValue(const FooEnum& value) { m_enumValueHasBeenSet = true; m_enumValue = value; }
    inline void SetEnumValue(FooEnum&& value) { m_enumValueHasBeenSet = true; m_enumValue = std::move(value); }
    inline MyUnion& WithEnumValue(const FooEnum& value) { SetEnumValue(value); return *this;}
    inline MyUnion& WithEnumValue(FooEnum&& value) { SetEnumValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListValue() const{ return m_listValue; }
    inline bool ListValueHasBeenSet() const { return m_listValueHasBeenSet; }
    inline void SetListValue(const Aws::Vector<Aws::String>& value) { m_listValueHasBeenSet = true; m_listValue = value; }
    inline void SetListValue(Aws::Vector<Aws::String>&& value) { m_listValueHasBeenSet = true; m_listValue = std::move(value); }
    inline MyUnion& WithListValue(const Aws::Vector<Aws::String>& value) { SetListValue(value); return *this;}
    inline MyUnion& WithListValue(Aws::Vector<Aws::String>&& value) { SetListValue(std::move(value)); return *this;}
    inline MyUnion& AddListValue(const Aws::String& value) { m_listValueHasBeenSet = true; m_listValue.push_back(value); return *this; }
    inline MyUnion& AddListValue(Aws::String&& value) { m_listValueHasBeenSet = true; m_listValue.push_back(std::move(value)); return *this; }
    inline MyUnion& AddListValue(const char* value) { m_listValueHasBeenSet = true; m_listValue.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMapValue() const{ return m_mapValue; }
    inline bool MapValueHasBeenSet() const { return m_mapValueHasBeenSet; }
    inline void SetMapValue(const Aws::Map<Aws::String, Aws::String>& value) { m_mapValueHasBeenSet = true; m_mapValue = value; }
    inline void SetMapValue(Aws::Map<Aws::String, Aws::String>&& value) { m_mapValueHasBeenSet = true; m_mapValue = std::move(value); }
    inline MyUnion& WithMapValue(const Aws::Map<Aws::String, Aws::String>& value) { SetMapValue(value); return *this;}
    inline MyUnion& WithMapValue(Aws::Map<Aws::String, Aws::String>&& value) { SetMapValue(std::move(value)); return *this;}
    inline MyUnion& AddMapValue(const Aws::String& key, const Aws::String& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(key, value); return *this; }
    inline MyUnion& AddMapValue(Aws::String&& key, const Aws::String& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(std::move(key), value); return *this; }
    inline MyUnion& AddMapValue(const Aws::String& key, Aws::String&& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(key, std::move(value)); return *this; }
    inline MyUnion& AddMapValue(Aws::String&& key, Aws::String&& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(std::move(key), std::move(value)); return *this; }
    inline MyUnion& AddMapValue(const char* key, Aws::String&& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(key, std::move(value)); return *this; }
    inline MyUnion& AddMapValue(Aws::String&& key, const char* value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(std::move(key), value); return *this; }
    inline MyUnion& AddMapValue(const char* key, const char* value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const GreetingStruct& GetStructureValue() const{ return m_structureValue; }
    inline bool StructureValueHasBeenSet() const { return m_structureValueHasBeenSet; }
    inline void SetStructureValue(const GreetingStruct& value) { m_structureValueHasBeenSet = true; m_structureValue = value; }
    inline void SetStructureValue(GreetingStruct&& value) { m_structureValueHasBeenSet = true; m_structureValue = std::move(value); }
    inline MyUnion& WithStructureValue(const GreetingStruct& value) { SetStructureValue(value); return *this;}
    inline MyUnion& WithStructureValue(GreetingStruct&& value) { SetStructureValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RenamedGreeting& GetRenamedStructureValue() const{ return m_renamedStructureValue; }
    inline bool RenamedStructureValueHasBeenSet() const { return m_renamedStructureValueHasBeenSet; }
    inline void SetRenamedStructureValue(const RenamedGreeting& value) { m_renamedStructureValueHasBeenSet = true; m_renamedStructureValue = value; }
    inline void SetRenamedStructureValue(RenamedGreeting&& value) { m_renamedStructureValueHasBeenSet = true; m_renamedStructureValue = std::move(value); }
    inline MyUnion& WithRenamedStructureValue(const RenamedGreeting& value) { SetRenamedStructureValue(value); return *this;}
    inline MyUnion& WithRenamedStructureValue(RenamedGreeting&& value) { SetRenamedStructureValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    int m_numberValue;
    bool m_numberValueHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blobValue;
    bool m_blobValueHasBeenSet = false;

    Aws::Utils::DateTime m_timestampValue;
    bool m_timestampValueHasBeenSet = false;

    FooEnum m_enumValue;
    bool m_enumValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_listValue;
    bool m_listValueHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mapValue;
    bool m_mapValueHasBeenSet = false;

    GreetingStruct m_structureValue;
    bool m_structureValueHasBeenSet = false;

    RenamedGreeting m_renamedStructureValue;
    bool m_renamedStructureValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
