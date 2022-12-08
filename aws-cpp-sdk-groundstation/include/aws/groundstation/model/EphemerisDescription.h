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
    AWS_GROUNDSTATION_API EphemerisDescription();
    AWS_GROUNDSTATION_API EphemerisDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EphemerisDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline const Aws::String& GetEphemerisData() const{ return m_ephemerisData; }

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline bool EphemerisDataHasBeenSet() const { return m_ephemerisDataHasBeenSet; }

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline void SetEphemerisData(const Aws::String& value) { m_ephemerisDataHasBeenSet = true; m_ephemerisData = value; }

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline void SetEphemerisData(Aws::String&& value) { m_ephemerisDataHasBeenSet = true; m_ephemerisData = std::move(value); }

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline void SetEphemerisData(const char* value) { m_ephemerisDataHasBeenSet = true; m_ephemerisData.assign(value); }

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline EphemerisDescription& WithEphemerisData(const Aws::String& value) { SetEphemerisData(value); return *this;}

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline EphemerisDescription& WithEphemerisData(Aws::String&& value) { SetEphemerisData(std::move(value)); return *this;}

    /**
     * <p>Supplied ephemeris data.</p>
     */
    inline EphemerisDescription& WithEphemerisData(const char* value) { SetEphemerisData(value); return *this;}


    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline const S3Object& GetSourceS3Object() const{ return m_sourceS3Object; }

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline bool SourceS3ObjectHasBeenSet() const { return m_sourceS3ObjectHasBeenSet; }

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline void SetSourceS3Object(const S3Object& value) { m_sourceS3ObjectHasBeenSet = true; m_sourceS3Object = value; }

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline void SetSourceS3Object(S3Object&& value) { m_sourceS3ObjectHasBeenSet = true; m_sourceS3Object = std::move(value); }

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline EphemerisDescription& WithSourceS3Object(const S3Object& value) { SetSourceS3Object(value); return *this;}

    /**
     * <p>Source S3 object used for the ephemeris.</p>
     */
    inline EphemerisDescription& WithSourceS3Object(S3Object&& value) { SetSourceS3Object(std::move(value)); return *this;}

  private:

    Aws::String m_ephemerisData;
    bool m_ephemerisDataHasBeenSet = false;

    S3Object m_sourceS3Object;
    bool m_sourceS3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
