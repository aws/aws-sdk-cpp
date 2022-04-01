﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ScanType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/RegistryScanningRule.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The scanning configuration for a private registry.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/RegistryScanningConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API RegistryScanningConfiguration
  {
  public:
    RegistryScanningConfiguration();
    RegistryScanningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    RegistryScanningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of scanning configured for the registry.</p>
     */
    inline const ScanType& GetScanType() const{ return m_scanType; }

    /**
     * <p>The type of scanning configured for the registry.</p>
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * <p>The type of scanning configured for the registry.</p>
     */
    inline void SetScanType(const ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * <p>The type of scanning configured for the registry.</p>
     */
    inline void SetScanType(ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * <p>The type of scanning configured for the registry.</p>
     */
    inline RegistryScanningConfiguration& WithScanType(const ScanType& value) { SetScanType(value); return *this;}

    /**
     * <p>The type of scanning configured for the registry.</p>
     */
    inline RegistryScanningConfiguration& WithScanType(ScanType&& value) { SetScanType(std::move(value)); return *this;}


    /**
     * <p>The scanning rules associated with the registry.</p>
     */
    inline const Aws::Vector<RegistryScanningRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The scanning rules associated with the registry.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The scanning rules associated with the registry.</p>
     */
    inline void SetRules(const Aws::Vector<RegistryScanningRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The scanning rules associated with the registry.</p>
     */
    inline void SetRules(Aws::Vector<RegistryScanningRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The scanning rules associated with the registry.</p>
     */
    inline RegistryScanningConfiguration& WithRules(const Aws::Vector<RegistryScanningRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The scanning rules associated with the registry.</p>
     */
    inline RegistryScanningConfiguration& WithRules(Aws::Vector<RegistryScanningRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The scanning rules associated with the registry.</p>
     */
    inline RegistryScanningConfiguration& AddRules(const RegistryScanningRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The scanning rules associated with the registry.</p>
     */
    inline RegistryScanningConfiguration& AddRules(RegistryScanningRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    ScanType m_scanType;
    bool m_scanTypeHasBeenSet;

    Aws::Vector<RegistryScanningRule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
