﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionIdList.h>
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
  class AWS_CLOUDFRONT_API ListDistributionsByKeyGroup2020_05_31Result
  {
  public:
    ListDistributionsByKeyGroup2020_05_31Result();
    ListDistributionsByKeyGroup2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListDistributionsByKeyGroup2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DistributionIdList& GetDistributionIdList() const{ return m_distributionIdList; }

    
    inline void SetDistributionIdList(const DistributionIdList& value) { m_distributionIdList = value; }

    
    inline void SetDistributionIdList(DistributionIdList&& value) { m_distributionIdList = std::move(value); }

    
    inline ListDistributionsByKeyGroup2020_05_31Result& WithDistributionIdList(const DistributionIdList& value) { SetDistributionIdList(value); return *this;}

    
    inline ListDistributionsByKeyGroup2020_05_31Result& WithDistributionIdList(DistributionIdList&& value) { SetDistributionIdList(std::move(value)); return *this;}

  private:

    DistributionIdList m_distributionIdList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
