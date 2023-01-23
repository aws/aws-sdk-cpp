/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryption.h>
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
  class UpdateFieldLevelEncryptionConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionConfig2020_05_31Result();
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Return the results of updating the configuration.</p>
     */
    inline const FieldLevelEncryption& GetFieldLevelEncryption() const{ return m_fieldLevelEncryption; }

    /**
     * <p>Return the results of updating the configuration.</p>
     */
    inline void SetFieldLevelEncryption(const FieldLevelEncryption& value) { m_fieldLevelEncryption = value; }

    /**
     * <p>Return the results of updating the configuration.</p>
     */
    inline void SetFieldLevelEncryption(FieldLevelEncryption&& value) { m_fieldLevelEncryption = std::move(value); }

    /**
     * <p>Return the results of updating the configuration.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2020_05_31Result& WithFieldLevelEncryption(const FieldLevelEncryption& value) { SetFieldLevelEncryption(value); return *this;}

    /**
     * <p>Return the results of updating the configuration.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2020_05_31Result& WithFieldLevelEncryption(FieldLevelEncryption&& value) { SetFieldLevelEncryption(std::move(value)); return *this;}


    /**
     * <p>The value of the <code>ETag</code> header that you received when updating the
     * configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when updating the
     * configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when updating the
     * configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when updating the
     * configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when updating the
     * configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when updating the
     * configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when updating the
     * configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateFieldLevelEncryptionConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    FieldLevelEncryption m_fieldLevelEncryption;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
