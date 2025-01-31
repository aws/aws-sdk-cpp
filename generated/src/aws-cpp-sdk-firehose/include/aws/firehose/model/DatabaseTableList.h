﻿/**
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
   * <p>The structure used to configure the list of table patterns in source database
   * endpoint for Firehose to read from. </p> <p>Amazon Data Firehose is in preview
   * release and is subject to change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DatabaseTableList">AWS
   * API Reference</a></p>
   */
  class DatabaseTableList
  {
  public:
    AWS_FIREHOSE_API DatabaseTableList();
    AWS_FIREHOSE_API DatabaseTableList(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DatabaseTableList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of table patterns in source database endpoint to be included for
     * Firehose to read from. </p> <p>Amazon Data Firehose is in preview release and is
     * subject to change.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const Aws::Vector<Aws::String>& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(Aws::Vector<Aws::String>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline DatabaseTableList& WithInclude(const Aws::Vector<Aws::String>& value) { SetInclude(value); return *this;}
    inline DatabaseTableList& WithInclude(Aws::Vector<Aws::String>&& value) { SetInclude(std::move(value)); return *this;}
    inline DatabaseTableList& AddInclude(const Aws::String& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    inline DatabaseTableList& AddInclude(Aws::String&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }
    inline DatabaseTableList& AddInclude(const char* value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of table patterns in source database endpoint to be excluded for
     * Firehose to read from. </p> <p>Amazon Data Firehose is in preview release and is
     * subject to change.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclude() const{ return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    inline void SetExclude(const Aws::Vector<Aws::String>& value) { m_excludeHasBeenSet = true; m_exclude = value; }
    inline void SetExclude(Aws::Vector<Aws::String>&& value) { m_excludeHasBeenSet = true; m_exclude = std::move(value); }
    inline DatabaseTableList& WithExclude(const Aws::Vector<Aws::String>& value) { SetExclude(value); return *this;}
    inline DatabaseTableList& WithExclude(Aws::Vector<Aws::String>&& value) { SetExclude(std::move(value)); return *this;}
    inline DatabaseTableList& AddExclude(const Aws::String& value) { m_excludeHasBeenSet = true; m_exclude.push_back(value); return *this; }
    inline DatabaseTableList& AddExclude(Aws::String&& value) { m_excludeHasBeenSet = true; m_exclude.push_back(std::move(value)); return *this; }
    inline DatabaseTableList& AddExclude(const char* value) { m_excludeHasBeenSet = true; m_exclude.push_back(value); return *this; }
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
