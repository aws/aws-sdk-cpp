/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Step.h>
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
   * <p>Information on the network path associated with a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/NetworkPath">AWS
   * API Reference</a></p>
   */
  class NetworkPath
  {
  public:
    AWS_INSPECTOR2_API NetworkPath();
    AWS_INSPECTOR2_API NetworkPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API NetworkPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details on the steps in the network path.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const{ return m_steps; }

    /**
     * <p>The details on the steps in the network path.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>The details on the steps in the network path.</p>
     */
    inline void SetSteps(const Aws::Vector<Step>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>The details on the steps in the network path.</p>
     */
    inline void SetSteps(Aws::Vector<Step>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>The details on the steps in the network path.</p>
     */
    inline NetworkPath& WithSteps(const Aws::Vector<Step>& value) { SetSteps(value); return *this;}

    /**
     * <p>The details on the steps in the network path.</p>
     */
    inline NetworkPath& WithSteps(Aws::Vector<Step>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>The details on the steps in the network path.</p>
     */
    inline NetworkPath& AddSteps(const Step& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>The details on the steps in the network path.</p>
     */
    inline NetworkPath& AddSteps(Step&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
