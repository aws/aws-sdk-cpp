/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Hits
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API Hits();
    AWS_CLOUDSEARCHDOMAIN_API Hits(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Hits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of documents that match the search request.</p>
     */
    inline long long GetFound() const{ return m_found; }
    inline bool FoundHasBeenSet() const { return m_foundHasBeenSet; }
    inline void SetFound(long long value) { m_foundHasBeenSet = true; m_found = value; }
    inline Hits& WithFound(long long value) { SetFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the first matching document.</p>
     */
    inline long long GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }
    inline Hits& WithStart(long long value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline const Aws::String& GetCursor() const{ return m_cursor; }
    inline bool CursorHasBeenSet() const { return m_cursorHasBeenSet; }
    inline void SetCursor(const Aws::String& value) { m_cursorHasBeenSet = true; m_cursor = value; }
    inline void SetCursor(Aws::String&& value) { m_cursorHasBeenSet = true; m_cursor = std::move(value); }
    inline void SetCursor(const char* value) { m_cursorHasBeenSet = true; m_cursor.assign(value); }
    inline Hits& WithCursor(const Aws::String& value) { SetCursor(value); return *this;}
    inline Hits& WithCursor(Aws::String&& value) { SetCursor(std::move(value)); return *this;}
    inline Hits& WithCursor(const char* value) { SetCursor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A document that matches the search request.</p>
     */
    inline const Aws::Vector<Hit>& GetHit() const{ return m_hit; }
    inline bool HitHasBeenSet() const { return m_hitHasBeenSet; }
    inline void SetHit(const Aws::Vector<Hit>& value) { m_hitHasBeenSet = true; m_hit = value; }
    inline void SetHit(Aws::Vector<Hit>&& value) { m_hitHasBeenSet = true; m_hit = std::move(value); }
    inline Hits& WithHit(const Aws::Vector<Hit>& value) { SetHit(value); return *this;}
    inline Hits& WithHit(Aws::Vector<Hit>&& value) { SetHit(std::move(value)); return *this;}
    inline Hits& AddHit(const Hit& value) { m_hitHasBeenSet = true; m_hit.push_back(value); return *this; }
    inline Hits& AddHit(Hit&& value) { m_hitHasBeenSet = true; m_hit.push_back(std::move(value)); return *this; }
    ///@}
  private:

    long long m_found;
    bool m_foundHasBeenSet = false;

    long long m_start;
    bool m_startHasBeenSet = false;

    Aws::String m_cursor;
    bool m_cursorHasBeenSet = false;

    Aws::Vector<Hit> m_hit;
    bool m_hitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
