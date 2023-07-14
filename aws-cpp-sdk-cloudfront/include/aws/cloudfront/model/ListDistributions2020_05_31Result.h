﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionList.h>
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
  /**
   * <p>The returned result of the corresponding request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListDistributions2020_05_31Result
  {
  public:
    ListDistributions2020_05_31Result();
    ListDistributions2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListDistributions2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The <code>DistributionList</code> type. </p>
     */
    inline const DistributionList& GetDistributionList() const{ return m_distributionList; }

    /**
     * <p>The <code>DistributionList</code> type. </p>
     */
    inline void SetDistributionList(const DistributionList& value) { m_distributionList = value; }

    /**
     * <p>The <code>DistributionList</code> type. </p>
     */
    inline void SetDistributionList(DistributionList&& value) { m_distributionList = std::move(value); }

    /**
     * <p>The <code>DistributionList</code> type. </p>
     */
    inline ListDistributions2020_05_31Result& WithDistributionList(const DistributionList& value) { SetDistributionList(value); return *this;}

    /**
     * <p>The <code>DistributionList</code> type. </p>
     */
    inline ListDistributions2020_05_31Result& WithDistributionList(DistributionList&& value) { SetDistributionList(std::move(value)); return *this;}

  private:

    DistributionList m_distributionList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
