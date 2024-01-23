/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Updates CIS targets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateCisTargets">AWS
   * API Reference</a></p>
   */
  class UpdateCisTargets
  {
  public:
    AWS_INSPECTOR2_API UpdateCisTargets();
    AWS_INSPECTOR2_API UpdateCisTargets(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API UpdateCisTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target account ids.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The target account ids.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The target account ids.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The target account ids.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The target account ids.</p>
     */
    inline UpdateCisTargets& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The target account ids.</p>
     */
    inline UpdateCisTargets& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The target account ids.</p>
     */
    inline UpdateCisTargets& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The target account ids.</p>
     */
    inline UpdateCisTargets& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The target account ids.</p>
     */
    inline UpdateCisTargets& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The target resource tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTargetResourceTags() const{ return m_targetResourceTags; }

    /**
     * <p>The target resource tags.</p>
     */
    inline bool TargetResourceTagsHasBeenSet() const { return m_targetResourceTagsHasBeenSet; }

    /**
     * <p>The target resource tags.</p>
     */
    inline void SetTargetResourceTags(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags = value; }

    /**
     * <p>The target resource tags.</p>
     */
    inline void SetTargetResourceTags(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags = std::move(value); }

    /**
     * <p>The target resource tags.</p>
     */
    inline UpdateCisTargets& WithTargetResourceTags(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetTargetResourceTags(value); return *this;}

    /**
     * <p>The target resource tags.</p>
     */
    inline UpdateCisTargets& WithTargetResourceTags(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetTargetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The target resource tags.</p>
     */
    inline UpdateCisTargets& AddTargetResourceTags(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(key, value); return *this; }

    /**
     * <p>The target resource tags.</p>
     */
    inline UpdateCisTargets& AddTargetResourceTags(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The target resource tags.</p>
     */
    inline UpdateCisTargets& AddTargetResourceTags(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The target resource tags.</p>
     */
    inline UpdateCisTargets& AddTargetResourceTags(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The target resource tags.</p>
     */
    inline UpdateCisTargets& AddTargetResourceTags(const char* key, Aws::Vector<Aws::String>&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The target resource tags.</p>
     */
    inline UpdateCisTargets& AddTargetResourceTags(const char* key, const Aws::Vector<Aws::String>& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_targetResourceTags;
    bool m_targetResourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
