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
   * <p>The conditions that you define for resources in your restore testing plan
   * using tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ProtectedResourceConditions">AWS
   * API Reference</a></p>
   */
  class ProtectedResourceConditions
  {
  public:
    AWS_BACKUP_API ProtectedResourceConditions() = default;
    AWS_BACKUP_API ProtectedResourceConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ProtectedResourceConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged with the same value. Also called "exact matching."</p>
     */
    inline const Aws::Vector<KeyValue>& GetStringEquals() const { return m_stringEquals; }
    inline bool StringEqualsHasBeenSet() const { return m_stringEqualsHasBeenSet; }
    template<typename StringEqualsT = Aws::Vector<KeyValue>>
    void SetStringEquals(StringEqualsT&& value) { m_stringEqualsHasBeenSet = true; m_stringEquals = std::forward<StringEqualsT>(value); }
    template<typename StringEqualsT = Aws::Vector<KeyValue>>
    ProtectedResourceConditions& WithStringEquals(StringEqualsT&& value) { SetStringEquals(std::forward<StringEqualsT>(value)); return *this;}
    template<typename StringEqualsT = KeyValue>
    ProtectedResourceConditions& AddStringEquals(StringEqualsT&& value) { m_stringEqualsHasBeenSet = true; m_stringEquals.emplace_back(std::forward<StringEqualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the values of your tagged resources for only those resources that you
     * tagged that do not have the same value. Also called "negated matching."</p>
     */
    inline const Aws::Vector<KeyValue>& GetStringNotEquals() const { return m_stringNotEquals; }
    inline bool StringNotEqualsHasBeenSet() const { return m_stringNotEqualsHasBeenSet; }
    template<typename StringNotEqualsT = Aws::Vector<KeyValue>>
    void SetStringNotEquals(StringNotEqualsT&& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals = std::forward<StringNotEqualsT>(value); }
    template<typename StringNotEqualsT = Aws::Vector<KeyValue>>
    ProtectedResourceConditions& WithStringNotEquals(StringNotEqualsT&& value) { SetStringNotEquals(std::forward<StringNotEqualsT>(value)); return *this;}
    template<typename StringNotEqualsT = KeyValue>
    ProtectedResourceConditions& AddStringNotEquals(StringNotEqualsT&& value) { m_stringNotEqualsHasBeenSet = true; m_stringNotEquals.emplace_back(std::forward<StringNotEqualsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<KeyValue> m_stringEquals;
    bool m_stringEqualsHasBeenSet = false;

    Aws::Vector<KeyValue> m_stringNotEquals;
    bool m_stringNotEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
