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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HostedZone.h>

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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response to the
   * UpdateHostedZoneCommentRequest.</p>
   */
  class AWS_ROUTE53_API UpdateHostedZoneCommentResult
  {
  public:
    UpdateHostedZoneCommentResult();
    UpdateHostedZoneCommentResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateHostedZoneCommentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const HostedZone& GetHostedZone() const{ return m_hostedZone; }

    
    inline void SetHostedZone(const HostedZone& value) { m_hostedZone = value; }

    
    inline void SetHostedZone(HostedZone&& value) { m_hostedZone = value; }

    
    inline UpdateHostedZoneCommentResult& WithHostedZone(const HostedZone& value) { SetHostedZone(value); return *this;}

    
    inline UpdateHostedZoneCommentResult& WithHostedZone(HostedZone&& value) { SetHostedZone(value); return *this;}

  private:
    HostedZone m_hostedZone;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws