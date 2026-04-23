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
  class AWS_ELASTICBEANSTALK_API CustomAmi
  {
  public:
    CustomAmi();
    CustomAmi(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomAmi& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_virtualizationTypeHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
