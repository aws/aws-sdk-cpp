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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API DeleteInstallationMediaRequest : public RDSRequest
  {
  public:
    DeleteInstallationMediaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstallationMedia"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The installation medium ID.</p>
     */
    inline const Aws::String& GetInstallationMediaId() const{ return m_installationMediaId; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline bool InstallationMediaIdHasBeenSet() const { return m_installationMediaIdHasBeenSet; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(const Aws::String& value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId = value; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(Aws::String&& value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId = std::move(value); }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(const char* value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId.assign(value); }

    /**
     * <p>The installation medium ID.</p>
     */
    inline DeleteInstallationMediaRequest& WithInstallationMediaId(const Aws::String& value) { SetInstallationMediaId(value); return *this;}

    /**
     * <p>The installation medium ID.</p>
     */
    inline DeleteInstallationMediaRequest& WithInstallationMediaId(Aws::String&& value) { SetInstallationMediaId(std::move(value)); return *this;}

    /**
     * <p>The installation medium ID.</p>
     */
    inline DeleteInstallationMediaRequest& WithInstallationMediaId(const char* value) { SetInstallationMediaId(value); return *this;}

  private:

    Aws::String m_installationMediaId;
    bool m_installationMediaIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
