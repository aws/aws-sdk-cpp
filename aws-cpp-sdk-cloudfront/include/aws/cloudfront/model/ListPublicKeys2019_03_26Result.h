/*
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
#include <aws/cloudfront/model/PublicKeyList.h>
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
  class AWS_CLOUDFRONT_API ListPublicKeys2019_03_26Result
  {
  public:
    ListPublicKeys2019_03_26Result();
    ListPublicKeys2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListPublicKeys2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline const PublicKeyList& GetPublicKeyList() const{ return m_publicKeyList; }

    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline void SetPublicKeyList(const PublicKeyList& value) { m_publicKeyList = value; }

    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline void SetPublicKeyList(PublicKeyList&& value) { m_publicKeyList = std::move(value); }

    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline ListPublicKeys2019_03_26Result& WithPublicKeyList(const PublicKeyList& value) { SetPublicKeyList(value); return *this;}

    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline ListPublicKeys2019_03_26Result& WithPublicKeyList(PublicKeyList&& value) { SetPublicKeyList(std::move(value)); return *this;}

  private:

    PublicKeyList m_publicKeyList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
