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
  class AWS_ELASTICSEARCHSERVICE_API EBSOptions
  {
  public:
    EBSOptions();
    EBSOptions(Aws::Utils::Json::JsonView jsonValue);
    EBSOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Specifies the IOPD for a Provisioned IOPS EBS volume (SSD).</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Specifies the IOPD for a Provisioned IOPS EBS volume (SSD).</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>Specifies the IOPD for a Provisioned IOPS EBS volume (SSD).</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Specifies the IOPD for a Provisioned IOPS EBS volume (SSD).</p>
     */
    inline EBSOptions& WithIops(int value) { SetIops(value); return *this;}

  private:

    bool m_eBSEnabled;
    bool m_eBSEnabledHasBeenSet;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
