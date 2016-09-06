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
#include <aws/route53/Route53Request.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>To retrieve a count of all your health checks, send a <code>GET</code>
   * request to the <code>/2013-04-01/healthcheckcount</code> resource.</p>
   */
  class AWS_ROUTE53_API GetHealthCheckCountRequest : public Route53Request
  {
  public:
    GetHealthCheckCountRequest();
    Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace Route53
} // namespace Aws
