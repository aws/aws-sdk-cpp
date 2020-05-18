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
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides a group of results for a query that retrieved information about
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GroupCount">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API GroupCount
  {
  public:
    GroupCount();
    GroupCount(Aws::Utils::Json::JsonView jsonValue);
    GroupCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of findings in the group of query results.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The total number of findings in the group of query results.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The total number of findings in the group of query results.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The total number of findings in the group of query results.</p>
     */
    inline GroupCount& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline const Aws::String& GetGroupKey() const{ return m_groupKey; }

    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline bool GroupKeyHasBeenSet() const { return m_groupKeyHasBeenSet; }

    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline void SetGroupKey(const Aws::String& value) { m_groupKeyHasBeenSet = true; m_groupKey = value; }

    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline void SetGroupKey(Aws::String&& value) { m_groupKeyHasBeenSet = true; m_groupKey = std::move(value); }

    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline void SetGroupKey(const char* value) { m_groupKeyHasBeenSet = true; m_groupKey.assign(value); }

    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline GroupCount& WithGroupKey(const Aws::String& value) { SetGroupKey(value); return *this;}

    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline GroupCount& WithGroupKey(Aws::String&& value) { SetGroupKey(std::move(value)); return *this;}

    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline GroupCount& WithGroupKey(const char* value) { SetGroupKey(value); return *this;}

  private:

    long long m_count;
    bool m_countHasBeenSet;

    Aws::String m_groupKey;
    bool m_groupKeyHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
