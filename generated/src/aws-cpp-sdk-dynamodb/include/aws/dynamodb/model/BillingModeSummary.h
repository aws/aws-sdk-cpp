/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains the details for the read/write capacity mode. This page talks about
   * <code>PROVISIONED</code> and <code>PAY_PER_REQUEST</code> billing modes. For
   * more information about these modes, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html">Read/write
   * capacity mode</a>.</p>  <p>You may need to switch to on-demand mode at
   * least once in order to return a <code>BillingModeSummary</code> response.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BillingModeSummary">AWS
   * API Reference</a></p>
   */
  class BillingModeSummary
  {
  public:
    AWS_DYNAMODB_API BillingModeSummary();
    AWS_DYNAMODB_API BillingModeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BillingModeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline const BillingMode& GetBillingMode() const{ return m_billingMode; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline void SetBillingMode(const BillingMode& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline void SetBillingMode(BillingMode&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline BillingModeSummary& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline BillingModeSummary& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}


    /**
     * <p>Represents the time when <code>PAY_PER_REQUEST</code> was last set as the
     * read/write capacity mode.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateToPayPerRequestDateTime() const{ return m_lastUpdateToPayPerRequestDateTime; }

    /**
     * <p>Represents the time when <code>PAY_PER_REQUEST</code> was last set as the
     * read/write capacity mode.</p>
     */
    inline bool LastUpdateToPayPerRequestDateTimeHasBeenSet() const { return m_lastUpdateToPayPerRequestDateTimeHasBeenSet; }

    /**
     * <p>Represents the time when <code>PAY_PER_REQUEST</code> was last set as the
     * read/write capacity mode.</p>
     */
    inline void SetLastUpdateToPayPerRequestDateTime(const Aws::Utils::DateTime& value) { m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true; m_lastUpdateToPayPerRequestDateTime = value; }

    /**
     * <p>Represents the time when <code>PAY_PER_REQUEST</code> was last set as the
     * read/write capacity mode.</p>
     */
    inline void SetLastUpdateToPayPerRequestDateTime(Aws::Utils::DateTime&& value) { m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true; m_lastUpdateToPayPerRequestDateTime = std::move(value); }

    /**
     * <p>Represents the time when <code>PAY_PER_REQUEST</code> was last set as the
     * read/write capacity mode.</p>
     */
    inline BillingModeSummary& WithLastUpdateToPayPerRequestDateTime(const Aws::Utils::DateTime& value) { SetLastUpdateToPayPerRequestDateTime(value); return *this;}

    /**
     * <p>Represents the time when <code>PAY_PER_REQUEST</code> was last set as the
     * read/write capacity mode.</p>
     */
    inline BillingModeSummary& WithLastUpdateToPayPerRequestDateTime(Aws::Utils::DateTime&& value) { SetLastUpdateToPayPerRequestDateTime(std::move(value)); return *this;}

  private:

    BillingMode m_billingMode;
    bool m_billingModeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateToPayPerRequestDateTime;
    bool m_lastUpdateToPayPerRequestDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
