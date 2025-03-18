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
   * <p>Information about the tag keys to deregister for the current Region. You can
   * either specify individual tag keys or deregister all tag keys in the current
   * Region. You must specify either <code>IncludeAllTagsOfInstance</code> or
   * <code>InstanceTagKeys</code> in the request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterInstanceTagAttributeRequest">AWS
   * API Reference</a></p>
   */
  class DeregisterInstanceTagAttributeRequest
  {
  public:
    AWS_EC2_API DeregisterInstanceTagAttributeRequest() = default;
    AWS_EC2_API DeregisterInstanceTagAttributeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DeregisterInstanceTagAttributeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether to deregister all tag keys in the current Region. Specify
     * <code>false</code> to deregister all tag keys.</p>
     */
    inline bool GetIncludeAllTagsOfInstance() const { return m_includeAllTagsOfInstance; }
    inline bool IncludeAllTagsOfInstanceHasBeenSet() const { return m_includeAllTagsOfInstanceHasBeenSet; }
    inline void SetIncludeAllTagsOfInstance(bool value) { m_includeAllTagsOfInstanceHasBeenSet = true; m_includeAllTagsOfInstance = value; }
    inline DeregisterInstanceTagAttributeRequest& WithIncludeAllTagsOfInstance(bool value) { SetIncludeAllTagsOfInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tag keys to deregister.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTagKeys() const { return m_instanceTagKeys; }
    inline bool InstanceTagKeysHasBeenSet() const { return m_instanceTagKeysHasBeenSet; }
    template<typename InstanceTagKeysT = Aws::Vector<Aws::String>>
    void SetInstanceTagKeys(InstanceTagKeysT&& value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys = std::forward<InstanceTagKeysT>(value); }
    template<typename InstanceTagKeysT = Aws::Vector<Aws::String>>
    DeregisterInstanceTagAttributeRequest& WithInstanceTagKeys(InstanceTagKeysT&& value) { SetInstanceTagKeys(std::forward<InstanceTagKeysT>(value)); return *this;}
    template<typename InstanceTagKeysT = Aws::String>
    DeregisterInstanceTagAttributeRequest& AddInstanceTagKeys(InstanceTagKeysT&& value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys.emplace_back(std::forward<InstanceTagKeysT>(value)); return *this; }
    ///@}
  private:

    bool m_includeAllTagsOfInstance{false};
    bool m_includeAllTagsOfInstanceHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTagKeys;
    bool m_instanceTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
