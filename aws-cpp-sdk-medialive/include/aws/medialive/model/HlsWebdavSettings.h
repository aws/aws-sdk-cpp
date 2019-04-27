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
#include <aws/medialive/model/HlsWebdavHttpTransferMode.h>
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
   * Hls Webdav Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsWebdavSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API HlsWebdavSettings
  {
  public:
    HlsWebdavSettings();
    HlsWebdavSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsWebdavSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline HlsWebdavSettings& WithConnectionRetryInterval(int value) { SetConnectionRetryInterval(value); return *this;}


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
    inline HlsWebdavSettings& WithFilecacheDuration(int value) { SetFilecacheDuration(value); return *this;}


    /**
     * Specify whether or not to use chunked transfer encoding to WebDAV.
     */
    inline const HlsWebdavHttpTransferMode& GetHttpTransferMode() const{ return m_httpTransferMode; }

    /**
     * Specify whether or not to use chunked transfer encoding to WebDAV.
     */
    inline bool HttpTransferModeHasBeenSet() const { return m_httpTransferModeHasBeenSet; }

    /**
     * Specify whether or not to use chunked transfer encoding to WebDAV.
     */
    inline void SetHttpTransferMode(const HlsWebdavHttpTransferMode& value) { m_httpTransferModeHasBeenSet = true; m_httpTransferMode = value; }

    /**
     * Specify whether or not to use chunked transfer encoding to WebDAV.
     */
    inline void SetHttpTransferMode(HlsWebdavHttpTransferMode&& value) { m_httpTransferModeHasBeenSet = true; m_httpTransferMode = std::move(value); }

    /**
     * Specify whether or not to use chunked transfer encoding to WebDAV.
     */
    inline HlsWebdavSettings& WithHttpTransferMode(const HlsWebdavHttpTransferMode& value) { SetHttpTransferMode(value); return *this;}

    /**
     * Specify whether or not to use chunked transfer encoding to WebDAV.
     */
    inline HlsWebdavSettings& WithHttpTransferMode(HlsWebdavHttpTransferMode&& value) { SetHttpTransferMode(std::move(value)); return *this;}


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
    inline HlsWebdavSettings& WithNumRetries(int value) { SetNumRetries(value); return *this;}


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
    inline HlsWebdavSettings& WithRestartDelay(int value) { SetRestartDelay(value); return *this;}

  private:

    int m_connectionRetryInterval;
    bool m_connectionRetryIntervalHasBeenSet;

    int m_filecacheDuration;
    bool m_filecacheDurationHasBeenSet;

    HlsWebdavHttpTransferMode m_httpTransferMode;
    bool m_httpTransferModeHasBeenSet;

    int m_numRetries;
    bool m_numRetriesHasBeenSet;

    int m_restartDelay;
    bool m_restartDelayHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
