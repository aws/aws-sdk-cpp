/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the specific reason why a DynamoDB request was throttled and the
   * ARN of the impacted resource. This helps identify exactly what resource is being
   * throttled, what type of operation caused it, and why the throttling
   * occurred.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ThrottlingReason">AWS
   * API Reference</a></p>
   */
  class ThrottlingReason
  {
  public:
    AWS_DYNAMODB_API ThrottlingReason() = default;
    AWS_DYNAMODB_API ThrottlingReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ThrottlingReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason for throttling. The throttling reason follows a specific format:
     * <code>ResourceType+OperationType+LimitType</code>:</p> <ul> <li> <p>Resource
     * Type (What is being throttled): Table or Index</p> </li> <li> <p>Operation Type
     * (What kind of operation): Read or Write</p> </li> <li> <p>Limit Type (Why the
     * throttling occurred):</p> <ul> <li> <p>
     * <code>ProvisionedThroughputExceeded</code>: The request rate is exceeding the <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/provisioned-capacity-mode.html">provisioned
     * throughput capacity</a> (read or write capacity units) configured for a table or
     * a global secondary index (GSI) in provisioned capacity mode.</p> </li> <li> <p>
     * <code>AccountLimitExceeded</code>: The request rate has caused a table or global
     * secondary index (GSI) in on-demand mode to exceed the <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ServiceQuotas.html#default-limits-throughput">per-table
     * account-level service quotas</a> for read/write throughput in the current Amazon
     * Web Services Region. </p> </li> <li> <p>
     * <code>KeyRangeThroughputExceeded</code>: The request rate directed at a specific
     * partition key value has exceeded the <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/bp-partition-key-design.html">internal
     * partition-level throughput limits</a>, indicating uneven access patterns across
     * the table's or GSI's key space.</p> </li> <li> <p>
     * <code>MaxOnDemandThroughputExceeded</code>: The request rate has exceeded the <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/on-demand-capacity-mode-max-throughput.html">configured
     * maximum throughput limits</a> set for a table or index in on-demand capacity
     * mode.</p> </li> </ul> </li> </ul> <p>Examples of complete throttling
     * reasons:</p> <ul> <li> <p>TableReadProvisionedThroughputExceeded</p> </li> <li>
     * <p>IndexWriteAccountLimitExceeded</p> </li> </ul> <p>This helps identify exactly
     * what resource is being throttled, what type of operation caused it, and why the
     * throttling occurred.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    ThrottlingReason& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB table or index that
     * experienced the throttling event.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    ThrottlingReason& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
