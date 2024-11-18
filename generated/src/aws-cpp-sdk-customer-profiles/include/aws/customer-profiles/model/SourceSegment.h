/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The source segments to build off of.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SourceSegment">AWS
   * API Reference</a></p>
   */
  class SourceSegment
  {
  public:
    AWS_CUSTOMERPROFILES_API SourceSegment();
    AWS_CUSTOMERPROFILES_API SourceSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API SourceSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const{ return m_segmentDefinitionName; }
    inline bool SegmentDefinitionNameHasBeenSet() const { return m_segmentDefinitionNameHasBeenSet; }
    inline void SetSegmentDefinitionName(const Aws::String& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = value; }
    inline void SetSegmentDefinitionName(Aws::String&& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = std::move(value); }
    inline void SetSegmentDefinitionName(const char* value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName.assign(value); }
    inline SourceSegment& WithSegmentDefinitionName(const Aws::String& value) { SetSegmentDefinitionName(value); return *this;}
    inline SourceSegment& WithSegmentDefinitionName(Aws::String&& value) { SetSegmentDefinitionName(std::move(value)); return *this;}
    inline SourceSegment& WithSegmentDefinitionName(const char* value) { SetSegmentDefinitionName(value); return *this;}
    ///@}
  private:

    Aws::String m_segmentDefinitionName;
    bool m_segmentDefinitionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
