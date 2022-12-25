/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/Cloud9Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Cloud9
{
namespace Model
{

  /**
   */
  class DescribeEnvironmentsRequest : public Cloud9Request
  {
  public:
    AWS_CLOUD9_API DescribeEnvironmentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEnvironments"; }

    AWS_CLOUD9_API Aws::String SerializePayload() const override;

    AWS_CLOUD9_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironmentIds() const{ return m_environmentIds; }

    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline bool EnvironmentIdsHasBeenSet() const { return m_environmentIdsHasBeenSet; }

    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline void SetEnvironmentIds(const Aws::Vector<Aws::String>& value) { m_environmentIdsHasBeenSet = true; m_environmentIds = value; }

    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline void SetEnvironmentIds(Aws::Vector<Aws::String>&& value) { m_environmentIdsHasBeenSet = true; m_environmentIds = std::move(value); }

    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline DescribeEnvironmentsRequest& WithEnvironmentIds(const Aws::Vector<Aws::String>& value) { SetEnvironmentIds(value); return *this;}

    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline DescribeEnvironmentsRequest& WithEnvironmentIds(Aws::Vector<Aws::String>&& value) { SetEnvironmentIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentIds(const Aws::String& value) { m_environmentIdsHasBeenSet = true; m_environmentIds.push_back(value); return *this; }

    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentIds(Aws::String&& value) { m_environmentIdsHasBeenSet = true; m_environmentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of individual environments to get information about.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentIds(const char* value) { m_environmentIdsHasBeenSet = true; m_environmentIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_environmentIds;
    bool m_environmentIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
