/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/DocumentAttributeCondition.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for invoking a Lambda function in
   * Lambda to alter document metadata and content when ingesting documents into
   * Amazon Kendra. You can configure your Lambda function using <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CustomDocumentEnrichmentConfiguration.html">PreExtractionHookConfiguration</a>
   * if you want to apply advanced alterations on the original or raw documents. If
   * you want to apply advanced alterations on the Amazon Kendra structured
   * documents, you must configure your Lambda function using <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CustomDocumentEnrichmentConfiguration.html">PostExtractionHookConfiguration</a>.
   * You can only invoke one Lambda function. However, this function can invoke other
   * functions it requires.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
   * document metadata during the ingestion process</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/HookConfiguration">AWS
   * API Reference</a></p>
   */
  class HookConfiguration
  {
  public:
    AWS_KENDRA_API HookConfiguration();
    AWS_KENDRA_API HookConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API HookConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The condition used for when a Lambda function should be invoked.</p> <p>For
     * example, you can specify a condition that if there are empty date-time values,
     * then Amazon Kendra should invoke a function that inserts the current
     * date-time.</p>
     */
    inline const DocumentAttributeCondition& GetInvocationCondition() const{ return m_invocationCondition; }

    /**
     * <p>The condition used for when a Lambda function should be invoked.</p> <p>For
     * example, you can specify a condition that if there are empty date-time values,
     * then Amazon Kendra should invoke a function that inserts the current
     * date-time.</p>
     */
    inline bool InvocationConditionHasBeenSet() const { return m_invocationConditionHasBeenSet; }

    /**
     * <p>The condition used for when a Lambda function should be invoked.</p> <p>For
     * example, you can specify a condition that if there are empty date-time values,
     * then Amazon Kendra should invoke a function that inserts the current
     * date-time.</p>
     */
    inline void SetInvocationCondition(const DocumentAttributeCondition& value) { m_invocationConditionHasBeenSet = true; m_invocationCondition = value; }

    /**
     * <p>The condition used for when a Lambda function should be invoked.</p> <p>For
     * example, you can specify a condition that if there are empty date-time values,
     * then Amazon Kendra should invoke a function that inserts the current
     * date-time.</p>
     */
    inline void SetInvocationCondition(DocumentAttributeCondition&& value) { m_invocationConditionHasBeenSet = true; m_invocationCondition = std::move(value); }

    /**
     * <p>The condition used for when a Lambda function should be invoked.</p> <p>For
     * example, you can specify a condition that if there are empty date-time values,
     * then Amazon Kendra should invoke a function that inserts the current
     * date-time.</p>
     */
    inline HookConfiguration& WithInvocationCondition(const DocumentAttributeCondition& value) { SetInvocationCondition(value); return *this;}

    /**
     * <p>The condition used for when a Lambda function should be invoked.</p> <p>For
     * example, you can specify a condition that if there are empty date-time values,
     * then Amazon Kendra should invoke a function that inserts the current
     * date-time.</p>
     */
    inline HookConfiguration& WithInvocationCondition(DocumentAttributeCondition&& value) { SetInvocationCondition(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run a Lambda
     * function during ingestion. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run a Lambda
     * function during ingestion. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run a Lambda
     * function during ingestion. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run a Lambda
     * function during ingestion. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run a Lambda
     * function during ingestion. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run a Lambda
     * function during ingestion. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline HookConfiguration& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run a Lambda
     * function during ingestion. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline HookConfiguration& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run a Lambda
     * function during ingestion. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline HookConfiguration& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}


    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#cde-data-contracts-lambda">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#cde-data-contracts-lambda">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#cde-data-contracts-lambda">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#cde-data-contracts-lambda">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#cde-data-contracts-lambda">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#cde-data-contracts-lambda">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline HookConfiguration& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#cde-data-contracts-lambda">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline HookConfiguration& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#cde-data-contracts-lambda">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline HookConfiguration& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

  private:

    DocumentAttributeCondition m_invocationCondition;
    bool m_invocationConditionHasBeenSet = false;

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
