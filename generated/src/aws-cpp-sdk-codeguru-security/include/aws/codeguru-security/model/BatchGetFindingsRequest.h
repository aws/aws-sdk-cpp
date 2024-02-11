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
    AWS_CODEGURUSECURITY_API BatchGetFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetFindings"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline const Aws::Vector<FindingIdentifier>& GetFindingIdentifiers() const{ return m_findingIdentifiers; }

    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline bool FindingIdentifiersHasBeenSet() const { return m_findingIdentifiersHasBeenSet; }

    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline void SetFindingIdentifiers(const Aws::Vector<FindingIdentifier>& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers = value; }

    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline void SetFindingIdentifiers(Aws::Vector<FindingIdentifier>&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers = std::move(value); }

    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline BatchGetFindingsRequest& WithFindingIdentifiers(const Aws::Vector<FindingIdentifier>& value) { SetFindingIdentifiers(value); return *this;}

    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline BatchGetFindingsRequest& WithFindingIdentifiers(Aws::Vector<FindingIdentifier>&& value) { SetFindingIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline BatchGetFindingsRequest& AddFindingIdentifiers(const FindingIdentifier& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of finding identifiers. Each identifier consists of a
     * <code>scanName</code> and a <code>findingId</code>. You retrieve the
     * <code>findingId</code> when you call <code>GetFindings</code>.</p>
     */
    inline BatchGetFindingsRequest& AddFindingIdentifiers(FindingIdentifier&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FindingIdentifier> m_findingIdentifiers;
    bool m_findingIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
