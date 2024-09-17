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
    AWS_GAMELIFT_API AttributeValue();
    AWS_GAMELIFT_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For single string values. Maximum string length is 100 characters.</p>
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
     * <p>For number values, expressed as double.</p>
     */
    inline double GetN() const{ return m_n; }
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
    inline const Aws::Vector<Aws::String>& GetSL() const{ return m_sL; }
    inline bool SLHasBeenSet() const { return m_sLHasBeenSet; }
    inline void SetSL(const Aws::Vector<Aws::String>& value) { m_sLHasBeenSet = true; m_sL = value; }
    inline void SetSL(Aws::Vector<Aws::String>&& value) { m_sLHasBeenSet = true; m_sL = std::move(value); }
    inline AttributeValue& WithSL(const Aws::Vector<Aws::String>& value) { SetSL(value); return *this;}
    inline AttributeValue& WithSL(Aws::Vector<Aws::String>&& value) { SetSL(std::move(value)); return *this;}
    inline AttributeValue& AddSL(const Aws::String& value) { m_sLHasBeenSet = true; m_sL.push_back(value); return *this; }
    inline AttributeValue& AddSL(Aws::String&& value) { m_sLHasBeenSet = true; m_sL.push_back(std::move(value)); return *this; }
    inline AttributeValue& AddSL(const char* value) { m_sLHasBeenSet = true; m_sL.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a map of up to 10 data type:value pairs. Maximum length for each string
     * value is 100 characters. </p>
     */
    inline const Aws::Map<Aws::String, double>& GetSDM() const{ return m_sDM; }
    inline bool SDMHasBeenSet() const { return m_sDMHasBeenSet; }
    inline void SetSDM(const Aws::Map<Aws::String, double>& value) { m_sDMHasBeenSet = true; m_sDM = value; }
    inline void SetSDM(Aws::Map<Aws::String, double>&& value) { m_sDMHasBeenSet = true; m_sDM = std::move(value); }
    inline AttributeValue& WithSDM(const Aws::Map<Aws::String, double>& value) { SetSDM(value); return *this;}
    inline AttributeValue& WithSDM(Aws::Map<Aws::String, double>&& value) { SetSDM(std::move(value)); return *this;}
    inline AttributeValue& AddSDM(const Aws::String& key, double value) { m_sDMHasBeenSet = true; m_sDM.emplace(key, value); return *this; }
    inline AttributeValue& AddSDM(Aws::String&& key, double value) { m_sDMHasBeenSet = true; m_sDM.emplace(std::move(key), value); return *this; }
    inline AttributeValue& AddSDM(const char* key, double value) { m_sDMHasBeenSet = true; m_sDM.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_s;
    bool m_sHasBeenSet = false;

    double m_n;
    bool m_nHasBeenSet = false;

    Aws::Vector<Aws::String> m_sL;
    bool m_sLHasBeenSet = false;

    Aws::Map<Aws::String, double> m_sDM;
    bool m_sDMHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
