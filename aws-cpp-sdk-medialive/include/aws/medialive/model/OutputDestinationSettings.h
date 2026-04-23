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
   * Placeholder documentation for OutputDestinationSettings<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API OutputDestinationSettings
  {
  public:
    OutputDestinationSettings();
    OutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    OutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline const Aws::String& GetPasswordParam() const{ return m_passwordParam; }

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline bool PasswordParamHasBeenSet() const { return m_passwordParamHasBeenSet; }

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline void SetPasswordParam(const Aws::String& value) { m_passwordParamHasBeenSet = true; m_passwordParam = value; }

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline void SetPasswordParam(Aws::String&& value) { m_passwordParamHasBeenSet = true; m_passwordParam = std::move(value); }

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline void SetPasswordParam(const char* value) { m_passwordParamHasBeenSet = true; m_passwordParam.assign(value); }

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline OutputDestinationSettings& WithPasswordParam(const Aws::String& value) { SetPasswordParam(value); return *this;}

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline OutputDestinationSettings& WithPasswordParam(Aws::String&& value) { SetPasswordParam(std::move(value)); return *this;}

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline OutputDestinationSettings& WithPasswordParam(const char* value) { SetPasswordParam(value); return *this;}


    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline OutputDestinationSettings& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline OutputDestinationSettings& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * Stream name for RTMP destinations (URLs of type rtmp://)
     */
    inline OutputDestinationSettings& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * A URL specifying a destination
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * A URL specifying a destination
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * A URL specifying a destination
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * A URL specifying a destination
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * A URL specifying a destination
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * A URL specifying a destination
     */
    inline OutputDestinationSettings& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * A URL specifying a destination
     */
    inline OutputDestinationSettings& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * A URL specifying a destination
     */
    inline OutputDestinationSettings& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * username for destination
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * username for destination
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * username for destination
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * username for destination
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * username for destination
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * username for destination
     */
    inline OutputDestinationSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * username for destination
     */
    inline OutputDestinationSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * username for destination
     */
    inline OutputDestinationSettings& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_passwordParam;
    bool m_passwordParamHasBeenSet;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
