/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>

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
  class DeleteMonitoringSubscription2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API DeleteMonitoringSubscription2020_05_31Result();
    AWS_CLOUDFRONT_API DeleteMonitoringSubscription2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API DeleteMonitoringSubscription2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
