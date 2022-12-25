/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Limits on the number of instances that can be created in OpenSearch Service
   * for a given instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InstanceCountLimits">AWS
   * API Reference</a></p>
   */
  class InstanceCountLimits
  {
  public:
    AWS_OPENSEARCHSERVICE_API InstanceCountLimits();
    AWS_OPENSEARCHSERVICE_API InstanceCountLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API InstanceCountLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum allowed number of instances.</p>
     */
    inline int GetMinimumInstanceCount() const{ return m_minimumInstanceCount; }

    /**
     * <p>The maximum allowed number of instances.</p>
     */
    inline bool MinimumInstanceCountHasBeenSet() const { return m_minimumInstanceCountHasBeenSet; }

    /**
     * <p>The maximum allowed number of instances.</p>
     */
    inline void SetMinimumInstanceCount(int value) { m_minimumInstanceCountHasBeenSet = true; m_minimumInstanceCount = value; }

    /**
     * <p>The maximum allowed number of instances.</p>
     */
    inline InstanceCountLimits& WithMinimumInstanceCount(int value) { SetMinimumInstanceCount(value); return *this;}


    /**
     * <p>The minimum allowed number of instances.</p>
     */
    inline int GetMaximumInstanceCount() const{ return m_maximumInstanceCount; }

    /**
     * <p>The minimum allowed number of instances.</p>
     */
    inline bool MaximumInstanceCountHasBeenSet() const { return m_maximumInstanceCountHasBeenSet; }

    /**
     * <p>The minimum allowed number of instances.</p>
     */
    inline void SetMaximumInstanceCount(int value) { m_maximumInstanceCountHasBeenSet = true; m_maximumInstanceCount = value; }

    /**
     * <p>The minimum allowed number of instances.</p>
     */
    inline InstanceCountLimits& WithMaximumInstanceCount(int value) { SetMaximumInstanceCount(value); return *this;}

  private:

    int m_minimumInstanceCount;
    bool m_minimumInstanceCountHasBeenSet = false;

    int m_maximumInstanceCount;
    bool m_maximumInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
