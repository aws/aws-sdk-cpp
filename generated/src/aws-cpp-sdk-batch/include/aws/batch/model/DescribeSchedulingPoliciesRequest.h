﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * <code>DescribeSchedulingPolicies</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeSchedulingPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeSchedulingPoliciesRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DescribeSchedulingPoliciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSchedulingPolicies"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of up to 100 scheduling policy Amazon Resource Name (ARN) entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const { return m_arns; }
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    void SetArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns = std::forward<ArnsT>(value); }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    DescribeSchedulingPoliciesRequest& WithArns(ArnsT&& value) { SetArns(std::forward<ArnsT>(value)); return *this;}
    template<typename ArnsT = Aws::String>
    DescribeSchedulingPoliciesRequest& AddArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns.emplace_back(std::forward<ArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
