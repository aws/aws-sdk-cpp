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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ModelInferencePaymentConfig">AWS
   * API Reference</a></p>
   */
  class ModelInferencePaymentConfig
  {
  public:
    AWS_CLEANROOMS_API ModelInferencePaymentConfig() = default;
    AWS_CLEANROOMS_API ModelInferencePaymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ModelInferencePaymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the collaboration creator has configured the collaboration
     * member to pay for model inference costs (<code>TRUE</code>) or has not
     * configured the collaboration member to pay for model inference costs
     * (<code>FALSE</code>).</p> <p>Exactly one member can be configured to pay for
     * model inference costs. An error is returned if the collaboration creator sets a
     * <code>TRUE</code> value for more than one member in the collaboration. </p>
     * <p>If the collaboration creator hasn't specified anyone as the member paying for
     * model inference costs, then the member who can query is the default payer. An
     * error is returned if the collaboration creator sets a <code>FALSE</code> value
     * for the member who can query.</p>
     */
    inline bool GetIsResponsible() const { return m_isResponsible; }
    inline bool IsResponsibleHasBeenSet() const { return m_isResponsibleHasBeenSet; }
    inline void SetIsResponsible(bool value) { m_isResponsibleHasBeenSet = true; m_isResponsible = value; }
    inline ModelInferencePaymentConfig& WithIsResponsible(bool value) { SetIsResponsible(value); return *this;}
    ///@}
  private:

    bool m_isResponsible{false};
    bool m_isResponsibleHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
