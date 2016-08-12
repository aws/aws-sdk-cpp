/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains a key range. For export jobs, a <code>S3Resource</code> object can
   * have an optional <code>KeyRange</code> value. The length of the range is defined
   * at job creation, and has either an inclusive <code>BeginMarker</code>, an
   * inclusive <code>EndMarker</code>, or both. Ranges are UTF-8 binary sorted.</p>
   */
  class AWS_SNOWBALL_API KeyRange
  {
  public:
    KeyRange();
    KeyRange(const Aws::Utils::Json::JsonValue& jsonValue);
    KeyRange& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The key that starts an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline const Aws::String& GetBeginMarker() const{ return m_beginMarker; }

    /**
     * <p>The key that starts an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline void SetBeginMarker(const Aws::String& value) { m_beginMarkerHasBeenSet = true; m_beginMarker = value; }

    /**
     * <p>The key that starts an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline void SetBeginMarker(Aws::String&& value) { m_beginMarkerHasBeenSet = true; m_beginMarker = value; }

    /**
     * <p>The key that starts an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline void SetBeginMarker(const char* value) { m_beginMarkerHasBeenSet = true; m_beginMarker.assign(value); }

    /**
     * <p>The key that starts an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline KeyRange& WithBeginMarker(const Aws::String& value) { SetBeginMarker(value); return *this;}

    /**
     * <p>The key that starts an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline KeyRange& WithBeginMarker(Aws::String&& value) { SetBeginMarker(value); return *this;}

    /**
     * <p>The key that starts an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline KeyRange& WithBeginMarker(const char* value) { SetBeginMarker(value); return *this;}

    /**
     * <p>The key that ends an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline const Aws::String& GetEndMarker() const{ return m_endMarker; }

    /**
     * <p>The key that ends an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline void SetEndMarker(const Aws::String& value) { m_endMarkerHasBeenSet = true; m_endMarker = value; }

    /**
     * <p>The key that ends an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline void SetEndMarker(Aws::String&& value) { m_endMarkerHasBeenSet = true; m_endMarker = value; }

    /**
     * <p>The key that ends an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline void SetEndMarker(const char* value) { m_endMarkerHasBeenSet = true; m_endMarker.assign(value); }

    /**
     * <p>The key that ends an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline KeyRange& WithEndMarker(const Aws::String& value) { SetEndMarker(value); return *this;}

    /**
     * <p>The key that ends an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline KeyRange& WithEndMarker(Aws::String&& value) { SetEndMarker(value); return *this;}

    /**
     * <p>The key that ends an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline KeyRange& WithEndMarker(const char* value) { SetEndMarker(value); return *this;}

  private:
    Aws::String m_beginMarker;
    bool m_beginMarkerHasBeenSet;
    Aws::String m_endMarker;
    bool m_endMarkerHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
