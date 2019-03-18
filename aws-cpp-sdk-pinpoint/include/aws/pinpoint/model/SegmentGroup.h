/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/SourceType.h>
#include <aws/pinpoint/model/Type.h>
#include <aws/pinpoint/model/SegmentDimensions.h>
#include <aws/pinpoint/model/SegmentReference.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Segment group definition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentGroup">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentGroup
  {
  public:
    SegmentGroup();
    SegmentGroup(Aws::Utils::Json::JsonView jsonValue);
    SegmentGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List of dimensions to include or exclude.
     */
    inline const Aws::Vector<SegmentDimensions>& GetDimensions() const{ return m_dimensions; }

    /**
     * List of dimensions to include or exclude.
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * List of dimensions to include or exclude.
     */
    inline void SetDimensions(const Aws::Vector<SegmentDimensions>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * List of dimensions to include or exclude.
     */
    inline void SetDimensions(Aws::Vector<SegmentDimensions>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * List of dimensions to include or exclude.
     */
    inline SegmentGroup& WithDimensions(const Aws::Vector<SegmentDimensions>& value) { SetDimensions(value); return *this;}

    /**
     * List of dimensions to include or exclude.
     */
    inline SegmentGroup& WithDimensions(Aws::Vector<SegmentDimensions>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * List of dimensions to include or exclude.
     */
    inline SegmentGroup& AddDimensions(const SegmentDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * List of dimensions to include or exclude.
     */
    inline SegmentGroup& AddDimensions(SegmentDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * The base segment that you build your segment on. The source segment defines the
     * starting "universe" of endpoints. When you add dimensions to the segment, it
     * filters the source segment based on the dimensions that you specify. You can
     * specify more than one dimensional segment. You can only specify one imported
     * segment.

NOTE: If you specify an imported segment for this attribute, the
     * segment size estimate that appears in the Amazon Pinpoint console shows the size
     * of the imported segment, without any filters applied to it.
     */
    inline const Aws::Vector<SegmentReference>& GetSourceSegments() const{ return m_sourceSegments; }

    /**
     * The base segment that you build your segment on. The source segment defines the
     * starting "universe" of endpoints. When you add dimensions to the segment, it
     * filters the source segment based on the dimensions that you specify. You can
     * specify more than one dimensional segment. You can only specify one imported
     * segment.

NOTE: If you specify an imported segment for this attribute, the
     * segment size estimate that appears in the Amazon Pinpoint console shows the size
     * of the imported segment, without any filters applied to it.
     */
    inline bool SourceSegmentsHasBeenSet() const { return m_sourceSegmentsHasBeenSet; }

    /**
     * The base segment that you build your segment on. The source segment defines the
     * starting "universe" of endpoints. When you add dimensions to the segment, it
     * filters the source segment based on the dimensions that you specify. You can
     * specify more than one dimensional segment. You can only specify one imported
     * segment.

NOTE: If you specify an imported segment for this attribute, the
     * segment size estimate that appears in the Amazon Pinpoint console shows the size
     * of the imported segment, without any filters applied to it.
     */
    inline void SetSourceSegments(const Aws::Vector<SegmentReference>& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = value; }

    /**
     * The base segment that you build your segment on. The source segment defines the
     * starting "universe" of endpoints. When you add dimensions to the segment, it
     * filters the source segment based on the dimensions that you specify. You can
     * specify more than one dimensional segment. You can only specify one imported
     * segment.

NOTE: If you specify an imported segment for this attribute, the
     * segment size estimate that appears in the Amazon Pinpoint console shows the size
     * of the imported segment, without any filters applied to it.
     */
    inline void SetSourceSegments(Aws::Vector<SegmentReference>&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = std::move(value); }

    /**
     * The base segment that you build your segment on. The source segment defines the
     * starting "universe" of endpoints. When you add dimensions to the segment, it
     * filters the source segment based on the dimensions that you specify. You can
     * specify more than one dimensional segment. You can only specify one imported
     * segment.

NOTE: If you specify an imported segment for this attribute, the
     * segment size estimate that appears in the Amazon Pinpoint console shows the size
     * of the imported segment, without any filters applied to it.
     */
    inline SegmentGroup& WithSourceSegments(const Aws::Vector<SegmentReference>& value) { SetSourceSegments(value); return *this;}

    /**
     * The base segment that you build your segment on. The source segment defines the
     * starting "universe" of endpoints. When you add dimensions to the segment, it
     * filters the source segment based on the dimensions that you specify. You can
     * specify more than one dimensional segment. You can only specify one imported
     * segment.

NOTE: If you specify an imported segment for this attribute, the
     * segment size estimate that appears in the Amazon Pinpoint console shows the size
     * of the imported segment, without any filters applied to it.
     */
    inline SegmentGroup& WithSourceSegments(Aws::Vector<SegmentReference>&& value) { SetSourceSegments(std::move(value)); return *this;}

    /**
     * The base segment that you build your segment on. The source segment defines the
     * starting "universe" of endpoints. When you add dimensions to the segment, it
     * filters the source segment based on the dimensions that you specify. You can
     * specify more than one dimensional segment. You can only specify one imported
     * segment.

NOTE: If you specify an imported segment for this attribute, the
     * segment size estimate that appears in the Amazon Pinpoint console shows the size
     * of the imported segment, without any filters applied to it.
     */
    inline SegmentGroup& AddSourceSegments(const SegmentReference& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.push_back(value); return *this; }

    /**
     * The base segment that you build your segment on. The source segment defines the
     * starting "universe" of endpoints. When you add dimensions to the segment, it
     * filters the source segment based on the dimensions that you specify. You can
     * specify more than one dimensional segment. You can only specify one imported
     * segment.

NOTE: If you specify an imported segment for this attribute, the
     * segment size estimate that appears in the Amazon Pinpoint console shows the size
     * of the imported segment, without any filters applied to it.
     */
    inline SegmentGroup& AddSourceSegments(SegmentReference&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.push_back(std::move(value)); return *this; }


    /**
     * Specify how to handle multiple source segments. For example, if you specify
     * three source segments, should the resulting segment be based on any or all of
     * the segments? Acceptable values: ANY or ALL.
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * Specify how to handle multiple source segments. For example, if you specify
     * three source segments, should the resulting segment be based on any or all of
     * the segments? Acceptable values: ANY or ALL.
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * Specify how to handle multiple source segments. For example, if you specify
     * three source segments, should the resulting segment be based on any or all of
     * the segments? Acceptable values: ANY or ALL.
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * Specify how to handle multiple source segments. For example, if you specify
     * three source segments, should the resulting segment be based on any or all of
     * the segments? Acceptable values: ANY or ALL.
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * Specify how to handle multiple source segments. For example, if you specify
     * three source segments, should the resulting segment be based on any or all of
     * the segments? Acceptable values: ANY or ALL.
     */
    inline SegmentGroup& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * Specify how to handle multiple source segments. For example, if you specify
     * three source segments, should the resulting segment be based on any or all of
     * the segments? Acceptable values: ANY or ALL.
     */
    inline SegmentGroup& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * Specify how to handle multiple segment dimensions. For example, if you specify
     * three dimensions, should the resulting segment include endpoints that are
     * matched by all, any, or none of the dimensions? Acceptable values: ALL, ANY, or
     * NONE.
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * Specify how to handle multiple segment dimensions. For example, if you specify
     * three dimensions, should the resulting segment include endpoints that are
     * matched by all, any, or none of the dimensions? Acceptable values: ALL, ANY, or
     * NONE.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * Specify how to handle multiple segment dimensions. For example, if you specify
     * three dimensions, should the resulting segment include endpoints that are
     * matched by all, any, or none of the dimensions? Acceptable values: ALL, ANY, or
     * NONE.
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * Specify how to handle multiple segment dimensions. For example, if you specify
     * three dimensions, should the resulting segment include endpoints that are
     * matched by all, any, or none of the dimensions? Acceptable values: ALL, ANY, or
     * NONE.
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * Specify how to handle multiple segment dimensions. For example, if you specify
     * three dimensions, should the resulting segment include endpoints that are
     * matched by all, any, or none of the dimensions? Acceptable values: ALL, ANY, or
     * NONE.
     */
    inline SegmentGroup& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * Specify how to handle multiple segment dimensions. For example, if you specify
     * three dimensions, should the resulting segment include endpoints that are
     * matched by all, any, or none of the dimensions? Acceptable values: ALL, ANY, or
     * NONE.
     */
    inline SegmentGroup& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Vector<SegmentDimensions> m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::Vector<SegmentReference> m_sourceSegments;
    bool m_sourceSegmentsHasBeenSet;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
