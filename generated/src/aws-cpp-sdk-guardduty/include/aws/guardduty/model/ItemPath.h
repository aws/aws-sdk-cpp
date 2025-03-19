/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the nested item path and hash of the protected
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ItemPath">AWS
   * API Reference</a></p>
   */
  class ItemPath
  {
  public:
    AWS_GUARDDUTY_API ItemPath() = default;
    AWS_GUARDDUTY_API ItemPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ItemPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The nested item path where the infected file was found.</p>
     */
    inline const Aws::String& GetNestedItemPath() const { return m_nestedItemPath; }
    inline bool NestedItemPathHasBeenSet() const { return m_nestedItemPathHasBeenSet; }
    template<typename NestedItemPathT = Aws::String>
    void SetNestedItemPath(NestedItemPathT&& value) { m_nestedItemPathHasBeenSet = true; m_nestedItemPath = std::forward<NestedItemPathT>(value); }
    template<typename NestedItemPathT = Aws::String>
    ItemPath& WithNestedItemPath(NestedItemPathT&& value) { SetNestedItemPath(std::forward<NestedItemPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash value of the infected resource.</p>
     */
    inline const Aws::String& GetHash() const { return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    template<typename HashT = Aws::String>
    void SetHash(HashT&& value) { m_hashHasBeenSet = true; m_hash = std::forward<HashT>(value); }
    template<typename HashT = Aws::String>
    ItemPath& WithHash(HashT&& value) { SetHash(std::forward<HashT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nestedItemPath;
    bool m_nestedItemPathHasBeenSet = false;

    Aws::String m_hash;
    bool m_hashHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
