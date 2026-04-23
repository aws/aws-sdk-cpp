/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/FileShareType.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a file share.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/FileShareInfo">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API FileShareInfo
  {
  public:
    FileShareInfo();
    FileShareInfo(Aws::Utils::Json::JsonView jsonValue);
    FileShareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const FileShareType& GetFileShareType() const{ return m_fileShareType; }

    
    inline bool FileShareTypeHasBeenSet() const { return m_fileShareTypeHasBeenSet; }

    
    inline void SetFileShareType(const FileShareType& value) { m_fileShareTypeHasBeenSet = true; m_fileShareType = value; }

    
    inline void SetFileShareType(FileShareType&& value) { m_fileShareTypeHasBeenSet = true; m_fileShareType = std::move(value); }

    
    inline FileShareInfo& WithFileShareType(const FileShareType& value) { SetFileShareType(value); return *this;}

    
    inline FileShareInfo& WithFileShareType(FileShareType&& value) { SetFileShareType(std::move(value)); return *this;}


    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }

    
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    
    inline FileShareInfo& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    
    inline FileShareInfo& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    
    inline FileShareInfo& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    
    inline const Aws::String& GetFileShareId() const{ return m_fileShareId; }

    
    inline bool FileShareIdHasBeenSet() const { return m_fileShareIdHasBeenSet; }

    
    inline void SetFileShareId(const Aws::String& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = value; }

    
    inline void SetFileShareId(Aws::String&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = std::move(value); }

    
    inline void SetFileShareId(const char* value) { m_fileShareIdHasBeenSet = true; m_fileShareId.assign(value); }

    
    inline FileShareInfo& WithFileShareId(const Aws::String& value) { SetFileShareId(value); return *this;}

    
    inline FileShareInfo& WithFileShareId(Aws::String&& value) { SetFileShareId(std::move(value)); return *this;}

    
    inline FileShareInfo& WithFileShareId(const char* value) { SetFileShareId(value); return *this;}


    
    inline const Aws::String& GetFileShareStatus() const{ return m_fileShareStatus; }

    
    inline bool FileShareStatusHasBeenSet() const { return m_fileShareStatusHasBeenSet; }

    
    inline void SetFileShareStatus(const Aws::String& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = value; }

    
    inline void SetFileShareStatus(Aws::String&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = std::move(value); }

    
    inline void SetFileShareStatus(const char* value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus.assign(value); }

    
    inline FileShareInfo& WithFileShareStatus(const Aws::String& value) { SetFileShareStatus(value); return *this;}

    
    inline FileShareInfo& WithFileShareStatus(Aws::String&& value) { SetFileShareStatus(std::move(value)); return *this;}

    
    inline FileShareInfo& WithFileShareStatus(const char* value) { SetFileShareStatus(value); return *this;}


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline FileShareInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline FileShareInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline FileShareInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:

    FileShareType m_fileShareType;
    bool m_fileShareTypeHasBeenSet;

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet;

    Aws::String m_fileShareId;
    bool m_fileShareIdHasBeenSet;

    Aws::String m_fileShareStatus;
    bool m_fileShareStatusHasBeenSet;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
