/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyPrivacyBudget.h>
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
   * <p>The epsilon parameter value and number of each aggregation function that you
   * can perform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyBudget">AWS
   * API Reference</a></p>
   */
  class PrivacyBudget
  {
  public:
    AWS_CLEANROOMS_API PrivacyBudget();
    AWS_CLEANROOMS_API PrivacyBudget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that specifies the epsilon parameter and the utility in terms of
     * total aggregations, as well as the remaining aggregations available.</p>
     */
    inline const DifferentialPrivacyPrivacyBudget& GetDifferentialPrivacy() const{ return m_differentialPrivacy; }

    /**
     * <p>An object that specifies the epsilon parameter and the utility in terms of
     * total aggregations, as well as the remaining aggregations available.</p>
     */
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }

    /**
     * <p>An object that specifies the epsilon parameter and the utility in terms of
     * total aggregations, as well as the remaining aggregations available.</p>
     */
    inline void SetDifferentialPrivacy(const DifferentialPrivacyPrivacyBudget& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = value; }

    /**
     * <p>An object that specifies the epsilon parameter and the utility in terms of
     * total aggregations, as well as the remaining aggregations available.</p>
     */
    inline void SetDifferentialPrivacy(DifferentialPrivacyPrivacyBudget&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::move(value); }

    /**
     * <p>An object that specifies the epsilon parameter and the utility in terms of
     * total aggregations, as well as the remaining aggregations available.</p>
     */
    inline PrivacyBudget& WithDifferentialPrivacy(const DifferentialPrivacyPrivacyBudget& value) { SetDifferentialPrivacy(value); return *this;}

    /**
     * <p>An object that specifies the epsilon parameter and the utility in terms of
     * total aggregations, as well as the remaining aggregations available.</p>
     */
    inline PrivacyBudget& WithDifferentialPrivacy(DifferentialPrivacyPrivacyBudget&& value) { SetDifferentialPrivacy(std::move(value)); return *this;}

  private:

    DifferentialPrivacyPrivacyBudget m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
