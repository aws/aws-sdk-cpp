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
    AWS_CUSTOMERPROFILES_API Group() = default;
    AWS_CUSTOMERPROFILES_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the attributes to segment on.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    Group& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    Group& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the starting source of data.</p>
     */
    inline const Aws::Vector<SourceSegment>& GetSourceSegments() const { return m_sourceSegments; }
    inline bool SourceSegmentsHasBeenSet() const { return m_sourceSegmentsHasBeenSet; }
    template<typename SourceSegmentsT = Aws::Vector<SourceSegment>>
    void SetSourceSegments(SourceSegmentsT&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = std::forward<SourceSegmentsT>(value); }
    template<typename SourceSegmentsT = Aws::Vector<SourceSegment>>
    Group& WithSourceSegments(SourceSegmentsT&& value) { SetSourceSegments(std::forward<SourceSegmentsT>(value)); return *this;}
    template<typename SourceSegmentsT = SourceSegment>
    Group& AddSourceSegments(SourceSegmentsT&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.emplace_back(std::forward<SourceSegmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines how to interact with the source data.</p>
     */
    inline IncludeOptions GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(IncludeOptions value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline Group& WithSourceType(IncludeOptions value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how to interact with the profiles found in the current filtering.</p>
     */
    inline IncludeOptions GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(IncludeOptions value) { m_typeHasBeenSet = true; m_type = value; }
    inline Group& WithType(IncludeOptions value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<SourceSegment> m_sourceSegments;
    bool m_sourceSegmentsHasBeenSet = false;

    IncludeOptions m_sourceType{IncludeOptions::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    IncludeOptions m_type{IncludeOptions::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
