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
   * <p>Deletes the local side of an existing trust relationship between the AWS
   * Managed Microsoft AD directory and the external domain.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteTrustRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DeleteTrustRequest : public DirectoryServiceRequest
  {
  public:
    DeleteTrustRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrust"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline bool TrustIdHasBeenSet() const { return m_trustIdHasBeenSet; }

    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustIdHasBeenSet = true; m_trustId = value; }

    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustIdHasBeenSet = true; m_trustId = std::move(value); }

    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline void SetTrustId(const char* value) { m_trustIdHasBeenSet = true; m_trustId.assign(value); }

    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline DeleteTrustRequest& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline DeleteTrustRequest& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}

    /**
     * <p>The Trust ID of the trust relationship to be deleted.</p>
     */
    inline DeleteTrustRequest& WithTrustId(const char* value) { SetTrustId(value); return *this;}


    /**
     * <p>Delete a conditional forwarder as part of a DeleteTrustRequest.</p>
     */
    inline bool GetDeleteAssociatedConditionalForwarder() const{ return m_deleteAssociatedConditionalForwarder; }

    /**
     * <p>Delete a conditional forwarder as part of a DeleteTrustRequest.</p>
     */
    inline bool DeleteAssociatedConditionalForwarderHasBeenSet() const { return m_deleteAssociatedConditionalForwarderHasBeenSet; }

    /**
     * <p>Delete a conditional forwarder as part of a DeleteTrustRequest.</p>
     */
    inline void SetDeleteAssociatedConditionalForwarder(bool value) { m_deleteAssociatedConditionalForwarderHasBeenSet = true; m_deleteAssociatedConditionalForwarder = value; }

    /**
     * <p>Delete a conditional forwarder as part of a DeleteTrustRequest.</p>
     */
    inline DeleteTrustRequest& WithDeleteAssociatedConditionalForwarder(bool value) { SetDeleteAssociatedConditionalForwarder(value); return *this;}

  private:

    Aws::String m_trustId;
    bool m_trustIdHasBeenSet;

    bool m_deleteAssociatedConditionalForwarder;
    bool m_deleteAssociatedConditionalForwarderHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
