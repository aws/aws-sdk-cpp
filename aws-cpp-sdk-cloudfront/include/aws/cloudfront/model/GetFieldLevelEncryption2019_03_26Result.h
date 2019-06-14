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
  class AWS_CLOUDFRONT_API GetFieldLevelEncryption2019_03_26Result
  {
  public:
    GetFieldLevelEncryption2019_03_26Result();
    GetFieldLevelEncryption2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetFieldLevelEncryption2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline const FieldLevelEncryption& GetFieldLevelEncryption() const{ return m_fieldLevelEncryption; }

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline void SetFieldLevelEncryption(const FieldLevelEncryption& value) { m_fieldLevelEncryption = value; }

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline void SetFieldLevelEncryption(FieldLevelEncryption&& value) { m_fieldLevelEncryption = std::move(value); }

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline GetFieldLevelEncryption2019_03_26Result& WithFieldLevelEncryption(const FieldLevelEncryption& value) { SetFieldLevelEncryption(value); return *this;}

    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline GetFieldLevelEncryption2019_03_26Result& WithFieldLevelEncryption(FieldLevelEncryption&& value) { SetFieldLevelEncryption(std::move(value)); return *this;}


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
    inline GetFieldLevelEncryption2019_03_26Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetFieldLevelEncryption2019_03_26Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetFieldLevelEncryption2019_03_26Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    FieldLevelEncryption m_fieldLevelEncryption;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
