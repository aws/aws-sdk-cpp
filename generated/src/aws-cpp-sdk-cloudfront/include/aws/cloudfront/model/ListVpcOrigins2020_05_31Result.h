/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/VpcOriginList.h>
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
  class ListVpcOrigins2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListVpcOrigins2020_05_31Result();
    AWS_CLOUDFRONT_API ListVpcOrigins2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListVpcOrigins2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of VPC origins.</p>
     */
    inline const VpcOriginList& GetVpcOriginList() const{ return m_vpcOriginList; }
    inline void SetVpcOriginList(const VpcOriginList& value) { m_vpcOriginList = value; }
    inline void SetVpcOriginList(VpcOriginList&& value) { m_vpcOriginList = std::move(value); }
    inline ListVpcOrigins2020_05_31Result& WithVpcOriginList(const VpcOriginList& value) { SetVpcOriginList(value); return *this;}
    inline ListVpcOrigins2020_05_31Result& WithVpcOriginList(VpcOriginList&& value) { SetVpcOriginList(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVpcOrigins2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVpcOrigins2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVpcOrigins2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VpcOriginList m_vpcOriginList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
