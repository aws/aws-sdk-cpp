/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <a>ListObjectPolicies</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListObjectPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class BatchListObjectPoliciesResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListObjectPoliciesResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchListObjectPoliciesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListObjectPoliciesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttachedPolicyIds() const { return m_attachedPolicyIds; }
    inline bool AttachedPolicyIdsHasBeenSet() const { return m_attachedPolicyIdsHasBeenSet; }
    template<typename AttachedPolicyIdsT = Aws::Vector<Aws::String>>
    void SetAttachedPolicyIds(AttachedPolicyIdsT&& value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds = std::forward<AttachedPolicyIdsT>(value); }
    template<typename AttachedPolicyIdsT = Aws::Vector<Aws::String>>
    BatchListObjectPoliciesResponse& WithAttachedPolicyIds(AttachedPolicyIdsT&& value) { SetAttachedPolicyIds(std::forward<AttachedPolicyIdsT>(value)); return *this;}
    template<typename AttachedPolicyIdsT = Aws::String>
    BatchListObjectPoliciesResponse& AddAttachedPolicyIds(AttachedPolicyIdsT&& value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds.emplace_back(std::forward<AttachedPolicyIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchListObjectPoliciesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_attachedPolicyIds;
    bool m_attachedPolicyIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
