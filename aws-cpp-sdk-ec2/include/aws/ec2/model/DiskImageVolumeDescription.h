﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes a disk image volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DiskImageVolumeDescription">AWS
   * API Reference</a></p>
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
     * <p>The volume identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The volume identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The volume identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The volume identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

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
    inline DiskImageVolumeDescription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The volume identifier.</p>
     */
    inline DiskImageVolumeDescription& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline DiskImageVolumeDescription& WithSize(long long value) { SetSize(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    long long m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
