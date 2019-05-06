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
#include <aws/ds/model/SelectiveAuth.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API UpdateTrustRequest : public DirectoryServiceRequest
  {
  public:
    UpdateTrustRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrust"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline bool TrustIdHasBeenSet() const { return m_trustIdHasBeenSet; }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustIdHasBeenSet = true; m_trustId = value; }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustIdHasBeenSet = true; m_trustId = std::move(value); }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline void SetTrustId(const char* value) { m_trustIdHasBeenSet = true; m_trustId.assign(value); }

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline UpdateTrustRequest& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline UpdateTrustRequest& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline UpdateTrustRequest& WithTrustId(const char* value) { SetTrustId(value); return *this;}


    /**
     * <p>Updates selective authentication for the trust.</p>
     */
    inline const SelectiveAuth& GetSelectiveAuth() const{ return m_selectiveAuth; }

    /**
     * <p>Updates selective authentication for the trust.</p>
     */
    inline bool SelectiveAuthHasBeenSet() const { return m_selectiveAuthHasBeenSet; }

    /**
     * <p>Updates selective authentication for the trust.</p>
     */
    inline void SetSelectiveAuth(const SelectiveAuth& value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = value; }

    /**
     * <p>Updates selective authentication for the trust.</p>
     */
    inline void SetSelectiveAuth(SelectiveAuth&& value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = std::move(value); }

    /**
     * <p>Updates selective authentication for the trust.</p>
     */
    inline UpdateTrustRequest& WithSelectiveAuth(const SelectiveAuth& value) { SetSelectiveAuth(value); return *this;}

    /**
     * <p>Updates selective authentication for the trust.</p>
     */
    inline UpdateTrustRequest& WithSelectiveAuth(SelectiveAuth&& value) { SetSelectiveAuth(std::move(value)); return *this;}

  private:

    Aws::String m_trustId;
    bool m_trustIdHasBeenSet;

    SelectiveAuth m_selectiveAuth;
    bool m_selectiveAuthHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
