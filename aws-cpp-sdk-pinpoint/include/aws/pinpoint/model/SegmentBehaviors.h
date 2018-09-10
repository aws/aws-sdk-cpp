﻿/*
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
#include <aws/pinpoint/model/RecencyDimension.h>
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
   * Segment behavior dimensions<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentBehaviors">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentBehaviors
  {
  public:
    SegmentBehaviors();
    SegmentBehaviors(Aws::Utils::Json::JsonView jsonValue);
    SegmentBehaviors& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The recency of use.
     */
    inline const RecencyDimension& GetRecency() const{ return m_recency; }

    /**
     * The recency of use.
     */
    inline void SetRecency(const RecencyDimension& value) { m_recencyHasBeenSet = true; m_recency = value; }

    /**
     * The recency of use.
     */
    inline void SetRecency(RecencyDimension&& value) { m_recencyHasBeenSet = true; m_recency = std::move(value); }

    /**
     * The recency of use.
     */
    inline SegmentBehaviors& WithRecency(const RecencyDimension& value) { SetRecency(value); return *this;}

    /**
     * The recency of use.
     */
    inline SegmentBehaviors& WithRecency(RecencyDimension&& value) { SetRecency(std::move(value)); return *this;}

  private:

    RecencyDimension m_recency;
    bool m_recencyHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
