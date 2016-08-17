/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * The response to a request to list the distributions that are associated with a
   * specified AWS WAF web ACL.
   */
  class AWS_CLOUDFRONT_API ListDistributionsByWebACLId2016_01_28Result
  {
  public:
    ListDistributionsByWebACLId2016_01_28Result();
    ListDistributionsByWebACLId2016_01_28Result(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListDistributionsByWebACLId2016_01_28Result& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * The DistributionList type.
     */
    inline const DistributionList& GetDistributionList() const{ return m_distributionList; }

    /**
     * The DistributionList type.
     */
    inline void SetDistributionList(const DistributionList& value) { m_distributionList = value; }

    /**
     * The DistributionList type.
     */
    inline void SetDistributionList(DistributionList&& value) { m_distributionList = value; }

    /**
     * The DistributionList type.
     */
    inline ListDistributionsByWebACLId2016_01_28Result& WithDistributionList(const DistributionList& value) { SetDistributionList(value); return *this;}

    /**
     * The DistributionList type.
     */
    inline ListDistributionsByWebACLId2016_01_28Result& WithDistributionList(DistributionList&& value) { SetDistributionList(value); return *this;}

  private:
    DistributionList m_distributionList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws