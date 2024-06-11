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
  class CreateFieldLevelEncryptionConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateFieldLevelEncryptionConfig2020_05_31Result();
    AWS_CLOUDFRONT_API CreateFieldLevelEncryptionConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateFieldLevelEncryptionConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returned when you create a new field-level encryption configuration.</p>
     */
    inline const FieldLevelEncryption& GetFieldLevelEncryption() const{ return m_fieldLevelEncryption; }
    inline void SetFieldLevelEncryption(const FieldLevelEncryption& value) { m_fieldLevelEncryption = value; }
    inline void SetFieldLevelEncryption(FieldLevelEncryption&& value) { m_fieldLevelEncryption = std::move(value); }
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithFieldLevelEncryption(const FieldLevelEncryption& value) { SetFieldLevelEncryption(value); return *this;}
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithFieldLevelEncryption(FieldLevelEncryption&& value) { SetFieldLevelEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified URI of the new configuration resource just created.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateFieldLevelEncryptionConfig2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FieldLevelEncryption m_fieldLevelEncryption;

    Aws::String m_location;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
