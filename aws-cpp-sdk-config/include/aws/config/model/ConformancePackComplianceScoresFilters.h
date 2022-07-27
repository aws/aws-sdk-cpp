/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A list of filters to apply to the conformance pack compliance score result
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackComplianceScoresFilters">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ConformancePackComplianceScoresFilters
  {
  public:
    ConformancePackComplianceScoresFilters();
    ConformancePackComplianceScoresFilters(Aws::Utils::Json::JsonView jsonValue);
    ConformancePackComplianceScoresFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConformancePackNames() const{ return m_conformancePackNames; }

    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline bool ConformancePackNamesHasBeenSet() const { return m_conformancePackNamesHasBeenSet; }

    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline void SetConformancePackNames(const Aws::Vector<Aws::String>& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = value; }

    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline void SetConformancePackNames(Aws::Vector<Aws::String>&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = std::move(value); }

    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline ConformancePackComplianceScoresFilters& WithConformancePackNames(const Aws::Vector<Aws::String>& value) { SetConformancePackNames(value); return *this;}

    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline ConformancePackComplianceScoresFilters& WithConformancePackNames(Aws::Vector<Aws::String>&& value) { SetConformancePackNames(std::move(value)); return *this;}

    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline ConformancePackComplianceScoresFilters& AddConformancePackNames(const Aws::String& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }

    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline ConformancePackComplianceScoresFilters& AddConformancePackNames(Aws::String&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of a conformance pack whose score should be included in the
     * compliance score result.</p>
     */
    inline ConformancePackComplianceScoresFilters& AddConformancePackNames(const char* value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_conformancePackNames;
    bool m_conformancePackNamesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
