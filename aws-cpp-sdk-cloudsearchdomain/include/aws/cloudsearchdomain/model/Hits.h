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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearchdomain/model/Hit.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>The collection of documents that match the search request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Hits">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API Hits
  {
  public:
    Hits();
    Hits(Aws::Utils::Json::JsonView jsonValue);
    Hits& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of documents that match the search request.</p>
     */
    inline long long GetFound() const{ return m_found; }

    /**
     * <p>The total number of documents that match the search request.</p>
     */
    inline bool FoundHasBeenSet() const { return m_foundHasBeenSet; }

    /**
     * <p>The total number of documents that match the search request.</p>
     */
    inline void SetFound(long long value) { m_foundHasBeenSet = true; m_found = value; }

    /**
     * <p>The total number of documents that match the search request.</p>
     */
    inline Hits& WithFound(long long value) { SetFound(value); return *this;}


    /**
     * <p>The index of the first matching document.</p>
     */
    inline long long GetStart() const{ return m_start; }

    /**
     * <p>The index of the first matching document.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The index of the first matching document.</p>
     */
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The index of the first matching document.</p>
     */
    inline Hits& WithStart(long long value) { SetStart(value); return *this;}


    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline const Aws::String& GetCursor() const{ return m_cursor; }

    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline bool CursorHasBeenSet() const { return m_cursorHasBeenSet; }

    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline void SetCursor(const Aws::String& value) { m_cursorHasBeenSet = true; m_cursor = value; }

    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline void SetCursor(Aws::String&& value) { m_cursorHasBeenSet = true; m_cursor = std::move(value); }

    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline void SetCursor(const char* value) { m_cursorHasBeenSet = true; m_cursor.assign(value); }

    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline Hits& WithCursor(const Aws::String& value) { SetCursor(value); return *this;}

    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline Hits& WithCursor(Aws::String&& value) { SetCursor(std::move(value)); return *this;}

    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline Hits& WithCursor(const char* value) { SetCursor(value); return *this;}


    /**
     * <p>A document that matches the search request.</p>
     */
    inline const Aws::Vector<Hit>& GetHit() const{ return m_hit; }

    /**
     * <p>A document that matches the search request.</p>
     */
    inline bool HitHasBeenSet() const { return m_hitHasBeenSet; }

    /**
     * <p>A document that matches the search request.</p>
     */
    inline void SetHit(const Aws::Vector<Hit>& value) { m_hitHasBeenSet = true; m_hit = value; }

    /**
     * <p>A document that matches the search request.</p>
     */
    inline void SetHit(Aws::Vector<Hit>&& value) { m_hitHasBeenSet = true; m_hit = std::move(value); }

    /**
     * <p>A document that matches the search request.</p>
     */
    inline Hits& WithHit(const Aws::Vector<Hit>& value) { SetHit(value); return *this;}

    /**
     * <p>A document that matches the search request.</p>
     */
    inline Hits& WithHit(Aws::Vector<Hit>&& value) { SetHit(std::move(value)); return *this;}

    /**
     * <p>A document that matches the search request.</p>
     */
    inline Hits& AddHit(const Hit& value) { m_hitHasBeenSet = true; m_hit.push_back(value); return *this; }

    /**
     * <p>A document that matches the search request.</p>
     */
    inline Hits& AddHit(Hit&& value) { m_hitHasBeenSet = true; m_hit.push_back(std::move(value)); return *this; }

  private:

    long long m_found;
    bool m_foundHasBeenSet;

    long long m_start;
    bool m_startHasBeenSet;

    Aws::String m_cursor;
    bool m_cursorHasBeenSet;

    Aws::Vector<Hit> m_hit;
    bool m_hitHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
