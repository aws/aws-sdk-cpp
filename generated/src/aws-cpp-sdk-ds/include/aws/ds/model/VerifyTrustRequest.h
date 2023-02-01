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
   * <p>Initiates the verification of an existing trust relationship between an
   * Managed Microsoft AD directory and an external domain.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/VerifyTrustRequest">AWS
   * API Reference</a></p>
   */
  class VerifyTrustRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API VerifyTrustRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyTrust"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline bool TrustIdHasBeenSet() const { return m_trustIdHasBeenSet; }

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustIdHasBeenSet = true; m_trustId = value; }

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustIdHasBeenSet = true; m_trustId = std::move(value); }

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline void SetTrustId(const char* value) { m_trustIdHasBeenSet = true; m_trustId.assign(value); }

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline VerifyTrustRequest& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline VerifyTrustRequest& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline VerifyTrustRequest& WithTrustId(const char* value) { SetTrustId(value); return *this;}

  private:

    Aws::String m_trustId;
    bool m_trustIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
