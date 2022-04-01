﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FolderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A folder in Amazon QuickSight.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Folder">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API Folder
  {
  public:
    Folder();
    Folder(Aws::Utils::Json::JsonView jsonValue);
    Folder& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline Folder& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline Folder& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline Folder& WithFolderId(const char* value) { SetFolderId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline Folder& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline Folder& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the folder.</p>
     */
    inline Folder& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A display name for the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the folder.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the folder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the folder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the folder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the folder.</p>
     */
    inline Folder& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the folder.</p>
     */
    inline Folder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the folder.</p>
     */
    inline Folder& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of folder it is.</p>
     */
    inline const FolderType& GetFolderType() const{ return m_folderType; }

    /**
     * <p>The type of folder it is.</p>
     */
    inline bool FolderTypeHasBeenSet() const { return m_folderTypeHasBeenSet; }

    /**
     * <p>The type of folder it is.</p>
     */
    inline void SetFolderType(const FolderType& value) { m_folderTypeHasBeenSet = true; m_folderType = value; }

    /**
     * <p>The type of folder it is.</p>
     */
    inline void SetFolderType(FolderType&& value) { m_folderTypeHasBeenSet = true; m_folderType = std::move(value); }

    /**
     * <p>The type of folder it is.</p>
     */
    inline Folder& WithFolderType(const FolderType& value) { SetFolderType(value); return *this;}

    /**
     * <p>The type of folder it is.</p>
     */
    inline Folder& WithFolderType(FolderType&& value) { SetFolderType(std::move(value)); return *this;}


    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderPath() const{ return m_folderPath; }

    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline bool FolderPathHasBeenSet() const { return m_folderPathHasBeenSet; }

    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline void SetFolderPath(const Aws::Vector<Aws::String>& value) { m_folderPathHasBeenSet = true; m_folderPath = value; }

    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline void SetFolderPath(Aws::Vector<Aws::String>&& value) { m_folderPathHasBeenSet = true; m_folderPath = std::move(value); }

    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline Folder& WithFolderPath(const Aws::Vector<Aws::String>& value) { SetFolderPath(value); return *this;}

    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline Folder& WithFolderPath(Aws::Vector<Aws::String>&& value) { SetFolderPath(std::move(value)); return *this;}

    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline Folder& AddFolderPath(const Aws::String& value) { m_folderPathHasBeenSet = true; m_folderPath.push_back(value); return *this; }

    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline Folder& AddFolderPath(Aws::String&& value) { m_folderPathHasBeenSet = true; m_folderPath.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of ancestor ARN strings for the folder.</p>
     */
    inline Folder& AddFolderPath(const char* value) { m_folderPathHasBeenSet = true; m_folderPath.push_back(value); return *this; }


    /**
     * <p>The time that the folder was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the folder was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that the folder was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that the folder was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that the folder was created.</p>
     */
    inline Folder& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the folder was created.</p>
     */
    inline Folder& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline Folder& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time that the folder was last updated.</p>
     */
    inline Folder& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    FolderType m_folderType;
    bool m_folderTypeHasBeenSet;

    Aws::Vector<Aws::String> m_folderPath;
    bool m_folderPathHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
