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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the upload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UploadMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API UploadMetadata
  {
  public:
    UploadMetadata();
    UploadMetadata(Aws::Utils::Json::JsonView jsonValue);
    UploadMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the upload.</p>
     */
    inline const Aws::String& GetUploadUrl() const{ return m_uploadUrl; }

    /**
     * <p>The URL of the upload.</p>
     */
    inline bool UploadUrlHasBeenSet() const { return m_uploadUrlHasBeenSet; }

    /**
     * <p>The URL of the upload.</p>
     */
    inline void SetUploadUrl(const Aws::String& value) { m_uploadUrlHasBeenSet = true; m_uploadUrl = value; }

    /**
     * <p>The URL of the upload.</p>
     */
    inline void SetUploadUrl(Aws::String&& value) { m_uploadUrlHasBeenSet = true; m_uploadUrl = std::move(value); }

    /**
     * <p>The URL of the upload.</p>
     */
    inline void SetUploadUrl(const char* value) { m_uploadUrlHasBeenSet = true; m_uploadUrl.assign(value); }

    /**
     * <p>The URL of the upload.</p>
     */
    inline UploadMetadata& WithUploadUrl(const Aws::String& value) { SetUploadUrl(value); return *this;}

    /**
     * <p>The URL of the upload.</p>
     */
    inline UploadMetadata& WithUploadUrl(Aws::String&& value) { SetUploadUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the upload.</p>
     */
    inline UploadMetadata& WithUploadUrl(const char* value) { SetUploadUrl(value); return *this;}


    /**
     * <p>The signed headers.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSignedHeaders() const{ return m_signedHeaders; }

    /**
     * <p>The signed headers.</p>
     */
    inline bool SignedHeadersHasBeenSet() const { return m_signedHeadersHasBeenSet; }

    /**
     * <p>The signed headers.</p>
     */
    inline void SetSignedHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_signedHeadersHasBeenSet = true; m_signedHeaders = value; }

    /**
     * <p>The signed headers.</p>
     */
    inline void SetSignedHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_signedHeadersHasBeenSet = true; m_signedHeaders = std::move(value); }

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& WithSignedHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetSignedHeaders(value); return *this;}

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& WithSignedHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetSignedHeaders(std::move(value)); return *this;}

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& AddSignedHeaders(const Aws::String& key, const Aws::String& value) { m_signedHeadersHasBeenSet = true; m_signedHeaders.emplace(key, value); return *this; }

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& AddSignedHeaders(Aws::String&& key, const Aws::String& value) { m_signedHeadersHasBeenSet = true; m_signedHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& AddSignedHeaders(const Aws::String& key, Aws::String&& value) { m_signedHeadersHasBeenSet = true; m_signedHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& AddSignedHeaders(Aws::String&& key, Aws::String&& value) { m_signedHeadersHasBeenSet = true; m_signedHeaders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& AddSignedHeaders(const char* key, Aws::String&& value) { m_signedHeadersHasBeenSet = true; m_signedHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& AddSignedHeaders(Aws::String&& key, const char* value) { m_signedHeadersHasBeenSet = true; m_signedHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>The signed headers.</p>
     */
    inline UploadMetadata& AddSignedHeaders(const char* key, const char* value) { m_signedHeadersHasBeenSet = true; m_signedHeaders.emplace(key, value); return *this; }

  private:

    Aws::String m_uploadUrl;
    bool m_uploadUrlHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_signedHeaders;
    bool m_signedHeadersHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
