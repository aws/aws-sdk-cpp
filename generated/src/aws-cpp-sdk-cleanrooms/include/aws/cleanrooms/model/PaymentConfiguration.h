/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/QueryComputePaymentConfig.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>An object representing the collaboration member's payment responsibilities
   * set by the collaboration creator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PaymentConfiguration">AWS
   * API Reference</a></p>
   */
  class PaymentConfiguration
  {
  public:
    AWS_CLEANROOMS_API PaymentConfiguration();
    AWS_CLEANROOMS_API PaymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PaymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator for query compute costs.</p>
     */
    inline const QueryComputePaymentConfig& GetQueryCompute() const{ return m_queryCompute; }

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator for query compute costs.</p>
     */
    inline bool QueryComputeHasBeenSet() const { return m_queryComputeHasBeenSet; }

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator for query compute costs.</p>
     */
    inline void SetQueryCompute(const QueryComputePaymentConfig& value) { m_queryComputeHasBeenSet = true; m_queryCompute = value; }

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator for query compute costs.</p>
     */
    inline void SetQueryCompute(QueryComputePaymentConfig&& value) { m_queryComputeHasBeenSet = true; m_queryCompute = std::move(value); }

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator for query compute costs.</p>
     */
    inline PaymentConfiguration& WithQueryCompute(const QueryComputePaymentConfig& value) { SetQueryCompute(value); return *this;}

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator for query compute costs.</p>
     */
    inline PaymentConfiguration& WithQueryCompute(QueryComputePaymentConfig&& value) { SetQueryCompute(std::move(value)); return *this;}

  private:

    QueryComputePaymentConfig m_queryCompute;
    bool m_queryComputeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
