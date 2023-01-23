/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/Distribution.h>
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
   * <p>The distribution of traffic between the instance and its
   * replicas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TelephonyConfig">AWS
   * API Reference</a></p>
   */
  class TelephonyConfig
  {
  public:
    AWS_CONNECT_API TelephonyConfig();
    AWS_CONNECT_API TelephonyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TelephonyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about traffic distributions.</p>
     */
    inline const Aws::Vector<Distribution>& GetDistributions() const{ return m_distributions; }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline bool DistributionsHasBeenSet() const { return m_distributionsHasBeenSet; }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline void SetDistributions(const Aws::Vector<Distribution>& value) { m_distributionsHasBeenSet = true; m_distributions = value; }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline void SetDistributions(Aws::Vector<Distribution>&& value) { m_distributionsHasBeenSet = true; m_distributions = std::move(value); }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline TelephonyConfig& WithDistributions(const Aws::Vector<Distribution>& value) { SetDistributions(value); return *this;}

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline TelephonyConfig& WithDistributions(Aws::Vector<Distribution>&& value) { SetDistributions(std::move(value)); return *this;}

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline TelephonyConfig& AddDistributions(const Distribution& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(value); return *this; }

    /**
     * <p>Information about traffic distributions.</p>
     */
    inline TelephonyConfig& AddDistributions(Distribution&& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Distribution> m_distributions;
    bool m_distributionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
