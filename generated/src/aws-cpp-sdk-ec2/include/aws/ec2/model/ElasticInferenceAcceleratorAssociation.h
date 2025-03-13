/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   *  <p>Amazon Elastic Inference is no longer available.</p>  <p>
   * Describes the association between an instance and an elastic inference
   * accelerator. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticInferenceAcceleratorAssociation">AWS
   * API Reference</a></p>
   */
  class ElasticInferenceAcceleratorAssociation
  {
  public:
    AWS_EC2_API ElasticInferenceAcceleratorAssociation() = default;
    AWS_EC2_API ElasticInferenceAcceleratorAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticInferenceAcceleratorAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the elastic inference accelerator. </p>
     */
    inline const Aws::String& GetElasticInferenceAcceleratorArn() const { return m_elasticInferenceAcceleratorArn; }
    inline bool ElasticInferenceAcceleratorArnHasBeenSet() const { return m_elasticInferenceAcceleratorArnHasBeenSet; }
    template<typename ElasticInferenceAcceleratorArnT = Aws::String>
    void SetElasticInferenceAcceleratorArn(ElasticInferenceAcceleratorArnT&& value) { m_elasticInferenceAcceleratorArnHasBeenSet = true; m_elasticInferenceAcceleratorArn = std::forward<ElasticInferenceAcceleratorArnT>(value); }
    template<typename ElasticInferenceAcceleratorArnT = Aws::String>
    ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorArn(ElasticInferenceAcceleratorArnT&& value) { SetElasticInferenceAcceleratorArn(std::forward<ElasticInferenceAcceleratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the association. </p>
     */
    inline const Aws::String& GetElasticInferenceAcceleratorAssociationId() const { return m_elasticInferenceAcceleratorAssociationId; }
    inline bool ElasticInferenceAcceleratorAssociationIdHasBeenSet() const { return m_elasticInferenceAcceleratorAssociationIdHasBeenSet; }
    template<typename ElasticInferenceAcceleratorAssociationIdT = Aws::String>
    void SetElasticInferenceAcceleratorAssociationId(ElasticInferenceAcceleratorAssociationIdT&& value) { m_elasticInferenceAcceleratorAssociationIdHasBeenSet = true; m_elasticInferenceAcceleratorAssociationId = std::forward<ElasticInferenceAcceleratorAssociationIdT>(value); }
    template<typename ElasticInferenceAcceleratorAssociationIdT = Aws::String>
    ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationId(ElasticInferenceAcceleratorAssociationIdT&& value) { SetElasticInferenceAcceleratorAssociationId(std::forward<ElasticInferenceAcceleratorAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of the elastic inference accelerator. </p>
     */
    inline const Aws::String& GetElasticInferenceAcceleratorAssociationState() const { return m_elasticInferenceAcceleratorAssociationState; }
    inline bool ElasticInferenceAcceleratorAssociationStateHasBeenSet() const { return m_elasticInferenceAcceleratorAssociationStateHasBeenSet; }
    template<typename ElasticInferenceAcceleratorAssociationStateT = Aws::String>
    void SetElasticInferenceAcceleratorAssociationState(ElasticInferenceAcceleratorAssociationStateT&& value) { m_elasticInferenceAcceleratorAssociationStateHasBeenSet = true; m_elasticInferenceAcceleratorAssociationState = std::forward<ElasticInferenceAcceleratorAssociationStateT>(value); }
    template<typename ElasticInferenceAcceleratorAssociationStateT = Aws::String>
    ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationState(ElasticInferenceAcceleratorAssociationStateT&& value) { SetElasticInferenceAcceleratorAssociationState(std::forward<ElasticInferenceAcceleratorAssociationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the elastic inference accelerator is associated with an
     * instance. </p>
     */
    inline const Aws::Utils::DateTime& GetElasticInferenceAcceleratorAssociationTime() const { return m_elasticInferenceAcceleratorAssociationTime; }
    inline bool ElasticInferenceAcceleratorAssociationTimeHasBeenSet() const { return m_elasticInferenceAcceleratorAssociationTimeHasBeenSet; }
    template<typename ElasticInferenceAcceleratorAssociationTimeT = Aws::Utils::DateTime>
    void SetElasticInferenceAcceleratorAssociationTime(ElasticInferenceAcceleratorAssociationTimeT&& value) { m_elasticInferenceAcceleratorAssociationTimeHasBeenSet = true; m_elasticInferenceAcceleratorAssociationTime = std::forward<ElasticInferenceAcceleratorAssociationTimeT>(value); }
    template<typename ElasticInferenceAcceleratorAssociationTimeT = Aws::Utils::DateTime>
    ElasticInferenceAcceleratorAssociation& WithElasticInferenceAcceleratorAssociationTime(ElasticInferenceAcceleratorAssociationTimeT&& value) { SetElasticInferenceAcceleratorAssociationTime(std::forward<ElasticInferenceAcceleratorAssociationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_elasticInferenceAcceleratorArn;
    bool m_elasticInferenceAcceleratorArnHasBeenSet = false;

    Aws::String m_elasticInferenceAcceleratorAssociationId;
    bool m_elasticInferenceAcceleratorAssociationIdHasBeenSet = false;

    Aws::String m_elasticInferenceAcceleratorAssociationState;
    bool m_elasticInferenceAcceleratorAssociationStateHasBeenSet = false;

    Aws::Utils::DateTime m_elasticInferenceAcceleratorAssociationTime{};
    bool m_elasticInferenceAcceleratorAssociationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
