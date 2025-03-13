/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used in the <a>Finding</a> data type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/InspectorServiceAttributes">AWS
   * API Reference</a></p>
   */
  class InspectorServiceAttributes
  {
  public:
    AWS_INSPECTOR_API InspectorServiceAttributes() = default;
    AWS_INSPECTOR_API InspectorServiceAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API InspectorServiceAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of this data type.</p>
     */
    inline int GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(int value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline InspectorServiceAttributes& WithSchemaVersion(int value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the assessment run during which the finding is generated.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const { return m_assessmentRunArn; }
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }
    template<typename AssessmentRunArnT = Aws::String>
    void SetAssessmentRunArn(AssessmentRunArnT&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::forward<AssessmentRunArnT>(value); }
    template<typename AssessmentRunArnT = Aws::String>
    InspectorServiceAttributes& WithAssessmentRunArn(AssessmentRunArnT&& value) { SetAssessmentRunArn(std::forward<AssessmentRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline const Aws::String& GetRulesPackageArn() const { return m_rulesPackageArn; }
    inline bool RulesPackageArnHasBeenSet() const { return m_rulesPackageArnHasBeenSet; }
    template<typename RulesPackageArnT = Aws::String>
    void SetRulesPackageArn(RulesPackageArnT&& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = std::forward<RulesPackageArnT>(value); }
    template<typename RulesPackageArnT = Aws::String>
    InspectorServiceAttributes& WithRulesPackageArn(RulesPackageArnT&& value) { SetRulesPackageArn(std::forward<RulesPackageArnT>(value)); return *this;}
    ///@}
  private:

    int m_schemaVersion{0};
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;

    Aws::String m_rulesPackageArn;
    bool m_rulesPackageArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
