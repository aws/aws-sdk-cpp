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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ElasticGpuHealth.h>
#include <aws/ec2/model/ElasticGpuState.h>
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
   * <p>Describes an Elastic GPU.</p><p><h3>See Also:</h3>   <a
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
     * <p>The ID of the Elastic GPU.</p>
     */
    inline const Aws::String& GetElasticGpuId() const{ return m_elasticGpuId; }

    /**
     * <p>The ID of the Elastic GPU.</p>
     */
    inline void SetElasticGpuId(const Aws::String& value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId = value; }

    /**
     * <p>The ID of the Elastic GPU.</p>
     */
    inline void SetElasticGpuId(Aws::String&& value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId = std::move(value); }

    /**
     * <p>The ID of the Elastic GPU.</p>
     */
    inline void SetElasticGpuId(const char* value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId.assign(value); }

    /**
     * <p>The ID of the Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuId(const Aws::String& value) { SetElasticGpuId(value); return *this;}

    /**
     * <p>The ID of the Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuId(Aws::String&& value) { SetElasticGpuId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuId(const char* value) { SetElasticGpuId(value); return *this;}


    /**
     * <p>The Availability Zone in the which the Elastic GPU resides.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in the which the Elastic GPU resides.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in the which the Elastic GPU resides.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in the which the Elastic GPU resides.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in the which the Elastic GPU resides.</p>
     */
    inline ElasticGpus& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in the which the Elastic GPU resides.</p>
     */
    inline ElasticGpus& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in the which the Elastic GPU resides.</p>
     */
    inline ElasticGpus& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The type of Elastic GPU.</p>
     */
    inline const Aws::String& GetElasticGpuType() const{ return m_elasticGpuType; }

    /**
     * <p>The type of Elastic GPU.</p>
     */
    inline void SetElasticGpuType(const Aws::String& value) { m_elasticGpuTypeHasBeenSet = true; m_elasticGpuType = value; }

    /**
     * <p>The type of Elastic GPU.</p>
     */
    inline void SetElasticGpuType(Aws::String&& value) { m_elasticGpuTypeHasBeenSet = true; m_elasticGpuType = std::move(value); }

    /**
     * <p>The type of Elastic GPU.</p>
     */
    inline void SetElasticGpuType(const char* value) { m_elasticGpuTypeHasBeenSet = true; m_elasticGpuType.assign(value); }

    /**
     * <p>The type of Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuType(const Aws::String& value) { SetElasticGpuType(value); return *this;}

    /**
     * <p>The type of Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuType(Aws::String&& value) { SetElasticGpuType(std::move(value)); return *this;}

    /**
     * <p>The type of Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuType(const char* value) { SetElasticGpuType(value); return *this;}


    /**
     * <p>The status of the Elastic GPU.</p>
     */
    inline const ElasticGpuHealth& GetElasticGpuHealth() const{ return m_elasticGpuHealth; }

    /**
     * <p>The status of the Elastic GPU.</p>
     */
    inline void SetElasticGpuHealth(const ElasticGpuHealth& value) { m_elasticGpuHealthHasBeenSet = true; m_elasticGpuHealth = value; }

    /**
     * <p>The status of the Elastic GPU.</p>
     */
    inline void SetElasticGpuHealth(ElasticGpuHealth&& value) { m_elasticGpuHealthHasBeenSet = true; m_elasticGpuHealth = std::move(value); }

    /**
     * <p>The status of the Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuHealth(const ElasticGpuHealth& value) { SetElasticGpuHealth(value); return *this;}

    /**
     * <p>The status of the Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuHealth(ElasticGpuHealth&& value) { SetElasticGpuHealth(std::move(value)); return *this;}


    /**
     * <p>The state of the Elastic GPU.</p>
     */
    inline const ElasticGpuState& GetElasticGpuState() const{ return m_elasticGpuState; }

    /**
     * <p>The state of the Elastic GPU.</p>
     */
    inline void SetElasticGpuState(const ElasticGpuState& value) { m_elasticGpuStateHasBeenSet = true; m_elasticGpuState = value; }

    /**
     * <p>The state of the Elastic GPU.</p>
     */
    inline void SetElasticGpuState(ElasticGpuState&& value) { m_elasticGpuStateHasBeenSet = true; m_elasticGpuState = std::move(value); }

    /**
     * <p>The state of the Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuState(const ElasticGpuState& value) { SetElasticGpuState(value); return *this;}

    /**
     * <p>The state of the Elastic GPU.</p>
     */
    inline ElasticGpus& WithElasticGpuState(ElasticGpuState&& value) { SetElasticGpuState(std::move(value)); return *this;}


    /**
     * <p>The ID of the instance to which the Elastic GPU is attached.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance to which the Elastic GPU is attached.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance to which the Elastic GPU is attached.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance to which the Elastic GPU is attached.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance to which the Elastic GPU is attached.</p>
     */
    inline ElasticGpus& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance to which the Elastic GPU is attached.</p>
     */
    inline ElasticGpus& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance to which the Elastic GPU is attached.</p>
     */
    inline ElasticGpus& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
