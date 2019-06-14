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
  class AWS_CLOUDFRONT_API CreateFieldLevelEncryptionProfile2019_03_26Result
  {
  public:
    CreateFieldLevelEncryptionProfile2019_03_26Result();
    CreateFieldLevelEncryptionProfile2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateFieldLevelEncryptionProfile2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returned when you create a new field-level encryption profile.</p>
     */
    inline const FieldLevelEncryptionProfile& GetFieldLevelEncryptionProfile() const{ return m_fieldLevelEncryptionProfile; }

    /**
     * <p>Returned when you create a new field-level encryption profile.</p>
     */
    inline void SetFieldLevelEncryptionProfile(const FieldLevelEncryptionProfile& value) { m_fieldLevelEncryptionProfile = value; }

    /**
     * <p>Returned when you create a new field-level encryption profile.</p>
     */
    inline void SetFieldLevelEncryptionProfile(FieldLevelEncryptionProfile&& value) { m_fieldLevelEncryptionProfile = std::move(value); }

    /**
     * <p>Returned when you create a new field-level encryption profile.</p>
     */
    inline CreateFieldLevelEncryptionProfile2019_03_26Result& WithFieldLevelEncryptionProfile(const FieldLevelEncryptionProfile& value) { SetFieldLevelEncryptionProfile(value); return *this;}

    /**
     * <p>Returned when you create a new field-level encryption profile.</p>
     */
    inline CreateFieldLevelEncryptionProfile2019_03_26Result& WithFieldLevelEncryptionProfile(FieldLevelEncryptionProfile&& value) { SetFieldLevelEncryptionProfile(std::move(value)); return *this;}


    /**
     * <p>The fully qualified URI of the new profile resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/field-level-encryption-profile/EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fully qualified URI of the new profile resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/field-level-encryption-profile/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The fully qualified URI of the new profile resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/field-level-encryption-profile/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The fully qualified URI of the new profile resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/field-level-encryption-profile/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The fully qualified URI of the new profile resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/field-level-encryption-profile/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreateFieldLevelEncryptionProfile2019_03_26Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fully qualified URI of the new profile resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/field-level-encryption-profile/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreateFieldLevelEncryptionProfile2019_03_26Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fully qualified URI of the new profile resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/field-level-encryption-profile/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreateFieldLevelEncryptionProfile2019_03_26Result& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The current version of the field level encryption profile. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the field level encryption profile. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the field level encryption profile. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the field level encryption profile. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the field level encryption profile. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline CreateFieldLevelEncryptionProfile2019_03_26Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the field level encryption profile. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline CreateFieldLevelEncryptionProfile2019_03_26Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the field level encryption profile. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline CreateFieldLevelEncryptionProfile2019_03_26Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    FieldLevelEncryptionProfile m_fieldLevelEncryptionProfile;

    Aws::String m_location;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
