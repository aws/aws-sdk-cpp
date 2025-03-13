/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>An individual VPC security group and its status.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/SecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class SecurityGroupMembership
  {
  public:
    AWS_DAX_API SecurityGroupMembership() = default;
    AWS_DAX_API SecurityGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API SecurityGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for this security group.</p>
     */
    inline const Aws::String& GetSecurityGroupIdentifier() const { return m_securityGroupIdentifier; }
    inline bool SecurityGroupIdentifierHasBeenSet() const { return m_securityGroupIdentifierHasBeenSet; }
    template<typename SecurityGroupIdentifierT = Aws::String>
    void SetSecurityGroupIdentifier(SecurityGroupIdentifierT&& value) { m_securityGroupIdentifierHasBeenSet = true; m_securityGroupIdentifier = std::forward<SecurityGroupIdentifierT>(value); }
    template<typename SecurityGroupIdentifierT = Aws::String>
    SecurityGroupMembership& WithSecurityGroupIdentifier(SecurityGroupIdentifierT&& value) { SetSecurityGroupIdentifier(std::forward<SecurityGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this security group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SecurityGroupMembership& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityGroupIdentifier;
    bool m_securityGroupIdentifierHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
