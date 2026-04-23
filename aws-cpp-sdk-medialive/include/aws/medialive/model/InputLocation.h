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
   * Input Location<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputLocation">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputLocation
  {
  public:
    InputLocation();
    InputLocation(Aws::Utils::Json::JsonView jsonValue);
    InputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline InputLocation& WithPasswordParam(const Aws::String& value) { SetPasswordParam(value); return *this;}

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline InputLocation& WithPasswordParam(Aws::String&& value) { SetPasswordParam(std::move(value)); return *this;}

    /**
     * key used to extract the password from EC2 Parameter store
     */
    inline InputLocation& WithPasswordParam(const char* value) { SetPasswordParam(value); return *this;}


    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline InputLocation& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline InputLocation& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * Uniform Resource Identifier - This should be a path to a file accessible to the
     * Live system (eg. a http:// URI) depending on the output type. For example, a
     * RTMP destination should have a uri simliar to: "rtmp://fmsserver/live".
     */
    inline InputLocation& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * Documentation update needed
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * Documentation update needed
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * Documentation update needed
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * Documentation update needed
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * Documentation update needed
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * Documentation update needed
     */
    inline InputLocation& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * Documentation update needed
     */
    inline InputLocation& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * Documentation update needed
     */
    inline InputLocation& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_passwordParam;
    bool m_passwordParamHasBeenSet;

    Aws::String m_uri;
    bool m_uriHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
