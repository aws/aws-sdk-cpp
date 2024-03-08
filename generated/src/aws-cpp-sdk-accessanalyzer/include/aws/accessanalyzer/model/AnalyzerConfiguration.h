/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/UnusedAccessConfiguration.h>
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
   * <p>Contains information about the configuration of an unused access analyzer for
   * an Amazon Web Services organization or account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AnalyzerConfiguration">AWS
   * API Reference</a></p>
   */
  class AnalyzerConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API AnalyzerConfiguration();
    AWS_ACCESSANALYZER_API AnalyzerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalyzerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the configuration of an unused access analyzer for an Amazon Web
     * Services organization or account. External access analyzers do not support any
     * configuration.</p>
     */
    inline const UnusedAccessConfiguration& GetUnusedAccess() const{ return m_unusedAccess; }

    /**
     * <p>Specifies the configuration of an unused access analyzer for an Amazon Web
     * Services organization or account. External access analyzers do not support any
     * configuration.</p>
     */
    inline bool UnusedAccessHasBeenSet() const { return m_unusedAccessHasBeenSet; }

    /**
     * <p>Specifies the configuration of an unused access analyzer for an Amazon Web
     * Services organization or account. External access analyzers do not support any
     * configuration.</p>
     */
    inline void SetUnusedAccess(const UnusedAccessConfiguration& value) { m_unusedAccessHasBeenSet = true; m_unusedAccess = value; }

    /**
     * <p>Specifies the configuration of an unused access analyzer for an Amazon Web
     * Services organization or account. External access analyzers do not support any
     * configuration.</p>
     */
    inline void SetUnusedAccess(UnusedAccessConfiguration&& value) { m_unusedAccessHasBeenSet = true; m_unusedAccess = std::move(value); }

    /**
     * <p>Specifies the configuration of an unused access analyzer for an Amazon Web
     * Services organization or account. External access analyzers do not support any
     * configuration.</p>
     */
    inline AnalyzerConfiguration& WithUnusedAccess(const UnusedAccessConfiguration& value) { SetUnusedAccess(value); return *this;}

    /**
     * <p>Specifies the configuration of an unused access analyzer for an Amazon Web
     * Services organization or account. External access analyzers do not support any
     * configuration.</p>
     */
    inline AnalyzerConfiguration& WithUnusedAccess(UnusedAccessConfiguration&& value) { SetUnusedAccess(std::move(value)); return *this;}

  private:

    UnusedAccessConfiguration m_unusedAccess;
    bool m_unusedAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
