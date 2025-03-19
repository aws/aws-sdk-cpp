/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class DeleteIngressPointRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API DeleteIngressPointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIngressPoint"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the ingress endpoint resource that you want to delete.</p>
     */
    inline const Aws::String& GetIngressPointId() const { return m_ingressPointId; }
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
    template<typename IngressPointIdT = Aws::String>
    void SetIngressPointId(IngressPointIdT&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::forward<IngressPointIdT>(value); }
    template<typename IngressPointIdT = Aws::String>
    DeleteIngressPointRequest& WithIngressPointId(IngressPointIdT&& value) { SetIngressPointId(std::forward<IngressPointIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
