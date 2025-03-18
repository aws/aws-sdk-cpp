/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Values for use in player attribute key-value pairs. This object lets you
   * specify an attribute value using any of the valid data types: string, number,
   * string array, or data map. Each <code>AttributeValue</code> object can use only
   * one of the available properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AttributeValue">AWS
   * API Reference</a></p>
   */
  class AttributeValue
  {
  public:
    AWS_GAMELIFT_API AttributeValue() = default;
    AWS_GAMELIFT_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
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
     * <p>For number values, expressed as double.</p>
     */
    inline double GetN() const { return m_n; }
    inline bool NHasBeenSet() const { return m_nHasBeenSet; }
    inline void SetN(double value) { m_nHasBeenSet = true; m_n = value; }
    inline AttributeValue& WithN(double value) { SetN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a list of up to 100 strings. Maximum length for each string is 100
     * characters. Duplicate values are not recognized; all occurrences of the repeated
     * value after the first of a repeated value are ignored.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSL() const { return m_sL; }
    inline bool SLHasBeenSet() const { return m_sLHasBeenSet; }
    template<typename SLT = Aws::Vector<Aws::String>>
    void SetSL(SLT&& value) { m_sLHasBeenSet = true; m_sL = std::forward<SLT>(value); }
    template<typename SLT = Aws::Vector<Aws::String>>
    AttributeValue& WithSL(SLT&& value) { SetSL(std::forward<SLT>(value)); return *this;}
    template<typename SLT = Aws::String>
    AttributeValue& AddSL(SLT&& value) { m_sLHasBeenSet = true; m_sL.emplace_back(std::forward<SLT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline const Aws::Map<Aws::String, double>& GetSDM() const { return m_sDM; }
    inline bool SDMHasBeenSet() const { return m_sDMHasBeenSet; }
    template<typename SDMT = Aws::Map<Aws::String, double>>
    void SetSDM(SDMT&& value) { m_sDMHasBeenSet = true; m_sDM = std::forward<SDMT>(value); }
    template<typename SDMT = Aws::Map<Aws::String, double>>
    AttributeValue& WithSDM(SDMT&& value) { SetSDM(std::forward<SDMT>(value)); return *this;}
    inline AttributeValue& AddSDM(Aws::String key, double value) {
      m_sDMHasBeenSet = true; m_sDM.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_s;
    bool m_sHasBeenSet = false;

    double m_n{0.0};
    bool m_nHasBeenSet = false;

    Aws::Vector<Aws::String> m_sL;
    bool m_sLHasBeenSet = false;

    Aws::Map<Aws::String, double> m_sDM;
    bool m_sDMHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
