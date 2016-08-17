/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Initiates the verification of an existing trust relationship between a
   * Microsoft AD in the AWS cloud and an external domain.</p>
   */
  class AWS_DIRECTORYSERVICE_API VerifyTrustRequest : public DirectoryServiceRequest
  {
  public:
    VerifyTrustRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustIdHasBeenSet = true; m_trustId = value; }

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustIdHasBeenSet = true; m_trustId = value; }

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
    inline VerifyTrustRequest& WithTrustId(Aws::String&& value) { SetTrustId(value); return *this;}

    /**
     * <p>The unique Trust ID of the trust relationship to verify.</p>
     */
    inline VerifyTrustRequest& WithTrustId(const char* value) { SetTrustId(value); return *this;}

  private:
    Aws::String m_trustId;
    bool m_trustIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
