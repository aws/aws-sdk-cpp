﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Describes a disk image volume.</p>
   */
  class AWS_EC2_API DiskImageVolumeDescription
  {
  public:
    DiskImageVolumeDescription();
    DiskImageVolumeDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    DiskImageVolumeDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline DiskImageVolumeDescription& WithSize(long long value) { SetSize(value); return *this;}

    /**
     * <p>The volume identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The volume identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The volume identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The volume identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The volume identifier.</p>
     */
    inline DiskImageVolumeDescription& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The volume identifier.</p>
     */
    inline DiskImageVolumeDescription& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The volume identifier.</p>
     */
    inline DiskImageVolumeDescription& WithId(const char* value) { SetId(value); return *this;}

  private:
    long long m_size;
    bool m_sizeHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
