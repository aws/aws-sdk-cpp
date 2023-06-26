/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about an AMI that is currently in the Recycle Bin.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageRecycleBinInfo">AWS
   * API Reference</a></p>
   */
  class ImageRecycleBinInfo
  {
  public:
    AWS_EC2_API ImageRecycleBinInfo();
    AWS_EC2_API ImageRecycleBinInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageRecycleBinInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the AMI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AMI.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AMI.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AMI.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AMI.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the AMI.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the AMI.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the AMI.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the AMI.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the AMI.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the AMI.</p>
     */
    inline ImageRecycleBinInfo& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time when the AMI entered the Recycle Bin.</p>
     */
    inline const Aws::Utils::DateTime& GetRecycleBinEnterTime() const{ return m_recycleBinEnterTime; }

    /**
     * <p>The date and time when the AMI entered the Recycle Bin.</p>
     */
    inline bool RecycleBinEnterTimeHasBeenSet() const { return m_recycleBinEnterTimeHasBeenSet; }

    /**
     * <p>The date and time when the AMI entered the Recycle Bin.</p>
     */
    inline void SetRecycleBinEnterTime(const Aws::Utils::DateTime& value) { m_recycleBinEnterTimeHasBeenSet = true; m_recycleBinEnterTime = value; }

    /**
     * <p>The date and time when the AMI entered the Recycle Bin.</p>
     */
    inline void SetRecycleBinEnterTime(Aws::Utils::DateTime&& value) { m_recycleBinEnterTimeHasBeenSet = true; m_recycleBinEnterTime = std::move(value); }

    /**
     * <p>The date and time when the AMI entered the Recycle Bin.</p>
     */
    inline ImageRecycleBinInfo& WithRecycleBinEnterTime(const Aws::Utils::DateTime& value) { SetRecycleBinEnterTime(value); return *this;}

    /**
     * <p>The date and time when the AMI entered the Recycle Bin.</p>
     */
    inline ImageRecycleBinInfo& WithRecycleBinEnterTime(Aws::Utils::DateTime&& value) { SetRecycleBinEnterTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the AMI is to be permanently deleted from the Recycle
     * Bin.</p>
     */
    inline const Aws::Utils::DateTime& GetRecycleBinExitTime() const{ return m_recycleBinExitTime; }

    /**
     * <p>The date and time when the AMI is to be permanently deleted from the Recycle
     * Bin.</p>
     */
    inline bool RecycleBinExitTimeHasBeenSet() const { return m_recycleBinExitTimeHasBeenSet; }

    /**
     * <p>The date and time when the AMI is to be permanently deleted from the Recycle
     * Bin.</p>
     */
    inline void SetRecycleBinExitTime(const Aws::Utils::DateTime& value) { m_recycleBinExitTimeHasBeenSet = true; m_recycleBinExitTime = value; }

    /**
     * <p>The date and time when the AMI is to be permanently deleted from the Recycle
     * Bin.</p>
     */
    inline void SetRecycleBinExitTime(Aws::Utils::DateTime&& value) { m_recycleBinExitTimeHasBeenSet = true; m_recycleBinExitTime = std::move(value); }

    /**
     * <p>The date and time when the AMI is to be permanently deleted from the Recycle
     * Bin.</p>
     */
    inline ImageRecycleBinInfo& WithRecycleBinExitTime(const Aws::Utils::DateTime& value) { SetRecycleBinExitTime(value); return *this;}

    /**
     * <p>The date and time when the AMI is to be permanently deleted from the Recycle
     * Bin.</p>
     */
    inline ImageRecycleBinInfo& WithRecycleBinExitTime(Aws::Utils::DateTime&& value) { SetRecycleBinExitTime(std::move(value)); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_recycleBinEnterTime;
    bool m_recycleBinEnterTimeHasBeenSet = false;

    Aws::Utils::DateTime m_recycleBinExitTime;
    bool m_recycleBinExitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
