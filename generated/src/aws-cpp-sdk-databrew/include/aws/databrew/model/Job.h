/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/databrew/model/EncryptionMode.h>
#include <aws/databrew/model/JobType.h>
#include <aws/databrew/model/LogSubscription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/RecipeReference.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/JobSample.h>
#include <aws/databrew/model/Output.h>
#include <aws/databrew/model/DataCatalogOutput.h>
#include <aws/databrew/model/DatabaseOutput.h>
#include <aws/databrew/model/ValidationConfiguration.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents all of the attributes of a DataBrew job.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Job">AWS API
   * Reference</a></p>
   */
  class Job
  {
  public:
    AWS_GLUEDATABREW_API Job();
    AWS_GLUEDATABREW_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services account that owns the job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the job.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the job.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the job.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the job.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the job.</p>
     */
    inline Job& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the job.</p>
     */
    inline Job& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the job.</p>
     */
    inline Job& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the job.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the job.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the job.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the job.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the job.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the job.</p>
     */
    inline Job& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the job.</p>
     */
    inline Job& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the job.</p>
     */
    inline Job& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time that the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the job was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the job was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the job was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the job was created.</p>
     */
    inline Job& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the job was created.</p>
     */
    inline Job& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>A dataset that the job is to process.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>A dataset that the job is to process.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>A dataset that the job is to process.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>A dataset that the job is to process.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>A dataset that the job is to process.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>A dataset that the job is to process.</p>
     */
    inline Job& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>A dataset that the job is to process.</p>
     */
    inline Job& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>A dataset that the job is to process.</p>
     */
    inline Job& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job output. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/encryption-security-configuration.html">Encrypting
     * data written by DataBrew jobs</a> </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job output. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/encryption-security-configuration.html">Encrypting
     * data written by DataBrew jobs</a> </p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job output. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/encryption-security-configuration.html">Encrypting
     * data written by DataBrew jobs</a> </p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job output. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/encryption-security-configuration.html">Encrypting
     * data written by DataBrew jobs</a> </p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job output. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/encryption-security-configuration.html">Encrypting
     * data written by DataBrew jobs</a> </p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job output. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/encryption-security-configuration.html">Encrypting
     * data written by DataBrew jobs</a> </p>
     */
    inline Job& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job output. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/encryption-security-configuration.html">Encrypting
     * data written by DataBrew jobs</a> </p>
     */
    inline Job& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job output. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/encryption-security-configuration.html">Encrypting
     * data written by DataBrew jobs</a> </p>
     */
    inline Job& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline const EncryptionMode& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline void SetEncryptionMode(const EncryptionMode& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline void SetEncryptionMode(EncryptionMode&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline Job& WithEncryptionMode(const EncryptionMode& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline Job& WithEncryptionMode(EncryptionMode&& value) { SetEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The unique name of the job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the job.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the job.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the job.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the job.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the job.</p>
     */
    inline Job& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the job.</p>
     */
    inline Job& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the job.</p>
     */
    inline Job& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The job type of the job, which must be one of the following:</p> <ul> <li>
     * <p> <code>PROFILE</code> - A job to analyze a dataset, to determine its size,
     * data types, data distribution, and more.</p> </li> <li> <p> <code>RECIPE</code>
     * - A job to apply one or more transformations to a dataset.</p> </li> </ul>
     */
    inline const JobType& GetType() const{ return m_type; }

    /**
     * <p>The job type of the job, which must be one of the following:</p> <ul> <li>
     * <p> <code>PROFILE</code> - A job to analyze a dataset, to determine its size,
     * data types, data distribution, and more.</p> </li> <li> <p> <code>RECIPE</code>
     * - A job to apply one or more transformations to a dataset.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The job type of the job, which must be one of the following:</p> <ul> <li>
     * <p> <code>PROFILE</code> - A job to analyze a dataset, to determine its size,
     * data types, data distribution, and more.</p> </li> <li> <p> <code>RECIPE</code>
     * - A job to apply one or more transformations to a dataset.</p> </li> </ul>
     */
    inline void SetType(const JobType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The job type of the job, which must be one of the following:</p> <ul> <li>
     * <p> <code>PROFILE</code> - A job to analyze a dataset, to determine its size,
     * data types, data distribution, and more.</p> </li> <li> <p> <code>RECIPE</code>
     * - A job to apply one or more transformations to a dataset.</p> </li> </ul>
     */
    inline void SetType(JobType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The job type of the job, which must be one of the following:</p> <ul> <li>
     * <p> <code>PROFILE</code> - A job to analyze a dataset, to determine its size,
     * data types, data distribution, and more.</p> </li> <li> <p> <code>RECIPE</code>
     * - A job to apply one or more transformations to a dataset.</p> </li> </ul>
     */
    inline Job& WithType(const JobType& value) { SetType(value); return *this;}

    /**
     * <p>The job type of the job, which must be one of the following:</p> <ul> <li>
     * <p> <code>PROFILE</code> - A job to analyze a dataset, to determine its size,
     * data types, data distribution, and more.</p> </li> <li> <p> <code>RECIPE</code>
     * - A job to apply one or more transformations to a dataset.</p> </li> </ul>
     */
    inline Job& WithType(JobType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the job.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the job.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the job.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the job.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the job.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the job.</p>
     */
    inline Job& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the job.</p>
     */
    inline Job& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the job.</p>
     */
    inline Job& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The modification date and time of the job.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The modification date and time of the job.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The modification date and time of the job.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The modification date and time of the job.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The modification date and time of the job.</p>
     */
    inline Job& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The modification date and time of the job.</p>
     */
    inline Job& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The current status of Amazon CloudWatch logging for the job.</p>
     */
    inline const LogSubscription& GetLogSubscription() const{ return m_logSubscription; }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job.</p>
     */
    inline bool LogSubscriptionHasBeenSet() const { return m_logSubscriptionHasBeenSet; }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job.</p>
     */
    inline void SetLogSubscription(const LogSubscription& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = value; }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job.</p>
     */
    inline void SetLogSubscription(LogSubscription&& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = std::move(value); }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job.</p>
     */
    inline Job& WithLogSubscription(const LogSubscription& value) { SetLogSubscription(value); return *this;}

    /**
     * <p>The current status of Amazon CloudWatch logging for the job.</p>
     */
    inline Job& WithLogSubscription(LogSubscription&& value) { SetLogSubscription(std::move(value)); return *this;}


    /**
     * <p>The maximum number of nodes that can be consumed when the job processes
     * data.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum number of nodes that can be consumed when the job processes
     * data.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum number of nodes that can be consumed when the job processes
     * data.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum number of nodes that can be consumed when the job processes
     * data.</p>
     */
    inline Job& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline Job& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}


    /**
     * <p>One or more artifacts that represent output from running the job.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>One or more artifacts that represent output from running the job.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>One or more artifacts that represent output from running the job.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>One or more artifacts that represent output from running the job.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>One or more artifacts that represent output from running the job.</p>
     */
    inline Job& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>One or more artifacts that represent output from running the job.</p>
     */
    inline Job& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>One or more artifacts that represent output from running the job.</p>
     */
    inline Job& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>One or more artifacts that represent output from running the job.</p>
     */
    inline Job& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline const Aws::Vector<DataCatalogOutput>& GetDataCatalogOutputs() const{ return m_dataCatalogOutputs; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline bool DataCatalogOutputsHasBeenSet() const { return m_dataCatalogOutputsHasBeenSet; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline void SetDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs = value; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline void SetDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs = std::move(value); }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline Job& WithDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { SetDataCatalogOutputs(value); return *this;}

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline Job& WithDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { SetDataCatalogOutputs(std::move(value)); return *this;}

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline Job& AddDataCatalogOutputs(const DataCatalogOutput& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.push_back(value); return *this; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline Job& AddDataCatalogOutputs(DataCatalogOutput&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline const Aws::Vector<DatabaseOutput>& GetDatabaseOutputs() const{ return m_databaseOutputs; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline bool DatabaseOutputsHasBeenSet() const { return m_databaseOutputsHasBeenSet; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline void SetDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = value; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline void SetDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = std::move(value); }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline Job& WithDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { SetDatabaseOutputs(value); return *this;}

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline Job& WithDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { SetDatabaseOutputs(std::move(value)); return *this;}

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline Job& AddDatabaseOutputs(const DatabaseOutput& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.push_back(value); return *this; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline Job& AddDatabaseOutputs(DatabaseOutput&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the project that the job is associated with.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project that the job is associated with.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project that the job is associated with.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project that the job is associated with.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project that the job is associated with.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project that the job is associated with.</p>
     */
    inline Job& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project that the job is associated with.</p>
     */
    inline Job& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that the job is associated with.</p>
     */
    inline Job& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>A set of steps that the job runs.</p>
     */
    inline const RecipeReference& GetRecipeReference() const{ return m_recipeReference; }

    /**
     * <p>A set of steps that the job runs.</p>
     */
    inline bool RecipeReferenceHasBeenSet() const { return m_recipeReferenceHasBeenSet; }

    /**
     * <p>A set of steps that the job runs.</p>
     */
    inline void SetRecipeReference(const RecipeReference& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = value; }

    /**
     * <p>A set of steps that the job runs.</p>
     */
    inline void SetRecipeReference(RecipeReference&& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = std::move(value); }

    /**
     * <p>A set of steps that the job runs.</p>
     */
    inline Job& WithRecipeReference(const RecipeReference& value) { SetRecipeReference(value); return *this;}

    /**
     * <p>A set of steps that the job runs.</p>
     */
    inline Job& WithRecipeReference(RecipeReference&& value) { SetRecipeReference(std::move(value)); return *this;}


    /**
     * <p>The unique Amazon Resource Name (ARN) for the job.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the job.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the job.</p>
     */
    inline Job& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the job.</p>
     */
    inline Job& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the job.</p>
     */
    inline Job& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed for this job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed for this job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed for this job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed for this job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed for this job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed for this job.</p>
     */
    inline Job& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed for this job.</p>
     */
    inline Job& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed for this job.</p>
     */
    inline Job& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline Job& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the job.</p>
     */
    inline Job& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default value is used. The default value is CUSTOM_ROWS for the
     * mode parameter and 20,000 for the size parameter.</p>
     */
    inline const JobSample& GetJobSample() const{ return m_jobSample; }

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default value is used. The default value is CUSTOM_ROWS for the
     * mode parameter and 20,000 for the size parameter.</p>
     */
    inline bool JobSampleHasBeenSet() const { return m_jobSampleHasBeenSet; }

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default value is used. The default value is CUSTOM_ROWS for the
     * mode parameter and 20,000 for the size parameter.</p>
     */
    inline void SetJobSample(const JobSample& value) { m_jobSampleHasBeenSet = true; m_jobSample = value; }

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default value is used. The default value is CUSTOM_ROWS for the
     * mode parameter and 20,000 for the size parameter.</p>
     */
    inline void SetJobSample(JobSample&& value) { m_jobSampleHasBeenSet = true; m_jobSample = std::move(value); }

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default value is used. The default value is CUSTOM_ROWS for the
     * mode parameter and 20,000 for the size parameter.</p>
     */
    inline Job& WithJobSample(const JobSample& value) { SetJobSample(value); return *this;}

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default value is used. The default value is CUSTOM_ROWS for the
     * mode parameter and 20,000 for the size parameter.</p>
     */
    inline Job& WithJobSample(JobSample&& value) { SetJobSample(std::move(value)); return *this;}


    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline const Aws::Vector<ValidationConfiguration>& GetValidationConfigurations() const{ return m_validationConfigurations; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline bool ValidationConfigurationsHasBeenSet() const { return m_validationConfigurationsHasBeenSet; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline void SetValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations = value; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline void SetValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations = std::move(value); }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline Job& WithValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { SetValidationConfigurations(value); return *this;}

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline Job& WithValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { SetValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline Job& AddValidationConfigurations(const ValidationConfiguration& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations.push_back(value); return *this; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline Job& AddValidationConfigurations(ValidationConfiguration&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    EncryptionMode m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    LogSubscription m_logSubscription;
    bool m_logSubscriptionHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::Vector<DataCatalogOutput> m_dataCatalogOutputs;
    bool m_dataCatalogOutputsHasBeenSet = false;

    Aws::Vector<DatabaseOutput> m_databaseOutputs;
    bool m_databaseOutputsHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    RecipeReference m_recipeReference;
    bool m_recipeReferenceHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    JobSample m_jobSample;
    bool m_jobSampleHasBeenSet = false;

    Aws::Vector<ValidationConfiguration> m_validationConfigurations;
    bool m_validationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
