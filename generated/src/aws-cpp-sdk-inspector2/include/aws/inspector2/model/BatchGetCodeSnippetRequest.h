/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class BatchGetCodeSnippetRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API BatchGetCodeSnippetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCodeSnippet"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of finding ARNs for the findings you want to retrieve code snippets
     * from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingArns() const { return m_findingArns; }
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }
    template<typename FindingArnsT = Aws::Vector<Aws::String>>
    void SetFindingArns(FindingArnsT&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::forward<FindingArnsT>(value); }
    template<typename FindingArnsT = Aws::Vector<Aws::String>>
    BatchGetCodeSnippetRequest& WithFindingArns(FindingArnsT&& value) { SetFindingArns(std::forward<FindingArnsT>(value)); return *this;}
    template<typename FindingArnsT = Aws::String>
    BatchGetCodeSnippetRequest& AddFindingArns(FindingArnsT&& value) { m_findingArnsHasBeenSet = true; m_findingArns.emplace_back(std::forward<FindingArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
