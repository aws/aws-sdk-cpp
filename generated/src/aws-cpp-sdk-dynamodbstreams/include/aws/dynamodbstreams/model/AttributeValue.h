/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Represents the data for an attribute.</p> <p>Each attribute value is
   * described as a name-value pair. The name is the data type, and the value is the
   * data itself.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.NamingRulesDataTypes.html#HowItWorks.DataTypes">Data
   * Types</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/AttributeValue">AWS
   * API Reference</a></p>
   */
  class AttributeValue
  {
  public:
    AWS_DYNAMODBSTREAMS_API AttributeValue();
    AWS_DYNAMODBSTREAMS_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An attribute of type String. For example:</p> <p> <code>"S": "Hello"</code>
     * </p>
     */
    inline const Aws::String& GetS() const{ return m_s; }
    inline bool SHasBeenSet() const { return m_sHasBeenSet; }
    inline void SetS(const Aws::String& value) { m_sHasBeenSet = true; m_s = value; }
    inline void SetS(Aws::String&& value) { m_sHasBeenSet = true; m_s = std::move(value); }
    inline void SetS(const char* value) { m_sHasBeenSet = true; m_s.assign(value); }
    inline AttributeValue& WithS(const Aws::String& value) { SetS(value); return *this;}
    inline AttributeValue& WithS(Aws::String&& value) { SetS(std::move(value)); return *this;}
    inline AttributeValue& WithS(const char* value) { SetS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Number. For example:</p> <p> <code>"N": "123.45"</code>
     * </p> <p>Numbers are sent across the network to DynamoDB as strings, to maximize
     * compatibility across languages and libraries. However, DynamoDB treats them as
     * number type attributes for mathematical operations.</p>
     */
    inline const Aws::String& GetN() const{ return m_n; }
    inline bool NHasBeenSet() const { return m_nHasBeenSet; }
    inline void SetN(const Aws::String& value) { m_nHasBeenSet = true; m_n = value; }
    inline void SetN(Aws::String&& value) { m_nHasBeenSet = true; m_n = std::move(value); }
    inline void SetN(const char* value) { m_nHasBeenSet = true; m_n.assign(value); }
    inline AttributeValue& WithN(const Aws::String& value) { SetN(value); return *this;}
    inline AttributeValue& WithN(Aws::String&& value) { SetN(std::move(value)); return *this;}
    inline AttributeValue& WithN(const char* value) { SetN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Binary. For example:</p> <p> <code>"B":
     * "dGhpcyB0ZXh0IGlzIGJhc2U2NC1lbmNvZGVk"</code> </p>
     */
    inline const Aws::Utils::ByteBuffer& GetB() const{ return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    inline void SetB(const Aws::Utils::ByteBuffer& value) { m_bHasBeenSet = true; m_b = value; }
    inline void SetB(Aws::Utils::ByteBuffer&& value) { m_bHasBeenSet = true; m_b = std::move(value); }
    inline AttributeValue& WithB(const Aws::Utils::ByteBuffer& value) { SetB(value); return *this;}
    inline AttributeValue& WithB(Aws::Utils::ByteBuffer&& value) { SetB(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type String Set. For example:</p> <p> <code>"SS": ["Giraffe",
     * "Hippo" ,"Zebra"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSS() const{ return m_sS; }
    inline bool SSHasBeenSet() const { return m_sSHasBeenSet; }
    inline void SetSS(const Aws::Vector<Aws::String>& value) { m_sSHasBeenSet = true; m_sS = value; }
    inline void SetSS(Aws::Vector<Aws::String>&& value) { m_sSHasBeenSet = true; m_sS = std::move(value); }
    inline AttributeValue& WithSS(const Aws::Vector<Aws::String>& value) { SetSS(value); return *this;}
    inline AttributeValue& WithSS(Aws::Vector<Aws::String>&& value) { SetSS(std::move(value)); return *this;}
    inline AttributeValue& AddSS(const Aws::String& value) { m_sSHasBeenSet = true; m_sS.push_back(value); return *this; }
    inline AttributeValue& AddSS(Aws::String&& value) { m_sSHasBeenSet = true; m_sS.push_back(std::move(value)); return *this; }
    inline AttributeValue& AddSS(const char* value) { m_sSHasBeenSet = true; m_sS.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type Number Set. For example:</p> <p> <code>"NS": ["42.2",
     * "-19", "7.5", "3.14"]</code> </p> <p>Numbers are sent across the network to
     * DynamoDB as strings, to maximize compatibility across languages and libraries.
     * However, DynamoDB treats them as number type attributes for mathematical
     * operations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNS() const{ return m_nS; }
    inline bool NSHasBeenSet() const { return m_nSHasBeenSet; }
    inline void SetNS(const Aws::Vector<Aws::String>& value) { m_nSHasBeenSet = true; m_nS = value; }
    inline void SetNS(Aws::Vector<Aws::String>&& value) { m_nSHasBeenSet = true; m_nS = std::move(value); }
    inline AttributeValue& WithNS(const Aws::Vector<Aws::String>& value) { SetNS(value); return *this;}
    inline AttributeValue& WithNS(Aws::Vector<Aws::String>&& value) { SetNS(std::move(value)); return *this;}
    inline AttributeValue& AddNS(const Aws::String& value) { m_nSHasBeenSet = true; m_nS.push_back(value); return *this; }
    inline AttributeValue& AddNS(Aws::String&& value) { m_nSHasBeenSet = true; m_nS.push_back(std::move(value)); return *this; }
    inline AttributeValue& AddNS(const char* value) { m_nSHasBeenSet = true; m_nS.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type Binary Set. For example:</p> <p> <code>"BS":
     * ["U3Vubnk=", "UmFpbnk=", "U25vd3k="]</code> </p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetBS() const{ return m_bS; }
    inline bool BSHasBeenSet() const { return m_bSHasBeenSet; }
    inline void SetBS(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_bSHasBeenSet = true; m_bS = value; }
    inline void SetBS(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_bSHasBeenSet = true; m_bS = std::move(value); }
    inline AttributeValue& WithBS(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetBS(value); return *this;}
    inline AttributeValue& WithBS(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetBS(std::move(value)); return *this;}
    inline AttributeValue& AddBS(const Aws::Utils::ByteBuffer& value) { m_bSHasBeenSet = true; m_bS.push_back(value); return *this; }
    inline AttributeValue& AddBS(Aws::Utils::ByteBuffer&& value) { m_bSHasBeenSet = true; m_bS.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type Map. For example:</p> <p> <code>"M": {"Name": {"S":
     * "Joe"}, "Age": {"N": "35"}}</code> </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetM() const{ return m_m; }
    inline bool MHasBeenSet() const { return m_mHasBeenSet; }
    inline void SetM(const Aws::Map<Aws::String, AttributeValue>& value) { m_mHasBeenSet = true; m_m = value; }
    inline void SetM(Aws::Map<Aws::String, AttributeValue>&& value) { m_mHasBeenSet = true; m_m = std::move(value); }
    inline AttributeValue& WithM(const Aws::Map<Aws::String, AttributeValue>& value) { SetM(value); return *this;}
    inline AttributeValue& WithM(Aws::Map<Aws::String, AttributeValue>&& value) { SetM(std::move(value)); return *this;}
    inline AttributeValue& AddM(const Aws::String& key, const AttributeValue& value) { m_mHasBeenSet = true; m_m.emplace(key, value); return *this; }
    inline AttributeValue& AddM(Aws::String&& key, const AttributeValue& value) { m_mHasBeenSet = true; m_m.emplace(std::move(key), value); return *this; }
    inline AttributeValue& AddM(const Aws::String& key, AttributeValue&& value) { m_mHasBeenSet = true; m_m.emplace(key, std::move(value)); return *this; }
    inline AttributeValue& AddM(Aws::String&& key, AttributeValue&& value) { m_mHasBeenSet = true; m_m.emplace(std::move(key), std::move(value)); return *this; }
    inline AttributeValue& AddM(const char* key, AttributeValue&& value) { m_mHasBeenSet = true; m_m.emplace(key, std::move(value)); return *this; }
    inline AttributeValue& AddM(const char* key, const AttributeValue& value) { m_mHasBeenSet = true; m_m.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type List. For example:</p> <p> <code>"L": [ {"S": "Cookies"}
     * , {"S": "Coffee"}, {"N": "3.14159"}]</code> </p>
     */
    inline const Aws::Vector<AttributeValue>& GetL() const{ return m_l; }
    inline bool LHasBeenSet() const { return m_lHasBeenSet; }
    inline void SetL(const Aws::Vector<AttributeValue>& value) { m_lHasBeenSet = true; m_l = value; }
    inline void SetL(Aws::Vector<AttributeValue>&& value) { m_lHasBeenSet = true; m_l = std::move(value); }
    inline AttributeValue& WithL(const Aws::Vector<AttributeValue>& value) { SetL(value); return *this;}
    inline AttributeValue& WithL(Aws::Vector<AttributeValue>&& value) { SetL(std::move(value)); return *this;}
    inline AttributeValue& AddL(const AttributeValue& value) { m_lHasBeenSet = true; m_l.push_back(value); return *this; }
    inline AttributeValue& AddL(AttributeValue&& value) { m_lHasBeenSet = true; m_l.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type Null. For example:</p> <p> <code>"NULL": true</code>
     * </p>
     */
    inline bool GetNULL() const{ return m_nULL; }
    inline bool NULLHasBeenSet() const { return m_nULLHasBeenSet; }
    inline void SetNULL(bool value) { m_nULLHasBeenSet = true; m_nULL = value; }
    inline AttributeValue& WithNULL(bool value) { SetNULL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Boolean. For example:</p> <p> <code>"BOOL": true</code>
     * </p>
     */
    inline bool GetBOOL() const{ return m_bOOL; }
    inline bool BOOLHasBeenSet() const { return m_bOOLHasBeenSet; }
    inline void SetBOOL(bool value) { m_bOOLHasBeenSet = true; m_bOOL = value; }
    inline AttributeValue& WithBOOL(bool value) { SetBOOL(value); return *this;}
    ///@}
  private:

    Aws::String m_s;
    bool m_sHasBeenSet = false;

    Aws::String m_n;
    bool m_nHasBeenSet = false;

    Aws::Utils::ByteBuffer m_b;
    bool m_bHasBeenSet = false;

    Aws::Vector<Aws::String> m_sS;
    bool m_sSHasBeenSet = false;

    Aws::Vector<Aws::String> m_nS;
    bool m_nSHasBeenSet = false;

    Aws::Vector<Aws::Utils::ByteBuffer> m_bS;
    bool m_bSHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_m;
    bool m_mHasBeenSet = false;

    Aws::Vector<AttributeValue> m_l;
    bool m_lHasBeenSet = false;

    bool m_nULL;
    bool m_nULLHasBeenSet = false;

    bool m_bOOL;
    bool m_bOOLHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
