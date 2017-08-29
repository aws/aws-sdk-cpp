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
   * <p>Describes the association between an instance and an Elastic
   * GPU.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticGpuAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ElasticGpuAssociation
  {
  public:
    ElasticGpuAssociation();
    ElasticGpuAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    ElasticGpuAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline ElasticGpuAssociation& WithElasticGpuId(const Aws::String& value) { SetElasticGpuId(value); return *this;}

    /**
     * <p>The ID of the Elastic GPU.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuId(Aws::String&& value) { SetElasticGpuId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Elastic GPU.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuId(const char* value) { SetElasticGpuId(value); return *this;}


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationId() const{ return m_elasticGpuAssociationId; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetElasticGpuAssociationId(const Aws::String& value) { m_elasticGpuAssociationIdHasBeenSet = true; m_elasticGpuAssociationId = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetElasticGpuAssociationId(Aws::String&& value) { m_elasticGpuAssociationIdHasBeenSet = true; m_elasticGpuAssociationId = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetElasticGpuAssociationId(const char* value) { m_elasticGpuAssociationIdHasBeenSet = true; m_elasticGpuAssociationId.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationId(const Aws::String& value) { SetElasticGpuAssociationId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationId(Aws::String&& value) { SetElasticGpuAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationId(const char* value) { SetElasticGpuAssociationId(value); return *this;}


    /**
     * <p>The state of the association between the instance and the Elastic GPU.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationState() const{ return m_elasticGpuAssociationState; }

    /**
     * <p>The state of the association between the instance and the Elastic GPU.</p>
     */
    inline void SetElasticGpuAssociationState(const Aws::String& value) { m_elasticGpuAssociationStateHasBeenSet = true; m_elasticGpuAssociationState = value; }

    /**
     * <p>The state of the association between the instance and the Elastic GPU.</p>
     */
    inline void SetElasticGpuAssociationState(Aws::String&& value) { m_elasticGpuAssociationStateHasBeenSet = true; m_elasticGpuAssociationState = std::move(value); }

    /**
     * <p>The state of the association between the instance and the Elastic GPU.</p>
     */
    inline void SetElasticGpuAssociationState(const char* value) { m_elasticGpuAssociationStateHasBeenSet = true; m_elasticGpuAssociationState.assign(value); }

    /**
     * <p>The state of the association between the instance and the Elastic GPU.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationState(const Aws::String& value) { SetElasticGpuAssociationState(value); return *this;}

    /**
     * <p>The state of the association between the instance and the Elastic GPU.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationState(Aws::String&& value) { SetElasticGpuAssociationState(std::move(value)); return *this;}

    /**
     * <p>The state of the association between the instance and the Elastic GPU.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationState(const char* value) { SetElasticGpuAssociationState(value); return *this;}


    /**
     * <p>The time the Elastic GPU was associated with the instance.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationTime() const{ return m_elasticGpuAssociationTime; }

    /**
     * <p>The time the Elastic GPU was associated with the instance.</p>
     */
    inline void SetElasticGpuAssociationTime(const Aws::String& value) { m_elasticGpuAssociationTimeHasBeenSet = true; m_elasticGpuAssociationTime = value; }

    /**
     * <p>The time the Elastic GPU was associated with the instance.</p>
     */
    inline void SetElasticGpuAssociationTime(Aws::String&& value) { m_elasticGpuAssociationTimeHasBeenSet = true; m_elasticGpuAssociationTime = std::move(value); }

    /**
     * <p>The time the Elastic GPU was associated with the instance.</p>
     */
    inline void SetElasticGpuAssociationTime(const char* value) { m_elasticGpuAssociationTimeHasBeenSet = true; m_elasticGpuAssociationTime.assign(value); }

    /**
     * <p>The time the Elastic GPU was associated with the instance.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationTime(const Aws::String& value) { SetElasticGpuAssociationTime(value); return *this;}

    /**
     * <p>The time the Elastic GPU was associated with the instance.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationTime(Aws::String&& value) { SetElasticGpuAssociationTime(std::move(value)); return *this;}

    /**
     * <p>The time the Elastic GPU was associated with the instance.</p>
     */
    inline ElasticGpuAssociation& WithElasticGpuAssociationTime(const char* value) { SetElasticGpuAssociationTime(value); return *this;}

  private:

    Aws::String m_elasticGpuId;
    bool m_elasticGpuIdHasBeenSet;

    Aws::String m_elasticGpuAssociationId;
    bool m_elasticGpuAssociationIdHasBeenSet;

    Aws::String m_elasticGpuAssociationState;
    bool m_elasticGpuAssociationStateHasBeenSet;

    Aws::String m_elasticGpuAssociationTime;
    bool m_elasticGpuAssociationTimeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
