/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This object defines one key that will be renamed with the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-renameKey">
   * renameKey</a> processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/RenameKeyEntry">AWS
   * API Reference</a></p>
   */
  class RenameKeyEntry
  {
  public:
    AWS_CLOUDWATCHLOGS_API RenameKeyEntry();
    AWS_CLOUDWATCHLOGS_API RenameKeyEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API RenameKeyEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key to rename</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline RenameKeyEntry& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline RenameKeyEntry& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline RenameKeyEntry& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string to use for the new key name</p>
     */
    inline const Aws::String& GetRenameTo() const{ return m_renameTo; }
    inline bool RenameToHasBeenSet() const { return m_renameToHasBeenSet; }
    inline void SetRenameTo(const Aws::String& value) { m_renameToHasBeenSet = true; m_renameTo = value; }
    inline void SetRenameTo(Aws::String&& value) { m_renameToHasBeenSet = true; m_renameTo = std::move(value); }
    inline void SetRenameTo(const char* value) { m_renameToHasBeenSet = true; m_renameTo.assign(value); }
    inline RenameKeyEntry& WithRenameTo(const Aws::String& value) { SetRenameTo(value); return *this;}
    inline RenameKeyEntry& WithRenameTo(Aws::String&& value) { SetRenameTo(std::move(value)); return *this;}
    inline RenameKeyEntry& WithRenameTo(const char* value) { SetRenameTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to overwrite the existing value if the destination key
     * already exists. The default is <code>false</code> </p>
     */
    inline bool GetOverwriteIfExists() const{ return m_overwriteIfExists; }
    inline bool OverwriteIfExistsHasBeenSet() const { return m_overwriteIfExistsHasBeenSet; }
    inline void SetOverwriteIfExists(bool value) { m_overwriteIfExistsHasBeenSet = true; m_overwriteIfExists = value; }
    inline RenameKeyEntry& WithOverwriteIfExists(bool value) { SetOverwriteIfExists(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_renameTo;
    bool m_renameToHasBeenSet = false;

    bool m_overwriteIfExists;
    bool m_overwriteIfExistsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
