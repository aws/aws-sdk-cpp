/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/RtmpOutputCertificateMode.h>
#include <aws/medialive/model/OutputLocationRef.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Rtmp Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RtmpOutputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API RtmpOutputSettings
  {
  public:
    RtmpOutputSettings();
    RtmpOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    RtmpOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If set to verifyAuthenticity, verify the tls certificate chain to a trusted
     * Certificate Authority (CA).  This will cause rtmps outputs with self-signed
     * certificates to fail.
     */
    inline const RtmpOutputCertificateMode& GetCertificateMode() const{ return m_certificateMode; }

    /**
     * If set to verifyAuthenticity, verify the tls certificate chain to a trusted
     * Certificate Authority (CA).  This will cause rtmps outputs with self-signed
     * certificates to fail.
     */
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }

    /**
     * If set to verifyAuthenticity, verify the tls certificate chain to a trusted
     * Certificate Authority (CA).  This will cause rtmps outputs with self-signed
     * certificates to fail.
     */
    inline void SetCertificateMode(const RtmpOutputCertificateMode& value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }

    /**
     * If set to verifyAuthenticity, verify the tls certificate chain to a trusted
     * Certificate Authority (CA).  This will cause rtmps outputs with self-signed
     * certificates to fail.
     */
    inline void SetCertificateMode(RtmpOutputCertificateMode&& value) { m_certificateModeHasBeenSet = true; m_certificateMode = std::move(value); }

    /**
     * If set to verifyAuthenticity, verify the tls certificate chain to a trusted
     * Certificate Authority (CA).  This will cause rtmps outputs with self-signed
     * certificates to fail.
     */
    inline RtmpOutputSettings& WithCertificateMode(const RtmpOutputCertificateMode& value) { SetCertificateMode(value); return *this;}

    /**
     * If set to verifyAuthenticity, verify the tls certificate chain to a trusted
     * Certificate Authority (CA).  This will cause rtmps outputs with self-signed
     * certificates to fail.
     */
    inline RtmpOutputSettings& WithCertificateMode(RtmpOutputCertificateMode&& value) { SetCertificateMode(std::move(value)); return *this;}


    /**
     * Number of seconds to wait before retrying a connection to the Flash Media server
     * if the connection is lost.
     */
    inline int GetConnectionRetryInterval() const{ return m_connectionRetryInterval; }

    /**
     * Number of seconds to wait before retrying a connection to the Flash Media server
     * if the connection is lost.
     */
    inline bool ConnectionRetryIntervalHasBeenSet() const { return m_connectionRetryIntervalHasBeenSet; }

    /**
     * Number of seconds to wait before retrying a connection to the Flash Media server
     * if the connection is lost.
     */
    inline void SetConnectionRetryInterval(int value) { m_connectionRetryIntervalHasBeenSet = true; m_connectionRetryInterval = value; }

    /**
     * Number of seconds to wait before retrying a connection to the Flash Media server
     * if the connection is lost.
     */
    inline RtmpOutputSettings& WithConnectionRetryInterval(int value) { SetConnectionRetryInterval(value); return *this;}


    /**
     * The RTMP endpoint excluding the stream name (eg. rtmp://host/appname). For
     * connection to Akamai, a username and password must be supplied. URI fields
     * accept format identifiers.
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * The RTMP endpoint excluding the stream name (eg. rtmp://host/appname). For
     * connection to Akamai, a username and password must be supplied. URI fields
     * accept format identifiers.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * The RTMP endpoint excluding the stream name (eg. rtmp://host/appname). For
     * connection to Akamai, a username and password must be supplied. URI fields
     * accept format identifiers.
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * The RTMP endpoint excluding the stream name (eg. rtmp://host/appname). For
     * connection to Akamai, a username and password must be supplied. URI fields
     * accept format identifiers.
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * The RTMP endpoint excluding the stream name (eg. rtmp://host/appname). For
     * connection to Akamai, a username and password must be supplied. URI fields
     * accept format identifiers.
     */
    inline RtmpOutputSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * The RTMP endpoint excluding the stream name (eg. rtmp://host/appname). For
     * connection to Akamai, a username and password must be supplied. URI fields
     * accept format identifiers.
     */
    inline RtmpOutputSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * Number of retry attempts.
     */
    inline int GetNumRetries() const{ return m_numRetries; }

    /**
     * Number of retry attempts.
     */
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }

    /**
     * Number of retry attempts.
     */
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }

    /**
     * Number of retry attempts.
     */
    inline RtmpOutputSettings& WithNumRetries(int value) { SetNumRetries(value); return *this;}

  private:

    RtmpOutputCertificateMode m_certificateMode;
    bool m_certificateModeHasBeenSet;

    int m_connectionRetryInterval;
    bool m_connectionRetryIntervalHasBeenSet;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet;

    int m_numRetries;
    bool m_numRetriesHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
