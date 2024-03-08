/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/SignInDistribution.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The distribution that determines which Amazon Web Services Regions should be
   * used to sign in agents in to both the instance and its replica(s).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SignInConfig">AWS
   * API Reference</a></p>
   */
  class SignInConfig
  {
  public:
    AWS_CONNECT_API SignInConfig();
    AWS_CONNECT_API SignInConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SignInConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about traffic distributions.</p>
     */
    inline const Aws::Vector<SignInDistribution>& GetDistributions() const{ return m_distributions; }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline bool DistributionsHasBeenSet() const { return m_distributionsHasBeenSet; }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline void SetDistributions(const Aws::Vector<SignInDistribution>& value) { m_distributionsHasBeenSet = true; m_distributions = value; }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline void SetDistributions(Aws::Vector<SignInDistribution>&& value) { m_distributionsHasBeenSet = true; m_distributions = std::move(value); }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline SignInConfig& WithDistributions(const Aws::Vector<SignInDistribution>& value) { SetDistributions(value); return *this;}

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline SignInConfig& WithDistributions(Aws::Vector<SignInDistribution>&& value) { SetDistributions(std::move(value)); return *this;}

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline SignInConfig& AddDistributions(const SignInDistribution& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(value); return *this; }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline SignInConfig& AddDistributions(SignInDistribution&& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SignInDistribution> m_distributions;
    bool m_distributionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
