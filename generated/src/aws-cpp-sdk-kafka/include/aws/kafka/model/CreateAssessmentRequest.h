/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/AssessmentParameters.h>
#include <aws/kafka/model/AssessmentType.h>

#include <utility>

namespace Aws {
namespace Kafka {
namespace Model {

/**
 * <p>Creates a new assessment for a cluster. Kicks off an asynchronous scan and
 * returns immediately with an assessment ARN and status.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateAssessmentRequest">AWS
 * API Reference</a></p>
 */
class CreateAssessmentRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API CreateAssessmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAssessment"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Optional type-specific parameters for the assessment.</p>
   */
  inline const AssessmentParameters& GetAssessmentParameters() const { return m_assessmentParameters; }
  inline bool AssessmentParametersHasBeenSet() const { return m_assessmentParametersHasBeenSet; }
  template <typename AssessmentParametersT = AssessmentParameters>
  void SetAssessmentParameters(AssessmentParametersT&& value) {
    m_assessmentParametersHasBeenSet = true;
    m_assessmentParameters = std::forward<AssessmentParametersT>(value);
  }
  template <typename AssessmentParametersT = AssessmentParameters>
  CreateAssessmentRequest& WithAssessmentParameters(AssessmentParametersT&& value) {
    SetAssessmentParameters(std::forward<AssessmentParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of assessment to perform.</p>
   */
  inline AssessmentType GetAssessmentType() const { return m_assessmentType; }
  inline bool AssessmentTypeHasBeenSet() const { return m_assessmentTypeHasBeenSet; }
  inline void SetAssessmentType(AssessmentType value) {
    m_assessmentTypeHasBeenSet = true;
    m_assessmentType = value;
  }
  inline CreateAssessmentRequest& WithAssessmentType(AssessmentType value) {
    SetAssessmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster to assess.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  CreateAssessmentRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to attach to the assessment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateAssessmentRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateAssessmentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  AssessmentParameters m_assessmentParameters;

  AssessmentType m_assessmentType{AssessmentType::NOT_SET};

  Aws::String m_clusterArn;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_assessmentParametersHasBeenSet = false;
  bool m_assessmentTypeHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
