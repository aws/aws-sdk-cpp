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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/S3SSEAlgorithm.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3ObjectMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3ObjectMetadata
  {
  public:
    S3ObjectMetadata();
    S3ObjectMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3ObjectMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }

    /**
     * <p/>
     */
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCacheControl(const Aws::String& value) { m_cacheControlHasBeenSet = true; m_cacheControl = value; }

    /**
     * <p/>
     */
    inline void SetCacheControl(Aws::String&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::move(value); }

    /**
     * <p/>
     */
    inline void SetCacheControl(const char* value) { m_cacheControlHasBeenSet = true; m_cacheControl.assign(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetContentDisposition() const{ return m_contentDisposition; }

    /**
     * <p/>
     */
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContentDisposition(const Aws::String& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }

    /**
     * <p/>
     */
    inline void SetContentDisposition(Aws::String&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::move(value); }

    /**
     * <p/>
     */
    inline void SetContentDisposition(const char* value) { m_contentDispositionHasBeenSet = true; m_contentDisposition.assign(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentDisposition(const Aws::String& value) { SetContentDisposition(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentDisposition(Aws::String&& value) { SetContentDisposition(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentDisposition(const char* value) { SetContentDisposition(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetContentEncoding() const{ return m_contentEncoding; }

    /**
     * <p/>
     */
    inline bool ContentEncodingHasBeenSet() const { return m_contentEncodingHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContentEncoding(const Aws::String& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = value; }

    /**
     * <p/>
     */
    inline void SetContentEncoding(Aws::String&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::move(value); }

    /**
     * <p/>
     */
    inline void SetContentEncoding(const char* value) { m_contentEncodingHasBeenSet = true; m_contentEncoding.assign(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentEncoding(const Aws::String& value) { SetContentEncoding(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentEncoding(Aws::String&& value) { SetContentEncoding(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentEncoding(const char* value) { SetContentEncoding(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetContentLanguage() const{ return m_contentLanguage; }

    /**
     * <p/>
     */
    inline bool ContentLanguageHasBeenSet() const { return m_contentLanguageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContentLanguage(const Aws::String& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = value; }

    /**
     * <p/>
     */
    inline void SetContentLanguage(Aws::String&& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = std::move(value); }

    /**
     * <p/>
     */
    inline void SetContentLanguage(const char* value) { m_contentLanguageHasBeenSet = true; m_contentLanguage.assign(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentLanguage(const Aws::String& value) { SetContentLanguage(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentLanguage(Aws::String&& value) { SetContentLanguage(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentLanguage(const char* value) { SetContentLanguage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }

    /**
     * <p/>
     */
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }

    /**
     * <p/>
     */
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }


    /**
     * <p/>
     */
    inline long long GetContentLength() const{ return m_contentLength; }

    /**
     * <p/>
     */
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentLength(long long value) { SetContentLength(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetContentMD5() const{ return m_contentMD5; }

    /**
     * <p/>
     */
    inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContentMD5(const Aws::String& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = value; }

    /**
     * <p/>
     */
    inline void SetContentMD5(Aws::String&& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = std::move(value); }

    /**
     * <p/>
     */
    inline void SetContentMD5(const char* value) { m_contentMD5HasBeenSet = true; m_contentMD5.assign(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentMD5(const Aws::String& value) { SetContentMD5(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentMD5(Aws::String&& value) { SetContentMD5(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentMD5(const char* value) { SetContentMD5(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p/>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p/>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p/>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetHttpExpiresDate() const{ return m_httpExpiresDate; }

    /**
     * <p/>
     */
    inline bool HttpExpiresDateHasBeenSet() const { return m_httpExpiresDateHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetHttpExpiresDate(const Aws::Utils::DateTime& value) { m_httpExpiresDateHasBeenSet = true; m_httpExpiresDate = value; }

    /**
     * <p/>
     */
    inline void SetHttpExpiresDate(Aws::Utils::DateTime&& value) { m_httpExpiresDateHasBeenSet = true; m_httpExpiresDate = std::move(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithHttpExpiresDate(const Aws::Utils::DateTime& value) { SetHttpExpiresDate(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithHttpExpiresDate(Aws::Utils::DateTime&& value) { SetHttpExpiresDate(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline bool GetRequesterCharged() const{ return m_requesterCharged; }

    /**
     * <p/>
     */
    inline bool RequesterChargedHasBeenSet() const { return m_requesterChargedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRequesterCharged(bool value) { m_requesterChargedHasBeenSet = true; m_requesterCharged = value; }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithRequesterCharged(bool value) { SetRequesterCharged(value); return *this;}


    /**
     * <p/>
     */
    inline const S3SSEAlgorithm& GetSSEAlgorithm() const{ return m_sSEAlgorithm; }

    /**
     * <p/>
     */
    inline bool SSEAlgorithmHasBeenSet() const { return m_sSEAlgorithmHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSSEAlgorithm(const S3SSEAlgorithm& value) { m_sSEAlgorithmHasBeenSet = true; m_sSEAlgorithm = value; }

    /**
     * <p/>
     */
    inline void SetSSEAlgorithm(S3SSEAlgorithm&& value) { m_sSEAlgorithmHasBeenSet = true; m_sSEAlgorithm = std::move(value); }

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithSSEAlgorithm(const S3SSEAlgorithm& value) { SetSSEAlgorithm(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectMetadata& WithSSEAlgorithm(S3SSEAlgorithm&& value) { SetSSEAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet;

    Aws::String m_contentDisposition;
    bool m_contentDispositionHasBeenSet;

    Aws::String m_contentEncoding;
    bool m_contentEncodingHasBeenSet;

    Aws::String m_contentLanguage;
    bool m_contentLanguageHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet;

    long long m_contentLength;
    bool m_contentLengthHasBeenSet;

    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    Aws::Utils::DateTime m_httpExpiresDate;
    bool m_httpExpiresDateHasBeenSet;

    bool m_requesterCharged;
    bool m_requesterChargedHasBeenSet;

    S3SSEAlgorithm m_sSEAlgorithm;
    bool m_sSEAlgorithmHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
