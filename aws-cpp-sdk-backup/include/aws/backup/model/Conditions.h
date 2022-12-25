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
    AWS_BACKUP_API Conditions();
    AWS_BACKUP_API Conditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Conditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline const Aws::Vector<ConditionParameter>& GetStringEquals() const{ return m_stringEquals; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline bool StringEqualsHasBeenSet() const { return m_stringEqualsHasBeenSet; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline void SetStringEquals(const Aws::Vector<ConditionParameter>& value) { m_stringEqualsHasBeenSet = true; m_stringEquals = value; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline void SetStringEquals(Aws::Vector<ConditionParameter>&& value) { m_stringEqualsHasBeenSet = true; m_stringEquals = std::move(value); }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline Conditions& WithStringEquals(const Aws::Vector<ConditionParameter>& value) { SetStringEquals(value); return *this;}

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline Conditions& WithStringEquals(Aws::Vector<ConditionParameter>&& value) { SetStringEquals(std::move(value)); return *this;}

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline Conditions& AddStringEquals(const ConditionParameter& value) { m_stringEqualsHasBeenSet = true; m_stringEquals.push_back(value); return *this; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline Conditions& AddStringEquals(ConditionParameter&& value) { m_stringEqualsHasBeenSet = true; m_stringEquals.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline const Aws::Vector<ConditionParameter>& GetStringNotEquals() const{ return m_stringNotEquals; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline bool StringNotEqualsHasBeenSet() const { return m_stringNotEqualsHasBeenSet; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline void SetStringNotEquals(const Aws::Vector<ConditionParameter>& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals = value; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline void SetStringNotEquals(Aws::Vector<ConditionParameter>&& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals = std::move(value); }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline Conditions& WithStringNotEquals(const Aws::Vector<ConditionParameter>& value) { SetStringNotEquals(value); return *this;}

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline Conditions& WithStringNotEquals(Aws::Vector<ConditionParameter>&& value) { SetStringNotEquals(std::move(value)); return *this;}

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline Conditions& AddStringNotEquals(const ConditionParameter& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals.push_back(value); return *this; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline Conditions& AddStringNotEquals(ConditionParameter&& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline const Aws::Vector<ConditionParameter>& GetStringLike() const{ return m_stringLike; }

    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline bool StringLikeHasBeenSet() const { return m_stringLikeHasBeenSet; }

    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline void SetStringLike(const Aws::Vector<ConditionParameter>& value) { m_stringLikeHasBeenSet = true; m_stringLike = value; }

    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline void SetStringLike(Aws::Vector<ConditionParameter>&& value) { m_stringLikeHasBeenSet = true; m_stringLike = std::move(value); }

    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline Conditions& WithStringLike(const Aws::Vector<ConditionParameter>& value) { SetStringLike(value); return *this;}

    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline Conditions& WithStringLike(Aws::Vector<ConditionParameter>&& value) { SetStringLike(std::move(value)); return *this;}

    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline Conditions& AddStringLike(const ConditionParameter& value) { m_stringLikeHasBeenSet = true; m_stringLike.push_back(value); return *this; }

    /**
     * <p>Filters the values of your tagged resources for matching tag values with the
     * use of a wildcard character (*) anywhere in the string. For example, "prod*" or
     * "*rod*" matches the tag value "production".</p>
     */
    inline Conditions& AddStringLike(ConditionParameter&& value) { m_stringLikeHasBeenSet = true; m_stringLike.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline const Aws::Vector<ConditionParameter>& GetStringNotLike() const{ return m_stringNotLike; }

    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline bool StringNotLikeHasBeenSet() const { return m_stringNotLikeHasBeenSet; }

    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline void SetStringNotLike(const Aws::Vector<ConditionParameter>& value) { m_stringNotLikeHasBeenSet = true; m_stringNotLike = value; }

    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline void SetStringNotLike(Aws::Vector<ConditionParameter>&& value) { m_stringNotLikeHasBeenSet = true; m_stringNotLike = std::move(value); }

    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline Conditions& WithStringNotLike(const Aws::Vector<ConditionParameter>& value) { SetStringNotLike(value); return *this;}

    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline Conditions& WithStringNotLike(Aws::Vector<ConditionParameter>&& value) { SetStringNotLike(std::move(value)); return *this;}

    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline Conditions& AddStringNotLike(const ConditionParameter& value) { m_stringNotLikeHasBeenSet = true; m_stringNotLike.push_back(value); return *this; }

    /**
     * <p>Filters the values of your tagged resources for non-matching tag values with
     * the use of a wildcard character (*) anywhere in the string.</p>
     */
    inline Conditions& AddStringNotLike(ConditionParameter&& value) { m_stringNotLikeHasBeenSet = true; m_stringNotLike.push_back(std::move(value)); return *this; }

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
