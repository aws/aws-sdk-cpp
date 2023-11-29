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
   * <p>The epsilon and noise parameter values that you want to update in the
   * differential privacy template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyTemplateUpdateParameters">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyTemplateUpdateParameters
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyTemplateUpdateParameters();
    AWS_CLEANROOMS_API DifferentialPrivacyTemplateUpdateParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyTemplateUpdateParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The updated epsilon value that you want to use.</p>
     */
    inline int GetEpsilon() const{ return m_epsilon; }

    /**
     * <p>The updated epsilon value that you want to use.</p>
     */
    inline bool EpsilonHasBeenSet() const { return m_epsilonHasBeenSet; }

    /**
     * <p>The updated epsilon value that you want to use.</p>
     */
    inline void SetEpsilon(int value) { m_epsilonHasBeenSet = true; m_epsilon = value; }

    /**
     * <p>The updated epsilon value that you want to use.</p>
     */
    inline DifferentialPrivacyTemplateUpdateParameters& WithEpsilon(int value) { SetEpsilon(value); return *this;}


    /**
     * <p>The updated value of noise added per query. It is measured in terms of the
     * number of users whose contributions you want to obscure. This value governs the
     * rate at which the privacy budget is depleted.</p>
     */
    inline int GetUsersNoisePerQuery() const{ return m_usersNoisePerQuery; }

    /**
     * <p>The updated value of noise added per query. It is measured in terms of the
     * number of users whose contributions you want to obscure. This value governs the
     * rate at which the privacy budget is depleted.</p>
     */
    inline bool UsersNoisePerQueryHasBeenSet() const { return m_usersNoisePerQueryHasBeenSet; }

    /**
     * <p>The updated value of noise added per query. It is measured in terms of the
     * number of users whose contributions you want to obscure. This value governs the
     * rate at which the privacy budget is depleted.</p>
     */
    inline void SetUsersNoisePerQuery(int value) { m_usersNoisePerQueryHasBeenSet = true; m_usersNoisePerQuery = value; }

    /**
     * <p>The updated value of noise added per query. It is measured in terms of the
     * number of users whose contributions you want to obscure. This value governs the
     * rate at which the privacy budget is depleted.</p>
     */
    inline DifferentialPrivacyTemplateUpdateParameters& WithUsersNoisePerQuery(int value) { SetUsersNoisePerQuery(value); return *this;}

  private:

    int m_epsilon;
    bool m_epsilonHasBeenSet = false;

    int m_usersNoisePerQuery;
    bool m_usersNoisePerQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
