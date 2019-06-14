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
  class AWS_CLOUDFRONT_API GetFieldLevelEncryptionConfig2019_03_26Result
  {
  public:
    GetFieldLevelEncryptionConfig2019_03_26Result();
    GetFieldLevelEncryptionConfig2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetFieldLevelEncryptionConfig2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline GetFieldLevelEncryptionConfig2019_03_26Result& WithFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { SetFieldLevelEncryptionConfig(value); return *this;}

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline GetFieldLevelEncryptionConfig2019_03_26Result& WithFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { SetFieldLevelEncryptionConfig(std::move(value)); return *this;}


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
    inline GetFieldLevelEncryptionConfig2019_03_26Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetFieldLevelEncryptionConfig2019_03_26Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetFieldLevelEncryptionConfig2019_03_26Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    FieldLevelEncryptionConfig m_fieldLevelEncryptionConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
