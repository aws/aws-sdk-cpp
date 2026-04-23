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
   * Settings for for a PULL type input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputSourceRequest
  {
  public:
    InputSourceRequest();
    InputSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    InputSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline const Aws::String& GetPasswordParam() const{ return m_passwordParam; }

    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline bool PasswordParamHasBeenSet() const { return m_passwordParamHasBeenSet; }

    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline void SetPasswordParam(const Aws::String& value) { m_passwordParamHasBeenSet = true; m_passwordParam = value; }

    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline void SetPasswordParam(Aws::String&& value) { m_passwordParamHasBeenSet = true; m_passwordParam = std::move(value); }

    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline void SetPasswordParam(const char* value) { m_passwordParamHasBeenSet = true; m_passwordParam.assign(value); }

    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline InputSourceRequest& WithPasswordParam(const Aws::String& value) { SetPasswordParam(value); return *this;}

    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline InputSourceRequest& WithPasswordParam(Aws::String&& value) { SetPasswordParam(std::move(value)); return *this;}

    /**
     * The key used to extract the password from EC2 Parameter store.
     */
    inline InputSourceRequest& WithPasswordParam(const char* value) { SetPasswordParam(value); return *this;}


    /**
     * This represents the customer's source URL where stream is
pulled from.

     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * This represents the customer's source URL where stream is
pulled from.

     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * This represents the customer's source URL where stream is
pulled from.

     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * This represents the customer's source URL where stream is
pulled from.

     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * This represents the customer's source URL where stream is
pulled from.

     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * This represents the customer's source URL where stream is
pulled from.

     */
    inline InputSourceRequest& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * This represents the customer's source URL where stream is
pulled from.

     */
    inline InputSourceRequest& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * This represents the customer's source URL where stream is
pulled from.

     */
    inline InputSourceRequest& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * The username for the input source.
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * The username for the input source.
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * The username for the input source.
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * The username for the input source.
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * The username for the input source.
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * The username for the input source.
     */
    inline InputSourceRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * The username for the input source.
     */
    inline InputSourceRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * The username for the input source.
     */
    inline InputSourceRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_passwordParam;
    bool m_passwordParamHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
