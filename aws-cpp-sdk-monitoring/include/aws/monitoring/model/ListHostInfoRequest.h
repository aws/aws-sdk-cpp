/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /*
  */
  class AWS_CLOUDWATCH_API ListHostInfoRequest : public CloudWatchRequest
  {
  public:
    ListHostInfoRequest();
    Aws::String SerializePayload() const override;


  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
