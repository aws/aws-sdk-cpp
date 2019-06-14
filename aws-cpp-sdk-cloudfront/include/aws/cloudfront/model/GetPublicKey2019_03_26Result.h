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
#include <aws/cloudfront/model/PublicKey.h>
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
  class AWS_CLOUDFRONT_API GetPublicKey2019_03_26Result
  {
  public:
    GetPublicKey2019_03_26Result();
    GetPublicKey2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetPublicKey2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Return the public key.</p>
     */
    inline const PublicKey& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>Return the public key.</p>
     */
    inline void SetPublicKey(const PublicKey& value) { m_publicKey = value; }

    /**
     * <p>Return the public key.</p>
     */
    inline void SetPublicKey(PublicKey&& value) { m_publicKey = std::move(value); }

    /**
     * <p>Return the public key.</p>
     */
    inline GetPublicKey2019_03_26Result& WithPublicKey(const PublicKey& value) { SetPublicKey(value); return *this;}

    /**
     * <p>Return the public key.</p>
     */
    inline GetPublicKey2019_03_26Result& WithPublicKey(PublicKey&& value) { SetPublicKey(std::move(value)); return *this;}


    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetPublicKey2019_03_26Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetPublicKey2019_03_26Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetPublicKey2019_03_26Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    PublicKey m_publicKey;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
