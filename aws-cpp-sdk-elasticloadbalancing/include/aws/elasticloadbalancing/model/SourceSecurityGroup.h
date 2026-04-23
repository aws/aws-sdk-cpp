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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a source security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SourceSecurityGroup">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API SourceSecurityGroup
  {
  public:
    SourceSecurityGroup();
    SourceSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    SourceSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The owner of the security group.</p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }

    /**
     * <p>The owner of the security group.</p>
     */
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }

    /**
     * <p>The owner of the security group.</p>
     */
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = value; }

    /**
     * <p>The owner of the security group.</p>
     */
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::move(value); }

    /**
     * <p>The owner of the security group.</p>
     */
    inline void SetOwnerAlias(const char* value) { m_ownerAliasHasBeenSet = true; m_ownerAlias.assign(value); }

    /**
     * <p>The owner of the security group.</p>
     */
    inline SourceSecurityGroup& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}

    /**
     * <p>The owner of the security group.</p>
     */
    inline SourceSecurityGroup& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}

    /**
     * <p>The owner of the security group.</p>
     */
    inline SourceSecurityGroup& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}


    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the security group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the security group.</p>
     */
    inline SourceSecurityGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline SourceSecurityGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline SourceSecurityGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}

  private:

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
