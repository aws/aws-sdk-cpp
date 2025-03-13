/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>A custom AMI available to platforms.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CustomAmi">AWS
   * API Reference</a></p>
   */
  class CustomAmi
  {
  public:
    AWS_ELASTICBEANSTALK_API CustomAmi() = default;
    AWS_ELASTICBEANSTALK_API CustomAmi(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API CustomAmi& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline const Aws::String& GetVirtualizationType() const { return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    template<typename VirtualizationTypeT = Aws::String>
    void SetVirtualizationType(VirtualizationTypeT&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::forward<VirtualizationTypeT>(value); }
    template<typename VirtualizationTypeT = Aws::String>
    CustomAmi& WithVirtualizationType(VirtualizationTypeT&& value) { SetVirtualizationType(std::forward<VirtualizationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    CustomAmi& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
