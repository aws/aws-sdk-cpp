/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/InclusionAnnotationValue.h>
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
   * <p>An Inclusion Annotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DatapointInclusionAnnotation">AWS
   * API Reference</a></p>
   */
  class DatapointInclusionAnnotation
  {
  public:
    AWS_GLUE_API DatapointInclusionAnnotation();
    AWS_GLUE_API DatapointInclusionAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DatapointInclusionAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the data quality profile the statistic belongs to.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline DatapointInclusionAnnotation& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline DatapointInclusionAnnotation& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline DatapointInclusionAnnotation& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const{ return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    inline void SetStatisticId(const Aws::String& value) { m_statisticIdHasBeenSet = true; m_statisticId = value; }
    inline void SetStatisticId(Aws::String&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::move(value); }
    inline void SetStatisticId(const char* value) { m_statisticIdHasBeenSet = true; m_statisticId.assign(value); }
    inline DatapointInclusionAnnotation& WithStatisticId(const Aws::String& value) { SetStatisticId(value); return *this;}
    inline DatapointInclusionAnnotation& WithStatisticId(Aws::String&& value) { SetStatisticId(std::move(value)); return *this;}
    inline DatapointInclusionAnnotation& WithStatisticId(const char* value) { SetStatisticId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusion annotation value to apply to the statistic.</p>
     */
    inline const InclusionAnnotationValue& GetInclusionAnnotation() const{ return m_inclusionAnnotation; }
    inline bool InclusionAnnotationHasBeenSet() const { return m_inclusionAnnotationHasBeenSet; }
    inline void SetInclusionAnnotation(const InclusionAnnotationValue& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = value; }
    inline void SetInclusionAnnotation(InclusionAnnotationValue&& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = std::move(value); }
    inline DatapointInclusionAnnotation& WithInclusionAnnotation(const InclusionAnnotationValue& value) { SetInclusionAnnotation(value); return *this;}
    inline DatapointInclusionAnnotation& WithInclusionAnnotation(InclusionAnnotationValue&& value) { SetInclusionAnnotation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_statisticId;
    bool m_statisticIdHasBeenSet = false;

    InclusionAnnotationValue m_inclusionAnnotation;
    bool m_inclusionAnnotationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
