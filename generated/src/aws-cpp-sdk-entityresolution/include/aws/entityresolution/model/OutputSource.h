/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/OutputAttribute.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
   * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
   * column to be included in the output table, and whether the values of the column
   * should be hashed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/OutputSource">AWS
   * API Reference</a></p>
   */
  class OutputSource
  {
  public:
    AWS_ENTITYRESOLUTION_API OutputSource();
    AWS_ENTITYRESOLUTION_API OutputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API OutputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline const Aws::String& GetKMSArn() const{ return m_kMSArn; }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline bool KMSArnHasBeenSet() const { return m_kMSArnHasBeenSet; }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline void SetKMSArn(const Aws::String& value) { m_kMSArnHasBeenSet = true; m_kMSArn = value; }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline void SetKMSArn(Aws::String&& value) { m_kMSArnHasBeenSet = true; m_kMSArn = std::move(value); }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline void SetKMSArn(const char* value) { m_kMSArnHasBeenSet = true; m_kMSArn.assign(value); }

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline OutputSource& WithKMSArn(const Aws::String& value) { SetKMSArn(value); return *this;}

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline OutputSource& WithKMSArn(Aws::String&& value) { SetKMSArn(std::move(value)); return *this;}

    /**
     * <p>Customer KMS ARN for encryption at rest. If not provided, system will use an
     * Entity Resolution managed KMS key.</p>
     */
    inline OutputSource& WithKMSArn(const char* value) { SetKMSArn(value); return *this;}


    /**
     * <p>Normalizes the attributes defined in the schema in the input data. For
     * example, if an attribute has an <code>AttributeType</code> of
     * <code>PHONE_NUMBER</code>, and the data in the input table is in a format of
     * 1234567890, Entity Resolution will normalize this field in the output to
     * (123)-456-7890.</p>
     */
    inline bool GetApplyNormalization() const{ return m_applyNormalization; }

    /**
     * <p>Normalizes the attributes defined in the schema in the input data. For
     * example, if an attribute has an <code>AttributeType</code> of
     * <code>PHONE_NUMBER</code>, and the data in the input table is in a format of
     * 1234567890, Entity Resolution will normalize this field in the output to
     * (123)-456-7890.</p>
     */
    inline bool ApplyNormalizationHasBeenSet() const { return m_applyNormalizationHasBeenSet; }

    /**
     * <p>Normalizes the attributes defined in the schema in the input data. For
     * example, if an attribute has an <code>AttributeType</code> of
     * <code>PHONE_NUMBER</code>, and the data in the input table is in a format of
     * 1234567890, Entity Resolution will normalize this field in the output to
     * (123)-456-7890.</p>
     */
    inline void SetApplyNormalization(bool value) { m_applyNormalizationHasBeenSet = true; m_applyNormalization = value; }

    /**
     * <p>Normalizes the attributes defined in the schema in the input data. For
     * example, if an attribute has an <code>AttributeType</code> of
     * <code>PHONE_NUMBER</code>, and the data in the input table is in a format of
     * 1234567890, Entity Resolution will normalize this field in the output to
     * (123)-456-7890.</p>
     */
    inline OutputSource& WithApplyNormalization(bool value) { SetApplyNormalization(value); return *this;}


    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline const Aws::Vector<OutputAttribute>& GetOutput() const{ return m_output; }

    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline void SetOutput(const Aws::Vector<OutputAttribute>& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline void SetOutput(Aws::Vector<OutputAttribute>&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline OutputSource& WithOutput(const Aws::Vector<OutputAttribute>& value) { SetOutput(value); return *this;}

    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline OutputSource& WithOutput(Aws::Vector<OutputAttribute>&& value) { SetOutput(std::move(value)); return *this;}

    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline OutputSource& AddOutput(const OutputAttribute& value) { m_outputHasBeenSet = true; m_output.push_back(value); return *this; }

    /**
     * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
     * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
     * column to be included in the output table, and whether the values of the column
     * should be hashed.</p>
     */
    inline OutputSource& AddOutput(OutputAttribute&& value) { m_outputHasBeenSet = true; m_output.push_back(std::move(value)); return *this; }


    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline const Aws::String& GetOutputS3Path() const{ return m_outputS3Path; }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline void SetOutputS3Path(const Aws::String& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = value; }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline void SetOutputS3Path(Aws::String&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::move(value); }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline void SetOutputS3Path(const char* value) { m_outputS3PathHasBeenSet = true; m_outputS3Path.assign(value); }

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline OutputSource& WithOutputS3Path(const Aws::String& value) { SetOutputS3Path(value); return *this;}

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline OutputSource& WithOutputS3Path(Aws::String&& value) { SetOutputS3Path(std::move(value)); return *this;}

    /**
     * <p>The S3 path to which Entity Resolution will write the output table.</p>
     */
    inline OutputSource& WithOutputS3Path(const char* value) { SetOutputS3Path(value); return *this;}

  private:

    Aws::String m_kMSArn;
    bool m_kMSArnHasBeenSet = false;

    bool m_applyNormalization;
    bool m_applyNormalizationHasBeenSet = false;

    Aws::Vector<OutputAttribute> m_output;
    bool m_outputHasBeenSet = false;

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
