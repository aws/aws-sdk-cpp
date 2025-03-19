/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Deletes the local side of an existing trust relationship between the Managed
   * Microsoft AD directory and the external domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteTrustRequest">AWS
   * API Reference</a></p>
   */
  class DeleteTrustRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DeleteTrustRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrust"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline const Aws::String& GetTrustId() const { return m_trustId; }
    inline bool TrustIdHasBeenSet() const { return m_trustIdHasBeenSet; }
    template<typename TrustIdT = Aws::String>
    void SetTrustId(TrustIdT&& value) { m_trustIdHasBeenSet = true; m_trustId = std::forward<TrustIdT>(value); }
    template<typename TrustIdT = Aws::String>
    DeleteTrustRequest& WithTrustId(TrustIdT&& value) { SetTrustId(std::forward<TrustIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Delete a conditional forwarder as part of a DeleteTrustRequest.</p>
     */
    inline bool GetDeleteAssociatedConditionalForwarder() const { return m_deleteAssociatedConditionalForwarder; }
    inline bool DeleteAssociatedConditionalForwarderHasBeenSet() const { return m_deleteAssociatedConditionalForwarderHasBeenSet; }
    inline void SetDeleteAssociatedConditionalForwarder(bool value) { m_deleteAssociatedConditionalForwarderHasBeenSet = true; m_deleteAssociatedConditionalForwarder = value; }
    inline DeleteTrustRequest& WithDeleteAssociatedConditionalForwarder(bool value) { SetDeleteAssociatedConditionalForwarder(value); return *this;}
    ///@}
  private:

    Aws::String m_trustId;
    bool m_trustIdHasBeenSet = false;

    bool m_deleteAssociatedConditionalForwarder{false};
    bool m_deleteAssociatedConditionalForwarderHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
