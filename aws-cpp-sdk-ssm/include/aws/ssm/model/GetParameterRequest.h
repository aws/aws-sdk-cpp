/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetParameterRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetParameterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParameter"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the parameter you want to query.</p> <p>To query by parameter
     * label, use <code>"Name": "name:label"</code>. To query by parameter version, use
     * <code>"Name": "name:version"</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter you want to query.</p> <p>To query by parameter
     * label, use <code>"Name": "name:label"</code>. To query by parameter version, use
     * <code>"Name": "name:version"</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter you want to query.</p> <p>To query by parameter
     * label, use <code>"Name": "name:label"</code>. To query by parameter version, use
     * <code>"Name": "name:version"</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter you want to query.</p> <p>To query by parameter
     * label, use <code>"Name": "name:label"</code>. To query by parameter version, use
     * <code>"Name": "name:version"</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter you want to query.</p> <p>To query by parameter
     * label, use <code>"Name": "name:label"</code>. To query by parameter version, use
     * <code>"Name": "name:version"</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter you want to query.</p> <p>To query by parameter
     * label, use <code>"Name": "name:label"</code>. To query by parameter version, use
     * <code>"Name": "name:version"</code>.</p>
     */
    inline GetParameterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter you want to query.</p> <p>To query by parameter
     * label, use <code>"Name": "name:label"</code>. To query by parameter version, use
     * <code>"Name": "name:version"</code>.</p>
     */
    inline GetParameterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter you want to query.</p> <p>To query by parameter
     * label, use <code>"Name": "name:label"</code>. To query by parameter version, use
     * <code>"Name": "name:version"</code>.</p>
     */
    inline GetParameterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for <code>String</code> and <code>StringList</code> parameter types.</p>
     */
    inline bool GetWithDecryption() const{ return m_withDecryption; }

    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for <code>String</code> and <code>StringList</code> parameter types.</p>
     */
    inline bool WithDecryptionHasBeenSet() const { return m_withDecryptionHasBeenSet; }

    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for <code>String</code> and <code>StringList</code> parameter types.</p>
     */
    inline void SetWithDecryption(bool value) { m_withDecryptionHasBeenSet = true; m_withDecryption = value; }

    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for <code>String</code> and <code>StringList</code> parameter types.</p>
     */
    inline GetParameterRequest& WithWithDecryption(bool value) { SetWithDecryption(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_withDecryption;
    bool m_withDecryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
