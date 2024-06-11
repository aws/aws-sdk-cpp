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
    AWS_LOOKOUTMETRICS_API AttributeValue();
    AWS_LOOKOUTMETRICS_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string.</p>
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
     * <p>A number.</p>
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
     * <p>A binary value.</p>
     */
    inline const Aws::String& GetB() const{ return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    inline void SetB(const Aws::String& value) { m_bHasBeenSet = true; m_b = value; }
    inline void SetB(Aws::String&& value) { m_bHasBeenSet = true; m_b = std::move(value); }
    inline void SetB(const char* value) { m_bHasBeenSet = true; m_b.assign(value); }
    inline AttributeValue& WithB(const Aws::String& value) { SetB(value); return *this;}
    inline AttributeValue& WithB(Aws::String&& value) { SetB(std::move(value)); return *this;}
    inline AttributeValue& WithB(const char* value) { SetB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings.</p>
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
     * <p>A list of numbers.</p>
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
     * <p>A list of binary values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBS() const{ return m_bS; }
    inline bool BSHasBeenSet() const { return m_bSHasBeenSet; }
    inline void SetBS(const Aws::Vector<Aws::String>& value) { m_bSHasBeenSet = true; m_bS = value; }
    inline void SetBS(Aws::Vector<Aws::String>&& value) { m_bSHasBeenSet = true; m_bS = std::move(value); }
    inline AttributeValue& WithBS(const Aws::Vector<Aws::String>& value) { SetBS(value); return *this;}
    inline AttributeValue& WithBS(Aws::Vector<Aws::String>&& value) { SetBS(std::move(value)); return *this;}
    inline AttributeValue& AddBS(const Aws::String& value) { m_bSHasBeenSet = true; m_bS.push_back(value); return *this; }
    inline AttributeValue& AddBS(Aws::String&& value) { m_bSHasBeenSet = true; m_bS.push_back(std::move(value)); return *this; }
    inline AttributeValue& AddBS(const char* value) { m_bSHasBeenSet = true; m_bS.push_back(value); return *this; }
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
