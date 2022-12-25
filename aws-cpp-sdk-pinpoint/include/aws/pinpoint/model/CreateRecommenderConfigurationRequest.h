/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateRecommenderConfigurationRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API CreateRecommenderConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecommenderConfiguration"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    
    inline const CreateRecommenderConfiguration& GetCreateRecommenderConfiguration() const{ return m_createRecommenderConfiguration; }

    
    inline bool CreateRecommenderConfigurationHasBeenSet() const { return m_createRecommenderConfigurationHasBeenSet; }

    
    inline void SetCreateRecommenderConfiguration(const CreateRecommenderConfiguration& value) { m_createRecommenderConfigurationHasBeenSet = true; m_createRecommenderConfiguration = value; }

    
    inline void SetCreateRecommenderConfiguration(CreateRecommenderConfiguration&& value) { m_createRecommenderConfigurationHasBeenSet = true; m_createRecommenderConfiguration = std::move(value); }

    
    inline CreateRecommenderConfigurationRequest& WithCreateRecommenderConfiguration(const CreateRecommenderConfiguration& value) { SetCreateRecommenderConfiguration(value); return *this;}

    
    inline CreateRecommenderConfigurationRequest& WithCreateRecommenderConfiguration(CreateRecommenderConfiguration&& value) { SetCreateRecommenderConfiguration(std::move(value)); return *this;}

  private:

    CreateRecommenderConfiguration m_createRecommenderConfiguration;
    bool m_createRecommenderConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
