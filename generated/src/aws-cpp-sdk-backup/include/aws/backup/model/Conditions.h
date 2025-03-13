/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/ConditionParameter.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains information about which resources to include or exclude from a
   * backup plan using their tags. Conditions are case sensitive.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/Conditions">AWS
   * API Reference</a></p>
   */
  class Conditions
  {
  public:
    AWS_BACKUP_API Conditions() = default;
    AWS_BACKUP_API Conditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Conditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline const Aws::Vector<ConditionParameter>& GetStringEquals() const { return m_stringEquals; }
    inline bool StringEqualsHasBeenSet() const { return m_stringEqualsHasBeenSet; }
    template<typename StringEqualsT = Aws::Vector<ConditionParameter>>
    void SetStringEquals(StringEqualsT&& value) { m_stringEqualsHasBeenSet = true; m_stringEquals = std::forward<StringEqualsT>(value); }
    template<typename StringEqualsT = Aws::Vector<ConditionParameter>>
    Conditions& WithStringEquals(StringEqualsT&& value) { SetStringEquals(std::forward<StringEqualsT>(value)); return *this;}
    template<typename StringEqualsT = ConditionParameter>
    Conditions& AddStringEquals(StringEqualsT&& value) { m_stringEqualsHasBeenSet = true; m_stringEquals.emplace_back(std::forward<StringEqualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline const Aws::Vector<ConditionParameter>& GetStringNotEquals() const { return m_stringNotEquals; }
    inline bool StringNotEqualsHasBeenSet() const { return m_stringNotEqualsHasBeenSet; }
    template<typename StringNotEqualsT = Aws::Vector<ConditionParameter>>
    void SetStringNotEquals(StringNotEqualsT&& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals = std::forward<StringNotEqualsT>(value); }
    template<typename StringNotEqualsT = Aws::Vector<ConditionParameter>>
    Conditions& WithStringNotEquals(StringNotEqualsT&& value) { SetStringNotEquals(std::forward<StringNotEqualsT>(value)); return *this;}
    template<typename StringNotEqualsT = ConditionParameter>
    Conditions& AddStringNotEquals(StringNotEqualsT&& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals.emplace_back(std::forward<StringNotEqualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline const Aws::Vector<ConditionParameter>& GetStringLike() const { return m_stringLike; }
    inline bool StringLikeHasBeenSet() const { return m_stringLikeHasBeenSet; }
    template<typename StringLikeT = Aws::Vector<ConditionParameter>>
    void SetStringLike(StringLikeT&& value) { m_stringLikeHasBeenSet = true; m_stringLike = std::forward<StringLikeT>(value); }
    template<typename StringLikeT = Aws::Vector<ConditionParameter>>
    Conditions& WithStringLike(StringLikeT&& value) { SetStringLike(std::forward<StringLikeT>(value)); return *this;}
    template<typename StringLikeT = ConditionParameter>
    Conditions& AddStringLike(StringLikeT&& value) { m_stringLikeHasBeenSet = true; m_stringLike.emplace_back(std::forward<StringLikeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline const Aws::Vector<ConditionParameter>& GetStringNotLike() const { return m_stringNotLike; }
    inline bool StringNotLikeHasBeenSet() const { return m_stringNotLikeHasBeenSet; }
    template<typename StringNotLikeT = Aws::Vector<ConditionParameter>>
    void SetStringNotLike(StringNotLikeT&& value) { m_stringNotLikeHasBeenSet = true; m_stringNotLike = std::forward<StringNotLikeT>(value); }
    template<typename StringNotLikeT = Aws::Vector<ConditionParameter>>
    Conditions& WithStringNotLike(StringNotLikeT&& value) { SetStringNotLike(std::forward<StringNotLikeT>(value)); return *this;}
    template<typename StringNotLikeT = ConditionParameter>
    Conditions& AddStringNotLike(StringNotLikeT&& value) { m_stringNotLikeHasBeenSet = true; m_stringNotLike.emplace_back(std::forward<StringNotLikeT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ConditionParameter> m_stringEquals;
    bool m_stringEqualsHasBeenSet = false;

    Aws::Vector<ConditionParameter> m_stringNotEquals;
    bool m_stringNotEqualsHasBeenSet = false;

    Aws::Vector<ConditionParameter> m_stringLike;
    bool m_stringLikeHasBeenSet = false;

    Aws::Vector<ConditionParameter> m_stringNotLike;
    bool m_stringNotLikeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
