/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/FieldSortExpression.h>
#include <aws/deadline/model/ParameterSortExpression.h>
#include <aws/deadline/model/UserJobsFirst.h>
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
   * <p>The resources to search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchSortExpression">AWS
   * API Reference</a></p>
   */
  class SearchSortExpression
  {
  public:
    AWS_DEADLINE_API SearchSortExpression();
    AWS_DEADLINE_API SearchSortExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SearchSortExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Options for sorting by a field.</p>
     */
    inline const FieldSortExpression& GetFieldSort() const{ return m_fieldSort; }

    /**
     * <p>Options for sorting by a field.</p>
     */
    inline bool FieldSortHasBeenSet() const { return m_fieldSortHasBeenSet; }

    /**
     * <p>Options for sorting by a field.</p>
     */
    inline void SetFieldSort(const FieldSortExpression& value) { m_fieldSortHasBeenSet = true; m_fieldSort = value; }

    /**
     * <p>Options for sorting by a field.</p>
     */
    inline void SetFieldSort(FieldSortExpression&& value) { m_fieldSortHasBeenSet = true; m_fieldSort = std::move(value); }

    /**
     * <p>Options for sorting by a field.</p>
     */
    inline SearchSortExpression& WithFieldSort(const FieldSortExpression& value) { SetFieldSort(value); return *this;}

    /**
     * <p>Options for sorting by a field.</p>
     */
    inline SearchSortExpression& WithFieldSort(FieldSortExpression&& value) { SetFieldSort(std::move(value)); return *this;}


    /**
     * <p>Options for sorting by a parameter.</p>
     */
    inline const ParameterSortExpression& GetParameterSort() const{ return m_parameterSort; }

    /**
     * <p>Options for sorting by a parameter.</p>
     */
    inline bool ParameterSortHasBeenSet() const { return m_parameterSortHasBeenSet; }

    /**
     * <p>Options for sorting by a parameter.</p>
     */
    inline void SetParameterSort(const ParameterSortExpression& value) { m_parameterSortHasBeenSet = true; m_parameterSort = value; }

    /**
     * <p>Options for sorting by a parameter.</p>
     */
    inline void SetParameterSort(ParameterSortExpression&& value) { m_parameterSortHasBeenSet = true; m_parameterSort = std::move(value); }

    /**
     * <p>Options for sorting by a parameter.</p>
     */
    inline SearchSortExpression& WithParameterSort(const ParameterSortExpression& value) { SetParameterSort(value); return *this;}

    /**
     * <p>Options for sorting by a parameter.</p>
     */
    inline SearchSortExpression& WithParameterSort(ParameterSortExpression&& value) { SetParameterSort(std::move(value)); return *this;}


    /**
     * <p>Options for sorting a particular user's jobs first.</p>
     */
    inline const UserJobsFirst& GetUserJobsFirst() const{ return m_userJobsFirst; }

    /**
     * <p>Options for sorting a particular user's jobs first.</p>
     */
    inline bool UserJobsFirstHasBeenSet() const { return m_userJobsFirstHasBeenSet; }

    /**
     * <p>Options for sorting a particular user's jobs first.</p>
     */
    inline void SetUserJobsFirst(const UserJobsFirst& value) { m_userJobsFirstHasBeenSet = true; m_userJobsFirst = value; }

    /**
     * <p>Options for sorting a particular user's jobs first.</p>
     */
    inline void SetUserJobsFirst(UserJobsFirst&& value) { m_userJobsFirstHasBeenSet = true; m_userJobsFirst = std::move(value); }

    /**
     * <p>Options for sorting a particular user's jobs first.</p>
     */
    inline SearchSortExpression& WithUserJobsFirst(const UserJobsFirst& value) { SetUserJobsFirst(value); return *this;}

    /**
     * <p>Options for sorting a particular user's jobs first.</p>
     */
    inline SearchSortExpression& WithUserJobsFirst(UserJobsFirst&& value) { SetUserJobsFirst(std::move(value)); return *this;}

  private:

    FieldSortExpression m_fieldSort;
    bool m_fieldSortHasBeenSet = false;

    ParameterSortExpression m_parameterSort;
    bool m_parameterSortHasBeenSet = false;

    UserJobsFirst m_userJobsFirst;
    bool m_userJobsFirstHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
