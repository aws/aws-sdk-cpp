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
    AWS_INSPECTOR_API InspectorServiceAttributes();
    AWS_INSPECTOR_API InspectorServiceAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API InspectorServiceAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of this data type.</p>
     */
    inline int GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(int value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline InspectorServiceAttributes& WithSchemaVersion(int value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the assessment run during which the finding is generated.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = value; }
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::move(value); }
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn.assign(value); }
    inline InspectorServiceAttributes& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}
    inline InspectorServiceAttributes& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}
    inline InspectorServiceAttributes& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline const Aws::String& GetRulesPackageArn() const{ return m_rulesPackageArn; }
    inline bool RulesPackageArnHasBeenSet() const { return m_rulesPackageArnHasBeenSet; }
    inline void SetRulesPackageArn(const Aws::String& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }
    inline void SetRulesPackageArn(Aws::String&& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = std::move(value); }
    inline void SetRulesPackageArn(const char* value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn.assign(value); }
    inline InspectorServiceAttributes& WithRulesPackageArn(const Aws::String& value) { SetRulesPackageArn(value); return *this;}
    inline InspectorServiceAttributes& WithRulesPackageArn(Aws::String&& value) { SetRulesPackageArn(std::move(value)); return *this;}
    inline InspectorServiceAttributes& WithRulesPackageArn(const char* value) { SetRulesPackageArn(value); return *this;}
    ///@}
  private:

    int m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;

    Aws::String m_rulesPackageArn;
    bool m_rulesPackageArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
