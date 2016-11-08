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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the UntagResource operation.</p>
   */
  class AWS_DIRECTCONNECT_API UntagResourceRequest : public DirectConnectRequest
  {
  public:
    UntagResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the Direct Connect resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Direct Connect resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Direct Connect resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Direct Connect resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Direct Connect resource.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Direct Connect resource.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Direct Connect resource.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The list of tag keys to remove.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:
    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
