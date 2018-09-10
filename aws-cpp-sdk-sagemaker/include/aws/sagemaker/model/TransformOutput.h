﻿/*
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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AssemblyType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes the results of a transform job output.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformOutput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TransformOutput
  {
  public:
    TransformOutput();
    TransformOutput(Aws::Utils::Json::JsonView jsonValue);
    TransformOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 path where you want Amazon SageMaker to store the results of
     * the transform job. For example,
     * <code>s3://bucket-name/key-name-prefix</code>.</p> <p>For every S3 object used
     * as input for the transform job, the transformed data is stored in a
     * corresponding subfolder in the location under the output prefix. For example,
     * the input data
     * <code>s3://bucket-name/input-name-prefix/dataset01/data.csv</code> will have the
     * transformed data stored at
     * <code>s3://bucket-name/key-name-prefix/dataset01/</code>, based on the original
     * name, as a series of .part files (.part0001, part0002, etc).</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>The Amazon S3 path where you want Amazon SageMaker to store the results of
     * the transform job. For example,
     * <code>s3://bucket-name/key-name-prefix</code>.</p> <p>For every S3 object used
     * as input for the transform job, the transformed data is stored in a
     * corresponding subfolder in the location under the output prefix. For example,
     * the input data
     * <code>s3://bucket-name/input-name-prefix/dataset01/data.csv</code> will have the
     * transformed data stored at
     * <code>s3://bucket-name/key-name-prefix/dataset01/</code>, based on the original
     * name, as a series of .part files (.part0001, part0002, etc).</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>The Amazon S3 path where you want Amazon SageMaker to store the results of
     * the transform job. For example,
     * <code>s3://bucket-name/key-name-prefix</code>.</p> <p>For every S3 object used
     * as input for the transform job, the transformed data is stored in a
     * corresponding subfolder in the location under the output prefix. For example,
     * the input data
     * <code>s3://bucket-name/input-name-prefix/dataset01/data.csv</code> will have the
     * transformed data stored at
     * <code>s3://bucket-name/key-name-prefix/dataset01/</code>, based on the original
     * name, as a series of .part files (.part0001, part0002, etc).</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>The Amazon S3 path where you want Amazon SageMaker to store the results of
     * the transform job. For example,
     * <code>s3://bucket-name/key-name-prefix</code>.</p> <p>For every S3 object used
     * as input for the transform job, the transformed data is stored in a
     * corresponding subfolder in the location under the output prefix. For example,
     * the input data
     * <code>s3://bucket-name/input-name-prefix/dataset01/data.csv</code> will have the
     * transformed data stored at
     * <code>s3://bucket-name/key-name-prefix/dataset01/</code>, based on the original
     * name, as a series of .part files (.part0001, part0002, etc).</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>The Amazon S3 path where you want Amazon SageMaker to store the results of
     * the transform job. For example,
     * <code>s3://bucket-name/key-name-prefix</code>.</p> <p>For every S3 object used
     * as input for the transform job, the transformed data is stored in a
     * corresponding subfolder in the location under the output prefix. For example,
     * the input data
     * <code>s3://bucket-name/input-name-prefix/dataset01/data.csv</code> will have the
     * transformed data stored at
     * <code>s3://bucket-name/key-name-prefix/dataset01/</code>, based on the original
     * name, as a series of .part files (.part0001, part0002, etc).</p>
     */
    inline TransformOutput& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 path where you want Amazon SageMaker to store the results of
     * the transform job. For example,
     * <code>s3://bucket-name/key-name-prefix</code>.</p> <p>For every S3 object used
     * as input for the transform job, the transformed data is stored in a
     * corresponding subfolder in the location under the output prefix. For example,
     * the input data
     * <code>s3://bucket-name/input-name-prefix/dataset01/data.csv</code> will have the
     * transformed data stored at
     * <code>s3://bucket-name/key-name-prefix/dataset01/</code>, based on the original
     * name, as a series of .part files (.part0001, part0002, etc).</p>
     */
    inline TransformOutput& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where you want Amazon SageMaker to store the results of
     * the transform job. For example,
     * <code>s3://bucket-name/key-name-prefix</code>.</p> <p>For every S3 object used
     * as input for the transform job, the transformed data is stored in a
     * corresponding subfolder in the location under the output prefix. For example,
     * the input data
     * <code>s3://bucket-name/input-name-prefix/dataset01/data.csv</code> will have the
     * transformed data stored at
     * <code>s3://bucket-name/key-name-prefix/dataset01/</code>, based on the original
     * name, as a series of .part files (.part0001, part0002, etc).</p>
     */
    inline TransformOutput& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>The MIME type used to specify the output data. Amazon SageMaker uses the MIME
     * type with each http call to transfer data from the transform job.</p>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }

    /**
     * <p>The MIME type used to specify the output data. Amazon SageMaker uses the MIME
     * type with each http call to transfer data from the transform job.</p>
     */
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>The MIME type used to specify the output data. Amazon SageMaker uses the MIME
     * type with each http call to transfer data from the transform job.</p>
     */
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>The MIME type used to specify the output data. Amazon SageMaker uses the MIME
     * type with each http call to transfer data from the transform job.</p>
     */
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

    /**
     * <p>The MIME type used to specify the output data. Amazon SageMaker uses the MIME
     * type with each http call to transfer data from the transform job.</p>
     */
    inline TransformOutput& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The MIME type used to specify the output data. Amazon SageMaker uses the MIME
     * type with each http call to transfer data from the transform job.</p>
     */
    inline TransformOutput& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The MIME type used to specify the output data. Amazon SageMaker uses the MIME
     * type with each http call to transfer data from the transform job.</p>
     */
    inline TransformOutput& WithAccept(const char* value) { SetAccept(value); return *this;}


    /**
     * <p>Defines how to assemble the results of the transform job as a single S3
     * object. You should select a format that is most convenient to you. To
     * concatenate the results in binary format, specify <code>None</code>. To add a
     * newline character at the end of every transformed record, specify
     * <code>Line</code>. To assemble the output in RecordIO format, specify
     * <code>RecordIO</code>. The default value is <code>None</code>.</p> <p>For
     * information about the <code>RecordIO</code> format, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a>.</p>
     */
    inline const AssemblyType& GetAssembleWith() const{ return m_assembleWith; }

    /**
     * <p>Defines how to assemble the results of the transform job as a single S3
     * object. You should select a format that is most convenient to you. To
     * concatenate the results in binary format, specify <code>None</code>. To add a
     * newline character at the end of every transformed record, specify
     * <code>Line</code>. To assemble the output in RecordIO format, specify
     * <code>RecordIO</code>. The default value is <code>None</code>.</p> <p>For
     * information about the <code>RecordIO</code> format, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a>.</p>
     */
    inline void SetAssembleWith(const AssemblyType& value) { m_assembleWithHasBeenSet = true; m_assembleWith = value; }

    /**
     * <p>Defines how to assemble the results of the transform job as a single S3
     * object. You should select a format that is most convenient to you. To
     * concatenate the results in binary format, specify <code>None</code>. To add a
     * newline character at the end of every transformed record, specify
     * <code>Line</code>. To assemble the output in RecordIO format, specify
     * <code>RecordIO</code>. The default value is <code>None</code>.</p> <p>For
     * information about the <code>RecordIO</code> format, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a>.</p>
     */
    inline void SetAssembleWith(AssemblyType&& value) { m_assembleWithHasBeenSet = true; m_assembleWith = std::move(value); }

    /**
     * <p>Defines how to assemble the results of the transform job as a single S3
     * object. You should select a format that is most convenient to you. To
     * concatenate the results in binary format, specify <code>None</code>. To add a
     * newline character at the end of every transformed record, specify
     * <code>Line</code>. To assemble the output in RecordIO format, specify
     * <code>RecordIO</code>. The default value is <code>None</code>.</p> <p>For
     * information about the <code>RecordIO</code> format, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a>.</p>
     */
    inline TransformOutput& WithAssembleWith(const AssemblyType& value) { SetAssembleWith(value); return *this;}

    /**
     * <p>Defines how to assemble the results of the transform job as a single S3
     * object. You should select a format that is most convenient to you. To
     * concatenate the results in binary format, specify <code>None</code>. To add a
     * newline character at the end of every transformed record, specify
     * <code>Line</code>. To assemble the output in RecordIO format, specify
     * <code>RecordIO</code>. The default value is <code>None</code>.</p> <p>For
     * information about the <code>RecordIO</code> format, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a>.</p>
     */
    inline TransformOutput& WithAssembleWith(AssemblyType&& value) { SetAssembleWith(std::move(value)); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) key for Amazon S3 server-side
     * encryption that Amazon SageMaker uses to encrypt the transformed data.</p> <p>If
     * you don't provide a KMS key ID, Amazon SageMaker uses the default KMS key for
     * Amazon S3 for your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTramsformJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key for Amazon S3 server-side
     * encryption that Amazon SageMaker uses to encrypt the transformed data.</p> <p>If
     * you don't provide a KMS key ID, Amazon SageMaker uses the default KMS key for
     * Amazon S3 for your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTramsformJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key for Amazon S3 server-side
     * encryption that Amazon SageMaker uses to encrypt the transformed data.</p> <p>If
     * you don't provide a KMS key ID, Amazon SageMaker uses the default KMS key for
     * Amazon S3 for your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTramsformJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key for Amazon S3 server-side
     * encryption that Amazon SageMaker uses to encrypt the transformed data.</p> <p>If
     * you don't provide a KMS key ID, Amazon SageMaker uses the default KMS key for
     * Amazon S3 for your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTramsformJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key for Amazon S3 server-side
     * encryption that Amazon SageMaker uses to encrypt the transformed data.</p> <p>If
     * you don't provide a KMS key ID, Amazon SageMaker uses the default KMS key for
     * Amazon S3 for your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTramsformJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline TransformOutput& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key for Amazon S3 server-side
     * encryption that Amazon SageMaker uses to encrypt the transformed data.</p> <p>If
     * you don't provide a KMS key ID, Amazon SageMaker uses the default KMS key for
     * Amazon S3 for your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTramsformJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline TransformOutput& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key for Amazon S3 server-side
     * encryption that Amazon SageMaker uses to encrypt the transformed data.</p> <p>If
     * you don't provide a KMS key ID, Amazon SageMaker uses the default KMS key for
     * Amazon S3 for your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTramsformJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline TransformOutput& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet;

    Aws::String m_accept;
    bool m_acceptHasBeenSet;

    AssemblyType m_assembleWith;
    bool m_assembleWithHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
