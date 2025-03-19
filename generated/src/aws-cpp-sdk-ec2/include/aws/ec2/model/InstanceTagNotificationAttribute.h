/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the registered tag keys for the current Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceTagNotificationAttribute">AWS
   * API Reference</a></p>
   */
  class InstanceTagNotificationAttribute
  {
  public:
    AWS_EC2_API InstanceTagNotificationAttribute() = default;
    AWS_EC2_API InstanceTagNotificationAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceTagNotificationAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The registered tag keys.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTagKeys() const { return m_instanceTagKeys; }
    inline bool InstanceTagKeysHasBeenSet() const { return m_instanceTagKeysHasBeenSet; }
    template<typename InstanceTagKeysT = Aws::Vector<Aws::String>>
    void SetInstanceTagKeys(InstanceTagKeysT&& value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys = std::forward<InstanceTagKeysT>(value); }
    template<typename InstanceTagKeysT = Aws::Vector<Aws::String>>
    InstanceTagNotificationAttribute& WithInstanceTagKeys(InstanceTagKeysT&& value) { SetInstanceTagKeys(std::forward<InstanceTagKeysT>(value)); return *this;}
    template<typename InstanceTagKeysT = Aws::String>
    InstanceTagNotificationAttribute& AddInstanceTagKeys(InstanceTagKeysT&& value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys.emplace_back(std::forward<InstanceTagKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates wheter all tag keys in the current Region are registered to appear
     * in scheduled event notifications. <code>true</code> indicates that all tag keys
     * in the current Region are registered.</p>
     */
    inline bool GetIncludeAllTagsOfInstance() const { return m_includeAllTagsOfInstance; }
    inline bool IncludeAllTagsOfInstanceHasBeenSet() const { return m_includeAllTagsOfInstanceHasBeenSet; }
    inline void SetIncludeAllTagsOfInstance(bool value) { m_includeAllTagsOfInstanceHasBeenSet = true; m_includeAllTagsOfInstance = value; }
    inline InstanceTagNotificationAttribute& WithIncludeAllTagsOfInstance(bool value) { SetIncludeAllTagsOfInstance(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceTagKeys;
    bool m_instanceTagKeysHasBeenSet = false;

    bool m_includeAllTagsOfInstance{false};
    bool m_includeAllTagsOfInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
