﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UntagSAMLProviderRequest : public IAMRequest
  {
  public:
    UntagSAMLProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagSAMLProvider"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the SAML identity provider in IAM from which you want to remove
     * tags.</p> <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetSAMLProviderArn() const{ return m_sAMLProviderArn; }

    /**
     * <p>The ARN of the SAML identity provider in IAM from which you want to remove
     * tags.</p> <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline bool SAMLProviderArnHasBeenSet() const { return m_sAMLProviderArnHasBeenSet; }

    /**
     * <p>The ARN of the SAML identity provider in IAM from which you want to remove
     * tags.</p> <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetSAMLProviderArn(const Aws::String& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = value; }

    /**
     * <p>The ARN of the SAML identity provider in IAM from which you want to remove
     * tags.</p> <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetSAMLProviderArn(Aws::String&& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = std::move(value); }

    /**
     * <p>The ARN of the SAML identity provider in IAM from which you want to remove
     * tags.</p> <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetSAMLProviderArn(const char* value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn.assign(value); }

    /**
     * <p>The ARN of the SAML identity provider in IAM from which you want to remove
     * tags.</p> <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline UntagSAMLProviderRequest& WithSAMLProviderArn(const Aws::String& value) { SetSAMLProviderArn(value); return *this;}

    /**
     * <p>The ARN of the SAML identity provider in IAM from which you want to remove
     * tags.</p> <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline UntagSAMLProviderRequest& WithSAMLProviderArn(Aws::String&& value) { SetSAMLProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SAML identity provider in IAM from which you want to remove
     * tags.</p> <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline UntagSAMLProviderRequest& WithSAMLProviderArn(const char* value) { SetSAMLProviderArn(value); return *this;}


    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline UntagSAMLProviderRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline UntagSAMLProviderRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline UntagSAMLProviderRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline UntagSAMLProviderRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of key names as a simple array of strings. The tags with matching keys
     * are removed from the specified SAML identity provider.</p>
     */
    inline UntagSAMLProviderRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_sAMLProviderArn;
    bool m_sAMLProviderArnHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
