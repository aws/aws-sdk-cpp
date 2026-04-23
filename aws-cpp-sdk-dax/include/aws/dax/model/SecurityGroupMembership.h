/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DAX_API SecurityGroupMembership
  {
  public:
    SecurityGroupMembership();
    SecurityGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    SecurityGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID for this security group.</p>
     */
    inline const Aws::String& GetSecurityGroupIdentifier() const{ return m_securityGroupIdentifier; }

    /**
     * <p>The unique ID for this security group.</p>
     */
    inline bool SecurityGroupIdentifierHasBeenSet() const { return m_securityGroupIdentifierHasBeenSet; }

    /**
     * <p>The unique ID for this security group.</p>
     */
    inline void SetSecurityGroupIdentifier(const Aws::String& value) { m_securityGroupIdentifierHasBeenSet = true; m_securityGroupIdentifier = value; }

    /**
     * <p>The unique ID for this security group.</p>
     */
    inline void SetSecurityGroupIdentifier(Aws::String&& value) { m_securityGroupIdentifierHasBeenSet = true; m_securityGroupIdentifier = std::move(value); }

    /**
     * <p>The unique ID for this security group.</p>
     */
    inline void SetSecurityGroupIdentifier(const char* value) { m_securityGroupIdentifierHasBeenSet = true; m_securityGroupIdentifier.assign(value); }

    /**
     * <p>The unique ID for this security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupIdentifier(const Aws::String& value) { SetSecurityGroupIdentifier(value); return *this;}

    /**
     * <p>The unique ID for this security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupIdentifier(Aws::String&& value) { SetSecurityGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID for this security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupIdentifier(const char* value) { SetSecurityGroupIdentifier(value); return *this;}


    /**
     * <p>The status of this security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this security group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this security group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this security group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this security group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of this security group.</p>
     */
    inline SecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this security group.</p>
     */
    inline SecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of this security group.</p>
     */
    inline SecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_securityGroupIdentifier;
    bool m_securityGroupIdentifierHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
