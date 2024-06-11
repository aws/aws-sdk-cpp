/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ImportInstanceTaskDetails
  {
  public:
    AWS_EC2_API ImportInstanceTaskDetails();
    AWS_EC2_API ImportInstanceTaskDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImportInstanceTaskDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A description of the task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportInstanceTaskDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportInstanceTaskDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportInstanceTaskDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ImportInstanceTaskDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ImportInstanceTaskDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ImportInstanceTaskDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance operating system.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline ImportInstanceTaskDetails& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}
    inline ImportInstanceTaskDetails& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volumes.</p>
     */
    inline const Aws::Vector<ImportInstanceVolumeDetailItem>& GetVolumes() const{ return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    inline void SetVolumes(const Aws::Vector<ImportInstanceVolumeDetailItem>& value) { m_volumesHasBeenSet = true; m_volumes = value; }
    inline void SetVolumes(Aws::Vector<ImportInstanceVolumeDetailItem>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }
    inline ImportInstanceTaskDetails& WithVolumes(const Aws::Vector<ImportInstanceVolumeDetailItem>& value) { SetVolumes(value); return *this;}
    inline ImportInstanceTaskDetails& WithVolumes(Aws::Vector<ImportInstanceVolumeDetailItem>&& value) { SetVolumes(std::move(value)); return *this;}
    inline ImportInstanceTaskDetails& AddVolumes(const ImportInstanceVolumeDetailItem& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }
    inline ImportInstanceTaskDetails& AddVolumes(ImportInstanceVolumeDetailItem&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    PlatformValues m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<ImportInstanceVolumeDetailItem> m_volumes;
    bool m_volumesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
