/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/FreeTrialStatus.h>
#include <aws/inspector2/model/FreeTrialType.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An object that contains information about the Amazon Inspector free trial for
   * an account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FreeTrialInfo">AWS
   * API Reference</a></p>
   */
  class FreeTrialInfo
  {
  public:
    AWS_INSPECTOR2_API FreeTrialInfo();
    AWS_INSPECTOR2_API FreeTrialInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FreeTrialInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that the Amazon Inspector free trail ends for a given
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }

    /**
     * <p>The date and time that the Amazon Inspector free trail ends for a given
     * account.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The date and time that the Amazon Inspector free trail ends for a given
     * account.</p>
     */
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The date and time that the Amazon Inspector free trail ends for a given
     * account.</p>
     */
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The date and time that the Amazon Inspector free trail ends for a given
     * account.</p>
     */
    inline FreeTrialInfo& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}

    /**
     * <p>The date and time that the Amazon Inspector free trail ends for a given
     * account.</p>
     */
    inline FreeTrialInfo& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}


    /**
     * <p>The date and time that the Amazon Inspector free trail started for a given
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>The date and time that the Amazon Inspector free trail started for a given
     * account.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The date and time that the Amazon Inspector free trail started for a given
     * account.</p>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The date and time that the Amazon Inspector free trail started for a given
     * account.</p>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The date and time that the Amazon Inspector free trail started for a given
     * account.</p>
     */
    inline FreeTrialInfo& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>The date and time that the Amazon Inspector free trail started for a given
     * account.</p>
     */
    inline FreeTrialInfo& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>The order to sort results by.</p>
     */
    inline const FreeTrialStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetStatus(const FreeTrialStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetStatus(FreeTrialStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The order to sort results by.</p>
     */
    inline FreeTrialInfo& WithStatus(const FreeTrialStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The order to sort results by.</p>
     */
    inline FreeTrialInfo& WithStatus(FreeTrialStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of scan covered by the Amazon Inspector free trail.</p>
     */
    inline const FreeTrialType& GetType() const{ return m_type; }

    /**
     * <p>The type of scan covered by the Amazon Inspector free trail.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of scan covered by the Amazon Inspector free trail.</p>
     */
    inline void SetType(const FreeTrialType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of scan covered by the Amazon Inspector free trail.</p>
     */
    inline void SetType(FreeTrialType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of scan covered by the Amazon Inspector free trail.</p>
     */
    inline FreeTrialInfo& WithType(const FreeTrialType& value) { SetType(value); return *this;}

    /**
     * <p>The type of scan covered by the Amazon Inspector free trail.</p>
     */
    inline FreeTrialInfo& WithType(FreeTrialType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet = false;

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet = false;

    FreeTrialStatus m_status;
    bool m_statusHasBeenSet = false;

    FreeTrialType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
