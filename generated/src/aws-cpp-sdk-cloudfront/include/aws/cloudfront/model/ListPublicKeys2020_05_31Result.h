/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/PublicKeyList.h>
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
  class ListPublicKeys2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListPublicKeys2020_05_31Result();
    AWS_CLOUDFRONT_API ListPublicKeys2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListPublicKeys2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline const PublicKeyList& GetPublicKeyList() const{ return m_publicKeyList; }

    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline void SetPublicKeyList(const PublicKeyList& value) { m_publicKeyList = value; }

    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline void SetPublicKeyList(PublicKeyList&& value) { m_publicKeyList = std::move(value); }

    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline ListPublicKeys2020_05_31Result& WithPublicKeyList(const PublicKeyList& value) { SetPublicKeyList(value); return *this;}

    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline ListPublicKeys2020_05_31Result& WithPublicKeyList(PublicKeyList&& value) { SetPublicKeyList(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPublicKeys2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPublicKeys2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPublicKeys2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PublicKeyList m_publicKeyList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
