/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>

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
   * set by the collaboration creator for query compute costs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/QueryComputePaymentConfig">AWS
   * API Reference</a></p>
   */
  class QueryComputePaymentConfig
  {
  public:
    AWS_CLEANROOMS_API QueryComputePaymentConfig();
    AWS_CLEANROOMS_API QueryComputePaymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API QueryComputePaymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the collaboration creator has configured the collaboration
     * member to pay for query compute costs (<code>TRUE</code>) or has not configured
     * the collaboration member to pay for query compute costs
     * (<code>FALSE</code>).</p> <p>Exactly one member can be configured to pay for
     * query compute costs. An error is returned if the collaboration creator sets a
     * <code>TRUE</code> value for more than one member in the collaboration. </p>
     * <p>If the collaboration creator hasn't specified anyone as the member paying for
     * query compute costs, then the member who can query is the default payer. An
     * error is returned if the collaboration creator sets a <code>FALSE</code> value
     * for the member who can query.</p>
     */
    inline bool GetIsResponsible() const{ return m_isResponsible; }

    /**
     * <p>Indicates whether the collaboration creator has configured the collaboration
     * member to pay for query compute costs (<code>TRUE</code>) or has not configured
     * the collaboration member to pay for query compute costs
     * (<code>FALSE</code>).</p> <p>Exactly one member can be configured to pay for
     * query compute costs. An error is returned if the collaboration creator sets a
     * <code>TRUE</code> value for more than one member in the collaboration. </p>
     * <p>If the collaboration creator hasn't specified anyone as the member paying for
     * query compute costs, then the member who can query is the default payer. An
     * error is returned if the collaboration creator sets a <code>FALSE</code> value
     * for the member who can query.</p>
     */
    inline bool IsResponsibleHasBeenSet() const { return m_isResponsibleHasBeenSet; }

    /**
     * <p>Indicates whether the collaboration creator has configured the collaboration
     * member to pay for query compute costs (<code>TRUE</code>) or has not configured
     * the collaboration member to pay for query compute costs
     * (<code>FALSE</code>).</p> <p>Exactly one member can be configured to pay for
     * query compute costs. An error is returned if the collaboration creator sets a
     * <code>TRUE</code> value for more than one member in the collaboration. </p>
     * <p>If the collaboration creator hasn't specified anyone as the member paying for
     * query compute costs, then the member who can query is the default payer. An
     * error is returned if the collaboration creator sets a <code>FALSE</code> value
     * for the member who can query.</p>
     */
    inline void SetIsResponsible(bool value) { m_isResponsibleHasBeenSet = true; m_isResponsible = value; }

    /**
     * <p>Indicates whether the collaboration creator has configured the collaboration
     * member to pay for query compute costs (<code>TRUE</code>) or has not configured
     * the collaboration member to pay for query compute costs
     * (<code>FALSE</code>).</p> <p>Exactly one member can be configured to pay for
     * query compute costs. An error is returned if the collaboration creator sets a
     * <code>TRUE</code> value for more than one member in the collaboration. </p>
     * <p>If the collaboration creator hasn't specified anyone as the member paying for
     * query compute costs, then the member who can query is the default payer. An
     * error is returned if the collaboration creator sets a <code>FALSE</code> value
     * for the member who can query.</p>
     */
    inline QueryComputePaymentConfig& WithIsResponsible(bool value) { SetIsResponsible(value); return *this;}

  private:

    bool m_isResponsible;
    bool m_isResponsibleHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
