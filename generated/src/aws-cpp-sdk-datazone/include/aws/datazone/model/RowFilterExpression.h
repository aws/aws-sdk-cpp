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
    AWS_DATAZONE_API RowFilterExpression() = default;
    AWS_DATAZONE_API RowFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RowFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 'equal to' clause of the row filter expression.</p>
     */
    inline const EqualToExpression& GetEqualTo() const { return m_equalTo; }
    inline bool EqualToHasBeenSet() const { return m_equalToHasBeenSet; }
    template<typename EqualToT = EqualToExpression>
    void SetEqualTo(EqualToT&& value) { m_equalToHasBeenSet = true; m_equalTo = std::forward<EqualToT>(value); }
    template<typename EqualToT = EqualToExpression>
    RowFilterExpression& WithEqualTo(EqualToT&& value) { SetEqualTo(std::forward<EqualToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'greater than' clause of the row filter expression.</p>
     */
    inline const GreaterThanExpression& GetGreaterThan() const { return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    template<typename GreaterThanT = GreaterThanExpression>
    void SetGreaterThan(GreaterThanT&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::forward<GreaterThanT>(value); }
    template<typename GreaterThanT = GreaterThanExpression>
    RowFilterExpression& WithGreaterThan(GreaterThanT&& value) { SetGreaterThan(std::forward<GreaterThanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'greater than or equal to' clause of the filter expression.</p>
     */
    inline const GreaterThanOrEqualToExpression& GetGreaterThanOrEqualTo() const { return m_greaterThanOrEqualTo; }
    inline bool GreaterThanOrEqualToHasBeenSet() const { return m_greaterThanOrEqualToHasBeenSet; }
    template<typename GreaterThanOrEqualToT = GreaterThanOrEqualToExpression>
    void SetGreaterThanOrEqualTo(GreaterThanOrEqualToT&& value) { m_greaterThanOrEqualToHasBeenSet = true; m_greaterThanOrEqualTo = std::forward<GreaterThanOrEqualToT>(value); }
    template<typename GreaterThanOrEqualToT = GreaterThanOrEqualToExpression>
    RowFilterExpression& WithGreaterThanOrEqualTo(GreaterThanOrEqualToT&& value) { SetGreaterThanOrEqualTo(std::forward<GreaterThanOrEqualToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'in' clause of the row filter expression.</p>
     */
    inline const InExpression& GetIn() const { return m_in; }
    inline bool InHasBeenSet() const { return m_inHasBeenSet; }
    template<typename InT = InExpression>
    void SetIn(InT&& value) { m_inHasBeenSet = true; m_in = std::forward<InT>(value); }
    template<typename InT = InExpression>
    RowFilterExpression& WithIn(InT&& value) { SetIn(std::forward<InT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'is not null' clause of the row filter expression.</p>
     */
    inline const IsNotNullExpression& GetIsNotNull() const { return m_isNotNull; }
    inline bool IsNotNullHasBeenSet() const { return m_isNotNullHasBeenSet; }
    template<typename IsNotNullT = IsNotNullExpression>
    void SetIsNotNull(IsNotNullT&& value) { m_isNotNullHasBeenSet = true; m_isNotNull = std::forward<IsNotNullT>(value); }
    template<typename IsNotNullT = IsNotNullExpression>
    RowFilterExpression& WithIsNotNull(IsNotNullT&& value) { SetIsNotNull(std::forward<IsNotNullT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'is null' clause of the row filter expression.</p>
     */
    inline const IsNullExpression& GetIsNull() const { return m_isNull; }
    inline bool IsNullHasBeenSet() const { return m_isNullHasBeenSet; }
    template<typename IsNullT = IsNullExpression>
    void SetIsNull(IsNullT&& value) { m_isNullHasBeenSet = true; m_isNull = std::forward<IsNullT>(value); }
    template<typename IsNullT = IsNullExpression>
    RowFilterExpression& WithIsNull(IsNullT&& value) { SetIsNull(std::forward<IsNullT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'less than' clause of the row filter expression.</p>
     */
    inline const LessThanExpression& GetLessThan() const { return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    template<typename LessThanT = LessThanExpression>
    void SetLessThan(LessThanT&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::forward<LessThanT>(value); }
    template<typename LessThanT = LessThanExpression>
    RowFilterExpression& WithLessThan(LessThanT&& value) { SetLessThan(std::forward<LessThanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'less than or equal to' clause of the row filter expression.</p>
     */
    inline const LessThanOrEqualToExpression& GetLessThanOrEqualTo() const { return m_lessThanOrEqualTo; }
    inline bool LessThanOrEqualToHasBeenSet() const { return m_lessThanOrEqualToHasBeenSet; }
    template<typename LessThanOrEqualToT = LessThanOrEqualToExpression>
    void SetLessThanOrEqualTo(LessThanOrEqualToT&& value) { m_lessThanOrEqualToHasBeenSet = true; m_lessThanOrEqualTo = std::forward<LessThanOrEqualToT>(value); }
    template<typename LessThanOrEqualToT = LessThanOrEqualToExpression>
    RowFilterExpression& WithLessThanOrEqualTo(LessThanOrEqualToT&& value) { SetLessThanOrEqualTo(std::forward<LessThanOrEqualToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'like' clause of the row filter expression.</p>
     */
    inline const LikeExpression& GetLike() const { return m_like; }
    inline bool LikeHasBeenSet() const { return m_likeHasBeenSet; }
    template<typename LikeT = LikeExpression>
    void SetLike(LikeT&& value) { m_likeHasBeenSet = true; m_like = std::forward<LikeT>(value); }
    template<typename LikeT = LikeExpression>
    RowFilterExpression& WithLike(LikeT&& value) { SetLike(std::forward<LikeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'no equal to' clause of the row filter expression.</p>
     */
    inline const NotEqualToExpression& GetNotEqualTo() const { return m_notEqualTo; }
    inline bool NotEqualToHasBeenSet() const { return m_notEqualToHasBeenSet; }
    template<typename NotEqualToT = NotEqualToExpression>
    void SetNotEqualTo(NotEqualToT&& value) { m_notEqualToHasBeenSet = true; m_notEqualTo = std::forward<NotEqualToT>(value); }
    template<typename NotEqualToT = NotEqualToExpression>
    RowFilterExpression& WithNotEqualTo(NotEqualToT&& value) { SetNotEqualTo(std::forward<NotEqualToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'not in' clause of the row filter expression.</p>
     */
    inline const NotInExpression& GetNotIn() const { return m_notIn; }
    inline bool NotInHasBeenSet() const { return m_notInHasBeenSet; }
    template<typename NotInT = NotInExpression>
    void SetNotIn(NotInT&& value) { m_notInHasBeenSet = true; m_notIn = std::forward<NotInT>(value); }
    template<typename NotInT = NotInExpression>
    RowFilterExpression& WithNotIn(NotInT&& value) { SetNotIn(std::forward<NotInT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'not like' clause of the row filter expression.</p>
     */
    inline const NotLikeExpression& GetNotLike() const { return m_notLike; }
    inline bool NotLikeHasBeenSet() const { return m_notLikeHasBeenSet; }
    template<typename NotLikeT = NotLikeExpression>
    void SetNotLike(NotLikeT&& value) { m_notLikeHasBeenSet = true; m_notLike = std::forward<NotLikeT>(value); }
    template<typename NotLikeT = NotLikeExpression>
    RowFilterExpression& WithNotLike(NotLikeT&& value) { SetNotLike(std::forward<NotLikeT>(value)); return *this;}
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
