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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * An endpoint for ingesting source content for a Channel.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/IngestEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API IngestEndpoint
  {
  public:
    IngestEndpoint();
    IngestEndpoint(Aws::Utils::Json::JsonView jsonValue);
    IngestEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline IngestEndpoint& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline IngestEndpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The system generated unique identifier for the IngestEndpoint
     */
    inline IngestEndpoint& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The system generated password for ingest authentication.
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * The system generated password for ingest authentication.
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * The system generated password for ingest authentication.
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * The system generated password for ingest authentication.
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * The system generated password for ingest authentication.
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * The system generated password for ingest authentication.
     */
    inline IngestEndpoint& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * The system generated password for ingest authentication.
     */
    inline IngestEndpoint& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * The system generated password for ingest authentication.
     */
    inline IngestEndpoint& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline IngestEndpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline IngestEndpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The ingest URL to which the source stream should be sent.
     */
    inline IngestEndpoint& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * The system generated username for ingest authentication.
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * The system generated username for ingest authentication.
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * The system generated username for ingest authentication.
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * The system generated username for ingest authentication.
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * The system generated username for ingest authentication.
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * The system generated username for ingest authentication.
     */
    inline IngestEndpoint& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * The system generated username for ingest authentication.
     */
    inline IngestEndpoint& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * The system generated username for ingest authentication.
     */
    inline IngestEndpoint& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
