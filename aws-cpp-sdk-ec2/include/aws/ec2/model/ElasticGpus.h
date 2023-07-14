﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ElasticGpuHealth.h>
#include <aws/ec2/model/ElasticGpuState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes an Elastic Graphics accelerator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticGpus">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API ElasticGpus
  {
  public:
    ElasticGpus();
    ElasticGpus(const Aws::Utils::Xml::XmlNode& xmlNode);
    ElasticGpus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline const Aws::String& GetElasticGpuId() const{ return m_elasticGpuId; }

    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline bool ElasticGpuIdHasBeenSet() const { return m_elasticGpuIdHasBeenSet; }

    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuId(const Aws::String& value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId = value; }

    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuId(Aws::String&& value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId = std::move(value); }

    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuId(const char* value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId.assign(value); }

    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuId(const Aws::String& value) { SetElasticGpuId(value); return *this;}

    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuId(Aws::String&& value) { SetElasticGpuId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuId(const char* value) { SetElasticGpuId(value); return *this;}


    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline ElasticGpus& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline ElasticGpus& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline ElasticGpus& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline const Aws::String& GetElasticGpuType() const{ return m_elasticGpuType; }

    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline bool ElasticGpuTypeHasBeenSet() const { return m_elasticGpuTypeHasBeenSet; }

    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuType(const Aws::String& value) { m_elasticGpuTypeHasBeenSet = true; m_elasticGpuType = value; }

    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuType(Aws::String&& value) { m_elasticGpuTypeHasBeenSet = true; m_elasticGpuType = std::move(value); }

    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuType(const char* value) { m_elasticGpuTypeHasBeenSet = true; m_elasticGpuType.assign(value); }

    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuType(const Aws::String& value) { SetElasticGpuType(value); return *this;}

    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuType(Aws::String&& value) { SetElasticGpuType(std::move(value)); return *this;}

    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuType(const char* value) { SetElasticGpuType(value); return *this;}


    /**
     * <p>The status of the Elastic Graphics accelerator.</p>
     */
    inline const ElasticGpuHealth& GetElasticGpuHealth() const{ return m_elasticGpuHealth; }

    /**
     * <p>The status of the Elastic Graphics accelerator.</p>
     */
    inline bool ElasticGpuHealthHasBeenSet() const { return m_elasticGpuHealthHasBeenSet; }

    /**
     * <p>The status of the Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuHealth(const ElasticGpuHealth& value) { m_elasticGpuHealthHasBeenSet = true; m_elasticGpuHealth = value; }

    /**
     * <p>The status of the Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuHealth(ElasticGpuHealth&& value) { m_elasticGpuHealthHasBeenSet = true; m_elasticGpuHealth = std::move(value); }

    /**
     * <p>The status of the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuHealth(const ElasticGpuHealth& value) { SetElasticGpuHealth(value); return *this;}

    /**
     * <p>The status of the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuHealth(ElasticGpuHealth&& value) { SetElasticGpuHealth(std::move(value)); return *this;}


    /**
     * <p>The state of the Elastic Graphics accelerator.</p>
     */
    inline const ElasticGpuState& GetElasticGpuState() const{ return m_elasticGpuState; }

    /**
     * <p>The state of the Elastic Graphics accelerator.</p>
     */
    inline bool ElasticGpuStateHasBeenSet() const { return m_elasticGpuStateHasBeenSet; }

    /**
     * <p>The state of the Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuState(const ElasticGpuState& value) { m_elasticGpuStateHasBeenSet = true; m_elasticGpuState = value; }

    /**
     * <p>The state of the Elastic Graphics accelerator.</p>
     */
    inline void SetElasticGpuState(ElasticGpuState&& value) { m_elasticGpuStateHasBeenSet = true; m_elasticGpuState = std::move(value); }

    /**
     * <p>The state of the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuState(const ElasticGpuState& value) { SetElasticGpuState(value); return *this;}

    /**
     * <p>The state of the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithElasticGpuState(ElasticGpuState&& value) { SetElasticGpuState(std::move(value)); return *this;}


    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline ElasticGpus& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline ElasticGpus& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline ElasticGpus& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpus& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_elasticGpuId;
    bool m_elasticGpuIdHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_elasticGpuType;
    bool m_elasticGpuTypeHasBeenSet;

    ElasticGpuHealth m_elasticGpuHealth;
    bool m_elasticGpuHealthHasBeenSet;

    ElasticGpuState m_elasticGpuState;
    bool m_elasticGpuStateHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
