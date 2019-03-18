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
namespace Pinpoint
{
namespace Model
{

  /**
   * Segment reference.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentReference">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentReference
  {
  public:
    SegmentReference();
    SegmentReference(Aws::Utils::Json::JsonView jsonValue);
    SegmentReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A unique identifier for the segment.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A unique identifier for the segment.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A unique identifier for the segment.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A unique identifier for the segment.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A unique identifier for the segment.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A unique identifier for the segment.
     */
    inline SegmentReference& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A unique identifier for the segment.
     */
    inline SegmentReference& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A unique identifier for the segment.
     */
    inline SegmentReference& WithId(const char* value) { SetId(value); return *this;}


    /**
     * If specified contains a specific version of the segment included.
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * If specified contains a specific version of the segment included.
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * If specified contains a specific version of the segment included.
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * If specified contains a specific version of the segment included.
     */
    inline SegmentReference& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
