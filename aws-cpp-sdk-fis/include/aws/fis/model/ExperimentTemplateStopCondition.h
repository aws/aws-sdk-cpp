/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes a stop condition for an experiment template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateStopCondition">AWS
   * API Reference</a></p>
   */
  class AWS_FIS_API ExperimentTemplateStopCondition
  {
  public:
    ExperimentTemplateStopCondition();
    ExperimentTemplateStopCondition(Aws::Utils::Json::JsonView jsonValue);
    ExperimentTemplateStopCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source for the stop condition.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source for the stop condition.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source for the stop condition.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source for the stop condition.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source for the stop condition.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source for the stop condition.</p>
     */
    inline ExperimentTemplateStopCondition& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source for the stop condition.</p>
     */
    inline ExperimentTemplateStopCondition& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source for the stop condition.</p>
     */
    inline ExperimentTemplateStopCondition& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline ExperimentTemplateStopCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline ExperimentTemplateStopCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline ExperimentTemplateStopCondition& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
