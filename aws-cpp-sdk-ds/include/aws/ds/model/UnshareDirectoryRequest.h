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
#include <aws/ds/model/UnshareTarget.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API UnshareDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    UnshareDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnshareDirectory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the AWS Managed Microsoft AD directory that you want to
     * stop sharing.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the AWS Managed Microsoft AD directory that you want to
     * stop sharing.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the AWS Managed Microsoft AD directory that you want to
     * stop sharing.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the AWS Managed Microsoft AD directory that you want to
     * stop sharing.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the AWS Managed Microsoft AD directory that you want to
     * stop sharing.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the AWS Managed Microsoft AD directory that you want to
     * stop sharing.</p>
     */
    inline UnshareDirectoryRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the AWS Managed Microsoft AD directory that you want to
     * stop sharing.</p>
     */
    inline UnshareDirectoryRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the AWS Managed Microsoft AD directory that you want to
     * stop sharing.</p>
     */
    inline UnshareDirectoryRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline const UnshareTarget& GetUnshareTarget() const{ return m_unshareTarget; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline bool UnshareTargetHasBeenSet() const { return m_unshareTargetHasBeenSet; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline void SetUnshareTarget(const UnshareTarget& value) { m_unshareTargetHasBeenSet = true; m_unshareTarget = value; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline void SetUnshareTarget(UnshareTarget&& value) { m_unshareTargetHasBeenSet = true; m_unshareTarget = std::move(value); }

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline UnshareDirectoryRequest& WithUnshareTarget(const UnshareTarget& value) { SetUnshareTarget(value); return *this;}

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline UnshareDirectoryRequest& WithUnshareTarget(UnshareTarget&& value) { SetUnshareTarget(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    UnshareTarget m_unshareTarget;
    bool m_unshareTargetHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
