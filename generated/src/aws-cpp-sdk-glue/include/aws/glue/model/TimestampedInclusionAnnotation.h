/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/InclusionAnnotationValue.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A timestamped inclusion annotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TimestampedInclusionAnnotation">AWS
   * API Reference</a></p>
   */
  class TimestampedInclusionAnnotation
  {
  public:
    AWS_GLUE_API TimestampedInclusionAnnotation() = default;
    AWS_GLUE_API TimestampedInclusionAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TimestampedInclusionAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inclusion annotation value.</p>
     */
    inline InclusionAnnotationValue GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(InclusionAnnotationValue value) { m_valueHasBeenSet = true; m_value = value; }
    inline TimestampedInclusionAnnotation& WithValue(InclusionAnnotationValue value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the inclusion annotation was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    TimestampedInclusionAnnotation& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}
  private:

    InclusionAnnotationValue m_value{InclusionAnnotationValue::NOT_SET};
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
