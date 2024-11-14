/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/MultitrackMaximumResolution.h>
#include <aws/ivs/model/MultitrackPolicy.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>A complex type that specifies multitrack input configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/MultitrackInputConfiguration">AWS
   * API Reference</a></p>
   */
  class MultitrackInputConfiguration
  {
  public:
    AWS_IVS_API MultitrackInputConfiguration();
    AWS_IVS_API MultitrackInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API MultitrackInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether multitrack input is enabled. Can be set to
     * <code>true</code> only if channel type is <code>STANDARD</code>. Setting
     * <code>enabled</code> to <code>true</code> with any other channel type will cause
     * an exception. If <code>true</code>, then <code>policy</code>,
     * <code>maximumResolution</code>, and <code>containerFormat</code> are required,
     * and <code>containerFormat</code> must be set to <code>FRAGMENTED_MP4</code>.
     * Default: <code>false</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline MultitrackInputConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum resolution for multitrack input. Required if <code>enabled</code> is
     * <code>true</code>.</p>
     */
    inline const MultitrackMaximumResolution& GetMaximumResolution() const{ return m_maximumResolution; }
    inline bool MaximumResolutionHasBeenSet() const { return m_maximumResolutionHasBeenSet; }
    inline void SetMaximumResolution(const MultitrackMaximumResolution& value) { m_maximumResolutionHasBeenSet = true; m_maximumResolution = value; }
    inline void SetMaximumResolution(MultitrackMaximumResolution&& value) { m_maximumResolutionHasBeenSet = true; m_maximumResolution = std::move(value); }
    inline MultitrackInputConfiguration& WithMaximumResolution(const MultitrackMaximumResolution& value) { SetMaximumResolution(value); return *this;}
    inline MultitrackInputConfiguration& WithMaximumResolution(MultitrackMaximumResolution&& value) { SetMaximumResolution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether multitrack input is allowed or required. Required if
     * <code>enabled</code> is <code>true</code>.</p>
     */
    inline const MultitrackPolicy& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const MultitrackPolicy& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(MultitrackPolicy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline MultitrackInputConfiguration& WithPolicy(const MultitrackPolicy& value) { SetPolicy(value); return *this;}
    inline MultitrackInputConfiguration& WithPolicy(MultitrackPolicy&& value) { SetPolicy(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    MultitrackMaximumResolution m_maximumResolution;
    bool m_maximumResolutionHasBeenSet = false;

    MultitrackPolicy m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
