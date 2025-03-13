/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>One or more network settings specified in the request are
   * invalid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/InvalidNetworkSettings">AWS
   * API Reference</a></p>
   */
  class InvalidNetworkSettings
  {
  public:
    AWS_FSX_API InvalidNetworkSettings() = default;
    AWS_FSX_API InvalidNetworkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API InvalidNetworkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidNetworkSettings& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline const Aws::String& GetInvalidSubnetId() const { return m_invalidSubnetId; }
    inline bool InvalidSubnetIdHasBeenSet() const { return m_invalidSubnetIdHasBeenSet; }
    template<typename InvalidSubnetIdT = Aws::String>
    void SetInvalidSubnetId(InvalidSubnetIdT&& value) { m_invalidSubnetIdHasBeenSet = true; m_invalidSubnetId = std::forward<InvalidSubnetIdT>(value); }
    template<typename InvalidSubnetIdT = Aws::String>
    InvalidNetworkSettings& WithInvalidSubnetId(InvalidSubnetIdT&& value) { SetInvalidSubnetId(std::forward<InvalidSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline const Aws::String& GetInvalidSecurityGroupId() const { return m_invalidSecurityGroupId; }
    inline bool InvalidSecurityGroupIdHasBeenSet() const { return m_invalidSecurityGroupIdHasBeenSet; }
    template<typename InvalidSecurityGroupIdT = Aws::String>
    void SetInvalidSecurityGroupId(InvalidSecurityGroupIdT&& value) { m_invalidSecurityGroupIdHasBeenSet = true; m_invalidSecurityGroupId = std::forward<InvalidSecurityGroupIdT>(value); }
    template<typename InvalidSecurityGroupIdT = Aws::String>
    InvalidNetworkSettings& WithInvalidSecurityGroupId(InvalidSecurityGroupIdT&& value) { SetInvalidSecurityGroupId(std::forward<InvalidSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline const Aws::String& GetInvalidRouteTableId() const { return m_invalidRouteTableId; }
    inline bool InvalidRouteTableIdHasBeenSet() const { return m_invalidRouteTableIdHasBeenSet; }
    template<typename InvalidRouteTableIdT = Aws::String>
    void SetInvalidRouteTableId(InvalidRouteTableIdT&& value) { m_invalidRouteTableIdHasBeenSet = true; m_invalidRouteTableId = std::forward<InvalidRouteTableIdT>(value); }
    template<typename InvalidRouteTableIdT = Aws::String>
    InvalidNetworkSettings& WithInvalidRouteTableId(InvalidRouteTableIdT&& value) { SetInvalidRouteTableId(std::forward<InvalidRouteTableIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_invalidSubnetId;
    bool m_invalidSubnetIdHasBeenSet = false;

    Aws::String m_invalidSecurityGroupId;
    bool m_invalidSecurityGroupIdHasBeenSet = false;

    Aws::String m_invalidRouteTableId;
    bool m_invalidRouteTableIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
