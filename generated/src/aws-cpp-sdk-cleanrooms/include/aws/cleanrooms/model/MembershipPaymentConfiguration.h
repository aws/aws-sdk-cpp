/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/MembershipQueryComputePaymentConfig.h>
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
   * <p>An object representing the payment responsibilities accepted by the
   * collaboration member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MembershipPaymentConfiguration">AWS
   * API Reference</a></p>
   */
  class MembershipPaymentConfiguration
  {
  public:
    AWS_CLEANROOMS_API MembershipPaymentConfiguration();
    AWS_CLEANROOMS_API MembershipPaymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipPaymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The payment responsibilities accepted by the collaboration member for query
     * compute costs.</p>
     */
    inline const MembershipQueryComputePaymentConfig& GetQueryCompute() const{ return m_queryCompute; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member for query
     * compute costs.</p>
     */
    inline bool QueryComputeHasBeenSet() const { return m_queryComputeHasBeenSet; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member for query
     * compute costs.</p>
     */
    inline void SetQueryCompute(const MembershipQueryComputePaymentConfig& value) { m_queryComputeHasBeenSet = true; m_queryCompute = value; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member for query
     * compute costs.</p>
     */
    inline void SetQueryCompute(MembershipQueryComputePaymentConfig&& value) { m_queryComputeHasBeenSet = true; m_queryCompute = std::move(value); }

    /**
     * <p>The payment responsibilities accepted by the collaboration member for query
     * compute costs.</p>
     */
    inline MembershipPaymentConfiguration& WithQueryCompute(const MembershipQueryComputePaymentConfig& value) { SetQueryCompute(value); return *this;}

    /**
     * <p>The payment responsibilities accepted by the collaboration member for query
     * compute costs.</p>
     */
    inline MembershipPaymentConfiguration& WithQueryCompute(MembershipQueryComputePaymentConfig&& value) { SetQueryCompute(std::move(value)); return *this;}

  private:

    MembershipQueryComputePaymentConfig m_queryCompute;
    bool m_queryComputeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
