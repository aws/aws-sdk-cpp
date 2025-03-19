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
    AWS_EC2_API ImageRecycleBinInfo() = default;
    AWS_EC2_API ImageRecycleBinInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageRecycleBinInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ImageRecycleBinInfo& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AMI.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImageRecycleBinInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AMI.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImageRecycleBinInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the AMI entered the Recycle Bin.</p>
     */
    inline const Aws::Utils::DateTime& GetRecycleBinEnterTime() const { return m_recycleBinEnterTime; }
    inline bool RecycleBinEnterTimeHasBeenSet() const { return m_recycleBinEnterTimeHasBeenSet; }
    template<typename RecycleBinEnterTimeT = Aws::Utils::DateTime>
    void SetRecycleBinEnterTime(RecycleBinEnterTimeT&& value) { m_recycleBinEnterTimeHasBeenSet = true; m_recycleBinEnterTime = std::forward<RecycleBinEnterTimeT>(value); }
    template<typename RecycleBinEnterTimeT = Aws::Utils::DateTime>
    ImageRecycleBinInfo& WithRecycleBinEnterTime(RecycleBinEnterTimeT&& value) { SetRecycleBinEnterTime(std::forward<RecycleBinEnterTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the AMI is to be permanently deleted from the Recycle
     * Bin.</p>
     */
    inline const Aws::Utils::DateTime& GetRecycleBinExitTime() const { return m_recycleBinExitTime; }
    inline bool RecycleBinExitTimeHasBeenSet() const { return m_recycleBinExitTimeHasBeenSet; }
    template<typename RecycleBinExitTimeT = Aws::Utils::DateTime>
    void SetRecycleBinExitTime(RecycleBinExitTimeT&& value) { m_recycleBinExitTimeHasBeenSet = true; m_recycleBinExitTime = std::forward<RecycleBinExitTimeT>(value); }
    template<typename RecycleBinExitTimeT = Aws::Utils::DateTime>
    ImageRecycleBinInfo& WithRecycleBinExitTime(RecycleBinExitTimeT&& value) { SetRecycleBinExitTime(std::forward<RecycleBinExitTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_recycleBinEnterTime{};
    bool m_recycleBinEnterTimeHasBeenSet = false;

    Aws::Utils::DateTime m_recycleBinExitTime{};
    bool m_recycleBinExitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
