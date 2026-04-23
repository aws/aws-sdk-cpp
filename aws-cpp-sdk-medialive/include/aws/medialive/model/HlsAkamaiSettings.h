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
#include <aws/medialive/model/HlsAkamaiHttpTransferMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Hls Akamai Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsAkamaiSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API HlsAkamaiSettings
  {
  public:
    HlsAkamaiSettings();
    HlsAkamaiSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsAkamaiSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Number of seconds to wait before retrying connection to the CDN if the
     * connection is lost.
     */
    inline int GetConnectionRetryInterval() const{ return m_connectionRetryInterval; }

    /**
     * Number of seconds to wait before retrying connection to the CDN if the
     * connection is lost.
     */
    inline bool ConnectionRetryIntervalHasBeenSet() const { return m_connectionRetryIntervalHasBeenSet; }

    /**
     * Number of seconds to wait before retrying connection to the CDN if the
     * connection is lost.
     */
    inline void SetConnectionRetryInterval(int value) { m_connectionRetryIntervalHasBeenSet = true; m_connectionRetryInterval = value; }

    /**
     * Number of seconds to wait before retrying connection to the CDN if the
     * connection is lost.
     */
    inline HlsAkamaiSettings& WithConnectionRetryInterval(int value) { SetConnectionRetryInterval(value); return *this;}


    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline int GetFilecacheDuration() const{ return m_filecacheDuration; }

    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline bool FilecacheDurationHasBeenSet() const { return m_filecacheDurationHasBeenSet; }

    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline void SetFilecacheDuration(int value) { m_filecacheDurationHasBeenSet = true; m_filecacheDuration = value; }

    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline HlsAkamaiSettings& WithFilecacheDuration(int value) { SetFilecacheDuration(value); return *this;}


    /**
     * Specify whether or not to use chunked transfer encoding to Akamai. User should
     * contact Akamai to enable this feature.
     */
    inline const HlsAkamaiHttpTransferMode& GetHttpTransferMode() const{ return m_httpTransferMode; }

    /**
     * Specify whether or not to use chunked transfer encoding to Akamai. User should
     * contact Akamai to enable this feature.
     */
    inline bool HttpTransferModeHasBeenSet() const { return m_httpTransferModeHasBeenSet; }

    /**
     * Specify whether or not to use chunked transfer encoding to Akamai. User should
     * contact Akamai to enable this feature.
     */
    inline void SetHttpTransferMode(const HlsAkamaiHttpTransferMode& value) { m_httpTransferModeHasBeenSet = true; m_httpTransferMode = value; }

    /**
     * Specify whether or not to use chunked transfer encoding to Akamai. User should
     * contact Akamai to enable this feature.
     */
    inline void SetHttpTransferMode(HlsAkamaiHttpTransferMode&& value) { m_httpTransferModeHasBeenSet = true; m_httpTransferMode = std::move(value); }

    /**
     * Specify whether or not to use chunked transfer encoding to Akamai. User should
     * contact Akamai to enable this feature.
     */
    inline HlsAkamaiSettings& WithHttpTransferMode(const HlsAkamaiHttpTransferMode& value) { SetHttpTransferMode(value); return *this;}

    /**
     * Specify whether or not to use chunked transfer encoding to Akamai. User should
     * contact Akamai to enable this feature.
     */
    inline HlsAkamaiSettings& WithHttpTransferMode(HlsAkamaiHttpTransferMode&& value) { SetHttpTransferMode(std::move(value)); return *this;}


    /**
     * Number of retry attempts that will be made before the Live Event is put into an
     * error state.
     */
    inline int GetNumRetries() const{ return m_numRetries; }

    /**
     * Number of retry attempts that will be made before the Live Event is put into an
     * error state.
     */
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }

    /**
     * Number of retry attempts that will be made before the Live Event is put into an
     * error state.
     */
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }

    /**
     * Number of retry attempts that will be made before the Live Event is put into an
     * error state.
     */
    inline HlsAkamaiSettings& WithNumRetries(int value) { SetNumRetries(value); return *this;}


    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline int GetRestartDelay() const{ return m_restartDelay; }

    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline bool RestartDelayHasBeenSet() const { return m_restartDelayHasBeenSet; }

    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline void SetRestartDelay(int value) { m_restartDelayHasBeenSet = true; m_restartDelay = value; }

    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline HlsAkamaiSettings& WithRestartDelay(int value) { SetRestartDelay(value); return *this;}


    /**
     * Salt for authenticated Akamai.
     */
    inline const Aws::String& GetSalt() const{ return m_salt; }

    /**
     * Salt for authenticated Akamai.
     */
    inline bool SaltHasBeenSet() const { return m_saltHasBeenSet; }

    /**
     * Salt for authenticated Akamai.
     */
    inline void SetSalt(const Aws::String& value) { m_saltHasBeenSet = true; m_salt = value; }

    /**
     * Salt for authenticated Akamai.
     */
    inline void SetSalt(Aws::String&& value) { m_saltHasBeenSet = true; m_salt = std::move(value); }

    /**
     * Salt for authenticated Akamai.
     */
    inline void SetSalt(const char* value) { m_saltHasBeenSet = true; m_salt.assign(value); }

    /**
     * Salt for authenticated Akamai.
     */
    inline HlsAkamaiSettings& WithSalt(const Aws::String& value) { SetSalt(value); return *this;}

    /**
     * Salt for authenticated Akamai.
     */
    inline HlsAkamaiSettings& WithSalt(Aws::String&& value) { SetSalt(std::move(value)); return *this;}

    /**
     * Salt for authenticated Akamai.
     */
    inline HlsAkamaiSettings& WithSalt(const char* value) { SetSalt(value); return *this;}


    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline HlsAkamaiSettings& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline HlsAkamaiSettings& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline HlsAkamaiSettings& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    int m_connectionRetryInterval;
    bool m_connectionRetryIntervalHasBeenSet;

    int m_filecacheDuration;
    bool m_filecacheDurationHasBeenSet;

    HlsAkamaiHttpTransferMode m_httpTransferMode;
    bool m_httpTransferModeHasBeenSet;

    int m_numRetries;
    bool m_numRetriesHasBeenSet;

    int m_restartDelay;
    bool m_restartDelayHasBeenSet;

    Aws::String m_salt;
    bool m_saltHasBeenSet;

    Aws::String m_token;
    bool m_tokenHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
