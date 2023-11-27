/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/KeyValue.h>
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
   * <p>A list of conditions that you define for resources in your restore testing
   * plan using tags.</p> <p>For example, <code>"StringEquals": { "Key":
   * "aws:ResourceTag/CreatedByCryo", "Value": "true" },</code>. Condition operators
   * are case sensitive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ProtectedResourceConditions">AWS
   * API Reference</a></p>
   */
  class ProtectedResourceConditions
  {
  public:
    AWS_BACKUP_API ProtectedResourceConditions();
    AWS_BACKUP_API ProtectedResourceConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ProtectedResourceConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline const Aws::Vector<KeyValue>& GetStringEquals() const{ return m_stringEquals; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline bool StringEqualsHasBeenSet() const { return m_stringEqualsHasBeenSet; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline void SetStringEquals(const Aws::Vector<KeyValue>& value) { m_stringEqualsHasBeenSet = true; m_stringEquals = value; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline void SetStringEquals(Aws::Vector<KeyValue>&& value) { m_stringEqualsHasBeenSet = true; m_stringEquals = std::move(value); }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline ProtectedResourceConditions& WithStringEquals(const Aws::Vector<KeyValue>& value) { SetStringEquals(value); return *this;}

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline ProtectedResourceConditions& WithStringEquals(Aws::Vector<KeyValue>&& value) { SetStringEquals(std::move(value)); return *this;}

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline ProtectedResourceConditions& AddStringEquals(const KeyValue& value) { m_stringEqualsHasBeenSet = true; m_stringEquals.push_back(value); return *this; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline ProtectedResourceConditions& AddStringEquals(KeyValue&& value) { m_stringEqualsHasBeenSet = true; m_stringEquals.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline const Aws::Vector<KeyValue>& GetStringNotEquals() const{ return m_stringNotEquals; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline bool StringNotEqualsHasBeenSet() const { return m_stringNotEqualsHasBeenSet; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline void SetStringNotEquals(const Aws::Vector<KeyValue>& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals = value; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline void SetStringNotEquals(Aws::Vector<KeyValue>&& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals = std::move(value); }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline ProtectedResourceConditions& WithStringNotEquals(const Aws::Vector<KeyValue>& value) { SetStringNotEquals(value); return *this;}

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline ProtectedResourceConditions& WithStringNotEquals(Aws::Vector<KeyValue>&& value) { SetStringNotEquals(std::move(value)); return *this;}

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline ProtectedResourceConditions& AddStringNotEquals(const KeyValue& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals.push_back(value); return *this; }

    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline ProtectedResourceConditions& AddStringNotEquals(KeyValue&& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<KeyValue> m_stringEquals;
    bool m_stringEqualsHasBeenSet = false;

    Aws::Vector<KeyValue> m_stringNotEquals;
    bool m_stringNotEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
