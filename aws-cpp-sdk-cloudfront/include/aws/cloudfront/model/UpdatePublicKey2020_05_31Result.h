/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdatePublicKey2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API UpdatePublicKey2020_05_31Result();
    AWS_CLOUDFRONT_API UpdatePublicKey2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API UpdatePublicKey2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The public key.</p>
     */
    inline const PublicKey& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key.</p>
     */
    inline void SetPublicKey(const PublicKey& value) { m_publicKey = value; }

    /**
     * <p>The public key.</p>
     */
    inline void SetPublicKey(PublicKey&& value) { m_publicKey = std::move(value); }

    /**
     * <p>The public key.</p>
     */
    inline UpdatePublicKey2020_05_31Result& WithPublicKey(const PublicKey& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key.</p>
     */
    inline UpdatePublicKey2020_05_31Result& WithPublicKey(PublicKey&& value) { SetPublicKey(std::move(value)); return *this;}


    /**
     * <p>The identifier of the current version of the public key.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The identifier of the current version of the public key.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The identifier of the current version of the public key.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The identifier of the current version of the public key.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The identifier of the current version of the public key.</p>
     */
    inline UpdatePublicKey2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The identifier of the current version of the public key.</p>
     */
    inline UpdatePublicKey2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The identifier of the current version of the public key.</p>
     */
    inline UpdatePublicKey2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    PublicKey m_publicKey;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
