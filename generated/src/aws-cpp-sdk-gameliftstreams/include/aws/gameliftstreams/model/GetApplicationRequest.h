﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
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
  class GetApplicationRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API GetApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApplication"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetApplicationRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
