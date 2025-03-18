/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/EphemerisDescription.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisTypeDescription">AWS
   * API Reference</a></p>
   */
  class EphemerisTypeDescription
  {
  public:
    AWS_GROUNDSTATION_API EphemerisTypeDescription() = default;
    AWS_GROUNDSTATION_API EphemerisTypeDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EphemerisTypeDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const EphemerisDescription& GetOem() const { return m_oem; }
    inline bool OemHasBeenSet() const { return m_oemHasBeenSet; }
    template<typename OemT = EphemerisDescription>
    void SetOem(OemT&& value) { m_oemHasBeenSet = true; m_oem = std::forward<OemT>(value); }
    template<typename OemT = EphemerisDescription>
    EphemerisTypeDescription& WithOem(OemT&& value) { SetOem(std::forward<OemT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EphemerisDescription& GetTle() const { return m_tle; }
    inline bool TleHasBeenSet() const { return m_tleHasBeenSet; }
    template<typename TleT = EphemerisDescription>
    void SetTle(TleT&& value) { m_tleHasBeenSet = true; m_tle = std::forward<TleT>(value); }
    template<typename TleT = EphemerisDescription>
    EphemerisTypeDescription& WithTle(TleT&& value) { SetTle(std::forward<TleT>(value)); return *this;}
    ///@}
  private:

    EphemerisDescription m_oem;
    bool m_oemHasBeenSet = false;

    EphemerisDescription m_tle;
    bool m_tleHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
