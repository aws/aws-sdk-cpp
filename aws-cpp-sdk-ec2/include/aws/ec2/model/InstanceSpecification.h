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
   * <p>The instance details to specify which volumes should be
   * snapshotted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceSpecification
  {
  public:
    InstanceSpecification();
    InstanceSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline InstanceSpecification& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline InstanceSpecification& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline InstanceSpecification& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline bool GetExcludeBootVolume() const{ return m_excludeBootVolume; }

    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline bool ExcludeBootVolumeHasBeenSet() const { return m_excludeBootVolumeHasBeenSet; }

    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline void SetExcludeBootVolume(bool value) { m_excludeBootVolumeHasBeenSet = true; m_excludeBootVolume = value; }

    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline InstanceSpecification& WithExcludeBootVolume(bool value) { SetExcludeBootVolume(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    bool m_excludeBootVolume;
    bool m_excludeBootVolumeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
