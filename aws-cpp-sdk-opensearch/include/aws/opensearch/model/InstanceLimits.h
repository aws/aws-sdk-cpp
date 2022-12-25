/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InstanceCountLimits.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Instance-related attributes that are available for a given instance
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InstanceLimits">AWS
   * API Reference</a></p>
   */
  class InstanceLimits
  {
  public:
    AWS_OPENSEARCHSERVICE_API InstanceLimits();
    AWS_OPENSEARCHSERVICE_API InstanceLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API InstanceLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Limits on the number of instances that can be created for a given instance
     * type.</p>
     */
    inline const InstanceCountLimits& GetInstanceCountLimits() const{ return m_instanceCountLimits; }

    /**
     * <p>Limits on the number of instances that can be created for a given instance
     * type.</p>
     */
    inline bool InstanceCountLimitsHasBeenSet() const { return m_instanceCountLimitsHasBeenSet; }

    /**
     * <p>Limits on the number of instances that can be created for a given instance
     * type.</p>
     */
    inline void SetInstanceCountLimits(const InstanceCountLimits& value) { m_instanceCountLimitsHasBeenSet = true; m_instanceCountLimits = value; }

    /**
     * <p>Limits on the number of instances that can be created for a given instance
     * type.</p>
     */
    inline void SetInstanceCountLimits(InstanceCountLimits&& value) { m_instanceCountLimitsHasBeenSet = true; m_instanceCountLimits = std::move(value); }

    /**
     * <p>Limits on the number of instances that can be created for a given instance
     * type.</p>
     */
    inline InstanceLimits& WithInstanceCountLimits(const InstanceCountLimits& value) { SetInstanceCountLimits(value); return *this;}

    /**
     * <p>Limits on the number of instances that can be created for a given instance
     * type.</p>
     */
    inline InstanceLimits& WithInstanceCountLimits(InstanceCountLimits&& value) { SetInstanceCountLimits(std::move(value)); return *this;}

  private:

    InstanceCountLimits m_instanceCountLimits;
    bool m_instanceCountLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
