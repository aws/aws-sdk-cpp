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
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentityList.h>

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
   * The returned result of the corresponding request.
   */
  class AWS_CLOUDFRONT_API ListCloudFrontOriginAccessIdentities2016_01_28Result
  {
  public:
    ListCloudFrontOriginAccessIdentities2016_01_28Result();
    ListCloudFrontOriginAccessIdentities2016_01_28Result(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListCloudFrontOriginAccessIdentities2016_01_28Result& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * The CloudFrontOriginAccessIdentityList type.
     */
    inline const CloudFrontOriginAccessIdentityList& GetCloudFrontOriginAccessIdentityList() const{ return m_cloudFrontOriginAccessIdentityList; }

    /**
     * The CloudFrontOriginAccessIdentityList type.
     */
    inline void SetCloudFrontOriginAccessIdentityList(const CloudFrontOriginAccessIdentityList& value) { m_cloudFrontOriginAccessIdentityList = value; }

    /**
     * The CloudFrontOriginAccessIdentityList type.
     */
    inline void SetCloudFrontOriginAccessIdentityList(CloudFrontOriginAccessIdentityList&& value) { m_cloudFrontOriginAccessIdentityList = value; }

    /**
     * The CloudFrontOriginAccessIdentityList type.
     */
    inline ListCloudFrontOriginAccessIdentities2016_01_28Result& WithCloudFrontOriginAccessIdentityList(const CloudFrontOriginAccessIdentityList& value) { SetCloudFrontOriginAccessIdentityList(value); return *this;}

    /**
     * The CloudFrontOriginAccessIdentityList type.
     */
    inline ListCloudFrontOriginAccessIdentities2016_01_28Result& WithCloudFrontOriginAccessIdentityList(CloudFrontOriginAccessIdentityList&& value) { SetCloudFrontOriginAccessIdentityList(value); return *this;}

  private:
    CloudFrontOriginAccessIdentityList m_cloudFrontOriginAccessIdentityList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws