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
   * set. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackComplianceScoresFilters">AWS
   * API Reference</a></p>
   */
  class ConformancePackComplianceScoresFilters
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackComplianceScoresFilters();
    AWS_CONFIGSERVICE_API ConformancePackComplianceScoresFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackComplianceScoresFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConformancePackNames() const{ return m_conformancePackNames; }

    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline bool ConformancePackNamesHasBeenSet() const { return m_conformancePackNamesHasBeenSet; }

    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline void SetConformancePackNames(const Aws::Vector<Aws::String>& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = value; }

    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline void SetConformancePackNames(Aws::Vector<Aws::String>&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = std::move(value); }

    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline ConformancePackComplianceScoresFilters& WithConformancePackNames(const Aws::Vector<Aws::String>& value) { SetConformancePackNames(value); return *this;}

    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline ConformancePackComplianceScoresFilters& WithConformancePackNames(Aws::Vector<Aws::String>&& value) { SetConformancePackNames(std::move(value)); return *this;}

    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline ConformancePackComplianceScoresFilters& AddConformancePackNames(const Aws::String& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }

    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline ConformancePackComplianceScoresFilters& AddConformancePackNames(Aws::String&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the conformance packs whose compliance scores you want to
     * include in the conformance pack compliance score result set. You can include up
     * to 25 conformance packs in the <code>ConformancePackNames</code> array of
     * strings, each with a character limit of 256 characters for the conformance pack
     * name.</p>
     */
    inline ConformancePackComplianceScoresFilters& AddConformancePackNames(const char* value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_conformancePackNames;
    bool m_conformancePackNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
