/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/UnusedAccessConfiguration.h>
#include <aws/accessanalyzer/model/InternalAccessConfiguration.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about the configuration of an analyzer for an Amazon Web
   * Services organization or account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AnalyzerConfiguration">AWS
   * API Reference</a></p>
   */
  class AnalyzerConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API AnalyzerConfiguration() = default;
    AWS_ACCESSANALYZER_API AnalyzerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalyzerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the configuration of an unused access analyzer for an Amazon Web
     * Services organization or account.</p>
     */
    inline const UnusedAccessConfiguration& GetUnusedAccess() const { return m_unusedAccess; }
    inline bool UnusedAccessHasBeenSet() const { return m_unusedAccessHasBeenSet; }
    template<typename UnusedAccessT = UnusedAccessConfiguration>
    void SetUnusedAccess(UnusedAccessT&& value) { m_unusedAccessHasBeenSet = true; m_unusedAccess = std::forward<UnusedAccessT>(value); }
    template<typename UnusedAccessT = UnusedAccessConfiguration>
    AnalyzerConfiguration& WithUnusedAccess(UnusedAccessT&& value) { SetUnusedAccess(std::forward<UnusedAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of an internal access analyzer for an Amazon Web
     * Services organization or account. This configuration determines how the analyzer
     * evaluates access within your Amazon Web Services environment.</p>
     */
    inline const InternalAccessConfiguration& GetInternalAccess() const { return m_internalAccess; }
    inline bool InternalAccessHasBeenSet() const { return m_internalAccessHasBeenSet; }
    template<typename InternalAccessT = InternalAccessConfiguration>
    void SetInternalAccess(InternalAccessT&& value) { m_internalAccessHasBeenSet = true; m_internalAccess = std::forward<InternalAccessT>(value); }
    template<typename InternalAccessT = InternalAccessConfiguration>
    AnalyzerConfiguration& WithInternalAccess(InternalAccessT&& value) { SetInternalAccess(std::forward<InternalAccessT>(value)); return *this;}
    ///@}
  private:

    UnusedAccessConfiguration m_unusedAccess;
    bool m_unusedAccessHasBeenSet = false;

    InternalAccessConfiguration m_internalAccess;
    bool m_internalAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
