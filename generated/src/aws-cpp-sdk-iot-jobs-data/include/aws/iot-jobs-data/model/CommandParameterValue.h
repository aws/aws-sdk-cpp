/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   * <p>The list of values used to describe a specific command
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/CommandParameterValue">AWS
   * API Reference</a></p>
   */
  class CommandParameterValue
  {
  public:
    AWS_IOTJOBSDATAPLANE_API CommandParameterValue() = default;
    AWS_IOTJOBSDATAPLANE_API CommandParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API CommandParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    CommandParameterValue& WithS(ST&& value) { SetS(std::forward<ST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Boolean. For example:</p> <p> <code>"BOOL": true</code>
     * </p>
     */
    inline bool GetB() const { return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    inline void SetB(bool value) { m_bHasBeenSet = true; m_b = value; }
    inline CommandParameterValue& WithB(bool value) { SetB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Integer (Thirty-Two Bits).</p>
     */
    inline int GetI() const { return m_i; }
    inline bool IHasBeenSet() const { return m_iHasBeenSet; }
    inline void SetI(int value) { m_iHasBeenSet = true; m_i = value; }
    inline CommandParameterValue& WithI(int value) { SetI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Long.</p>
     */
    inline long long GetL() const { return m_l; }
    inline bool LHasBeenSet() const { return m_lHasBeenSet; }
    inline void SetL(long long value) { m_lHasBeenSet = true; m_l = value; }
    inline CommandParameterValue& WithL(long long value) { SetL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Double (Sixty-Four Bits).</p>
     */
    inline double GetD() const { return m_d; }
    inline bool DHasBeenSet() const { return m_dHasBeenSet; }
    inline void SetD(double value) { m_dHasBeenSet = true; m_d = value; }
    inline CommandParameterValue& WithD(double value) { SetD(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Binary.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBIN() const { return m_bIN; }
    inline bool BINHasBeenSet() const { return m_bINHasBeenSet; }
    template<typename BINT = Aws::Utils::ByteBuffer>
    void SetBIN(BINT&& value) { m_bINHasBeenSet = true; m_bIN = std::forward<BINT>(value); }
    template<typename BINT = Aws::Utils::ByteBuffer>
    CommandParameterValue& WithBIN(BINT&& value) { SetBIN(std::forward<BINT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Unsigned Long.</p>
     */
    inline const Aws::String& GetUL() const { return m_uL; }
    inline bool ULHasBeenSet() const { return m_uLHasBeenSet; }
    template<typename ULT = Aws::String>
    void SetUL(ULT&& value) { m_uLHasBeenSet = true; m_uL = std::forward<ULT>(value); }
    template<typename ULT = Aws::String>
    CommandParameterValue& WithUL(ULT&& value) { SetUL(std::forward<ULT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s;
    bool m_sHasBeenSet = false;

    bool m_b{false};
    bool m_bHasBeenSet = false;

    int m_i{0};
    bool m_iHasBeenSet = false;

    long long m_l{0};
    bool m_lHasBeenSet = false;

    double m_d{0.0};
    bool m_dHasBeenSet = false;

    Aws::Utils::ByteBuffer m_bIN{};
    bool m_bINHasBeenSet = false;

    Aws::String m_uL;
    bool m_uLHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
