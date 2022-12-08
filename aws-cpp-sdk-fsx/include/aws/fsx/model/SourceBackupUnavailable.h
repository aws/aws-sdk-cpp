/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The request was rejected because the lifecycle status of the source backup
   * isn't <code>AVAILABLE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SourceBackupUnavailable">AWS
   * API Reference</a></p>
   */
  class SourceBackupUnavailable
  {
  public:
    AWS_FSX_API SourceBackupUnavailable();
    AWS_FSX_API SourceBackupUnavailable(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SourceBackupUnavailable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline SourceBackupUnavailable& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline SourceBackupUnavailable& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline SourceBackupUnavailable& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    
    inline SourceBackupUnavailable& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    
    inline SourceBackupUnavailable& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    
    inline SourceBackupUnavailable& WithBackupId(const char* value) { SetBackupId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
