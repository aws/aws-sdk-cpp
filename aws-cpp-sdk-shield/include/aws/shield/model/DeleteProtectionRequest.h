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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AWS_SHIELD_API DeleteProtectionRequest : public ShieldRequest
  {
  public:
    DeleteProtectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProtection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline const Aws::String& GetProtectionId() const{ return m_protectionId; }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline bool ProtectionIdHasBeenSet() const { return m_protectionIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline void SetProtectionId(const Aws::String& value) { m_protectionIdHasBeenSet = true; m_protectionId = value; }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline void SetProtectionId(Aws::String&& value) { m_protectionIdHasBeenSet = true; m_protectionId = std::move(value); }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline void SetProtectionId(const char* value) { m_protectionIdHasBeenSet = true; m_protectionId.assign(value); }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline DeleteProtectionRequest& WithProtectionId(const Aws::String& value) { SetProtectionId(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline DeleteProtectionRequest& WithProtectionId(Aws::String&& value) { SetProtectionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline DeleteProtectionRequest& WithProtectionId(const char* value) { SetProtectionId(value); return *this;}

  private:

    Aws::String m_protectionId;
    bool m_protectionIdHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
