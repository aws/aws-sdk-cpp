/**
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
   *  <p>Amazon Elastic Graphics reached end of life on January 8, 2024.</p>
   *  <p>Describes an Elastic Graphics accelerator.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticGpus">AWS
   * API Reference</a></p>
   */
  class ElasticGpus
  {
  public:
    AWS_EC2_API ElasticGpus() = default;
    AWS_EC2_API ElasticGpus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticGpus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline const Aws::String& GetElasticGpuId() const { return m_elasticGpuId; }
    inline bool ElasticGpuIdHasBeenSet() const { return m_elasticGpuIdHasBeenSet; }
    template<typename ElasticGpuIdT = Aws::String>
    void SetElasticGpuId(ElasticGpuIdT&& value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId = std::forward<ElasticGpuIdT>(value); }
    template<typename ElasticGpuIdT = Aws::String>
    ElasticGpus& WithElasticGpuId(ElasticGpuIdT&& value) { SetElasticGpuId(std::forward<ElasticGpuIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in the which the Elastic Graphics accelerator
     * resides.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ElasticGpus& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Elastic Graphics accelerator.</p>
     */
    inline const Aws::String& GetElasticGpuType() const { return m_elasticGpuType; }
    inline bool ElasticGpuTypeHasBeenSet() const { return m_elasticGpuTypeHasBeenSet; }
    template<typename ElasticGpuTypeT = Aws::String>
    void SetElasticGpuType(ElasticGpuTypeT&& value) { m_elasticGpuTypeHasBeenSet = true; m_elasticGpuType = std::forward<ElasticGpuTypeT>(value); }
    template<typename ElasticGpuTypeT = Aws::String>
    ElasticGpus& WithElasticGpuType(ElasticGpuTypeT&& value) { SetElasticGpuType(std::forward<ElasticGpuTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Elastic Graphics accelerator.</p>
     */
    inline const ElasticGpuHealth& GetElasticGpuHealth() const { return m_elasticGpuHealth; }
    inline bool ElasticGpuHealthHasBeenSet() const { return m_elasticGpuHealthHasBeenSet; }
    template<typename ElasticGpuHealthT = ElasticGpuHealth>
    void SetElasticGpuHealth(ElasticGpuHealthT&& value) { m_elasticGpuHealthHasBeenSet = true; m_elasticGpuHealth = std::forward<ElasticGpuHealthT>(value); }
    template<typename ElasticGpuHealthT = ElasticGpuHealth>
    ElasticGpus& WithElasticGpuHealth(ElasticGpuHealthT&& value) { SetElasticGpuHealth(std::forward<ElasticGpuHealthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Elastic Graphics accelerator.</p>
     */
    inline ElasticGpuState GetElasticGpuState() const { return m_elasticGpuState; }
    inline bool ElasticGpuStateHasBeenSet() const { return m_elasticGpuStateHasBeenSet; }
    inline void SetElasticGpuState(ElasticGpuState value) { m_elasticGpuStateHasBeenSet = true; m_elasticGpuState = value; }
    inline ElasticGpus& WithElasticGpuState(ElasticGpuState value) { SetElasticGpuState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance to which the Elastic Graphics accelerator is
     * attached.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ElasticGpus& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Elastic Graphics accelerator.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ElasticGpus& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ElasticGpus& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_elasticGpuId;
    bool m_elasticGpuIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_elasticGpuType;
    bool m_elasticGpuTypeHasBeenSet = false;

    ElasticGpuHealth m_elasticGpuHealth;
    bool m_elasticGpuHealthHasBeenSet = false;

    ElasticGpuState m_elasticGpuState{ElasticGpuState::NOT_SET};
    bool m_elasticGpuStateHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
