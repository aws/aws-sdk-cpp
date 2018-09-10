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
   * <p>The response to a request to list the distributions that are associated with
   * a specified AWS WAF web ACL. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListDistributionsByWebACLIdResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListDistributionsByWebACLId2018_06_18Result
  {
  public:
    ListDistributionsByWebACLId2018_06_18Result();
    ListDistributionsByWebACLId2018_06_18Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListDistributionsByWebACLId2018_06_18Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline ListDistributionsByWebACLId2018_06_18Result& WithDistributionList(const DistributionList& value) { SetDistributionList(value); return *this;}

    /**
     * <p>The <code>DistributionList</code> type. </p>
     */
    inline ListDistributionsByWebACLId2018_06_18Result& WithDistributionList(DistributionList&& value) { SetDistributionList(std::move(value)); return *this;}

  private:

    DistributionList m_distributionList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
