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
    AWS_MAILMANAGER_API ArchiveFilters() = default;
    AWS_MAILMANAGER_API ArchiveFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ArchiveFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter conditions for emails to include.</p>
     */
    inline const Aws::Vector<ArchiveFilterCondition>& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::Vector<ArchiveFilterCondition>>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::Vector<ArchiveFilterCondition>>
    ArchiveFilters& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    template<typename IncludeT = ArchiveFilterCondition>
    ArchiveFilters& AddInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include.emplace_back(std::forward<IncludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filter conditions for emails to exclude.</p>
     */
    inline const Aws::Vector<ArchiveFilterCondition>& GetUnless() const { return m_unless; }
    inline bool UnlessHasBeenSet() const { return m_unlessHasBeenSet; }
    template<typename UnlessT = Aws::Vector<ArchiveFilterCondition>>
    void SetUnless(UnlessT&& value) { m_unlessHasBeenSet = true; m_unless = std::forward<UnlessT>(value); }
    template<typename UnlessT = Aws::Vector<ArchiveFilterCondition>>
    ArchiveFilters& WithUnless(UnlessT&& value) { SetUnless(std::forward<UnlessT>(value)); return *this;}
    template<typename UnlessT = ArchiveFilterCondition>
    ArchiveFilters& AddUnless(UnlessT&& value) { m_unlessHasBeenSet = true; m_unless.emplace_back(std::forward<UnlessT>(value)); return *this; }
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
