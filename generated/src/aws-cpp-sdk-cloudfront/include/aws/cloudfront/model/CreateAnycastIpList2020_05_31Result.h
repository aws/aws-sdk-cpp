/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/AnycastIpList.h>
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
  class CreateAnycastIpList2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateAnycastIpList2020_05_31Result();
    AWS_CLOUDFRONT_API CreateAnycastIpList2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateAnycastIpList2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A response structure that includes the version identifier (ETag) and the
     * created <a>AnycastIpList</a> structure.</p>
     */
    inline const AnycastIpList& GetAnycastIpList() const{ return m_anycastIpList; }
    inline void SetAnycastIpList(const AnycastIpList& value) { m_anycastIpList = value; }
    inline void SetAnycastIpList(AnycastIpList&& value) { m_anycastIpList = std::move(value); }
    inline CreateAnycastIpList2020_05_31Result& WithAnycastIpList(const AnycastIpList& value) { SetAnycastIpList(value); return *this;}
    inline CreateAnycastIpList2020_05_31Result& WithAnycastIpList(AnycastIpList&& value) { SetAnycastIpList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier for the current version of the Anycast static IP
     * list.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline CreateAnycastIpList2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline CreateAnycastIpList2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline CreateAnycastIpList2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAnycastIpList2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAnycastIpList2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAnycastIpList2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AnycastIpList m_anycastIpList;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
