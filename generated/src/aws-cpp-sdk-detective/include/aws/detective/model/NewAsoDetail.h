/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details new Autonomous System Organizations (ASOs) used either at the
   * resource or account level. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/NewAsoDetail">AWS
   * API Reference</a></p>
   */
  class NewAsoDetail
  {
  public:
    AWS_DETECTIVE_API NewAsoDetail() = default;
    AWS_DETECTIVE_API NewAsoDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API NewAsoDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline const Aws::String& GetAso() const { return m_aso; }
    inline bool AsoHasBeenSet() const { return m_asoHasBeenSet; }
    template<typename AsoT = Aws::String>
    void SetAso(AsoT&& value) { m_asoHasBeenSet = true; m_aso = std::forward<AsoT>(value); }
    template<typename AsoT = Aws::String>
    NewAsoDetail& WithAso(AsoT&& value) { SetAso(std::forward<AsoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks if the Autonomous System Organization (ASO) is new for the entire
     * account.</p>
     */
    inline bool GetIsNewForEntireAccount() const { return m_isNewForEntireAccount; }
    inline bool IsNewForEntireAccountHasBeenSet() const { return m_isNewForEntireAccountHasBeenSet; }
    inline void SetIsNewForEntireAccount(bool value) { m_isNewForEntireAccountHasBeenSet = true; m_isNewForEntireAccount = value; }
    inline NewAsoDetail& WithIsNewForEntireAccount(bool value) { SetIsNewForEntireAccount(value); return *this;}
    ///@}
  private:

    Aws::String m_aso;
    bool m_asoHasBeenSet = false;

    bool m_isNewForEntireAccount{false};
    bool m_isNewForEntireAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
