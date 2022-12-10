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
    AWS_DETECTIVE_API BatchGetMembershipDatasourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetMembershipDatasources"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGraphArns() const{ return m_graphArns; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline bool GraphArnsHasBeenSet() const { return m_graphArnsHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArns(const Aws::Vector<Aws::String>& value) { m_graphArnsHasBeenSet = true; m_graphArns = value; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArns(Aws::Vector<Aws::String>&& value) { m_graphArnsHasBeenSet = true; m_graphArns = std::move(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline BatchGetMembershipDatasourcesRequest& WithGraphArns(const Aws::Vector<Aws::String>& value) { SetGraphArns(value); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline BatchGetMembershipDatasourcesRequest& WithGraphArns(Aws::Vector<Aws::String>&& value) { SetGraphArns(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline BatchGetMembershipDatasourcesRequest& AddGraphArns(const Aws::String& value) { m_graphArnsHasBeenSet = true; m_graphArns.push_back(value); return *this; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline BatchGetMembershipDatasourcesRequest& AddGraphArns(Aws::String&& value) { m_graphArnsHasBeenSet = true; m_graphArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline BatchGetMembershipDatasourcesRequest& AddGraphArns(const char* value) { m_graphArnsHasBeenSet = true; m_graphArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_graphArns;
    bool m_graphArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
