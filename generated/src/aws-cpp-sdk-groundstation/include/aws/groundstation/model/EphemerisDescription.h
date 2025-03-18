/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/S3Object.h>
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
   * <p>Description of ephemeris.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisDescription">AWS
   * API Reference</a></p>
   */
  class EphemerisDescription
  {
  public:
    AWS_GROUNDSTATION_API EphemerisDescription() = default;
    AWS_GROUNDSTATION_API EphemerisDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EphemerisDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline const Aws::String& GetEphemerisData() const { return m_ephemerisData; }
    inline bool EphemerisDataHasBeenSet() const { return m_ephemerisDataHasBeenSet; }
    template<typename EphemerisDataT = Aws::String>
    void SetEphemerisData(EphemerisDataT&& value) { m_ephemerisDataHasBeenSet = true; m_ephemerisData = std::forward<EphemerisDataT>(value); }
    template<typename EphemerisDataT = Aws::String>
    EphemerisDescription& WithEphemerisData(EphemerisDataT&& value) { SetEphemerisData(std::forward<EphemerisDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline const S3Object& GetSourceS3Object() const { return m_sourceS3Object; }
    inline bool SourceS3ObjectHasBeenSet() const { return m_sourceS3ObjectHasBeenSet; }
    template<typename SourceS3ObjectT = S3Object>
    void SetSourceS3Object(SourceS3ObjectT&& value) { m_sourceS3ObjectHasBeenSet = true; m_sourceS3Object = std::forward<SourceS3ObjectT>(value); }
    template<typename SourceS3ObjectT = S3Object>
    EphemerisDescription& WithSourceS3Object(SourceS3ObjectT&& value) { SetSourceS3Object(std::forward<SourceS3ObjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ephemerisData;
    bool m_ephemerisDataHasBeenSet = false;

    S3Object m_sourceS3Object;
    bool m_sourceS3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
