/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginAccessControlList.h>
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
  class ListOriginAccessControls2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListOriginAccessControls2020_05_31Result();
    AWS_CLOUDFRONT_API ListOriginAccessControls2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListOriginAccessControls2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of origin access controls.</p>
     */
    inline const OriginAccessControlList& GetOriginAccessControlList() const{ return m_originAccessControlList; }

    /**
     * <p>A list of origin access controls.</p>
     */
    inline void SetOriginAccessControlList(const OriginAccessControlList& value) { m_originAccessControlList = value; }

    /**
     * <p>A list of origin access controls.</p>
     */
    inline void SetOriginAccessControlList(OriginAccessControlList&& value) { m_originAccessControlList = std::move(value); }

    /**
     * <p>A list of origin access controls.</p>
     */
    inline ListOriginAccessControls2020_05_31Result& WithOriginAccessControlList(const OriginAccessControlList& value) { SetOriginAccessControlList(value); return *this;}

    /**
     * <p>A list of origin access controls.</p>
     */
    inline ListOriginAccessControls2020_05_31Result& WithOriginAccessControlList(OriginAccessControlList&& value) { SetOriginAccessControlList(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOriginAccessControls2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOriginAccessControls2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOriginAccessControls2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OriginAccessControlList m_originAccessControlList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
