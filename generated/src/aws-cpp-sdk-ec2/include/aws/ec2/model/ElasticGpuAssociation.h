/**
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
    AWS_EC2_API ElasticGpuAssociation() = default;
    AWS_EC2_API ElasticGpuAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticGpuAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    ElasticGpuAssociation& WithElasticGpuId(ElasticGpuIdT&& value) { SetElasticGpuId(std::forward<ElasticGpuIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationId() const { return m_elasticGpuAssociationId; }
    inline bool ElasticGpuAssociationIdHasBeenSet() const { return m_elasticGpuAssociationIdHasBeenSet; }
    template<typename ElasticGpuAssociationIdT = Aws::String>
    void SetElasticGpuAssociationId(ElasticGpuAssociationIdT&& value) { m_elasticGpuAssociationIdHasBeenSet = true; m_elasticGpuAssociationId = std::forward<ElasticGpuAssociationIdT>(value); }
    template<typename ElasticGpuAssociationIdT = Aws::String>
    ElasticGpuAssociation& WithElasticGpuAssociationId(ElasticGpuAssociationIdT&& value) { SetElasticGpuAssociationId(std::forward<ElasticGpuAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association between the instance and the Elastic Graphics
     * accelerator.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationState() const { return m_elasticGpuAssociationState; }
    inline bool ElasticGpuAssociationStateHasBeenSet() const { return m_elasticGpuAssociationStateHasBeenSet; }
    template<typename ElasticGpuAssociationStateT = Aws::String>
    void SetElasticGpuAssociationState(ElasticGpuAssociationStateT&& value) { m_elasticGpuAssociationStateHasBeenSet = true; m_elasticGpuAssociationState = std::forward<ElasticGpuAssociationStateT>(value); }
    template<typename ElasticGpuAssociationStateT = Aws::String>
    ElasticGpuAssociation& WithElasticGpuAssociationState(ElasticGpuAssociationStateT&& value) { SetElasticGpuAssociationState(std::forward<ElasticGpuAssociationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the Elastic Graphics accelerator was associated with the
     * instance.</p>
     */
    inline const Aws::String& GetElasticGpuAssociationTime() const { return m_elasticGpuAssociationTime; }
    inline bool ElasticGpuAssociationTimeHasBeenSet() const { return m_elasticGpuAssociationTimeHasBeenSet; }
    template<typename ElasticGpuAssociationTimeT = Aws::String>
    void SetElasticGpuAssociationTime(ElasticGpuAssociationTimeT&& value) { m_elasticGpuAssociationTimeHasBeenSet = true; m_elasticGpuAssociationTime = std::forward<ElasticGpuAssociationTimeT>(value); }
    template<typename ElasticGpuAssociationTimeT = Aws::String>
    ElasticGpuAssociation& WithElasticGpuAssociationTime(ElasticGpuAssociationTimeT&& value) { SetElasticGpuAssociationTime(std::forward<ElasticGpuAssociationTimeT>(value)); return *this;}
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
