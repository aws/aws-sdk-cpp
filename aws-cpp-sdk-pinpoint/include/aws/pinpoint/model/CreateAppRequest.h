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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/CreateApplicationRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API CreateAppRequest : public PinpointRequest
  {
  public:
    CreateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApp"; }

    Aws::String SerializePayload() const override;


    
    inline const CreateApplicationRequest& GetCreateApplicationRequest() const{ return m_createApplicationRequest; }

    
    inline bool CreateApplicationRequestHasBeenSet() const { return m_createApplicationRequestHasBeenSet; }

    
    inline void SetCreateApplicationRequest(const CreateApplicationRequest& value) { m_createApplicationRequestHasBeenSet = true; m_createApplicationRequest = value; }

    
    inline void SetCreateApplicationRequest(CreateApplicationRequest&& value) { m_createApplicationRequestHasBeenSet = true; m_createApplicationRequest = std::move(value); }

    
    inline CreateAppRequest& WithCreateApplicationRequest(const CreateApplicationRequest& value) { SetCreateApplicationRequest(value); return *this;}

    
    inline CreateAppRequest& WithCreateApplicationRequest(CreateApplicationRequest&& value) { SetCreateApplicationRequest(std::move(value)); return *this;}

  private:

    CreateApplicationRequest m_createApplicationRequest;
    bool m_createApplicationRequestHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
