/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The specified sync name wasn't found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncNotFoundException
  {
  public:
    AWS_SSM_API ResourceDataSyncNotFoundException();
    AWS_SSM_API ResourceDataSyncNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetSyncName() const{ return m_syncName; }

    
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }

    
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }

    
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }

    
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }

    
    inline ResourceDataSyncNotFoundException& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}

    
    inline ResourceDataSyncNotFoundException& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}

    
    inline ResourceDataSyncNotFoundException& WithSyncName(const char* value) { SetSyncName(value); return *this;}


    
    inline const Aws::String& GetSyncType() const{ return m_syncType; }

    
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    
    inline void SetSyncType(const Aws::String& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    
    inline void SetSyncType(Aws::String&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    
    inline void SetSyncType(const char* value) { m_syncTypeHasBeenSet = true; m_syncType.assign(value); }

    
    inline ResourceDataSyncNotFoundException& WithSyncType(const Aws::String& value) { SetSyncType(value); return *this;}

    
    inline ResourceDataSyncNotFoundException& WithSyncType(Aws::String&& value) { SetSyncType(std::move(value)); return *this;}

    
    inline ResourceDataSyncNotFoundException& WithSyncType(const char* value) { SetSyncType(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceDataSyncNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceDataSyncNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceDataSyncNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
