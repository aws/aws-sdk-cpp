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
   *  <p>Amazon Elastic Graphics reached end of life on January 8, 2024.</p>
   *  <p>Describes the association between an instance and an Elastic Graphics
   * accelerator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticGpuAssociation">AWS
   * API Reference</a></p>
   */
  class ElasticGpuAssociation
  {
  public:
    AWS_EC2_API ElasticGpuAssociation();
    AWS_EC2_API ElasticGpuAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticGpuAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Elastic Graphics accelerator.</p>
     */
    inline const Aws::String& GetElasticGpuId() const{ return m_elasticGpuId; }
    inline bool ElasticGpuIdHasBeenSet() const { return m_elasticGpuIdHasBeenSet; }
    inline void SetElasticGpuId(const Aws::String& value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId = value; }
    inline void SetElasticGpuId(Aws::String&& value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId = std::move(value); }
    inline void SetElasticGpuId(const char* value) { m_elasticGpuIdHasBeenSet = true; m_elasticGpuId.assign(value); }
    inline ElasticGpuAssociation& WithElasticGpuId(const Aws::String& value) { SetElasticGpuId(value); return *this;}
    inline ElasticGpuAssociation& WithElasticGpuId(Aws::String&& value) { SetElasticGpuId(std::move(value)); return *this;}
    inline ElasticGpuAssociation& WithElasticGpuId(const char* value) { SetElasticGpuId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationId() const{ return m_elasticGpuAssociationId; }
    inline bool ElasticGpuAssociationIdHasBeenSet() const { return m_elasticGpuAssociationIdHasBeenSet; }
    inline void SetElasticGpuAssociationId(const Aws::String& value) { m_elasticGpuAssociationIdHasBeenSet = true; m_elasticGpuAssociationId = value; }
    inline void SetElasticGpuAssociationId(Aws::String&& value) { m_elasticGpuAssociationIdHasBeenSet = true; m_elasticGpuAssociationId = std::move(value); }
    inline void SetElasticGpuAssociationId(const char* value) { m_elasticGpuAssociationIdHasBeenSet = true; m_elasticGpuAssociationId.assign(value); }
    inline ElasticGpuAssociation& WithElasticGpuAssociationId(const Aws::String& value) { SetElasticGpuAssociationId(value); return *this;}
    inline ElasticGpuAssociation& WithElasticGpuAssociationId(Aws::String&& value) { SetElasticGpuAssociationId(std::move(value)); return *this;}
    inline ElasticGpuAssociation& WithElasticGpuAssociationId(const char* value) { SetElasticGpuAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association between the instance and the Elastic Graphics
     * accelerator.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationState() const{ return m_elasticGpuAssociationState; }
    inline bool ElasticGpuAssociationStateHasBeenSet() const { return m_elasticGpuAssociationStateHasBeenSet; }
    inline void SetElasticGpuAssociationState(const Aws::String& value) { m_elasticGpuAssociationStateHasBeenSet = true; m_elasticGpuAssociationState = value; }
    inline void SetElasticGpuAssociationState(Aws::String&& value) { m_elasticGpuAssociationStateHasBeenSet = true; m_elasticGpuAssociationState = std::move(value); }
    inline void SetElasticGpuAssociationState(const char* value) { m_elasticGpuAssociationStateHasBeenSet = true; m_elasticGpuAssociationState.assign(value); }
    inline ElasticGpuAssociation& WithElasticGpuAssociationState(const Aws::String& value) { SetElasticGpuAssociationState(value); return *this;}
    inline ElasticGpuAssociation& WithElasticGpuAssociationState(Aws::String&& value) { SetElasticGpuAssociationState(std::move(value)); return *this;}
    inline ElasticGpuAssociation& WithElasticGpuAssociationState(const char* value) { SetElasticGpuAssociationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the Elastic Graphics accelerator was associated with the
     * instance.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationTime() const{ return m_elasticGpuAssociationTime; }
    inline bool ElasticGpuAssociationTimeHasBeenSet() const { return m_elasticGpuAssociationTimeHasBeenSet; }
    inline void SetElasticGpuAssociationTime(const Aws::String& value) { m_elasticGpuAssociationTimeHasBeenSet = true; m_elasticGpuAssociationTime = value; }
    inline void SetElasticGpuAssociationTime(Aws::String&& value) { m_elasticGpuAssociationTimeHasBeenSet = true; m_elasticGpuAssociationTime = std::move(value); }
    inline void SetElasticGpuAssociationTime(const char* value) { m_elasticGpuAssociationTimeHasBeenSet = true; m_elasticGpuAssociationTime.assign(value); }
    inline ElasticGpuAssociation& WithElasticGpuAssociationTime(const Aws::String& value) { SetElasticGpuAssociationTime(value); return *this;}
    inline ElasticGpuAssociation& WithElasticGpuAssociationTime(Aws::String&& value) { SetElasticGpuAssociationTime(std::move(value)); return *this;}
    inline ElasticGpuAssociation& WithElasticGpuAssociationTime(const char* value) { SetElasticGpuAssociationTime(value); return *this;}
    ///@}
  private:

    Aws::String m_elasticGpuId;
    bool m_elasticGpuIdHasBeenSet = false;

    Aws::String m_elasticGpuAssociationId;
    bool m_elasticGpuAssociationIdHasBeenSet = false;

    Aws::String m_elasticGpuAssociationState;
    bool m_elasticGpuAssociationStateHasBeenSet = false;

    Aws::String m_elasticGpuAssociationTime;
    bool m_elasticGpuAssociationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
