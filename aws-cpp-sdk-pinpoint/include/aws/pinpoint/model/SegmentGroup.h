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
   * <p>Specifies the base segments and dimensions for a segment, and the
   * relationships between these base segments and dimensions.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline const Aws::Vector<SegmentDimensions>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline void SetDimensions(const Aws::Vector<SegmentDimensions>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline void SetDimensions(Aws::Vector<SegmentDimensions>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline SegmentGroup& WithDimensions(const Aws::Vector<SegmentDimensions>& value) { SetDimensions(value); return *this;}

    /**
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline SegmentGroup& WithDimensions(Aws::Vector<SegmentDimensions>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline SegmentGroup& AddDimensions(const SegmentDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline SegmentGroup& AddDimensions(SegmentDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline const Aws::Vector<SegmentReference>& GetSourceSegments() const{ return m_sourceSegments; }

    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline bool SourceSegmentsHasBeenSet() const { return m_sourceSegmentsHasBeenSet; }

    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline void SetSourceSegments(const Aws::Vector<SegmentReference>& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = value; }

    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline void SetSourceSegments(Aws::Vector<SegmentReference>&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = std::move(value); }

    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline SegmentGroup& WithSourceSegments(const Aws::Vector<SegmentReference>& value) { SetSourceSegments(value); return *this;}

    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline SegmentGroup& WithSourceSegments(Aws::Vector<SegmentReference>&& value) { SetSourceSegments(std::move(value)); return *this;}

    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline SegmentGroup& AddSourceSegments(const SegmentReference& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.push_back(value); return *this; }

    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline SegmentGroup& AddSourceSegments(SegmentReference&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies how to handle multiple base segments for the segment. For example,
     * if you specify three base segments for the segment, whether the resulting
     * segment is based on all, any, or none of the base segments.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Specifies how to handle multiple base segments for the segment. For example,
     * if you specify three base segments for the segment, whether the resulting
     * segment is based on all, any, or none of the base segments.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>Specifies how to handle multiple base segments for the segment. For example,
     * if you specify three base segments for the segment, whether the resulting
     * segment is based on all, any, or none of the base segments.</p>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>Specifies how to handle multiple base segments for the segment. For example,
     * if you specify three base segments for the segment, whether the resulting
     * segment is based on all, any, or none of the base segments.</p>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>Specifies how to handle multiple base segments for the segment. For example,
     * if you specify three base segments for the segment, whether the resulting
     * segment is based on all, any, or none of the base segments.</p>
     */
    inline SegmentGroup& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>Specifies how to handle multiple base segments for the segment. For example,
     * if you specify three base segments for the segment, whether the resulting
     * segment is based on all, any, or none of the base segments.</p>
     */
    inline SegmentGroup& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>Specifies how to handle multiple dimensions for the segment. For example, if
     * you specify three dimensions for the segment, whether the resulting segment
     * includes endpoints that match all, any, or none of the dimensions.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>Specifies how to handle multiple dimensions for the segment. For example, if
     * you specify three dimensions for the segment, whether the resulting segment
     * includes endpoints that match all, any, or none of the dimensions.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies how to handle multiple dimensions for the segment. For example, if
     * you specify three dimensions for the segment, whether the resulting segment
     * includes endpoints that match all, any, or none of the dimensions.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies how to handle multiple dimensions for the segment. For example, if
     * you specify three dimensions for the segment, whether the resulting segment
     * includes endpoints that match all, any, or none of the dimensions.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies how to handle multiple dimensions for the segment. For example, if
     * you specify three dimensions for the segment, whether the resulting segment
     * includes endpoints that match all, any, or none of the dimensions.</p>
     */
    inline SegmentGroup& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>Specifies how to handle multiple dimensions for the segment. For example, if
     * you specify three dimensions for the segment, whether the resulting segment
     * includes endpoints that match all, any, or none of the dimensions.</p>
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
