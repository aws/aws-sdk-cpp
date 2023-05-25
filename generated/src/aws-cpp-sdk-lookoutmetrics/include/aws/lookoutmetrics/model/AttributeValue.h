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


    /**
     * <p>A string.</p>
     */
    inline const Aws::String& GetS() const{ return m_s; }

    /**
     * <p>A string.</p>
     */
    inline bool SHasBeenSet() const { return m_sHasBeenSet; }

    /**
     * <p>A string.</p>
     */
    inline void SetS(const Aws::String& value) { m_sHasBeenSet = true; m_s = value; }

    /**
     * <p>A string.</p>
     */
    inline void SetS(Aws::String&& value) { m_sHasBeenSet = true; m_s = std::move(value); }

    /**
     * <p>A string.</p>
     */
    inline void SetS(const char* value) { m_sHasBeenSet = true; m_s.assign(value); }

    /**
     * <p>A string.</p>
     */
    inline AttributeValue& WithS(const Aws::String& value) { SetS(value); return *this;}

    /**
     * <p>A string.</p>
     */
    inline AttributeValue& WithS(Aws::String&& value) { SetS(std::move(value)); return *this;}

    /**
     * <p>A string.</p>
     */
    inline AttributeValue& WithS(const char* value) { SetS(value); return *this;}


    /**
     * <p>A number.</p>
     */
    inline const Aws::String& GetN() const{ return m_n; }

    /**
     * <p>A number.</p>
     */
    inline bool NHasBeenSet() const { return m_nHasBeenSet; }

    /**
     * <p>A number.</p>
     */
    inline void SetN(const Aws::String& value) { m_nHasBeenSet = true; m_n = value; }

    /**
     * <p>A number.</p>
     */
    inline void SetN(Aws::String&& value) { m_nHasBeenSet = true; m_n = std::move(value); }

    /**
     * <p>A number.</p>
     */
    inline void SetN(const char* value) { m_nHasBeenSet = true; m_n.assign(value); }

    /**
     * <p>A number.</p>
     */
    inline AttributeValue& WithN(const Aws::String& value) { SetN(value); return *this;}

    /**
     * <p>A number.</p>
     */
    inline AttributeValue& WithN(Aws::String&& value) { SetN(std::move(value)); return *this;}

    /**
     * <p>A number.</p>
     */
    inline AttributeValue& WithN(const char* value) { SetN(value); return *this;}


    /**
     * <p>A binary value.</p>
     */
    inline const Aws::String& GetB() const{ return m_b; }

    /**
     * <p>A binary value.</p>
     */
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }

    /**
     * <p>A binary value.</p>
     */
    inline void SetB(const Aws::String& value) { m_bHasBeenSet = true; m_b = value; }

    /**
     * <p>A binary value.</p>
     */
    inline void SetB(Aws::String&& value) { m_bHasBeenSet = true; m_b = std::move(value); }

    /**
     * <p>A binary value.</p>
     */
    inline void SetB(const char* value) { m_bHasBeenSet = true; m_b.assign(value); }

    /**
     * <p>A binary value.</p>
     */
    inline AttributeValue& WithB(const Aws::String& value) { SetB(value); return *this;}

    /**
     * <p>A binary value.</p>
     */
    inline AttributeValue& WithB(Aws::String&& value) { SetB(std::move(value)); return *this;}

    /**
     * <p>A binary value.</p>
     */
    inline AttributeValue& WithB(const char* value) { SetB(value); return *this;}


    /**
     * <p>A list of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSS() const{ return m_sS; }

    /**
     * <p>A list of strings.</p>
     */
    inline bool SSHasBeenSet() const { return m_sSHasBeenSet; }

    /**
     * <p>A list of strings.</p>
     */
    inline void SetSS(const Aws::Vector<Aws::String>& value) { m_sSHasBeenSet = true; m_sS = value; }

    /**
     * <p>A list of strings.</p>
     */
    inline void SetSS(Aws::Vector<Aws::String>&& value) { m_sSHasBeenSet = true; m_sS = std::move(value); }

    /**
     * <p>A list of strings.</p>
     */
    inline AttributeValue& WithSS(const Aws::Vector<Aws::String>& value) { SetSS(value); return *this;}

    /**
     * <p>A list of strings.</p>
     */
    inline AttributeValue& WithSS(Aws::Vector<Aws::String>&& value) { SetSS(std::move(value)); return *this;}

    /**
     * <p>A list of strings.</p>
     */
    inline AttributeValue& AddSS(const Aws::String& value) { m_sSHasBeenSet = true; m_sS.push_back(value); return *this; }

    /**
     * <p>A list of strings.</p>
     */
    inline AttributeValue& AddSS(Aws::String&& value) { m_sSHasBeenSet = true; m_sS.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of strings.</p>
     */
    inline AttributeValue& AddSS(const char* value) { m_sSHasBeenSet = true; m_sS.push_back(value); return *this; }


    /**
     * <p>A list of numbers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNS() const{ return m_nS; }

    /**
     * <p>A list of numbers.</p>
     */
    inline bool NSHasBeenSet() const { return m_nSHasBeenSet; }

    /**
     * <p>A list of numbers.</p>
     */
    inline void SetNS(const Aws::Vector<Aws::String>& value) { m_nSHasBeenSet = true; m_nS = value; }

    /**
     * <p>A list of numbers.</p>
     */
    inline void SetNS(Aws::Vector<Aws::String>&& value) { m_nSHasBeenSet = true; m_nS = std::move(value); }

    /**
     * <p>A list of numbers.</p>
     */
    inline AttributeValue& WithNS(const Aws::Vector<Aws::String>& value) { SetNS(value); return *this;}

    /**
     * <p>A list of numbers.</p>
     */
    inline AttributeValue& WithNS(Aws::Vector<Aws::String>&& value) { SetNS(std::move(value)); return *this;}

    /**
     * <p>A list of numbers.</p>
     */
    inline AttributeValue& AddNS(const Aws::String& value) { m_nSHasBeenSet = true; m_nS.push_back(value); return *this; }

    /**
     * <p>A list of numbers.</p>
     */
    inline AttributeValue& AddNS(Aws::String&& value) { m_nSHasBeenSet = true; m_nS.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of numbers.</p>
     */
    inline AttributeValue& AddNS(const char* value) { m_nSHasBeenSet = true; m_nS.push_back(value); return *this; }


    /**
     * <p>A list of binary values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBS() const{ return m_bS; }

    /**
     * <p>A list of binary values.</p>
     */
    inline bool BSHasBeenSet() const { return m_bSHasBeenSet; }

    /**
     * <p>A list of binary values.</p>
     */
    inline void SetBS(const Aws::Vector<Aws::String>& value) { m_bSHasBeenSet = true; m_bS = value; }

    /**
     * <p>A list of binary values.</p>
     */
    inline void SetBS(Aws::Vector<Aws::String>&& value) { m_bSHasBeenSet = true; m_bS = std::move(value); }

    /**
     * <p>A list of binary values.</p>
     */
    inline AttributeValue& WithBS(const Aws::Vector<Aws::String>& value) { SetBS(value); return *this;}

    /**
     * <p>A list of binary values.</p>
     */
    inline AttributeValue& WithBS(Aws::Vector<Aws::String>&& value) { SetBS(std::move(value)); return *this;}

    /**
     * <p>A list of binary values.</p>
     */
    inline AttributeValue& AddBS(const Aws::String& value) { m_bSHasBeenSet = true; m_bS.push_back(value); return *this; }

    /**
     * <p>A list of binary values.</p>
     */
    inline AttributeValue& AddBS(Aws::String&& value) { m_bSHasBeenSet = true; m_bS.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of binary values.</p>
     */
    inline AttributeValue& AddBS(const char* value) { m_bSHasBeenSet = true; m_bS.push_back(value); return *this; }

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
