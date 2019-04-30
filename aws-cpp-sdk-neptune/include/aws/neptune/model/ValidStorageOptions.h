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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Range.h>
#include <aws/neptune/model/DoubleRange.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Information about valid modifications that you can make to your DB
   * instance.</p> <p>Contains the result of a successful call to the
   * <a>DescribeValidDBInstanceModifications</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ValidStorageOptions">AWS
   * API Reference</a></p>
   */
  class AWS_NEPTUNE_API ValidStorageOptions
  {
  public:
    ValidStorageOptions();
    ValidStorageOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    ValidStorageOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The valid storage types for your DB instance. For example, gp2, io1.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The valid storage types for your DB instance. For example, gp2, io1.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The valid storage types for your DB instance. For example, gp2, io1.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The valid storage types for your DB instance. For example, gp2, io1.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The valid storage types for your DB instance. For example, gp2, io1.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>The valid storage types for your DB instance. For example, gp2, io1.</p>
     */
    inline ValidStorageOptions& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>The valid storage types for your DB instance. For example, gp2, io1.</p>
     */
    inline ValidStorageOptions& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>The valid storage types for your DB instance. For example, gp2, io1.</p>
     */
    inline ValidStorageOptions& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The valid range of storage in gibibytes. For example, 100 to 16384.</p>
     */
    inline const Aws::Vector<Range>& GetStorageSize() const{ return m_storageSize; }

    /**
     * <p>The valid range of storage in gibibytes. For example, 100 to 16384.</p>
     */
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }

    /**
     * <p>The valid range of storage in gibibytes. For example, 100 to 16384.</p>
     */
    inline void SetStorageSize(const Aws::Vector<Range>& value) { m_storageSizeHasBeenSet = true; m_storageSize = value; }

    /**
     * <p>The valid range of storage in gibibytes. For example, 100 to 16384.</p>
     */
    inline void SetStorageSize(Aws::Vector<Range>&& value) { m_storageSizeHasBeenSet = true; m_storageSize = std::move(value); }

    /**
     * <p>The valid range of storage in gibibytes. For example, 100 to 16384.</p>
     */
    inline ValidStorageOptions& WithStorageSize(const Aws::Vector<Range>& value) { SetStorageSize(value); return *this;}

    /**
     * <p>The valid range of storage in gibibytes. For example, 100 to 16384.</p>
     */
    inline ValidStorageOptions& WithStorageSize(Aws::Vector<Range>&& value) { SetStorageSize(std::move(value)); return *this;}

    /**
     * <p>The valid range of storage in gibibytes. For example, 100 to 16384.</p>
     */
    inline ValidStorageOptions& AddStorageSize(const Range& value) { m_storageSizeHasBeenSet = true; m_storageSize.push_back(value); return *this; }

    /**
     * <p>The valid range of storage in gibibytes. For example, 100 to 16384.</p>
     */
    inline ValidStorageOptions& AddStorageSize(Range&& value) { m_storageSizeHasBeenSet = true; m_storageSize.push_back(std::move(value)); return *this; }


    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-20000.</p>
     */
    inline const Aws::Vector<Range>& GetProvisionedIops() const{ return m_provisionedIops; }

    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-20000.</p>
     */
    inline bool ProvisionedIopsHasBeenSet() const { return m_provisionedIopsHasBeenSet; }

    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-20000.</p>
     */
    inline void SetProvisionedIops(const Aws::Vector<Range>& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops = value; }

    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-20000.</p>
     */
    inline void SetProvisionedIops(Aws::Vector<Range>&& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops = std::move(value); }

    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-20000.</p>
     */
    inline ValidStorageOptions& WithProvisionedIops(const Aws::Vector<Range>& value) { SetProvisionedIops(value); return *this;}

    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-20000.</p>
     */
    inline ValidStorageOptions& WithProvisionedIops(Aws::Vector<Range>&& value) { SetProvisionedIops(std::move(value)); return *this;}

    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-20000.</p>
     */
    inline ValidStorageOptions& AddProvisionedIops(const Range& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops.push_back(value); return *this; }

    /**
     * <p>The valid range of provisioned IOPS. For example, 1000-20000.</p>
     */
    inline ValidStorageOptions& AddProvisionedIops(Range&& value) { m_provisionedIopsHasBeenSet = true; m_provisionedIops.push_back(std::move(value)); return *this; }


    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline const Aws::Vector<DoubleRange>& GetIopsToStorageRatio() const{ return m_iopsToStorageRatio; }

    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline bool IopsToStorageRatioHasBeenSet() const { return m_iopsToStorageRatioHasBeenSet; }

    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline void SetIopsToStorageRatio(const Aws::Vector<DoubleRange>& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio = value; }

    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline void SetIopsToStorageRatio(Aws::Vector<DoubleRange>&& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio = std::move(value); }

    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline ValidStorageOptions& WithIopsToStorageRatio(const Aws::Vector<DoubleRange>& value) { SetIopsToStorageRatio(value); return *this;}

    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline ValidStorageOptions& WithIopsToStorageRatio(Aws::Vector<DoubleRange>&& value) { SetIopsToStorageRatio(std::move(value)); return *this;}

    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline ValidStorageOptions& AddIopsToStorageRatio(const DoubleRange& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio.push_back(value); return *this; }

    /**
     * <p>The valid range of Provisioned IOPS to gibibytes of storage multiplier. For
     * example, 3-10, which means that provisioned IOPS can be between 3 and 10 times
     * storage.</p>
     */
    inline ValidStorageOptions& AddIopsToStorageRatio(DoubleRange&& value) { m_iopsToStorageRatioHasBeenSet = true; m_iopsToStorageRatio.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::Vector<Range> m_storageSize;
    bool m_storageSizeHasBeenSet;

    Aws::Vector<Range> m_provisionedIops;
    bool m_provisionedIopsHasBeenSet;

    Aws::Vector<DoubleRange> m_iopsToStorageRatio;
    bool m_iopsToStorageRatioHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
