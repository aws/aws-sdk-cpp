/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The configuration for what files should be pulled from the
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/FileConfiguration">AWS
   * API Reference</a></p>
   */
  class FileConfiguration
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API FileConfiguration();
    AWS_APPINTEGRATIONSSERVICE_API FileConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API FileConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolders() const{ return m_folders; }

    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline bool FoldersHasBeenSet() const { return m_foldersHasBeenSet; }

    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline void SetFolders(const Aws::Vector<Aws::String>& value) { m_foldersHasBeenSet = true; m_folders = value; }

    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline void SetFolders(Aws::Vector<Aws::String>&& value) { m_foldersHasBeenSet = true; m_folders = std::move(value); }

    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline FileConfiguration& WithFolders(const Aws::Vector<Aws::String>& value) { SetFolders(value); return *this;}

    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline FileConfiguration& WithFolders(Aws::Vector<Aws::String>&& value) { SetFolders(std::move(value)); return *this;}

    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline FileConfiguration& AddFolders(const Aws::String& value) { m_foldersHasBeenSet = true; m_folders.push_back(value); return *this; }

    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline FileConfiguration& AddFolders(Aws::String&& value) { m_foldersHasBeenSet = true; m_folders.push_back(std::move(value)); return *this; }

    /**
     * <p>Identifiers for the source folders to pull all files from recursively.</p>
     */
    inline FileConfiguration& AddFolders(const char* value) { m_foldersHasBeenSet = true; m_folders.push_back(value); return *this; }


    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFilters() const{ return m_filters; }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline void SetFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline void SetFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline FileConfiguration& WithFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetFilters(value); return *this;}

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline FileConfiguration& WithFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline FileConfiguration& AddFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline FileConfiguration& AddFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline FileConfiguration& AddFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline FileConfiguration& AddFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline FileConfiguration& AddFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Restrictions for what files should be pulled from the source.</p>
     */
    inline FileConfiguration& AddFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_folders;
    bool m_foldersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
