/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/EqualToExpression.h>
#include <aws/datazone/model/GreaterThanExpression.h>
#include <aws/datazone/model/GreaterThanOrEqualToExpression.h>
#include <aws/datazone/model/InExpression.h>
#include <aws/datazone/model/IsNotNullExpression.h>
#include <aws/datazone/model/IsNullExpression.h>
#include <aws/datazone/model/LessThanExpression.h>
#include <aws/datazone/model/LessThanOrEqualToExpression.h>
#include <aws/datazone/model/LikeExpression.h>
#include <aws/datazone/model/NotEqualToExpression.h>
#include <aws/datazone/model/NotInExpression.h>
#include <aws/datazone/model/NotLikeExpression.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The row filter expression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RowFilterExpression">AWS
   * API Reference</a></p>
   */
  class RowFilterExpression
  {
  public:
    AWS_DATAZONE_API RowFilterExpression();
    AWS_DATAZONE_API RowFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RowFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 'equal to' clause of the row filter expression.</p>
     */
    inline const EqualToExpression& GetEqualTo() const{ return m_equalTo; }
    inline bool EqualToHasBeenSet() const { return m_equalToHasBeenSet; }
    inline void SetEqualTo(const EqualToExpression& value) { m_equalToHasBeenSet = true; m_equalTo = value; }
    inline void SetEqualTo(EqualToExpression&& value) { m_equalToHasBeenSet = true; m_equalTo = std::move(value); }
    inline RowFilterExpression& WithEqualTo(const EqualToExpression& value) { SetEqualTo(value); return *this;}
    inline RowFilterExpression& WithEqualTo(EqualToExpression&& value) { SetEqualTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'greater than' clause of the row filter expression.</p>
     */
    inline const GreaterThanExpression& GetGreaterThan() const{ return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    inline void SetGreaterThan(const GreaterThanExpression& value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }
    inline void SetGreaterThan(GreaterThanExpression&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::move(value); }
    inline RowFilterExpression& WithGreaterThan(const GreaterThanExpression& value) { SetGreaterThan(value); return *this;}
    inline RowFilterExpression& WithGreaterThan(GreaterThanExpression&& value) { SetGreaterThan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'greater than or equal to' clause of the filter expression.</p>
     */
    inline const GreaterThanOrEqualToExpression& GetGreaterThanOrEqualTo() const{ return m_greaterThanOrEqualTo; }
    inline bool GreaterThanOrEqualToHasBeenSet() const { return m_greaterThanOrEqualToHasBeenSet; }
    inline void SetGreaterThanOrEqualTo(const GreaterThanOrEqualToExpression& value) { m_greaterThanOrEqualToHasBeenSet = true; m_greaterThanOrEqualTo = value; }
    inline void SetGreaterThanOrEqualTo(GreaterThanOrEqualToExpression&& value) { m_greaterThanOrEqualToHasBeenSet = true; m_greaterThanOrEqualTo = std::move(value); }
    inline RowFilterExpression& WithGreaterThanOrEqualTo(const GreaterThanOrEqualToExpression& value) { SetGreaterThanOrEqualTo(value); return *this;}
    inline RowFilterExpression& WithGreaterThanOrEqualTo(GreaterThanOrEqualToExpression&& value) { SetGreaterThanOrEqualTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'in' clause of the row filter expression.</p>
     */
    inline const InExpression& GetIn() const{ return m_in; }
    inline bool InHasBeenSet() const { return m_inHasBeenSet; }
    inline void SetIn(const InExpression& value) { m_inHasBeenSet = true; m_in = value; }
    inline void SetIn(InExpression&& value) { m_inHasBeenSet = true; m_in = std::move(value); }
    inline RowFilterExpression& WithIn(const InExpression& value) { SetIn(value); return *this;}
    inline RowFilterExpression& WithIn(InExpression&& value) { SetIn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'is not null' clause of the row filter expression.</p>
     */
    inline const IsNotNullExpression& GetIsNotNull() const{ return m_isNotNull; }
    inline bool IsNotNullHasBeenSet() const { return m_isNotNullHasBeenSet; }
    inline void SetIsNotNull(const IsNotNullExpression& value) { m_isNotNullHasBeenSet = true; m_isNotNull = value; }
    inline void SetIsNotNull(IsNotNullExpression&& value) { m_isNotNullHasBeenSet = true; m_isNotNull = std::move(value); }
    inline RowFilterExpression& WithIsNotNull(const IsNotNullExpression& value) { SetIsNotNull(value); return *this;}
    inline RowFilterExpression& WithIsNotNull(IsNotNullExpression&& value) { SetIsNotNull(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'is null' clause of the row filter expression.</p>
     */
    inline const IsNullExpression& GetIsNull() const{ return m_isNull; }
    inline bool IsNullHasBeenSet() const { return m_isNullHasBeenSet; }
    inline void SetIsNull(const IsNullExpression& value) { m_isNullHasBeenSet = true; m_isNull = value; }
    inline void SetIsNull(IsNullExpression&& value) { m_isNullHasBeenSet = true; m_isNull = std::move(value); }
    inline RowFilterExpression& WithIsNull(const IsNullExpression& value) { SetIsNull(value); return *this;}
    inline RowFilterExpression& WithIsNull(IsNullExpression&& value) { SetIsNull(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'less than' clause of the row filter expression.</p>
     */
    inline const LessThanExpression& GetLessThan() const{ return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    inline void SetLessThan(const LessThanExpression& value) { m_lessThanHasBeenSet = true; m_lessThan = value; }
    inline void SetLessThan(LessThanExpression&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::move(value); }
    inline RowFilterExpression& WithLessThan(const LessThanExpression& value) { SetLessThan(value); return *this;}
    inline RowFilterExpression& WithLessThan(LessThanExpression&& value) { SetLessThan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'less than or equal to' clause of the row filter expression.</p>
     */
    inline const LessThanOrEqualToExpression& GetLessThanOrEqualTo() const{ return m_lessThanOrEqualTo; }
    inline bool LessThanOrEqualToHasBeenSet() const { return m_lessThanOrEqualToHasBeenSet; }
    inline void SetLessThanOrEqualTo(const LessThanOrEqualToExpression& value) { m_lessThanOrEqualToHasBeenSet = true; m_lessThanOrEqualTo = value; }
    inline void SetLessThanOrEqualTo(LessThanOrEqualToExpression&& value) { m_lessThanOrEqualToHasBeenSet = true; m_lessThanOrEqualTo = std::move(value); }
    inline RowFilterExpression& WithLessThanOrEqualTo(const LessThanOrEqualToExpression& value) { SetLessThanOrEqualTo(value); return *this;}
    inline RowFilterExpression& WithLessThanOrEqualTo(LessThanOrEqualToExpression&& value) { SetLessThanOrEqualTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'like' clause of the row filter expression.</p>
     */
    inline const LikeExpression& GetLike() const{ return m_like; }
    inline bool LikeHasBeenSet() const { return m_likeHasBeenSet; }
    inline void SetLike(const LikeExpression& value) { m_likeHasBeenSet = true; m_like = value; }
    inline void SetLike(LikeExpression&& value) { m_likeHasBeenSet = true; m_like = std::move(value); }
    inline RowFilterExpression& WithLike(const LikeExpression& value) { SetLike(value); return *this;}
    inline RowFilterExpression& WithLike(LikeExpression&& value) { SetLike(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'no equal to' clause of the row filter expression.</p>
     */
    inline const NotEqualToExpression& GetNotEqualTo() const{ return m_notEqualTo; }
    inline bool NotEqualToHasBeenSet() const { return m_notEqualToHasBeenSet; }
    inline void SetNotEqualTo(const NotEqualToExpression& value) { m_notEqualToHasBeenSet = true; m_notEqualTo = value; }
    inline void SetNotEqualTo(NotEqualToExpression&& value) { m_notEqualToHasBeenSet = true; m_notEqualTo = std::move(value); }
    inline RowFilterExpression& WithNotEqualTo(const NotEqualToExpression& value) { SetNotEqualTo(value); return *this;}
    inline RowFilterExpression& WithNotEqualTo(NotEqualToExpression&& value) { SetNotEqualTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'not in' clause of the row filter expression.</p>
     */
    inline const NotInExpression& GetNotIn() const{ return m_notIn; }
    inline bool NotInHasBeenSet() const { return m_notInHasBeenSet; }
    inline void SetNotIn(const NotInExpression& value) { m_notInHasBeenSet = true; m_notIn = value; }
    inline void SetNotIn(NotInExpression&& value) { m_notInHasBeenSet = true; m_notIn = std::move(value); }
    inline RowFilterExpression& WithNotIn(const NotInExpression& value) { SetNotIn(value); return *this;}
    inline RowFilterExpression& WithNotIn(NotInExpression&& value) { SetNotIn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'not like' clause of the row filter expression.</p>
     */
    inline const NotLikeExpression& GetNotLike() const{ return m_notLike; }
    inline bool NotLikeHasBeenSet() const { return m_notLikeHasBeenSet; }
    inline void SetNotLike(const NotLikeExpression& value) { m_notLikeHasBeenSet = true; m_notLike = value; }
    inline void SetNotLike(NotLikeExpression&& value) { m_notLikeHasBeenSet = true; m_notLike = std::move(value); }
    inline RowFilterExpression& WithNotLike(const NotLikeExpression& value) { SetNotLike(value); return *this;}
    inline RowFilterExpression& WithNotLike(NotLikeExpression&& value) { SetNotLike(std::move(value)); return *this;}
    ///@}
  private:

    EqualToExpression m_equalTo;
    bool m_equalToHasBeenSet = false;

    GreaterThanExpression m_greaterThan;
    bool m_greaterThanHasBeenSet = false;

    GreaterThanOrEqualToExpression m_greaterThanOrEqualTo;
    bool m_greaterThanOrEqualToHasBeenSet = false;

    InExpression m_in;
    bool m_inHasBeenSet = false;

    IsNotNullExpression m_isNotNull;
    bool m_isNotNullHasBeenSet = false;

    IsNullExpression m_isNull;
    bool m_isNullHasBeenSet = false;

    LessThanExpression m_lessThan;
    bool m_lessThanHasBeenSet = false;

    LessThanOrEqualToExpression m_lessThanOrEqualTo;
    bool m_lessThanOrEqualToHasBeenSet = false;

    LikeExpression m_like;
    bool m_likeHasBeenSet = false;

    NotEqualToExpression m_notEqualTo;
    bool m_notEqualToHasBeenSet = false;

    NotInExpression m_notIn;
    bool m_notInHasBeenSet = false;

    NotLikeExpression m_notLike;
    bool m_notLikeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
