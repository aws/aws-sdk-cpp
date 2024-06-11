﻿/**
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
   * <p>The epsilon and noise parameter values that were used for the differential
   * privacy template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyTemplateParametersOutput">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyTemplateParametersOutput
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyTemplateParametersOutput();
    AWS_CLEANROOMS_API DifferentialPrivacyTemplateParametersOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyTemplateParametersOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The epsilon value that you specified.</p>
     */
    inline int GetEpsilon() const{ return m_epsilon; }
    inline bool EpsilonHasBeenSet() const { return m_epsilonHasBeenSet; }
    inline void SetEpsilon(int value) { m_epsilonHasBeenSet = true; m_epsilon = value; }
    inline DifferentialPrivacyTemplateParametersOutput& WithEpsilon(int value) { SetEpsilon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Noise added per query is measured in terms of the number of users whose
     * contributions you want to obscure. This value governs the rate at which the
     * privacy budget is depleted.</p>
     */
    inline int GetUsersNoisePerQuery() const{ return m_usersNoisePerQuery; }
    inline bool UsersNoisePerQueryHasBeenSet() const { return m_usersNoisePerQueryHasBeenSet; }
    inline void SetUsersNoisePerQuery(int value) { m_usersNoisePerQueryHasBeenSet = true; m_usersNoisePerQuery = value; }
    inline DifferentialPrivacyTemplateParametersOutput& WithUsersNoisePerQuery(int value) { SetUsersNoisePerQuery(value); return *this;}
    ///@}
  private:

    int m_epsilon;
    bool m_epsilonHasBeenSet = false;

    int m_usersNoisePerQuery;
    bool m_usersNoisePerQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
