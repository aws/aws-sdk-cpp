/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The structure used to configure the list of database patterns in source
   * database endpoint for Firehose to read from. </p> <p>Amazon Data Firehose is in
   * preview release and is subject to change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DatabaseList">AWS
   * API Reference</a></p>
   */
  class DatabaseList
  {
  public:
    AWS_FIREHOSE_API DatabaseList() = default;
    AWS_FIREHOSE_API DatabaseList(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DatabaseList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of database patterns in source database endpoint to be included for
     * Firehose to read from. </p> <p>Amazon Data Firehose is in preview release and is
     * subject to change.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::Vector<Aws::String>>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::Vector<Aws::String>>
    DatabaseList& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    template<typename IncludeT = Aws::String>
    DatabaseList& AddInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include.emplace_back(std::forward<IncludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of database patterns in source database endpoint to be excluded for
     * Firehose to read from. </p> <p>Amazon Data Firehose is in preview release and is
     * subject to change.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclude() const { return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    template<typename ExcludeT = Aws::Vector<Aws::String>>
    void SetExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude = std::forward<ExcludeT>(value); }
    template<typename ExcludeT = Aws::Vector<Aws::String>>
    DatabaseList& WithExclude(ExcludeT&& value) { SetExclude(std::forward<ExcludeT>(value)); return *this;}
    template<typename ExcludeT = Aws::String>
    DatabaseList& AddExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude.emplace_back(std::forward<ExcludeT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_include;
    bool m_includeHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclude;
    bool m_excludeHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
