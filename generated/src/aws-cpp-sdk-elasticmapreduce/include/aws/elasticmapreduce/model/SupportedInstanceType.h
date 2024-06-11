/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>An instance type that the specified Amazon EMR release
   * supports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SupportedInstanceType">AWS
   * API Reference</a></p>
   */
  class SupportedInstanceType
  {
  public:
    AWS_EMR_API SupportedInstanceType();
    AWS_EMR_API SupportedInstanceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API SupportedInstanceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 instance
     * type</a>, for example <code>m5.xlarge</code>, of the
     * <code>SupportedInstanceType</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline SupportedInstanceType& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline SupportedInstanceType& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline SupportedInstanceType& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory that is available to Amazon EMR from the
     * <code>SupportedInstanceType</code>. The kernel and hypervisor software consume
     * some memory, so this value might be lower than the overall memory for the
     * instance type.</p>
     */
    inline double GetMemoryGB() const{ return m_memoryGB; }
    inline bool MemoryGBHasBeenSet() const { return m_memoryGBHasBeenSet; }
    inline void SetMemoryGB(double value) { m_memoryGBHasBeenSet = true; m_memoryGB = value; }
    inline SupportedInstanceType& WithMemoryGB(double value) { SetMemoryGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>StorageGB</code> represents the storage capacity of the
     * <code>SupportedInstanceType</code>. This value is <code>0</code> for Amazon
     * EBS-only instance types.</p>
     */
    inline int GetStorageGB() const{ return m_storageGB; }
    inline bool StorageGBHasBeenSet() const { return m_storageGBHasBeenSet; }
    inline void SetStorageGB(int value) { m_storageGBHasBeenSet = true; m_storageGB = value; }
    inline SupportedInstanceType& WithStorageGB(int value) { SetStorageGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPUs available for the <code>SupportedInstanceType</code>.</p>
     */
    inline int GetVCPU() const{ return m_vCPU; }
    inline bool VCPUHasBeenSet() const { return m_vCPUHasBeenSet; }
    inline void SetVCPU(int value) { m_vCPUHasBeenSet = true; m_vCPU = value; }
    inline SupportedInstanceType& WithVCPU(int value) { SetVCPU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>SupportedInstanceType</code> only supports 64-bit
     * architecture.</p>
     */
    inline bool GetIs64BitsOnly() const{ return m_is64BitsOnly; }
    inline bool Is64BitsOnlyHasBeenSet() const { return m_is64BitsOnlyHasBeenSet; }
    inline void SetIs64BitsOnly(bool value) { m_is64BitsOnlyHasBeenSet = true; m_is64BitsOnly = value; }
    inline SupportedInstanceType& WithIs64BitsOnly(bool value) { SetIs64BitsOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 family and generation for the
     * <code>SupportedInstanceType</code>.</p>
     */
    inline const Aws::String& GetInstanceFamilyId() const{ return m_instanceFamilyId; }
    inline bool InstanceFamilyIdHasBeenSet() const { return m_instanceFamilyIdHasBeenSet; }
    inline void SetInstanceFamilyId(const Aws::String& value) { m_instanceFamilyIdHasBeenSet = true; m_instanceFamilyId = value; }
    inline void SetInstanceFamilyId(Aws::String&& value) { m_instanceFamilyIdHasBeenSet = true; m_instanceFamilyId = std::move(value); }
    inline void SetInstanceFamilyId(const char* value) { m_instanceFamilyIdHasBeenSet = true; m_instanceFamilyId.assign(value); }
    inline SupportedInstanceType& WithInstanceFamilyId(const Aws::String& value) { SetInstanceFamilyId(value); return *this;}
    inline SupportedInstanceType& WithInstanceFamilyId(Aws::String&& value) { SetInstanceFamilyId(std::move(value)); return *this;}
    inline SupportedInstanceType& WithInstanceFamilyId(const char* value) { SetInstanceFamilyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>SupportedInstanceType</code> supports Amazon EBS
     * optimization.</p>
     */
    inline bool GetEbsOptimizedAvailable() const{ return m_ebsOptimizedAvailable; }
    inline bool EbsOptimizedAvailableHasBeenSet() const { return m_ebsOptimizedAvailableHasBeenSet; }
    inline void SetEbsOptimizedAvailable(bool value) { m_ebsOptimizedAvailableHasBeenSet = true; m_ebsOptimizedAvailable = value; }
    inline SupportedInstanceType& WithEbsOptimizedAvailable(bool value) { SetEbsOptimizedAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>SupportedInstanceType</code> uses Amazon EBS
     * optimization by default.</p>
     */
    inline bool GetEbsOptimizedByDefault() const{ return m_ebsOptimizedByDefault; }
    inline bool EbsOptimizedByDefaultHasBeenSet() const { return m_ebsOptimizedByDefaultHasBeenSet; }
    inline void SetEbsOptimizedByDefault(bool value) { m_ebsOptimizedByDefaultHasBeenSet = true; m_ebsOptimizedByDefault = value; }
    inline SupportedInstanceType& WithEbsOptimizedByDefault(bool value) { SetEbsOptimizedByDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of disks for the <code>SupportedInstanceType</code>. This value is
     * <code>0</code> for Amazon EBS-only instance types.</p>
     */
    inline int GetNumberOfDisks() const{ return m_numberOfDisks; }
    inline bool NumberOfDisksHasBeenSet() const { return m_numberOfDisksHasBeenSet; }
    inline void SetNumberOfDisks(int value) { m_numberOfDisksHasBeenSet = true; m_numberOfDisks = value; }
    inline SupportedInstanceType& WithNumberOfDisks(int value) { SetNumberOfDisks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>SupportedInstanceType</code> only supports Amazon
     * EBS.</p>
     */
    inline bool GetEbsStorageOnly() const{ return m_ebsStorageOnly; }
    inline bool EbsStorageOnlyHasBeenSet() const { return m_ebsStorageOnlyHasBeenSet; }
    inline void SetEbsStorageOnly(bool value) { m_ebsStorageOnlyHasBeenSet = true; m_ebsStorageOnly = value; }
    inline SupportedInstanceType& WithEbsStorageOnly(bool value) { SetEbsStorageOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture, for example <code>X86_64</code> or
     * <code>AARCH64</code>.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }
    inline SupportedInstanceType& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline SupportedInstanceType& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline SupportedInstanceType& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    double m_memoryGB;
    bool m_memoryGBHasBeenSet = false;

    int m_storageGB;
    bool m_storageGBHasBeenSet = false;

    int m_vCPU;
    bool m_vCPUHasBeenSet = false;

    bool m_is64BitsOnly;
    bool m_is64BitsOnlyHasBeenSet = false;

    Aws::String m_instanceFamilyId;
    bool m_instanceFamilyIdHasBeenSet = false;

    bool m_ebsOptimizedAvailable;
    bool m_ebsOptimizedAvailableHasBeenSet = false;

    bool m_ebsOptimizedByDefault;
    bool m_ebsOptimizedByDefaultHasBeenSet = false;

    int m_numberOfDisks;
    bool m_numberOfDisksHasBeenSet = false;

    bool m_ebsStorageOnly;
    bool m_ebsStorageOnlyHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
