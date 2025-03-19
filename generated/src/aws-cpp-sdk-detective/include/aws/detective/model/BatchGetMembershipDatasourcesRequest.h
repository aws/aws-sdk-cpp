/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class BatchGetMembershipDatasourcesRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API BatchGetMembershipDatasourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetMembershipDatasources"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGraphArns() const { return m_graphArns; }
    inline bool GraphArnsHasBeenSet() const { return m_graphArnsHasBeenSet; }
    template<typename GraphArnsT = Aws::Vector<Aws::String>>
    void SetGraphArns(GraphArnsT&& value) { m_graphArnsHasBeenSet = true; m_graphArns = std::forward<GraphArnsT>(value); }
    template<typename GraphArnsT = Aws::Vector<Aws::String>>
    BatchGetMembershipDatasourcesRequest& WithGraphArns(GraphArnsT&& value) { SetGraphArns(std::forward<GraphArnsT>(value)); return *this;}
    template<typename GraphArnsT = Aws::String>
    BatchGetMembershipDatasourcesRequest& AddGraphArns(GraphArnsT&& value) { m_graphArnsHasBeenSet = true; m_graphArns.emplace_back(std::forward<GraphArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_graphArns;
    bool m_graphArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
