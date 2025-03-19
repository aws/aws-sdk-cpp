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
    AWS_DYNAMODBSTREAMS_API AttributeValue() = default;
    AWS_DYNAMODBSTREAMS_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An attribute of type String. For example:</p> <p> <code>"S": "Hello"</code>
     * </p>
     */
    inline const Aws::String& GetS() const { return m_s; }
    inline bool SHasBeenSet() const { return m_sHasBeenSet; }
    template<typename ST = Aws::String>
    void SetS(ST&& value) { m_sHasBeenSet = true; m_s = std::forward<ST>(value); }
    template<typename ST = Aws::String>
    AttributeValue& WithS(ST&& value) { SetS(std::forward<ST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Number. For example:</p> <p> <code>"N": "123.45"</code>
     * </p> <p>Numbers are sent across the network to DynamoDB as strings, to maximize
     * compatibility across languages and libraries. However, DynamoDB treats them as
     * number type attributes for mathematical operations.</p>
     */
    inline const Aws::String& GetN() const { return m_n; }
    inline bool NHasBeenSet() const { return m_nHasBeenSet; }
    template<typename NT = Aws::String>
    void SetN(NT&& value) { m_nHasBeenSet = true; m_n = std::forward<NT>(value); }
    template<typename NT = Aws::String>
    AttributeValue& WithN(NT&& value) { SetN(std::forward<NT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Binary. For example:</p> <p> <code>"B":
     * "dGhpcyB0ZXh0IGlzIGJhc2U2NC1lbmNvZGVk"</code> </p>
     */
    inline const Aws::Utils::ByteBuffer& GetB() const { return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    template<typename BT = Aws::Utils::ByteBuffer>
    void SetB(BT&& value) { m_bHasBeenSet = true; m_b = std::forward<BT>(value); }
    template<typename BT = Aws::Utils::ByteBuffer>
    AttributeValue& WithB(BT&& value) { SetB(std::forward<BT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type String Set. For example:</p> <p> <code>"SS": ["Giraffe",
     * "Hippo" ,"Zebra"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSS() const { return m_sS; }
    inline bool SSHasBeenSet() const { return m_sSHasBeenSet; }
    template<typename SST = Aws::Vector<Aws::String>>
    void SetSS(SST&& value) { m_sSHasBeenSet = true; m_sS = std::forward<SST>(value); }
    template<typename SST = Aws::Vector<Aws::String>>
    AttributeValue& WithSS(SST&& value) { SetSS(std::forward<SST>(value)); return *this;}
    template<typename SST = Aws::String>
    AttributeValue& AddSS(SST&& value) { m_sSHasBeenSet = true; m_sS.emplace_back(std::forward<SST>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type Number Set. For example:</p> <p> <code>"NS": ["42.2",
     * "-19", "7.5", "3.14"]</code> </p> <p>Numbers are sent across the network to
     * DynamoDB as strings, to maximize compatibility across languages and libraries.
     * However, DynamoDB treats them as number type attributes for mathematical
     * operations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNS() const { return m_nS; }
    inline bool NSHasBeenSet() const { return m_nSHasBeenSet; }
    template<typename NST = Aws::Vector<Aws::String>>
    void SetNS(NST&& value) { m_nSHasBeenSet = true; m_nS = std::forward<NST>(value); }
    template<typename NST = Aws::Vector<Aws::String>>
    AttributeValue& WithNS(NST&& value) { SetNS(std::forward<NST>(value)); return *this;}
    template<typename NST = Aws::String>
    AttributeValue& AddNS(NST&& value) { m_nSHasBeenSet = true; m_nS.emplace_back(std::forward<NST>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type Binary Set. For example:</p> <p> <code>"BS":
     * ["U3Vubnk=", "UmFpbnk=", "U25vd3k="]</code> </p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetBS() const { return m_bS; }
    inline bool BSHasBeenSet() const { return m_bSHasBeenSet; }
    template<typename BST = Aws::Vector<Aws::Utils::ByteBuffer>>
    void SetBS(BST&& value) { m_bSHasBeenSet = true; m_bS = std::forward<BST>(value); }
    template<typename BST = Aws::Vector<Aws::Utils::ByteBuffer>>
    AttributeValue& WithBS(BST&& value) { SetBS(std::forward<BST>(value)); return *this;}
    template<typename BST = Aws::Utils::ByteBuffer>
    AttributeValue& AddBS(BST&& value) { m_bSHasBeenSet = true; m_bS.emplace_back(std::forward<BST>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type Map. For example:</p> <p> <code>"M": {"Name": {"S":
     * "Joe"}, "Age": {"N": "35"}}</code> </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetM() const { return m_m; }
    inline bool MHasBeenSet() const { return m_mHasBeenSet; }
    template<typename MT = Aws::Map<Aws::String, AttributeValue>>
    void SetM(MT&& value) { m_mHasBeenSet = true; m_m = std::forward<MT>(value); }
    template<typename MT = Aws::Map<Aws::String, AttributeValue>>
    AttributeValue& WithM(MT&& value) { SetM(std::forward<MT>(value)); return *this;}
    template<typename MKeyT = Aws::String, typename MValueT = AttributeValue>
    AttributeValue& AddM(MKeyT&& key, MValueT&& value) {
      m_mHasBeenSet = true; m_m.emplace(std::forward<MKeyT>(key), std::forward<MValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An attribute of type List. For example:</p> <p> <code>"L": [ {"S": "Cookies"}
     * , {"S": "Coffee"}, {"N": "3.14159"}]</code> </p>
     */
    inline const Aws::Vector<AttributeValue>& GetL() const { return m_l; }
    inline bool LHasBeenSet() const { return m_lHasBeenSet; }
    template<typename LT = Aws::Vector<AttributeValue>>
    void SetL(LT&& value) { m_lHasBeenSet = true; m_l = std::forward<LT>(value); }
    template<typename LT = Aws::Vector<AttributeValue>>
    AttributeValue& WithL(LT&& value) { SetL(std::forward<LT>(value)); return *this;}
    template<typename LT = AttributeValue>
    AttributeValue& AddL(LT&& value) { m_lHasBeenSet = true; m_l.emplace_back(std::forward<LT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute of type Null. For example:</p> <p> <code>"NULL": true</code>
     * </p>
     */
    inline bool GetNULL() const { return m_nULL; }
    inline bool NULLHasBeenSet() const { return m_nULLHasBeenSet; }
    inline void SetNULL(bool value) { m_nULLHasBeenSet = true; m_nULL = value; }
    inline AttributeValue& WithNULL(bool value) { SetNULL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Boolean. For example:</p> <p> <code>"BOOL": true</code>
     * </p>
     */
    inline bool GetBOOL() const { return m_bOOL; }
    inline bool BOOLHasBeenSet() const { return m_bOOLHasBeenSet; }
    inline void SetBOOL(bool value) { m_bOOLHasBeenSet = true; m_bOOL = value; }
    inline AttributeValue& WithBOOL(bool value) { SetBOOL(value); return *this;}
    ///@}
  private:

    Aws::String m_s;
    bool m_sHasBeenSet = false;

    Aws::String m_n;
    bool m_nHasBeenSet = false;

    Aws::Utils::ByteBuffer m_b{};
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

    bool m_nULL{false};
    bool m_nULLHasBeenSet = false;

    bool m_bOOL{false};
    bool m_bOOLHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
