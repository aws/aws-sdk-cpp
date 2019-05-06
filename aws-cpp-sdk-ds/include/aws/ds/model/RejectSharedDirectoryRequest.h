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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API RejectSharedDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    RejectSharedDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectSharedDirectory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const{ return m_sharedDirectoryId; }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline bool SharedDirectoryIdHasBeenSet() const { return m_sharedDirectoryIdHasBeenSet; }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline void SetSharedDirectoryId(const Aws::String& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = value; }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline void SetSharedDirectoryId(Aws::String&& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = std::move(value); }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline void SetSharedDirectoryId(const char* value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId.assign(value); }

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline RejectSharedDirectoryRequest& WithSharedDirectoryId(const Aws::String& value) { SetSharedDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline RejectSharedDirectoryRequest& WithSharedDirectoryId(Aws::String&& value) { SetSharedDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline RejectSharedDirectoryRequest& WithSharedDirectoryId(const char* value) { SetSharedDirectoryId(value); return *this;}

  private:

    Aws::String m_sharedDirectoryId;
    bool m_sharedDirectoryIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
