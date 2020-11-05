/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/SourceAccessType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p> (MQ) The Secrets Manager secret that stores your broker credentials. To
   * store your secret, use the following format: <code> { "username": "your
   * username", "password": "your password" }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/SourceAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API SourceAccessConfiguration
  {
  public:
    SourceAccessConfiguration();
    SourceAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SourceAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline const SourceAccessType& GetType() const{ return m_type; }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline void SetType(const SourceAccessType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline void SetType(SourceAccessType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline SourceAccessConfiguration& WithType(const SourceAccessType& value) { SetType(value); return *this;}

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline SourceAccessConfiguration& WithType(SourceAccessType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline const Aws::String& GetURI() const{ return m_uRI; }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline void SetURI(const Aws::String& value) { m_uRIHasBeenSet = true; m_uRI = value; }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline void SetURI(Aws::String&& value) { m_uRIHasBeenSet = true; m_uRI = std::move(value); }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline void SetURI(const char* value) { m_uRIHasBeenSet = true; m_uRI.assign(value); }

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline SourceAccessConfiguration& WithURI(const Aws::String& value) { SetURI(value); return *this;}

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline SourceAccessConfiguration& WithURI(Aws::String&& value) { SetURI(std::move(value)); return *this;}

    /**
     * <p>To reference the secret, use the following format: <code>[ { "Type":
     * "BASIC_AUTH", "URI": "secretARN" } ]</code> </p> <p>The value of
     * <code>Type</code> is always <code>BASIC_AUTH</code>. To encrypt the secret, you
     * can use customer or service managed keys. When using a customer managed KMS key,
     * the Lambda execution role requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline SourceAccessConfiguration& WithURI(const char* value) { SetURI(value); return *this;}

  private:

    SourceAccessType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_uRI;
    bool m_uRIHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
