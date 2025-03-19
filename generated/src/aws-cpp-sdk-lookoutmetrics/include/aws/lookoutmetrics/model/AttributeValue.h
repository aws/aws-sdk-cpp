/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>An attribute value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AttributeValue">AWS
   * API Reference</a></p>
   */
  class AttributeValue
  {
  public:
    AWS_LOOKOUTMETRICS_API AttributeValue() = default;
    AWS_LOOKOUTMETRICS_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string.</p>
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
     * <p>A number.</p>
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
     * <p>A binary value.</p>
     */
    inline const Aws::String& GetB() const { return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    template<typename BT = Aws::String>
    void SetB(BT&& value) { m_bHasBeenSet = true; m_b = std::forward<BT>(value); }
    template<typename BT = Aws::String>
    AttributeValue& WithB(BT&& value) { SetB(std::forward<BT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings.</p>
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
     * <p>A list of numbers.</p>
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
     * <p>A list of binary values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBS() const { return m_bS; }
    inline bool BSHasBeenSet() const { return m_bSHasBeenSet; }
    template<typename BST = Aws::Vector<Aws::String>>
    void SetBS(BST&& value) { m_bSHasBeenSet = true; m_bS = std::forward<BST>(value); }
    template<typename BST = Aws::Vector<Aws::String>>
    AttributeValue& WithBS(BST&& value) { SetBS(std::forward<BST>(value)); return *this;}
    template<typename BST = Aws::String>
    AttributeValue& AddBS(BST&& value) { m_bSHasBeenSet = true; m_bS.emplace_back(std::forward<BST>(value)); return *this; }
    ///@}
  private:

    Aws::String m_s;
    bool m_sHasBeenSet = false;

    Aws::String m_n;
    bool m_nHasBeenSet = false;

    Aws::String m_b;
    bool m_bHasBeenSet = false;

    Aws::Vector<Aws::String> m_sS;
    bool m_sSHasBeenSet = false;

    Aws::Vector<Aws::String> m_nS;
    bool m_nSHasBeenSet = false;

    Aws::Vector<Aws::String> m_bS;
    bool m_bSHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
