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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/PrincipalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllowedPrincipal">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AllowedPrincipal
  {
  public:
    AllowedPrincipal();
    AllowedPrincipal(const Aws::Utils::Xml::XmlNode& xmlNode);
    AllowedPrincipal& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of principal.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The type of principal.</p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The type of principal.</p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The type of principal.</p>
     */
    inline AllowedPrincipal& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The type of principal.</p>
     */
    inline AllowedPrincipal& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline AllowedPrincipal& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline AllowedPrincipal& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline AllowedPrincipal& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet;

    Aws::String m_principal;
    bool m_principalHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
