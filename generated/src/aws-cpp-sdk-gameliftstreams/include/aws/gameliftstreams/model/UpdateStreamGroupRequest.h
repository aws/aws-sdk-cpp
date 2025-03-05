/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/model/LocationConfiguration.h>
#include <utility>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class UpdateStreamGroupRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API UpdateStreamGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStreamGroup"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A descriptive label for the stream group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateStreamGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateStreamGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateStreamGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:streamgroup/1AB2C3De4</code>
     * or ID-<code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateStreamGroupRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateStreamGroupRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateStreamGroupRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of one or more locations and the streaming capacity for each location.
     * </p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocationConfigurations() const{ return m_locationConfigurations; }
    inline bool LocationConfigurationsHasBeenSet() const { return m_locationConfigurationsHasBeenSet; }
    inline void SetLocationConfigurations(const Aws::Vector<LocationConfiguration>& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations = value; }
    inline void SetLocationConfigurations(Aws::Vector<LocationConfiguration>&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations = std::move(value); }
    inline UpdateStreamGroupRequest& WithLocationConfigurations(const Aws::Vector<LocationConfiguration>& value) { SetLocationConfigurations(value); return *this;}
    inline UpdateStreamGroupRequest& WithLocationConfigurations(Aws::Vector<LocationConfiguration>&& value) { SetLocationConfigurations(std::move(value)); return *this;}
    inline UpdateStreamGroupRequest& AddLocationConfigurations(const LocationConfiguration& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations.push_back(value); return *this; }
    inline UpdateStreamGroupRequest& AddLocationConfigurations(LocationConfiguration&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locationConfigurations;
    bool m_locationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
