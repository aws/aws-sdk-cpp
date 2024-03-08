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
   * <p>The epsilon and noise parameters that you want to preview.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyPreviewParametersInput">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyPreviewParametersInput
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyPreviewParametersInput();
    AWS_CLEANROOMS_API DifferentialPrivacyPreviewParametersInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyPreviewParametersInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The epsilon value that you want to preview.</p>
     */
    inline int GetEpsilon() const{ return m_epsilon; }

    /**
     * <p>The epsilon value that you want to preview.</p>
     */
    inline bool EpsilonHasBeenSet() const { return m_epsilonHasBeenSet; }

    /**
     * <p>The epsilon value that you want to preview.</p>
     */
    inline void SetEpsilon(int value) { m_epsilonHasBeenSet = true; m_epsilon = value; }

    /**
     * <p>The epsilon value that you want to preview.</p>
     */
    inline DifferentialPrivacyPreviewParametersInput& WithEpsilon(int value) { SetEpsilon(value); return *this;}


    /**
     * <p>Noise added per query is measured in terms of the number of users whose
     * contributions you want to obscure. This value governs the rate at which the
     * privacy budget is depleted.</p>
     */
    inline int GetUsersNoisePerQuery() const{ return m_usersNoisePerQuery; }

    /**
     * <p>Noise added per query is measured in terms of the number of users whose
     * contributions you want to obscure. This value governs the rate at which the
     * privacy budget is depleted.</p>
     */
    inline bool UsersNoisePerQueryHasBeenSet() const { return m_usersNoisePerQueryHasBeenSet; }

    /**
     * <p>Noise added per query is measured in terms of the number of users whose
     * contributions you want to obscure. This value governs the rate at which the
     * privacy budget is depleted.</p>
     */
    inline void SetUsersNoisePerQuery(int value) { m_usersNoisePerQueryHasBeenSet = true; m_usersNoisePerQuery = value; }

    /**
     * <p>Noise added per query is measured in terms of the number of users whose
     * contributions you want to obscure. This value governs the rate at which the
     * privacy budget is depleted.</p>
     */
    inline DifferentialPrivacyPreviewParametersInput& WithUsersNoisePerQuery(int value) { SetUsersNoisePerQuery(value); return *this;}

  private:

    int m_epsilon;
    bool m_epsilonHasBeenSet = false;

    int m_usersNoisePerQuery;
    bool m_usersNoisePerQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
