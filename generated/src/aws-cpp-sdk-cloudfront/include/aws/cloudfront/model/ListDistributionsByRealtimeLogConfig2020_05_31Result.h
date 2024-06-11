﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionList.h>
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
  class ListDistributionsByRealtimeLogConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListDistributionsByRealtimeLogConfig2020_05_31Result();
    AWS_CLOUDFRONT_API ListDistributionsByRealtimeLogConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListDistributionsByRealtimeLogConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DistributionList& GetDistributionList() const{ return m_distributionList; }
    inline void SetDistributionList(const DistributionList& value) { m_distributionList = value; }
    inline void SetDistributionList(DistributionList&& value) { m_distributionList = std::move(value); }
    inline ListDistributionsByRealtimeLogConfig2020_05_31Result& WithDistributionList(const DistributionList& value) { SetDistributionList(value); return *this;}
    inline ListDistributionsByRealtimeLogConfig2020_05_31Result& WithDistributionList(DistributionList&& value) { SetDistributionList(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDistributionsByRealtimeLogConfig2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDistributionsByRealtimeLogConfig2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDistributionsByRealtimeLogConfig2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DistributionList m_distributionList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
