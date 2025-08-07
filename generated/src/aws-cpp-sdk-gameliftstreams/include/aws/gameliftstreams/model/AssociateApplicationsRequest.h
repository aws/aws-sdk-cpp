/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class AssociateApplicationsRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API AssociateApplicationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateApplications"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A stream group to associate to the applications.</p> <p>This value is an <a
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
    AssociateApplicationsRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of applications to associate with the stream group.</p> <p>This value
     * is a set of either <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Names (ARN)</a> or IDs that uniquely identify application resources.
     * Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
     * Example ID: <code>a-9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIdentifiers() const { return m_applicationIdentifiers; }
    inline bool ApplicationIdentifiersHasBeenSet() const { return m_applicationIdentifiersHasBeenSet; }
    template<typename ApplicationIdentifiersT = Aws::Vector<Aws::String>>
    void SetApplicationIdentifiers(ApplicationIdentifiersT&& value) { m_applicationIdentifiersHasBeenSet = true; m_applicationIdentifiers = std::forward<ApplicationIdentifiersT>(value); }
    template<typename ApplicationIdentifiersT = Aws::Vector<Aws::String>>
    AssociateApplicationsRequest& WithApplicationIdentifiers(ApplicationIdentifiersT&& value) { SetApplicationIdentifiers(std::forward<ApplicationIdentifiersT>(value)); return *this;}
    template<typename ApplicationIdentifiersT = Aws::String>
    AssociateApplicationsRequest& AddApplicationIdentifiers(ApplicationIdentifiersT&& value) { m_applicationIdentifiersHasBeenSet = true; m_applicationIdentifiers.emplace_back(std::forward<ApplicationIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationIdentifiers;
    bool m_applicationIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
