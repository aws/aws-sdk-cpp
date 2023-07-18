﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EncoderProfile.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * A collection of parameters that determine how MediaConnect will convert the
   * content. These fields only apply to outputs on flows that have a CDI
   * source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/EncodingParameters">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API EncodingParameters
  {
  public:
    EncodingParameters();
    EncodingParameters(Aws::Utils::Json::JsonView jsonValue);
    EncodingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A value that is used to calculate compression for an output. The bitrate of the
     * output is calculated as follows: Output bitrate = (1 / compressionFactor) *
     * (source bitrate) This property only applies to outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol. Valid values are
     * floating point numbers in the range of 3.0 to 10.0, inclusive.
     */
    inline double GetCompressionFactor() const{ return m_compressionFactor; }

    /**
     * A value that is used to calculate compression for an output. The bitrate of the
     * output is calculated as follows: Output bitrate = (1 / compressionFactor) *
     * (source bitrate) This property only applies to outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol. Valid values are
     * floating point numbers in the range of 3.0 to 10.0, inclusive.
     */
    inline bool CompressionFactorHasBeenSet() const { return m_compressionFactorHasBeenSet; }

    /**
     * A value that is used to calculate compression for an output. The bitrate of the
     * output is calculated as follows: Output bitrate = (1 / compressionFactor) *
     * (source bitrate) This property only applies to outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol. Valid values are
     * floating point numbers in the range of 3.0 to 10.0, inclusive.
     */
    inline void SetCompressionFactor(double value) { m_compressionFactorHasBeenSet = true; m_compressionFactor = value; }

    /**
     * A value that is used to calculate compression for an output. The bitrate of the
     * output is calculated as follows: Output bitrate = (1 / compressionFactor) *
     * (source bitrate) This property only applies to outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol. Valid values are
     * floating point numbers in the range of 3.0 to 10.0, inclusive.
     */
    inline EncodingParameters& WithCompressionFactor(double value) { SetCompressionFactor(value); return *this;}


    /**
     * A setting on the encoder that drives compression settings. This property only
     * applies to video media streams associated with outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol.
     */
    inline const EncoderProfile& GetEncoderProfile() const{ return m_encoderProfile; }

    /**
     * A setting on the encoder that drives compression settings. This property only
     * applies to video media streams associated with outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol.
     */
    inline bool EncoderProfileHasBeenSet() const { return m_encoderProfileHasBeenSet; }

    /**
     * A setting on the encoder that drives compression settings. This property only
     * applies to video media streams associated with outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol.
     */
    inline void SetEncoderProfile(const EncoderProfile& value) { m_encoderProfileHasBeenSet = true; m_encoderProfile = value; }

    /**
     * A setting on the encoder that drives compression settings. This property only
     * applies to video media streams associated with outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol.
     */
    inline void SetEncoderProfile(EncoderProfile&& value) { m_encoderProfileHasBeenSet = true; m_encoderProfile = std::move(value); }

    /**
     * A setting on the encoder that drives compression settings. This property only
     * applies to video media streams associated with outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol.
     */
    inline EncodingParameters& WithEncoderProfile(const EncoderProfile& value) { SetEncoderProfile(value); return *this;}

    /**
     * A setting on the encoder that drives compression settings. This property only
     * applies to video media streams associated with outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol.
     */
    inline EncodingParameters& WithEncoderProfile(EncoderProfile&& value) { SetEncoderProfile(std::move(value)); return *this;}

  private:

    double m_compressionFactor;
    bool m_compressionFactorHasBeenSet;

    EncoderProfile m_encoderProfile;
    bool m_encoderProfileHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
