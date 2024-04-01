/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>Searches for a particular search term.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchTermFilterExpression">AWS
   * API Reference</a></p>
   */
  class SearchTermFilterExpression
  {
  public:
    AWS_DEADLINE_API SearchTermFilterExpression();
    AWS_DEADLINE_API SearchTermFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SearchTermFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The term to search for.</p>
     */
    inline const Aws::String& GetSearchTerm() const{ return m_searchTerm; }

    /**
     * <p>The term to search for.</p>
     */
    inline bool SearchTermHasBeenSet() const { return m_searchTermHasBeenSet; }

    /**
     * <p>The term to search for.</p>
     */
    inline void SetSearchTerm(const Aws::String& value) { m_searchTermHasBeenSet = true; m_searchTerm = value; }

    /**
     * <p>The term to search for.</p>
     */
    inline void SetSearchTerm(Aws::String&& value) { m_searchTermHasBeenSet = true; m_searchTerm = std::move(value); }

    /**
     * <p>The term to search for.</p>
     */
    inline void SetSearchTerm(const char* value) { m_searchTermHasBeenSet = true; m_searchTerm.assign(value); }

    /**
     * <p>The term to search for.</p>
     */
    inline SearchTermFilterExpression& WithSearchTerm(const Aws::String& value) { SetSearchTerm(value); return *this;}

    /**
     * <p>The term to search for.</p>
     */
    inline SearchTermFilterExpression& WithSearchTerm(Aws::String&& value) { SetSearchTerm(std::move(value)); return *this;}

    /**
     * <p>The term to search for.</p>
     */
    inline SearchTermFilterExpression& WithSearchTerm(const char* value) { SetSearchTerm(value); return *this;}

  private:

    Aws::String m_searchTerm;
    bool m_searchTermHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
