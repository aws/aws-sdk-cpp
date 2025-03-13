/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-security/model/FindingIdentifier.h>
#include <utility>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class BatchGetFindingsRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API BatchGetFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetFindings"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline const Aws::Vector<FindingIdentifier>& GetFindingIdentifiers() const { return m_findingIdentifiers; }
    inline bool FindingIdentifiersHasBeenSet() const { return m_findingIdentifiersHasBeenSet; }
    template<typename FindingIdentifiersT = Aws::Vector<FindingIdentifier>>
    void SetFindingIdentifiers(FindingIdentifiersT&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers = std::forward<FindingIdentifiersT>(value); }
    template<typename FindingIdentifiersT = Aws::Vector<FindingIdentifier>>
    BatchGetFindingsRequest& WithFindingIdentifiers(FindingIdentifiersT&& value) { SetFindingIdentifiers(std::forward<FindingIdentifiersT>(value)); return *this;}
    template<typename FindingIdentifiersT = FindingIdentifier>
    BatchGetFindingsRequest& AddFindingIdentifiers(FindingIdentifiersT&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers.emplace_back(std::forward<FindingIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FindingIdentifier> m_findingIdentifiers;
    bool m_findingIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
