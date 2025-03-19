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
   * set by the collaboration creator for query and job compute costs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/JobComputePaymentConfig">AWS
   * API Reference</a></p>
   */
  class JobComputePaymentConfig
  {
  public:
    AWS_CLEANROOMS_API JobComputePaymentConfig() = default;
    AWS_CLEANROOMS_API JobComputePaymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API JobComputePaymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the collaboration creator has configured the collaboration
     * member to pay for query and job compute costs (<code>TRUE</code>) or has not
     * configured the collaboration member to pay for query and job compute costs
     * (<code>FALSE</code>).</p> <p>Exactly one member can be configured to pay for
     * query and job compute costs. An error is returned if the collaboration creator
     * sets a <code>TRUE</code> value for more than one member in the collaboration.
     * </p> <p>An error is returned if the collaboration creator sets a
     * <code>FALSE</code> value for the member who can run queries and jobs.</p>
     */
    inline bool GetIsResponsible() const { return m_isResponsible; }
    inline bool IsResponsibleHasBeenSet() const { return m_isResponsibleHasBeenSet; }
    inline void SetIsResponsible(bool value) { m_isResponsibleHasBeenSet = true; m_isResponsible = value; }
    inline JobComputePaymentConfig& WithIsResponsible(bool value) { SetIsResponsible(value); return *this;}
    ///@}
  private:

    bool m_isResponsible{false};
    bool m_isResponsibleHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
