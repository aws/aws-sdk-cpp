/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryptionConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class GetFieldLevelEncryptionConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetFieldLevelEncryptionConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetFieldLevelEncryptionConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetFieldLevelEncryptionConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline const FieldLevelEncryptionConfig& GetFieldLevelEncryptionConfig() const{ return m_fieldLevelEncryptionConfig; }

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline void SetFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { m_fieldLevelEncryptionConfig = value; }

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline void SetFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { m_fieldLevelEncryptionConfig = std::move(value); }

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline GetFieldLevelEncryptionConfig2020_05_31Result& WithFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { SetFieldLevelEncryptionConfig(value); return *this;}

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline GetFieldLevelEncryptionConfig2020_05_31Result& WithFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { SetFieldLevelEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetFieldLevelEncryptionConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetFieldLevelEncryptionConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetFieldLevelEncryptionConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFieldLevelEncryptionConfig2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFieldLevelEncryptionConfig2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFieldLevelEncryptionConfig2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FieldLevelEncryptionConfig m_fieldLevelEncryptionConfig;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
