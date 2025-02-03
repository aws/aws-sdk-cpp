/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/model/KitchenSink.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace JsonProtocol
{
namespace Model
{

  class ErrorWithMembers
  {
  public:
    AWS_JSONPROTOCOL_API ErrorWithMembers();
    AWS_JSONPROTOCOL_API ErrorWithMembers(Aws::Utils::Json::JsonView jsonValue);
    AWS_JSONPROTOCOL_API ErrorWithMembers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline ErrorWithMembers& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline ErrorWithMembers& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline ErrorWithMembers& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    
    inline const KitchenSink& GetComplexData() const{ return m_complexData; }
    inline bool ComplexDataHasBeenSet() const { return m_complexDataHasBeenSet; }
    inline void SetComplexData(const KitchenSink& value) { m_complexDataHasBeenSet = true; m_complexData = value; }
    inline void SetComplexData(KitchenSink&& value) { m_complexDataHasBeenSet = true; m_complexData = std::move(value); }
    inline ErrorWithMembers& WithComplexData(const KitchenSink& value) { SetComplexData(value); return *this;}
    inline ErrorWithMembers& WithComplexData(KitchenSink&& value) { SetComplexData(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetIntegerField() const{ return m_integerField; }
    inline bool IntegerFieldHasBeenSet() const { return m_integerFieldHasBeenSet; }
    inline void SetIntegerField(int value) { m_integerFieldHasBeenSet = true; m_integerField = value; }
    inline ErrorWithMembers& WithIntegerField(int value) { SetIntegerField(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListField() const{ return m_listField; }
    inline bool ListFieldHasBeenSet() const { return m_listFieldHasBeenSet; }
    inline void SetListField(const Aws::Vector<Aws::String>& value) { m_listFieldHasBeenSet = true; m_listField = value; }
    inline void SetListField(Aws::Vector<Aws::String>&& value) { m_listFieldHasBeenSet = true; m_listField = std::move(value); }
    inline ErrorWithMembers& WithListField(const Aws::Vector<Aws::String>& value) { SetListField(value); return *this;}
    inline ErrorWithMembers& WithListField(Aws::Vector<Aws::String>&& value) { SetListField(std::move(value)); return *this;}
    inline ErrorWithMembers& AddListField(const Aws::String& value) { m_listFieldHasBeenSet = true; m_listField.push_back(value); return *this; }
    inline ErrorWithMembers& AddListField(Aws::String&& value) { m_listFieldHasBeenSet = true; m_listField.push_back(std::move(value)); return *this; }
    inline ErrorWithMembers& AddListField(const char* value) { m_listFieldHasBeenSet = true; m_listField.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMapField() const{ return m_mapField; }
    inline bool MapFieldHasBeenSet() const { return m_mapFieldHasBeenSet; }
    inline void SetMapField(const Aws::Map<Aws::String, Aws::String>& value) { m_mapFieldHasBeenSet = true; m_mapField = value; }
    inline void SetMapField(Aws::Map<Aws::String, Aws::String>&& value) { m_mapFieldHasBeenSet = true; m_mapField = std::move(value); }
    inline ErrorWithMembers& WithMapField(const Aws::Map<Aws::String, Aws::String>& value) { SetMapField(value); return *this;}
    inline ErrorWithMembers& WithMapField(Aws::Map<Aws::String, Aws::String>&& value) { SetMapField(std::move(value)); return *this;}
    inline ErrorWithMembers& AddMapField(const Aws::String& key, const Aws::String& value) { m_mapFieldHasBeenSet = true; m_mapField.emplace(key, value); return *this; }
    inline ErrorWithMembers& AddMapField(Aws::String&& key, const Aws::String& value) { m_mapFieldHasBeenSet = true; m_mapField.emplace(std::move(key), value); return *this; }
    inline ErrorWithMembers& AddMapField(const Aws::String& key, Aws::String&& value) { m_mapFieldHasBeenSet = true; m_mapField.emplace(key, std::move(value)); return *this; }
    inline ErrorWithMembers& AddMapField(Aws::String&& key, Aws::String&& value) { m_mapFieldHasBeenSet = true; m_mapField.emplace(std::move(key), std::move(value)); return *this; }
    inline ErrorWithMembers& AddMapField(const char* key, Aws::String&& value) { m_mapFieldHasBeenSet = true; m_mapField.emplace(key, std::move(value)); return *this; }
    inline ErrorWithMembers& AddMapField(Aws::String&& key, const char* value) { m_mapFieldHasBeenSet = true; m_mapField.emplace(std::move(key), value); return *this; }
    inline ErrorWithMembers& AddMapField(const char* key, const char* value) { m_mapFieldHasBeenSet = true; m_mapField.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ErrorWithMembers& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ErrorWithMembers& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ErrorWithMembers& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>abc</p>
     */
    inline const Aws::String& GetStringField() const{ return m_stringField; }
    inline bool StringFieldHasBeenSet() const { return m_stringFieldHasBeenSet; }
    inline void SetStringField(const Aws::String& value) { m_stringFieldHasBeenSet = true; m_stringField = value; }
    inline void SetStringField(Aws::String&& value) { m_stringFieldHasBeenSet = true; m_stringField = std::move(value); }
    inline void SetStringField(const char* value) { m_stringFieldHasBeenSet = true; m_stringField.assign(value); }
    inline ErrorWithMembers& WithStringField(const Aws::String& value) { SetStringField(value); return *this;}
    inline ErrorWithMembers& WithStringField(Aws::String&& value) { SetStringField(std::move(value)); return *this;}
    inline ErrorWithMembers& WithStringField(const char* value) { SetStringField(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    KitchenSink m_complexData;
    bool m_complexDataHasBeenSet = false;

    int m_integerField;
    bool m_integerFieldHasBeenSet = false;

    Aws::Vector<Aws::String> m_listField;
    bool m_listFieldHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mapField;
    bool m_mapFieldHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_stringField;
    bool m_stringFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
