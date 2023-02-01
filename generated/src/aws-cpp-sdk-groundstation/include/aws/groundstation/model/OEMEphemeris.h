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
   * <p>Ephemeris data in Orbit Ephemeris Message (OEM) format.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/OEMEphemeris">AWS
   * API Reference</a></p>
   */
  class OEMEphemeris
  {
  public:
    AWS_GROUNDSTATION_API OEMEphemeris();
    AWS_GROUNDSTATION_API OEMEphemeris(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API OEMEphemeris& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline const Aws::String& GetOemData() const{ return m_oemData; }

    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline bool OemDataHasBeenSet() const { return m_oemDataHasBeenSet; }

    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline void SetOemData(const Aws::String& value) { m_oemDataHasBeenSet = true; m_oemData = value; }

    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline void SetOemData(Aws::String&& value) { m_oemDataHasBeenSet = true; m_oemData = std::move(value); }

    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline void SetOemData(const char* value) { m_oemDataHasBeenSet = true; m_oemData.assign(value); }

    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline OEMEphemeris& WithOemData(const Aws::String& value) { SetOemData(value); return *this;}

    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline OEMEphemeris& WithOemData(Aws::String&& value) { SetOemData(std::move(value)); return *this;}

    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline OEMEphemeris& WithOemData(const char* value) { SetOemData(value); return *this;}


    /**
     * <p>Identifies the S3 object to be used as the ephemeris.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>Identifies the S3 object to be used as the ephemeris.</p>
     */
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    /**
     * <p>Identifies the S3 object to be used as the ephemeris.</p>
     */
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>Identifies the S3 object to be used as the ephemeris.</p>
     */
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    /**
     * <p>Identifies the S3 object to be used as the ephemeris.</p>
     */
    inline OEMEphemeris& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>Identifies the S3 object to be used as the ephemeris.</p>
     */
    inline OEMEphemeris& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    Aws::String m_oemData;
    bool m_oemDataHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
