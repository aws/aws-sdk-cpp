/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryptionProfile.h>
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
  class UpdateFieldLevelEncryptionProfile2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionProfile2020_05_31Result();
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionProfile2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API UpdateFieldLevelEncryptionProfile2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Return the results of updating the profile.</p>
     */
    inline const FieldLevelEncryptionProfile& GetFieldLevelEncryptionProfile() const{ return m_fieldLevelEncryptionProfile; }

    /**
     * <p>Return the results of updating the profile.</p>
     */
    inline void SetFieldLevelEncryptionProfile(const FieldLevelEncryptionProfile& value) { m_fieldLevelEncryptionProfile = value; }

    /**
     * <p>Return the results of updating the profile.</p>
     */
    inline void SetFieldLevelEncryptionProfile(FieldLevelEncryptionProfile&& value) { m_fieldLevelEncryptionProfile = std::move(value); }

    /**
     * <p>Return the results of updating the profile.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithFieldLevelEncryptionProfile(const FieldLevelEncryptionProfile& value) { SetFieldLevelEncryptionProfile(value); return *this;}

    /**
     * <p>Return the results of updating the profile.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithFieldLevelEncryptionProfile(FieldLevelEncryptionProfile&& value) { SetFieldLevelEncryptionProfile(std::move(value)); return *this;}


    /**
     * <p>The result of the field-level encryption profile request.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The result of the field-level encryption profile request.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The result of the field-level encryption profile request.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The result of the field-level encryption profile request.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The result of the field-level encryption profile request.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The result of the field-level encryption profile request.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The result of the field-level encryption profile request.</p>
     */
    inline UpdateFieldLevelEncryptionProfile2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    FieldLevelEncryptionProfile m_fieldLevelEncryptionProfile;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
