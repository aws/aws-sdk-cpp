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
   * <p>Information about the tag keys to register for the current Region. You can
   * either specify individual tag keys or register all tag keys in the current
   * Region. You must specify either <code>IncludeAllTagsOfInstance</code> or
   * <code>InstanceTagKeys</code> in the request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterInstanceTagAttributeRequest">AWS
   * API Reference</a></p>
   */
  class RegisterInstanceTagAttributeRequest
  {
  public:
    AWS_EC2_API RegisterInstanceTagAttributeRequest();
    AWS_EC2_API RegisterInstanceTagAttributeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RegisterInstanceTagAttributeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether to register all tag keys in the current Region. Specify
     * <code>true</code> to register all tag keys.</p>
     */
    inline bool GetIncludeAllTagsOfInstance() const{ return m_includeAllTagsOfInstance; }

    /**
     * <p>Indicates whether to register all tag keys in the current Region. Specify
     * <code>true</code> to register all tag keys.</p>
     */
    inline bool IncludeAllTagsOfInstanceHasBeenSet() const { return m_includeAllTagsOfInstanceHasBeenSet; }

    /**
     * <p>Indicates whether to register all tag keys in the current Region. Specify
     * <code>true</code> to register all tag keys.</p>
     */
    inline void SetIncludeAllTagsOfInstance(bool value) { m_includeAllTagsOfInstanceHasBeenSet = true; m_includeAllTagsOfInstance = value; }

    /**
     * <p>Indicates whether to register all tag keys in the current Region. Specify
     * <code>true</code> to register all tag keys.</p>
     */
    inline RegisterInstanceTagAttributeRequest& WithIncludeAllTagsOfInstance(bool value) { SetIncludeAllTagsOfInstance(value); return *this;}


    /**
     * <p>The tag keys to register.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTagKeys() const{ return m_instanceTagKeys; }

    /**
     * <p>The tag keys to register.</p>
     */
    inline bool InstanceTagKeysHasBeenSet() const { return m_instanceTagKeysHasBeenSet; }

    /**
     * <p>The tag keys to register.</p>
     */
    inline void SetInstanceTagKeys(const Aws::Vector<Aws::String>& value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys = value; }

    /**
     * <p>The tag keys to register.</p>
     */
    inline void SetInstanceTagKeys(Aws::Vector<Aws::String>&& value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys = std::move(value); }

    /**
     * <p>The tag keys to register.</p>
     */
    inline RegisterInstanceTagAttributeRequest& WithInstanceTagKeys(const Aws::Vector<Aws::String>& value) { SetInstanceTagKeys(value); return *this;}

    /**
     * <p>The tag keys to register.</p>
     */
    inline RegisterInstanceTagAttributeRequest& WithInstanceTagKeys(Aws::Vector<Aws::String>&& value) { SetInstanceTagKeys(std::move(value)); return *this;}

    /**
     * <p>The tag keys to register.</p>
     */
    inline RegisterInstanceTagAttributeRequest& AddInstanceTagKeys(const Aws::String& value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys.push_back(value); return *this; }

    /**
     * <p>The tag keys to register.</p>
     */
    inline RegisterInstanceTagAttributeRequest& AddInstanceTagKeys(Aws::String&& value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The tag keys to register.</p>
     */
    inline RegisterInstanceTagAttributeRequest& AddInstanceTagKeys(const char* value) { m_instanceTagKeysHasBeenSet = true; m_instanceTagKeys.push_back(value); return *this; }

  private:

    bool m_includeAllTagsOfInstance;
    bool m_includeAllTagsOfInstanceHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTagKeys;
    bool m_instanceTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
