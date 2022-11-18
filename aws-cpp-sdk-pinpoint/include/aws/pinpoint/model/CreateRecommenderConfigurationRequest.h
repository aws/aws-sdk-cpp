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
  class AWS_PINPOINT_API CreateRecommenderConfigurationRequest : public PinpointRequest
  {
  public:
    CreateRecommenderConfigurationRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<CreateRecommenderConfigurationRequest> Clone() const
    {
      return Aws::MakeUnique<CreateRecommenderConfigurationRequest>(GetServiceRequestName(), *this);
    }

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
    bool m_createRecommenderConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
