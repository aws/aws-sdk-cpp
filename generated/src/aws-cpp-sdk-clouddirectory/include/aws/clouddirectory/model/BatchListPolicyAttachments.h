﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ObjectReference.h>
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
   * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
   * attached inside a <a>BatchRead</a> operation. For more information, see
   * <a>ListPolicyAttachments</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListPolicyAttachments">AWS
   * API Reference</a></p>
   */
  class BatchListPolicyAttachments
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachments() = default;
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachments(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListPolicyAttachments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reference that identifies the policy object.</p>
     */
    inline const ObjectReference& GetPolicyReference() const { return m_policyReference; }
    inline bool PolicyReferenceHasBeenSet() const { return m_policyReferenceHasBeenSet; }
    template<typename PolicyReferenceT = ObjectReference>
    void SetPolicyReference(PolicyReferenceT&& value) { m_policyReferenceHasBeenSet = true; m_policyReference = std::forward<PolicyReferenceT>(value); }
    template<typename PolicyReferenceT = ObjectReference>
    BatchListPolicyAttachments& WithPolicyReference(PolicyReferenceT&& value) { SetPolicyReference(std::forward<PolicyReferenceT>(value)); return *this;}
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
    BatchListPolicyAttachments& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline BatchListPolicyAttachments& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ObjectReference m_policyReference;
    bool m_policyReferenceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
