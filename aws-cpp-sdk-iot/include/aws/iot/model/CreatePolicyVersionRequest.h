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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the CreatePolicyVersion operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicyVersionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API CreatePolicyVersionRequest : public IoTRequest
  {
  public:
    CreatePolicyVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicyVersion"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The policy name.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The policy name.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The policy name.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy name.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The policy name.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The JSON document that describes the policy. Minimum length of 1. Maximum
     * length of 2048, excluding whitespace.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON document that describes the policy. Minimum length of 1. Maximum
     * length of 2048, excluding whitespace.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The JSON document that describes the policy. Minimum length of 1. Maximum
     * length of 2048, excluding whitespace.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON document that describes the policy. Minimum length of 1. Maximum
     * length of 2048, excluding whitespace.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The JSON document that describes the policy. Minimum length of 1. Maximum
     * length of 2048, excluding whitespace.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The JSON document that describes the policy. Minimum length of 1. Maximum
     * length of 2048, excluding whitespace.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON document that describes the policy. Minimum length of 1. Maximum
     * length of 2048, excluding whitespace.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON document that describes the policy. Minimum length of 1. Maximum
     * length of 2048, excluding whitespace.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>Specifies whether the policy version is set as the default. When this
     * parameter is true, the new policy version becomes the operative version (that
     * is, the version that is in effect for the certificates to which the policy is
     * attached).</p>
     */
    inline bool GetSetAsDefault() const{ return m_setAsDefault; }

    /**
     * <p>Specifies whether the policy version is set as the default. When this
     * parameter is true, the new policy version becomes the operative version (that
     * is, the version that is in effect for the certificates to which the policy is
     * attached).</p>
     */
    inline bool SetAsDefaultHasBeenSet() const { return m_setAsDefaultHasBeenSet; }

    /**
     * <p>Specifies whether the policy version is set as the default. When this
     * parameter is true, the new policy version becomes the operative version (that
     * is, the version that is in effect for the certificates to which the policy is
     * attached).</p>
     */
    inline void SetSetAsDefault(bool value) { m_setAsDefaultHasBeenSet = true; m_setAsDefault = value; }

    /**
     * <p>Specifies whether the policy version is set as the default. When this
     * parameter is true, the new policy version becomes the operative version (that
     * is, the version that is in effect for the certificates to which the policy is
     * attached).</p>
     */
    inline CreatePolicyVersionRequest& WithSetAsDefault(bool value) { SetSetAsDefault(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;

    bool m_setAsDefault;
    bool m_setAsDefaultHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
