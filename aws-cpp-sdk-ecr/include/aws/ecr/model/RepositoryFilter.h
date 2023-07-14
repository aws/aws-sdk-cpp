﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/RepositoryFilterType.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The filter settings used with image replication. Specifying a repository
   * filter to a replication rule provides a method for controlling which
   * repositories in a private registry are replicated. If no repository filter is
   * specified, all images in the repository are replicated.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/RepositoryFilter">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API RepositoryFilter
  {
  public:
    RepositoryFilter();
    RepositoryFilter(Aws::Utils::Json::JsonView jsonValue);
    RepositoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }

    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }

    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline RepositoryFilter& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}

    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline RepositoryFilter& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>The repository filter details. When the <code>PREFIX_MATCH</code> filter type
     * is specified, this value is required and should be the repository name prefix to
     * configure replication for.</p>
     */
    inline RepositoryFilter& WithFilter(const char* value) { SetFilter(value); return *this;}


    /**
     * <p>The repository filter type. The only supported value is
     * <code>PREFIX_MATCH</code>, which is a repository name prefix specified with the
     * <code>filter</code> parameter.</p>
     */
    inline const RepositoryFilterType& GetFilterType() const{ return m_filterType; }

    /**
     * <p>The repository filter type. The only supported value is
     * <code>PREFIX_MATCH</code>, which is a repository name prefix specified with the
     * <code>filter</code> parameter.</p>
     */
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }

    /**
     * <p>The repository filter type. The only supported value is
     * <code>PREFIX_MATCH</code>, which is a repository name prefix specified with the
     * <code>filter</code> parameter.</p>
     */
    inline void SetFilterType(const RepositoryFilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }

    /**
     * <p>The repository filter type. The only supported value is
     * <code>PREFIX_MATCH</code>, which is a repository name prefix specified with the
     * <code>filter</code> parameter.</p>
     */
    inline void SetFilterType(RepositoryFilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }

    /**
     * <p>The repository filter type. The only supported value is
     * <code>PREFIX_MATCH</code>, which is a repository name prefix specified with the
     * <code>filter</code> parameter.</p>
     */
    inline RepositoryFilter& WithFilterType(const RepositoryFilterType& value) { SetFilterType(value); return *this;}

    /**
     * <p>The repository filter type. The only supported value is
     * <code>PREFIX_MATCH</code>, which is a repository name prefix specified with the
     * <code>filter</code> parameter.</p>
     */
    inline RepositoryFilter& WithFilterType(RepositoryFilterType&& value) { SetFilterType(std::move(value)); return *this;}

  private:

    Aws::String m_filter;
    bool m_filterHasBeenSet;

    RepositoryFilterType m_filterType;
    bool m_filterTypeHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
