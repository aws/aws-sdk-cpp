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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DescribeEndpoint operation.</p>
   */
  class AWS_IOT_API DescribeEndpointRequest : public IoTRequest
  {
  public:
    DescribeEndpointRequest();
    Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace IoT
} // namespace Aws
