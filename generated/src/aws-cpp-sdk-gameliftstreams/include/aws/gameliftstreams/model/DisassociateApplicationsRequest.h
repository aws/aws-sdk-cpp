/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class DisassociateApplicationsRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API DisassociateApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateApplications"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A set of applications that you want to disassociate from the stream
     * group.</p> <p>This value is a set of either <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Names (ARN)</a> or IDs that uniquely identify application resources.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIdentifiers() const{ return m_applicationIdentifiers; }
    inline bool ApplicationIdentifiersHasBeenSet() const { return m_applicationIdentifiersHasBeenSet; }
    inline void SetApplicationIdentifiers(const Aws::Vector<Aws::String>& value) { m_applicationIdentifiersHasBeenSet = true; m_applicationIdentifiers = value; }
    inline void SetApplicationIdentifiers(Aws::Vector<Aws::String>&& value) { m_applicationIdentifiersHasBeenSet = true; m_applicationIdentifiers = std::move(value); }
    inline DisassociateApplicationsRequest& WithApplicationIdentifiers(const Aws::Vector<Aws::String>& value) { SetApplicationIdentifiers(value); return *this;}
    inline DisassociateApplicationsRequest& WithApplicationIdentifiers(Aws::Vector<Aws::String>&& value) { SetApplicationIdentifiers(std::move(value)); return *this;}
    inline DisassociateApplicationsRequest& AddApplicationIdentifiers(const Aws::String& value) { m_applicationIdentifiersHasBeenSet = true; m_applicationIdentifiers.push_back(value); return *this; }
    inline DisassociateApplicationsRequest& AddApplicationIdentifiers(Aws::String&& value) { m_applicationIdentifiersHasBeenSet = true; m_applicationIdentifiers.push_back(std::move(value)); return *this; }
    inline DisassociateApplicationsRequest& AddApplicationIdentifiers(const char* value) { m_applicationIdentifiersHasBeenSet = true; m_applicationIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A stream group to disassociate these applications from.</p> <p>This value is
     * an <a
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
    inline DisassociateApplicationsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline DisassociateApplicationsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline DisassociateApplicationsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationIdentifiers;
    bool m_applicationIdentifiersHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
