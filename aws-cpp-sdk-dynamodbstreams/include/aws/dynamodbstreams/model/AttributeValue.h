/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodbstreams/model/AttributeValue.h>
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
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Represents the data for an attribute. You can set one, and only one, of the
   * elements.</p> <p>Each attribute in an item is a name-value pair. An attribute
   * can be single-valued or multi-valued set. For example, a book item can have
   * title and authors attributes. Each book has one title but can have many authors.
   * The multi-valued attribute is a set; duplicate values are not allowed. </p>
   */
  class AWS_DYNAMODBSTREAMS_API AttributeValue
  {
  public:
    AttributeValue();
    AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A String data type.</p>
     */
    inline const Aws::String& GetS() const{ return m_s; }

    /**
     * <p>A String data type.</p>
     */
    inline bool SHasBeenSet() const { return m_sHasBeenSet; }

    /**
     * <p>A String data type.</p>
     */
    inline void SetS(const Aws::String& value) { m_sHasBeenSet = true; m_s = value; }

    /**
     * <p>A String data type.</p>
     */
    inline void SetS(Aws::String&& value) { m_sHasBeenSet = true; m_s = std::move(value); }

    /**
     * <p>A String data type.</p>
     */
    inline void SetS(const char* value) { m_sHasBeenSet = true; m_s.assign(value); }

    /**
     * <p>A String data type.</p>
     */
    inline AttributeValue& WithS(const Aws::String& value) { SetS(value); return *this;}

    /**
     * <p>A String data type.</p>
     */
    inline AttributeValue& WithS(Aws::String&& value) { SetS(std::move(value)); return *this;}

    /**
     * <p>A String data type.</p>
     */
    inline AttributeValue& WithS(const char* value) { SetS(value); return *this;}


    /**
     * <p>A Number data type.</p>
     */
    inline const Aws::String& GetN() const{ return m_n; }

    /**
     * <p>A Number data type.</p>
     */
    inline bool NHasBeenSet() const { return m_nHasBeenSet; }

    /**
     * <p>A Number data type.</p>
     */
    inline void SetN(const Aws::String& value) { m_nHasBeenSet = true; m_n = value; }

    /**
     * <p>A Number data type.</p>
     */
    inline void SetN(Aws::String&& value) { m_nHasBeenSet = true; m_n = std::move(value); }

    /**
     * <p>A Number data type.</p>
     */
    inline void SetN(const char* value) { m_nHasBeenSet = true; m_n.assign(value); }

    /**
     * <p>A Number data type.</p>
     */
    inline AttributeValue& WithN(const Aws::String& value) { SetN(value); return *this;}

    /**
     * <p>A Number data type.</p>
     */
    inline AttributeValue& WithN(Aws::String&& value) { SetN(std::move(value)); return *this;}

    /**
     * <p>A Number data type.</p>
     */
    inline AttributeValue& WithN(const char* value) { SetN(value); return *this;}


    /**
     * <p>A Binary data type.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetB() const{ return m_b; }

    /**
     * <p>A Binary data type.</p>
     */
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }

    /**
     * <p>A Binary data type.</p>
     */
    inline void SetB(const Aws::Utils::ByteBuffer& value) { m_bHasBeenSet = true; m_b = value; }

    /**
     * <p>A Binary data type.</p>
     */
    inline void SetB(Aws::Utils::ByteBuffer&& value) { m_bHasBeenSet = true; m_b = std::move(value); }

    /**
     * <p>A Binary data type.</p>
     */
    inline AttributeValue& WithB(const Aws::Utils::ByteBuffer& value) { SetB(value); return *this;}

    /**
     * <p>A Binary data type.</p>
     */
    inline AttributeValue& WithB(Aws::Utils::ByteBuffer&& value) { SetB(std::move(value)); return *this;}


    /**
     * <p>A String Set data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSS() const{ return m_sS; }

    /**
     * <p>A String Set data type.</p>
     */
    inline bool SSHasBeenSet() const { return m_sSHasBeenSet; }

    /**
     * <p>A String Set data type.</p>
     */
    inline void SetSS(const Aws::Vector<Aws::String>& value) { m_sSHasBeenSet = true; m_sS = value; }

    /**
     * <p>A String Set data type.</p>
     */
    inline void SetSS(Aws::Vector<Aws::String>&& value) { m_sSHasBeenSet = true; m_sS = std::move(value); }

    /**
     * <p>A String Set data type.</p>
     */
    inline AttributeValue& WithSS(const Aws::Vector<Aws::String>& value) { SetSS(value); return *this;}

    /**
     * <p>A String Set data type.</p>
     */
    inline AttributeValue& WithSS(Aws::Vector<Aws::String>&& value) { SetSS(std::move(value)); return *this;}

    /**
     * <p>A String Set data type.</p>
     */
    inline AttributeValue& AddSS(const Aws::String& value) { m_sSHasBeenSet = true; m_sS.push_back(value); return *this; }

    /**
     * <p>A String Set data type.</p>
     */
    inline AttributeValue& AddSS(Aws::String&& value) { m_sSHasBeenSet = true; m_sS.push_back(std::move(value)); return *this; }

    /**
     * <p>A String Set data type.</p>
     */
    inline AttributeValue& AddSS(const char* value) { m_sSHasBeenSet = true; m_sS.push_back(value); return *this; }


    /**
     * <p>A Number Set data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNS() const{ return m_nS; }

    /**
     * <p>A Number Set data type.</p>
     */
    inline bool NSHasBeenSet() const { return m_nSHasBeenSet; }

    /**
     * <p>A Number Set data type.</p>
     */
    inline void SetNS(const Aws::Vector<Aws::String>& value) { m_nSHasBeenSet = true; m_nS = value; }

    /**
     * <p>A Number Set data type.</p>
     */
    inline void SetNS(Aws::Vector<Aws::String>&& value) { m_nSHasBeenSet = true; m_nS = std::move(value); }

    /**
     * <p>A Number Set data type.</p>
     */
    inline AttributeValue& WithNS(const Aws::Vector<Aws::String>& value) { SetNS(value); return *this;}

    /**
     * <p>A Number Set data type.</p>
     */
    inline AttributeValue& WithNS(Aws::Vector<Aws::String>&& value) { SetNS(std::move(value)); return *this;}

    /**
     * <p>A Number Set data type.</p>
     */
    inline AttributeValue& AddNS(const Aws::String& value) { m_nSHasBeenSet = true; m_nS.push_back(value); return *this; }

    /**
     * <p>A Number Set data type.</p>
     */
    inline AttributeValue& AddNS(Aws::String&& value) { m_nSHasBeenSet = true; m_nS.push_back(std::move(value)); return *this; }

    /**
     * <p>A Number Set data type.</p>
     */
    inline AttributeValue& AddNS(const char* value) { m_nSHasBeenSet = true; m_nS.push_back(value); return *this; }


    /**
     * <p>A Binary Set data type.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetBS() const{ return m_bS; }

    /**
     * <p>A Binary Set data type.</p>
     */
    inline bool BSHasBeenSet() const { return m_bSHasBeenSet; }

    /**
     * <p>A Binary Set data type.</p>
     */
    inline void SetBS(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_bSHasBeenSet = true; m_bS = value; }

    /**
     * <p>A Binary Set data type.</p>
     */
    inline void SetBS(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_bSHasBeenSet = true; m_bS = std::move(value); }

    /**
     * <p>A Binary Set data type.</p>
     */
    inline AttributeValue& WithBS(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetBS(value); return *this;}

    /**
     * <p>A Binary Set data type.</p>
     */
    inline AttributeValue& WithBS(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetBS(std::move(value)); return *this;}

    /**
     * <p>A Binary Set data type.</p>
     */
    inline AttributeValue& AddBS(const Aws::Utils::ByteBuffer& value) { m_bSHasBeenSet = true; m_bS.push_back(value); return *this; }

    /**
     * <p>A Binary Set data type.</p>
     */
    inline AttributeValue& AddBS(Aws::Utils::ByteBuffer&& value) { m_bSHasBeenSet = true; m_bS.push_back(std::move(value)); return *this; }


    /**
     * <p>A Map data type.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetM() const{ return m_m; }

    /**
     * <p>A Map data type.</p>
     */
    inline bool MHasBeenSet() const { return m_mHasBeenSet; }

    /**
     * <p>A Map data type.</p>
     */
    inline void SetM(const Aws::Map<Aws::String, AttributeValue>& value) { m_mHasBeenSet = true; m_m = value; }

    /**
     * <p>A Map data type.</p>
     */
    inline void SetM(Aws::Map<Aws::String, AttributeValue>&& value) { m_mHasBeenSet = true; m_m = std::move(value); }

    /**
     * <p>A Map data type.</p>
     */
    inline AttributeValue& WithM(const Aws::Map<Aws::String, AttributeValue>& value) { SetM(value); return *this;}

    /**
     * <p>A Map data type.</p>
     */
    inline AttributeValue& WithM(Aws::Map<Aws::String, AttributeValue>&& value) { SetM(std::move(value)); return *this;}

    /**
     * <p>A Map data type.</p>
     */
    inline AttributeValue& AddM(const Aws::String& key, const AttributeValue& value) { m_mHasBeenSet = true; m_m.emplace(key, value); return *this; }

    /**
     * <p>A Map data type.</p>
     */
    inline AttributeValue& AddM(Aws::String&& key, const AttributeValue& value) { m_mHasBeenSet = true; m_m.emplace(std::move(key), value); return *this; }

    /**
     * <p>A Map data type.</p>
     */
    inline AttributeValue& AddM(const Aws::String& key, AttributeValue&& value) { m_mHasBeenSet = true; m_m.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A Map data type.</p>
     */
    inline AttributeValue& AddM(Aws::String&& key, AttributeValue&& value) { m_mHasBeenSet = true; m_m.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A Map data type.</p>
     */
    inline AttributeValue& AddM(const char* key, AttributeValue&& value) { m_mHasBeenSet = true; m_m.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A Map data type.</p>
     */
    inline AttributeValue& AddM(const char* key, const AttributeValue& value) { m_mHasBeenSet = true; m_m.emplace(key, value); return *this; }


    /**
     * <p>A List data type.</p>
     */
    inline const Aws::Vector<AttributeValue>& GetL() const{ return m_l; }

    /**
     * <p>A List data type.</p>
     */
    inline bool LHasBeenSet() const { return m_lHasBeenSet; }

    /**
     * <p>A List data type.</p>
     */
    inline void SetL(const Aws::Vector<AttributeValue>& value) { m_lHasBeenSet = true; m_l = value; }

    /**
     * <p>A List data type.</p>
     */
    inline void SetL(Aws::Vector<AttributeValue>&& value) { m_lHasBeenSet = true; m_l = std::move(value); }

    /**
     * <p>A List data type.</p>
     */
    inline AttributeValue& WithL(const Aws::Vector<AttributeValue>& value) { SetL(value); return *this;}

    /**
     * <p>A List data type.</p>
     */
    inline AttributeValue& WithL(Aws::Vector<AttributeValue>&& value) { SetL(std::move(value)); return *this;}

    /**
     * <p>A List data type.</p>
     */
    inline AttributeValue& AddL(const AttributeValue& value) { m_lHasBeenSet = true; m_l.push_back(value); return *this; }

    /**
     * <p>A List data type.</p>
     */
    inline AttributeValue& AddL(AttributeValue&& value) { m_lHasBeenSet = true; m_l.push_back(std::move(value)); return *this; }


    /**
     * <p>A Null data type.</p>
     */
    inline bool GetNULL() const{ return m_nULL; }

    /**
     * <p>A Null data type.</p>
     */
    inline bool NULLHasBeenSet() const { return m_nULLHasBeenSet; }

    /**
     * <p>A Null data type.</p>
     */
    inline void SetNULL(bool value) { m_nULLHasBeenSet = true; m_nULL = value; }

    /**
     * <p>A Null data type.</p>
     */
    inline AttributeValue& WithNULL(bool value) { SetNULL(value); return *this;}


    /**
     * <p> A Boolean data type.</p>
     */
    inline bool GetBOOL() const{ return m_bOOL; }

    /**
     * <p> A Boolean data type.</p>
     */
    inline bool BOOLHasBeenSet() const { return m_bOOLHasBeenSet; }

    /**
     * <p> A Boolean data type.</p>
     */
    inline void SetBOOL(bool value) { m_bOOLHasBeenSet = true; m_bOOL = value; }

    /**
     * <p> A Boolean data type.</p>
     */
    inline AttributeValue& WithBOOL(bool value) { SetBOOL(value); return *this;}

  private:

    Aws::String m_s;
    bool m_sHasBeenSet;

    Aws::String m_n;
    bool m_nHasBeenSet;

    Aws::Utils::ByteBuffer m_b;
    bool m_bHasBeenSet;

    Aws::Vector<Aws::String> m_sS;
    bool m_sSHasBeenSet;

    Aws::Vector<Aws::String> m_nS;
    bool m_nSHasBeenSet;

    Aws::Vector<Aws::Utils::ByteBuffer> m_bS;
    bool m_bSHasBeenSet;

    Aws::Map<Aws::String, AttributeValue> m_m;
    bool m_mHasBeenSet;

    Aws::Vector<AttributeValue> m_l;
    bool m_lHasBeenSet;

    bool m_nULL;
    bool m_nULLHasBeenSet;

    bool m_bOOL;
    bool m_bOOLHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
