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
    SegmentGroup(const Aws::Utils::Json::JsonValue& jsonValue);
    SegmentGroup& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List of dimensions to include or exclude.
     */
    inline const Aws::Vector<SegmentDimensions>& GetDimensions() const{ return m_dimensions; }

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
     * Segments that define the source of this segment. Currently a maximum of 1 import
     * segment is supported.
     */
    inline const Aws::Vector<SegmentReference>& GetSourceSegments() const{ return m_sourceSegments; }

    /**
     * Segments that define the source of this segment. Currently a maximum of 1 import
     * segment is supported.
     */
    inline void SetSourceSegments(const Aws::Vector<SegmentReference>& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = value; }

    /**
     * Segments that define the source of this segment. Currently a maximum of 1 import
     * segment is supported.
     */
    inline void SetSourceSegments(Aws::Vector<SegmentReference>&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = std::move(value); }

    /**
     * Segments that define the source of this segment. Currently a maximum of 1 import
     * segment is supported.
     */
    inline SegmentGroup& WithSourceSegments(const Aws::Vector<SegmentReference>& value) { SetSourceSegments(value); return *this;}

    /**
     * Segments that define the source of this segment. Currently a maximum of 1 import
     * segment is supported.
     */
    inline SegmentGroup& WithSourceSegments(Aws::Vector<SegmentReference>&& value) { SetSourceSegments(std::move(value)); return *this;}

    /**
     * Segments that define the source of this segment. Currently a maximum of 1 import
     * segment is supported.
     */
    inline SegmentGroup& AddSourceSegments(const SegmentReference& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.push_back(value); return *this; }

    /**
     * Segments that define the source of this segment. Currently a maximum of 1 import
     * segment is supported.
     */
    inline SegmentGroup& AddSourceSegments(SegmentReference&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.push_back(std::move(value)); return *this; }


    /**
     * Include or exclude the source.
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * Include or exclude the source.
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * Include or exclude the source.
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * Include or exclude the source.
     */
    inline SegmentGroup& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * Include or exclude the source.
     */
    inline SegmentGroup& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * How should the dimensions be applied for the result
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * How should the dimensions be applied for the result
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * How should the dimensions be applied for the result
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * How should the dimensions be applied for the result
     */
    inline SegmentGroup& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * How should the dimensions be applied for the result
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
