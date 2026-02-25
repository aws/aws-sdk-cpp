/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/FeedAssociation.h>
#include <aws/elementalinference/model/FeedStatus.h>
#include <aws/elementalinference/model/GetOutput.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class UpdateFeedResult {
 public:
  AWS_ELEMENTALINFERENCE_API UpdateFeedResult() = default;
  AWS_ELEMENTALINFERENCE_API UpdateFeedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API UpdateFeedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the feed.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateFeedResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated or original name of the feed.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateFeedResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the feed.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateFeedResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data endpoints of the feed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDataEndpoints() const { return m_dataEndpoints; }
  template <typename DataEndpointsT = Aws::Vector<Aws::String>>
  void SetDataEndpoints(DataEndpointsT&& value) {
    m_dataEndpointsHasBeenSet = true;
    m_dataEndpoints = std::forward<DataEndpointsT>(value);
  }
  template <typename DataEndpointsT = Aws::Vector<Aws::String>>
  UpdateFeedResult& WithDataEndpoints(DataEndpointsT&& value) {
    SetDataEndpoints(std::forward<DataEndpointsT>(value));
    return *this;
  }
  template <typename DataEndpointsT = Aws::String>
  UpdateFeedResult& AddDataEndpoints(DataEndpointsT&& value) {
    m_dataEndpointsHasBeenSet = true;
    m_dataEndpoints.emplace_back(std::forward<DataEndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The array of outputs in the feed. You might have left this array unchanged,
   * or you might have changed it.</p>
   */
  inline const Aws::Vector<GetOutput>& GetOutputs() const { return m_outputs; }
  template <typename OutputsT = Aws::Vector<GetOutput>>
  void SetOutputs(OutputsT&& value) {
    m_outputsHasBeenSet = true;
    m_outputs = std::forward<OutputsT>(value);
  }
  template <typename OutputsT = Aws::Vector<GetOutput>>
  UpdateFeedResult& WithOutputs(OutputsT&& value) {
    SetOutputs(std::forward<OutputsT>(value));
    return *this;
  }
  template <typename OutputsT = GetOutput>
  UpdateFeedResult& AddOutputs(OutputsT&& value) {
    m_outputsHasBeenSet = true;
    m_outputs.emplace_back(std::forward<OutputsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the output.</p>
   */
  inline FeedStatus GetStatus() const { return m_status; }
  inline void SetStatus(FeedStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateFeedResult& WithStatus(FeedStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True means that the output was originally created in the feed by the
   * AssociateFeed operation. False means it was created using CreateFeed or
   * UpdateFeed. You will need this value if you use the UpdateFeed operation to
   * modify the list of outputs in the feed.</p>
   */
  inline const FeedAssociation& GetAssociation() const { return m_association; }
  template <typename AssociationT = FeedAssociation>
  void SetAssociation(AssociationT&& value) {
    m_associationHasBeenSet = true;
    m_association = std::forward<AssociationT>(value);
  }
  template <typename AssociationT = FeedAssociation>
  UpdateFeedResult& WithAssociation(AssociationT&& value) {
    SetAssociation(std::forward<AssociationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource currently associated with the feed, if any.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  UpdateFeedResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  UpdateFeedResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateFeedResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_id;

  Aws::Vector<Aws::String> m_dataEndpoints;

  Aws::Vector<GetOutput> m_outputs;

  FeedStatus m_status{FeedStatus::NOT_SET};

  FeedAssociation m_association;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_dataEndpointsHasBeenSet = false;
  bool m_outputsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_associationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
