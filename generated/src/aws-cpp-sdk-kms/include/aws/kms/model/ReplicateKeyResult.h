/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/KeyMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  class ReplicateKeyResult
  {
  public:
    AWS_KMS_API ReplicateKeyResult() = default;
    AWS_KMS_API ReplicateKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ReplicateKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Displays details about the new replica key, including its Amazon Resource
     * Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
     * states of KMS keys</a>. It also includes the ARN and Amazon Web Services Region
     * of its primary key and other replica keys.</p>
     */
    inline const KeyMetadata& GetReplicaKeyMetadata() const { return m_replicaKeyMetadata; }
    template<typename ReplicaKeyMetadataT = KeyMetadata>
    void SetReplicaKeyMetadata(ReplicaKeyMetadataT&& value) { m_replicaKeyMetadataHasBeenSet = true; m_replicaKeyMetadata = std::forward<ReplicaKeyMetadataT>(value); }
    template<typename ReplicaKeyMetadataT = KeyMetadata>
    ReplicateKeyResult& WithReplicaKeyMetadata(ReplicaKeyMetadataT&& value) { SetReplicaKeyMetadata(std::forward<ReplicaKeyMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key policy of the new replica key. The value is a key policy document in
     * JSON format.</p>
     */
    inline const Aws::String& GetReplicaPolicy() const { return m_replicaPolicy; }
    template<typename ReplicaPolicyT = Aws::String>
    void SetReplicaPolicy(ReplicaPolicyT&& value) { m_replicaPolicyHasBeenSet = true; m_replicaPolicy = std::forward<ReplicaPolicyT>(value); }
    template<typename ReplicaPolicyT = Aws::String>
    ReplicateKeyResult& WithReplicaPolicy(ReplicaPolicyT&& value) { SetReplicaPolicy(std::forward<ReplicaPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags on the new replica key. The value is a list of tag key and tag value
     * pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetReplicaTags() const { return m_replicaTags; }
    template<typename ReplicaTagsT = Aws::Vector<Tag>>
    void SetReplicaTags(ReplicaTagsT&& value) { m_replicaTagsHasBeenSet = true; m_replicaTags = std::forward<ReplicaTagsT>(value); }
    template<typename ReplicaTagsT = Aws::Vector<Tag>>
    ReplicateKeyResult& WithReplicaTags(ReplicaTagsT&& value) { SetReplicaTags(std::forward<ReplicaTagsT>(value)); return *this;}
    template<typename ReplicaTagsT = Tag>
    ReplicateKeyResult& AddReplicaTags(ReplicaTagsT&& value) { m_replicaTagsHasBeenSet = true; m_replicaTags.emplace_back(std::forward<ReplicaTagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReplicateKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    KeyMetadata m_replicaKeyMetadata;
    bool m_replicaKeyMetadataHasBeenSet = false;

    Aws::String m_replicaPolicy;
    bool m_replicaPolicyHasBeenSet = false;

    Aws::Vector<Tag> m_replicaTags;
    bool m_replicaTagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
