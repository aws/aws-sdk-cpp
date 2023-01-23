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
    AWS_ELASTICBEANSTALK_API CustomAmi();
    AWS_ELASTICBEANSTALK_API CustomAmi(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API CustomAmi& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline const Aws::String& GetVirtualizationType() const{ return m_virtualizationType; }

    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }

    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline void SetVirtualizationType(const Aws::String& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }

    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline void SetVirtualizationType(Aws::String&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }

    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline void SetVirtualizationType(const char* value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType.assign(value); }

    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline CustomAmi& WithVirtualizationType(const Aws::String& value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline CustomAmi& WithVirtualizationType(Aws::String&& value) { SetVirtualizationType(std::move(value)); return *this;}

    /**
     * <p>The type of virtualization used to create the custom AMI.</p>
     */
    inline CustomAmi& WithVirtualizationType(const char* value) { SetVirtualizationType(value); return *this;}


    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline CustomAmi& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline CustomAmi& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>THe ID of the image used to create the custom AMI.</p>
     */
    inline CustomAmi& WithImageId(const char* value) { SetImageId(value); return *this;}

  private:

    Aws::String m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
