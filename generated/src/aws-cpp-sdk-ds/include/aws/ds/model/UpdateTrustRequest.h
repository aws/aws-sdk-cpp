/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateTrustRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateTrustRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrust"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifier of the trust relationship.</p>
     */
    inline const Aws::String& GetTrustId() const { return m_trustId; }
    inline bool TrustIdHasBeenSet() const { return m_trustIdHasBeenSet; }
    template<typename TrustIdT = Aws::String>
    void SetTrustId(TrustIdT&& value) { m_trustIdHasBeenSet = true; m_trustId = std::forward<TrustIdT>(value); }
    template<typename TrustIdT = Aws::String>
    UpdateTrustRequest& WithTrustId(TrustIdT&& value) { SetTrustId(std::forward<TrustIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates selective authentication for the trust.</p>
     */
    inline SelectiveAuth GetSelectiveAuth() const { return m_selectiveAuth; }
    inline bool SelectiveAuthHasBeenSet() const { return m_selectiveAuthHasBeenSet; }
    inline void SetSelectiveAuth(SelectiveAuth value) { m_selectiveAuthHasBeenSet = true; m_selectiveAuth = value; }
    inline UpdateTrustRequest& WithSelectiveAuth(SelectiveAuth value) { SetSelectiveAuth(value); return *this;}
    ///@}
  private:

    Aws::String m_trustId;
    bool m_trustIdHasBeenSet = false;

    SelectiveAuth m_selectiveAuth{SelectiveAuth::NOT_SET};
    bool m_selectiveAuthHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
