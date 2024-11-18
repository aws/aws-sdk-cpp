/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/IncludeOptions.h>
#include <aws/customer-profiles/model/Dimension.h>
#include <aws/customer-profiles/model/SourceSegment.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Contains dimensions that determine what to segment on.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Group">AWS
   * API Reference</a></p>
   */
  class Group
  {
  public:
    AWS_CUSTOMERPROFILES_API Group();
    AWS_CUSTOMERPROFILES_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the attributes to segment on.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline Group& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}
    inline Group& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline Group& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline Group& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the starting source of data.</p>
     */
    inline const Aws::Vector<SourceSegment>& GetSourceSegments() const{ return m_sourceSegments; }
    inline bool SourceSegmentsHasBeenSet() const { return m_sourceSegmentsHasBeenSet; }
    inline void SetSourceSegments(const Aws::Vector<SourceSegment>& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = value; }
    inline void SetSourceSegments(Aws::Vector<SourceSegment>&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = std::move(value); }
    inline Group& WithSourceSegments(const Aws::Vector<SourceSegment>& value) { SetSourceSegments(value); return *this;}
    inline Group& WithSourceSegments(Aws::Vector<SourceSegment>&& value) { SetSourceSegments(std::move(value)); return *this;}
    inline Group& AddSourceSegments(const SourceSegment& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.push_back(value); return *this; }
    inline Group& AddSourceSegments(SourceSegment&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines how to interact with the source data.</p>
     */
    inline const IncludeOptions& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const IncludeOptions& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(IncludeOptions&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline Group& WithSourceType(const IncludeOptions& value) { SetSourceType(value); return *this;}
    inline Group& WithSourceType(IncludeOptions&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how to interact with the profiles found in the current filtering.</p>
     */
    inline const IncludeOptions& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const IncludeOptions& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(IncludeOptions&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Group& WithType(const IncludeOptions& value) { SetType(value); return *this;}
    inline Group& WithType(IncludeOptions&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<SourceSegment> m_sourceSegments;
    bool m_sourceSegmentsHasBeenSet = false;

    IncludeOptions m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    IncludeOptions m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
