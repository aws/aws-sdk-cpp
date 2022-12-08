/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/VolumeType.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Options to enable, disable, and specify the properties of EBS storage
   * volumes. For more information, see <a
   * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
   * target="_blank"> Configuring EBS-based Storage</a>.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/EBSOptions">AWS
   * API Reference</a></p>
   */
  class EBSOptions
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API EBSOptions();
    AWS_ELASTICSEARCHSERVICE_API EBSOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API EBSOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether EBS-based storage is enabled.</p>
     */
    inline bool GetEBSEnabled() const{ return m_eBSEnabled; }

    /**
     * <p>Specifies whether EBS-based storage is enabled.</p>
     */
    inline bool EBSEnabledHasBeenSet() const { return m_eBSEnabledHasBeenSet; }

    /**
     * <p>Specifies whether EBS-based storage is enabled.</p>
     */
    inline void SetEBSEnabled(bool value) { m_eBSEnabledHasBeenSet = true; m_eBSEnabled = value; }

    /**
     * <p>Specifies whether EBS-based storage is enabled.</p>
     */
    inline EBSOptions& WithEBSEnabled(bool value) { SetEBSEnabled(value); return *this;}


    /**
     * <p> Specifies the volume type for EBS-based storage.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p> Specifies the volume type for EBS-based storage.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p> Specifies the volume type for EBS-based storage.</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p> Specifies the volume type for EBS-based storage.</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p> Specifies the volume type for EBS-based storage.</p>
     */
    inline EBSOptions& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p> Specifies the volume type for EBS-based storage.</p>
     */
    inline EBSOptions& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p> Integer to specify the size of an EBS volume.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p> Integer to specify the size of an EBS volume.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p> Integer to specify the size of an EBS volume.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p> Integer to specify the size of an EBS volume.</p>
     */
    inline EBSOptions& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>Specifies the IOPS for Provisioned IOPS And GP3 EBS volume (SSD).</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Specifies the IOPS for Provisioned IOPS And GP3 EBS volume (SSD).</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>Specifies the IOPS for Provisioned IOPS And GP3 EBS volume (SSD).</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Specifies the IOPS for Provisioned IOPS And GP3 EBS volume (SSD).</p>
     */
    inline EBSOptions& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Specifies the Throughput for GP3 EBS volume (SSD).</p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p>Specifies the Throughput for GP3 EBS volume (SSD).</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>Specifies the Throughput for GP3 EBS volume (SSD).</p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>Specifies the Throughput for GP3 EBS volume (SSD).</p>
     */
    inline EBSOptions& WithThroughput(int value) { SetThroughput(value); return *this;}

  private:

    bool m_eBSEnabled;
    bool m_eBSEnabledHasBeenSet = false;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
