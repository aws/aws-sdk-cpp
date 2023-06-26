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
    AWS_FSX_API InvalidNetworkSettings();
    AWS_FSX_API InvalidNetworkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API InvalidNetworkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline InvalidNetworkSettings& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline InvalidNetworkSettings& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Error message explaining what's wrong with network settings.</p>
     */
    inline InvalidNetworkSettings& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline const Aws::String& GetInvalidSubnetId() const{ return m_invalidSubnetId; }

    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline bool InvalidSubnetIdHasBeenSet() const { return m_invalidSubnetIdHasBeenSet; }

    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidSubnetId(const Aws::String& value) { m_invalidSubnetIdHasBeenSet = true; m_invalidSubnetId = value; }

    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidSubnetId(Aws::String&& value) { m_invalidSubnetIdHasBeenSet = true; m_invalidSubnetId = std::move(value); }

    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidSubnetId(const char* value) { m_invalidSubnetIdHasBeenSet = true; m_invalidSubnetId.assign(value); }

    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidSubnetId(const Aws::String& value) { SetInvalidSubnetId(value); return *this;}

    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidSubnetId(Aws::String&& value) { SetInvalidSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID that is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidSubnetId(const char* value) { SetInvalidSubnetId(value); return *this;}


    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline const Aws::String& GetInvalidSecurityGroupId() const{ return m_invalidSecurityGroupId; }

    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline bool InvalidSecurityGroupIdHasBeenSet() const { return m_invalidSecurityGroupIdHasBeenSet; }

    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidSecurityGroupId(const Aws::String& value) { m_invalidSecurityGroupIdHasBeenSet = true; m_invalidSecurityGroupId = value; }

    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidSecurityGroupId(Aws::String&& value) { m_invalidSecurityGroupIdHasBeenSet = true; m_invalidSecurityGroupId = std::move(value); }

    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidSecurityGroupId(const char* value) { m_invalidSecurityGroupIdHasBeenSet = true; m_invalidSecurityGroupId.assign(value); }

    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidSecurityGroupId(const Aws::String& value) { SetInvalidSecurityGroupId(value); return *this;}

    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidSecurityGroupId(Aws::String&& value) { SetInvalidSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The security group ID is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidSecurityGroupId(const char* value) { SetInvalidSecurityGroupId(value); return *this;}


    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline const Aws::String& GetInvalidRouteTableId() const{ return m_invalidRouteTableId; }

    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline bool InvalidRouteTableIdHasBeenSet() const { return m_invalidRouteTableIdHasBeenSet; }

    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidRouteTableId(const Aws::String& value) { m_invalidRouteTableIdHasBeenSet = true; m_invalidRouteTableId = value; }

    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidRouteTableId(Aws::String&& value) { m_invalidRouteTableIdHasBeenSet = true; m_invalidRouteTableId = std::move(value); }

    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline void SetInvalidRouteTableId(const char* value) { m_invalidRouteTableIdHasBeenSet = true; m_invalidRouteTableId.assign(value); }

    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidRouteTableId(const Aws::String& value) { SetInvalidRouteTableId(value); return *this;}

    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidRouteTableId(Aws::String&& value) { SetInvalidRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The route table ID is either invalid or not part of the VPC specified.</p>
     */
    inline InvalidNetworkSettings& WithInvalidRouteTableId(const char* value) { SetInvalidRouteTableId(value); return *this;}

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
