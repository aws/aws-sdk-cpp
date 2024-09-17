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
    AWS_GUARDDUTY_API ItemPath();
    AWS_GUARDDUTY_API ItemPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ItemPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The nested item path where the infected file was found.</p>
     */
    inline const Aws::String& GetNestedItemPath() const{ return m_nestedItemPath; }
    inline bool NestedItemPathHasBeenSet() const { return m_nestedItemPathHasBeenSet; }
    inline void SetNestedItemPath(const Aws::String& value) { m_nestedItemPathHasBeenSet = true; m_nestedItemPath = value; }
    inline void SetNestedItemPath(Aws::String&& value) { m_nestedItemPathHasBeenSet = true; m_nestedItemPath = std::move(value); }
    inline void SetNestedItemPath(const char* value) { m_nestedItemPathHasBeenSet = true; m_nestedItemPath.assign(value); }
    inline ItemPath& WithNestedItemPath(const Aws::String& value) { SetNestedItemPath(value); return *this;}
    inline ItemPath& WithNestedItemPath(Aws::String&& value) { SetNestedItemPath(std::move(value)); return *this;}
    inline ItemPath& WithNestedItemPath(const char* value) { SetNestedItemPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash value of the infected resource.</p>
     */
    inline const Aws::String& GetHash() const{ return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    inline void SetHash(const Aws::String& value) { m_hashHasBeenSet = true; m_hash = value; }
    inline void SetHash(Aws::String&& value) { m_hashHasBeenSet = true; m_hash = std::move(value); }
    inline void SetHash(const char* value) { m_hashHasBeenSet = true; m_hash.assign(value); }
    inline ItemPath& WithHash(const Aws::String& value) { SetHash(value); return *this;}
    inline ItemPath& WithHash(Aws::String&& value) { SetHash(std::move(value)); return *this;}
    inline ItemPath& WithHash(const char* value) { SetHash(value); return *this;}
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
