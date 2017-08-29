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
#include <aws/ec2/model/PlatformValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ImportInstanceVolumeDetailItem.h>
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
   * <p>Describes an import instance task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportInstanceTaskDetails">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ImportInstanceTaskDetails
  {
  public:
    ImportInstanceTaskDetails();
    ImportInstanceTaskDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    ImportInstanceTaskDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description of the task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the task.</p>
     */
    inline ImportInstanceTaskDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the task.</p>
     */
    inline ImportInstanceTaskDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the task.</p>
     */
    inline ImportInstanceTaskDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline ImportInstanceTaskDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ImportInstanceTaskDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ImportInstanceTaskDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The instance operating system.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }

    /**
     * <p>The instance operating system.</p>
     */
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The instance operating system.</p>
     */
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The instance operating system.</p>
     */
    inline ImportInstanceTaskDetails& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}

    /**
     * <p>The instance operating system.</p>
     */
    inline ImportInstanceTaskDetails& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>One or more volumes.</p>
     */
    inline const Aws::Vector<ImportInstanceVolumeDetailItem>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>One or more volumes.</p>
     */
    inline void SetVolumes(const Aws::Vector<ImportInstanceVolumeDetailItem>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>One or more volumes.</p>
     */
    inline void SetVolumes(Aws::Vector<ImportInstanceVolumeDetailItem>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>One or more volumes.</p>
     */
    inline ImportInstanceTaskDetails& WithVolumes(const Aws::Vector<ImportInstanceVolumeDetailItem>& value) { SetVolumes(value); return *this;}

    /**
     * <p>One or more volumes.</p>
     */
    inline ImportInstanceTaskDetails& WithVolumes(Aws::Vector<ImportInstanceVolumeDetailItem>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>One or more volumes.</p>
     */
    inline ImportInstanceTaskDetails& AddVolumes(const ImportInstanceVolumeDetailItem& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>One or more volumes.</p>
     */
    inline ImportInstanceTaskDetails& AddVolumes(ImportInstanceVolumeDetailItem&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    PlatformValues m_platform;
    bool m_platformHasBeenSet;

    Aws::Vector<ImportInstanceVolumeDetailItem> m_volumes;
    bool m_volumesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
