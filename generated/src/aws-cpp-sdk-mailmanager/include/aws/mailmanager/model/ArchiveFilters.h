/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/ArchiveFilterCondition.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>A set of filter conditions to include and/or exclude emails.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ArchiveFilters">AWS
   * API Reference</a></p>
   */
  class ArchiveFilters
  {
  public:
    AWS_MAILMANAGER_API ArchiveFilters();
    AWS_MAILMANAGER_API ArchiveFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter conditions for emails to include.</p>
     */
    inline const Aws::Vector<ArchiveFilterCondition>& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const Aws::Vector<ArchiveFilterCondition>& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(Aws::Vector<ArchiveFilterCondition>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline ArchiveFilters& WithInclude(const Aws::Vector<ArchiveFilterCondition>& value) { SetInclude(value); return *this;}
    inline ArchiveFilters& WithInclude(Aws::Vector<ArchiveFilterCondition>&& value) { SetInclude(std::move(value)); return *this;}
    inline ArchiveFilters& AddInclude(const ArchiveFilterCondition& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    inline ArchiveFilters& AddInclude(ArchiveFilterCondition&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filter conditions for emails to exclude.</p>
     */
    inline const Aws::Vector<ArchiveFilterCondition>& GetUnless() const{ return m_unless; }
    inline bool UnlessHasBeenSet() const { return m_unlessHasBeenSet; }
    inline void SetUnless(const Aws::Vector<ArchiveFilterCondition>& value) { m_unlessHasBeenSet = true; m_unless = value; }
    inline void SetUnless(Aws::Vector<ArchiveFilterCondition>&& value) { m_unlessHasBeenSet = true; m_unless = std::move(value); }
    inline ArchiveFilters& WithUnless(const Aws::Vector<ArchiveFilterCondition>& value) { SetUnless(value); return *this;}
    inline ArchiveFilters& WithUnless(Aws::Vector<ArchiveFilterCondition>&& value) { SetUnless(std::move(value)); return *this;}
    inline ArchiveFilters& AddUnless(const ArchiveFilterCondition& value) { m_unlessHasBeenSet = true; m_unless.push_back(value); return *this; }
    inline ArchiveFilters& AddUnless(ArchiveFilterCondition&& value) { m_unlessHasBeenSet = true; m_unless.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ArchiveFilterCondition> m_include;
    bool m_includeHasBeenSet = false;

    Aws::Vector<ArchiveFilterCondition> m_unless;
    bool m_unlessHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
