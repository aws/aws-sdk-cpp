/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/AnycastIpListCollection.h>
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
  class ListAnycastIpLists2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListAnycastIpLists2020_05_31Result();
    AWS_CLOUDFRONT_API ListAnycastIpLists2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListAnycastIpLists2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Root level tag for the <code>AnycastIpLists</code> parameters.</p>
     */
    inline const AnycastIpListCollection& GetAnycastIpLists() const{ return m_anycastIpLists; }
    inline void SetAnycastIpLists(const AnycastIpListCollection& value) { m_anycastIpLists = value; }
    inline void SetAnycastIpLists(AnycastIpListCollection&& value) { m_anycastIpLists = std::move(value); }
    inline ListAnycastIpLists2020_05_31Result& WithAnycastIpLists(const AnycastIpListCollection& value) { SetAnycastIpLists(value); return *this;}
    inline ListAnycastIpLists2020_05_31Result& WithAnycastIpLists(AnycastIpListCollection&& value) { SetAnycastIpLists(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAnycastIpLists2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAnycastIpLists2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAnycastIpLists2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AnycastIpListCollection m_anycastIpLists;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
