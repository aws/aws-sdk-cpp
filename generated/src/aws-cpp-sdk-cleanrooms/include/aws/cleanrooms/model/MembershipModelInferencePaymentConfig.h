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
   * <p>An object representing the collaboration member's model inference payment
   * responsibilities set by the collaboration creator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MembershipModelInferencePaymentConfig">AWS
   * API Reference</a></p>
   */
  class MembershipModelInferencePaymentConfig
  {
  public:
    AWS_CLEANROOMS_API MembershipModelInferencePaymentConfig() = default;
    AWS_CLEANROOMS_API MembershipModelInferencePaymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipModelInferencePaymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the collaboration member has accepted to pay for model
     * inference costs (<code>TRUE</code>) or has not accepted to pay for model
     * inference costs (<code>FALSE</code>).</p> <p>If the collaboration creator has
     * not specified anyone to pay for model inference costs, then the member who can
     * query is the default payer. </p> <p>An error message is returned for the
     * following reasons: </p> <ul> <li> <p>If you set the value to <code>FALSE</code>
     * but you are responsible to pay for model inference costs. </p> </li> <li> <p>If
     * you set the value to <code>TRUE</code> but you are not responsible to pay for
     * model inference costs. </p> </li> </ul>
     */
    inline bool GetIsResponsible() const { return m_isResponsible; }
    inline bool IsResponsibleHasBeenSet() const { return m_isResponsibleHasBeenSet; }
    inline void SetIsResponsible(bool value) { m_isResponsibleHasBeenSet = true; m_isResponsible = value; }
    inline MembershipModelInferencePaymentConfig& WithIsResponsible(bool value) { SetIsResponsible(value); return *this;}
    ///@}
  private:

    bool m_isResponsible{false};
    bool m_isResponsibleHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
