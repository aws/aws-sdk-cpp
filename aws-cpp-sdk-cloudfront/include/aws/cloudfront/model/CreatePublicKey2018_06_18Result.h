﻿/*
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
  class AWS_CLOUDFRONT_API CreatePublicKey2018_06_18Result
  {
  public:
    CreatePublicKey2018_06_18Result();
    CreatePublicKey2018_06_18Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreatePublicKey2018_06_18Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returned when you add a public key.</p>
     */
    inline const PublicKey& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>Returned when you add a public key.</p>
     */
    inline void SetPublicKey(const PublicKey& value) { m_publicKey = value; }

    /**
     * <p>Returned when you add a public key.</p>
     */
    inline void SetPublicKey(PublicKey&& value) { m_publicKey = std::move(value); }

    /**
     * <p>Returned when you add a public key.</p>
     */
    inline CreatePublicKey2018_06_18Result& WithPublicKey(const PublicKey& value) { SetPublicKey(value); return *this;}

    /**
     * <p>Returned when you add a public key.</p>
     */
    inline CreatePublicKey2018_06_18Result& WithPublicKey(PublicKey&& value) { SetPublicKey(std::move(value)); return *this;}


    /**
     * <p>The fully qualified URI of the new public key resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/cloudfront-public-key/EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fully qualified URI of the new public key resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/cloudfront-public-key/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The fully qualified URI of the new public key resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/cloudfront-public-key/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The fully qualified URI of the new public key resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/cloudfront-public-key/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The fully qualified URI of the new public key resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/cloudfront-public-key/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreatePublicKey2018_06_18Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fully qualified URI of the new public key resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/cloudfront-public-key/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreatePublicKey2018_06_18Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fully qualified URI of the new public key resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/cloudfront-public-key/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreatePublicKey2018_06_18Result& WithLocation(const char* value) { SetLocation(value); return *this;}


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
    inline CreatePublicKey2018_06_18Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline CreatePublicKey2018_06_18Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the public key. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline CreatePublicKey2018_06_18Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    PublicKey m_publicKey;

    Aws::String m_location;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
