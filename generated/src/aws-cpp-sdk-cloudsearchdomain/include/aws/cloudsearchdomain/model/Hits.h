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
    AWS_CLOUDSEARCHDOMAIN_API Hits() = default;
    AWS_CLOUDSEARCHDOMAIN_API Hits(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Hits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of documents that match the search request.</p>
     */
    inline long long GetFound() const { return m_found; }
    inline bool FoundHasBeenSet() const { return m_foundHasBeenSet; }
    inline void SetFound(long long value) { m_foundHasBeenSet = true; m_found = value; }
    inline Hits& WithFound(long long value) { SetFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the first matching document.</p>
     */
    inline long long GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }
    inline Hits& WithStart(long long value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cursor that can be used to retrieve the next set of matching documents when
     * you want to page through a large result set.</p>
     */
    inline const Aws::String& GetCursor() const { return m_cursor; }
    inline bool CursorHasBeenSet() const { return m_cursorHasBeenSet; }
    template<typename CursorT = Aws::String>
    void SetCursor(CursorT&& value) { m_cursorHasBeenSet = true; m_cursor = std::forward<CursorT>(value); }
    template<typename CursorT = Aws::String>
    Hits& WithCursor(CursorT&& value) { SetCursor(std::forward<CursorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A document that matches the search request.</p>
     */
    inline const Aws::Vector<Hit>& GetHit() const { return m_hit; }
    inline bool HitHasBeenSet() const { return m_hitHasBeenSet; }
    template<typename HitT = Aws::Vector<Hit>>
    void SetHit(HitT&& value) { m_hitHasBeenSet = true; m_hit = std::forward<HitT>(value); }
    template<typename HitT = Aws::Vector<Hit>>
    Hits& WithHit(HitT&& value) { SetHit(std::forward<HitT>(value)); return *this;}
    template<typename HitT = Hit>
    Hits& AddHit(HitT&& value) { m_hitHasBeenSet = true; m_hit.emplace_back(std::forward<HitT>(value)); return *this; }
    ///@}
  private:

    long long m_found{0};
    bool m_foundHasBeenSet = false;

    long long m_start{0};
    bool m_startHasBeenSet = false;

    Aws::String m_cursor;
    bool m_cursorHasBeenSet = false;

    Aws::Vector<Hit> m_hit;
    bool m_hitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
