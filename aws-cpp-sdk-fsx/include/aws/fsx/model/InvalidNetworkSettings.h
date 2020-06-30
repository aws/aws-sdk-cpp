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
   * <p>One or more network settings specified in the request are invalid.
   * <code>InvalidVpcId</code> means that the ID passed for the virtual private cloud
   * (VPC) is invalid. <code>InvalidSubnetIds</code> returns the list of IDs for
   * subnets that are either invalid or not part of the VPC specified.
   * <code>InvalidSecurityGroupIds</code> returns the list of IDs for security groups
   * that are either invalid or not part of the VPC specified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/InvalidNetworkSettings">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API InvalidNetworkSettings
  {
  public:
    InvalidNetworkSettings();
    InvalidNetworkSettings(Aws::Utils::Json::JsonView jsonValue);
    InvalidNetworkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidNetworkSettings& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidNetworkSettings& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidNetworkSettings& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetInvalidSubnetId() const{ return m_invalidSubnetId; }

    
    inline bool InvalidSubnetIdHasBeenSet() const { return m_invalidSubnetIdHasBeenSet; }

    
    inline void SetInvalidSubnetId(const Aws::String& value) { m_invalidSubnetIdHasBeenSet = true; m_invalidSubnetId = value; }

    
    inline void SetInvalidSubnetId(Aws::String&& value) { m_invalidSubnetIdHasBeenSet = true; m_invalidSubnetId = std::move(value); }

    
    inline void SetInvalidSubnetId(const char* value) { m_invalidSubnetIdHasBeenSet = true; m_invalidSubnetId.assign(value); }

    
    inline InvalidNetworkSettings& WithInvalidSubnetId(const Aws::String& value) { SetInvalidSubnetId(value); return *this;}

    
    inline InvalidNetworkSettings& WithInvalidSubnetId(Aws::String&& value) { SetInvalidSubnetId(std::move(value)); return *this;}

    
    inline InvalidNetworkSettings& WithInvalidSubnetId(const char* value) { SetInvalidSubnetId(value); return *this;}


    
    inline const Aws::String& GetInvalidSecurityGroupId() const{ return m_invalidSecurityGroupId; }

    
    inline bool InvalidSecurityGroupIdHasBeenSet() const { return m_invalidSecurityGroupIdHasBeenSet; }

    
    inline void SetInvalidSecurityGroupId(const Aws::String& value) { m_invalidSecurityGroupIdHasBeenSet = true; m_invalidSecurityGroupId = value; }

    
    inline void SetInvalidSecurityGroupId(Aws::String&& value) { m_invalidSecurityGroupIdHasBeenSet = true; m_invalidSecurityGroupId = std::move(value); }

    
    inline void SetInvalidSecurityGroupId(const char* value) { m_invalidSecurityGroupIdHasBeenSet = true; m_invalidSecurityGroupId.assign(value); }

    
    inline InvalidNetworkSettings& WithInvalidSecurityGroupId(const Aws::String& value) { SetInvalidSecurityGroupId(value); return *this;}

    
    inline InvalidNetworkSettings& WithInvalidSecurityGroupId(Aws::String&& value) { SetInvalidSecurityGroupId(std::move(value)); return *this;}

    
    inline InvalidNetworkSettings& WithInvalidSecurityGroupId(const char* value) { SetInvalidSecurityGroupId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_invalidSubnetId;
    bool m_invalidSubnetIdHasBeenSet;

    Aws::String m_invalidSecurityGroupId;
    bool m_invalidSecurityGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
