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
#include <aws/pinpoint/model/CreateRecommenderConfiguration.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API CreateRecommenderConfigurationRequest : public PinpointRequest
  {
  public:
    CreateRecommenderConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecommenderConfiguration"; }

    Aws::String SerializePayload() const override;


    
    inline const CreateRecommenderConfiguration& GetCreateRecommenderConfiguration() const{ return m_createRecommenderConfiguration; }

    
    inline bool CreateRecommenderConfigurationHasBeenSet() const { return m_createRecommenderConfigurationHasBeenSet; }

    
    inline void SetCreateRecommenderConfiguration(const CreateRecommenderConfiguration& value) { m_createRecommenderConfigurationHasBeenSet = true; m_createRecommenderConfiguration = value; }

    
    inline void SetCreateRecommenderConfiguration(CreateRecommenderConfiguration&& value) { m_createRecommenderConfigurationHasBeenSet = true; m_createRecommenderConfiguration = std::move(value); }

    
    inline CreateRecommenderConfigurationRequest& WithCreateRecommenderConfiguration(const CreateRecommenderConfiguration& value) { SetCreateRecommenderConfiguration(value); return *this;}

    
    inline CreateRecommenderConfigurationRequest& WithCreateRecommenderConfiguration(CreateRecommenderConfiguration&& value) { SetCreateRecommenderConfiguration(std::move(value)); return *this;}

  private:

    CreateRecommenderConfiguration m_createRecommenderConfiguration;
    bool m_createRecommenderConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
