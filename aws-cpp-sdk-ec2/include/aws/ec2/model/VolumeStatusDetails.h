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
#include <aws/ec2/model/VolumeStatusName.h>
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
   * <p>Describes a volume status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeStatusDetails">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VolumeStatusDetails
  {
  public:
    VolumeStatusDetails();
    VolumeStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    VolumeStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the volume status.</p>
     */
    inline const VolumeStatusName& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume status.</p>
     */
    inline void SetName(const VolumeStatusName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume status.</p>
     */
    inline void SetName(VolumeStatusName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume status.</p>
     */
    inline VolumeStatusDetails& WithName(const VolumeStatusName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume status.</p>
     */
    inline VolumeStatusDetails& WithName(VolumeStatusName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The intended status of the volume status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The intended status of the volume status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The intended status of the volume status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The intended status of the volume status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The intended status of the volume status.</p>
     */
    inline VolumeStatusDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The intended status of the volume status.</p>
     */
    inline VolumeStatusDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The intended status of the volume status.</p>
     */
    inline VolumeStatusDetails& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    VolumeStatusName m_name;
    bool m_nameHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
