/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Contains the details for the read/write capacity mode.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BillingModeSummary">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API BillingModeSummary
  {
  public:
    BillingModeSummary();
    BillingModeSummary(Aws::Utils::Json::JsonView jsonValue);
    BillingModeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_billingModeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateToPayPerRequestDateTime;
    bool m_lastUpdateToPayPerRequestDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
