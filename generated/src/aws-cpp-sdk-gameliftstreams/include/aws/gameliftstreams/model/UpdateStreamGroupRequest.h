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
    AWS_GAMELIFTSTREAMS_API UpdateStreamGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStreamGroup"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
     * Example ID: <code>sg-1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateStreamGroupRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of one or more locations and the streaming capacity for each location.
     * </p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocationConfigurations() const { return m_locationConfigurations; }
    inline bool LocationConfigurationsHasBeenSet() const { return m_locationConfigurationsHasBeenSet; }
    template<typename LocationConfigurationsT = Aws::Vector<LocationConfiguration>>
    void SetLocationConfigurations(LocationConfigurationsT&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations = std::forward<LocationConfigurationsT>(value); }
    template<typename LocationConfigurationsT = Aws::Vector<LocationConfiguration>>
    UpdateStreamGroupRequest& WithLocationConfigurations(LocationConfigurationsT&& value) { SetLocationConfigurations(std::forward<LocationConfigurationsT>(value)); return *this;}
    template<typename LocationConfigurationsT = LocationConfiguration>
    UpdateStreamGroupRequest& AddLocationConfigurations(LocationConfigurationsT&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations.emplace_back(std::forward<LocationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the stream group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateStreamGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon GameLift Streams application that you
     * want to set as the default application in a stream group. The application that
     * you specify must be in <code>READY</code> status. The default application is
     * pre-cached on always-on compute resources, reducing stream startup times. Other
     * applications are automatically cached as needed.</p> <p>Note that this parameter
     * only sets the default application in a stream group. To associate a new
     * application to an existing stream group, you must use <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_AssociateApplications.html">AssociateApplications</a>.</p>
     * <p>When you switch default applications in a stream group, it can take up to a
     * few hours for the new default application to be pre-cached.</p> <p>This value is
     * an <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
     * Example ID: <code>a-9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetDefaultApplicationIdentifier() const { return m_defaultApplicationIdentifier; }
    inline bool DefaultApplicationIdentifierHasBeenSet() const { return m_defaultApplicationIdentifierHasBeenSet; }
    template<typename DefaultApplicationIdentifierT = Aws::String>
    void SetDefaultApplicationIdentifier(DefaultApplicationIdentifierT&& value) { m_defaultApplicationIdentifierHasBeenSet = true; m_defaultApplicationIdentifier = std::forward<DefaultApplicationIdentifierT>(value); }
    template<typename DefaultApplicationIdentifierT = Aws::String>
    UpdateStreamGroupRequest& WithDefaultApplicationIdentifier(DefaultApplicationIdentifierT&& value) { SetDefaultApplicationIdentifier(std::forward<DefaultApplicationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locationConfigurations;
    bool m_locationConfigurationsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultApplicationIdentifier;
    bool m_defaultApplicationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
