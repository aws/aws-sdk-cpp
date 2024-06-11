/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/EncryptionMode.h>
#include <aws/databrew/model/LogSubscription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/Output.h>
#include <aws/databrew/model/DataCatalogOutput.h>
#include <aws/databrew/model/DatabaseOutput.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class UpdateRecipeJobRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API UpdateRecipeJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecipeJob"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }
    inline UpdateRecipeJobRequest& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline UpdateRecipeJobRequest& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline UpdateRecipeJobRequest& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline const EncryptionMode& GetEncryptionMode() const{ return m_encryptionMode; }
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }
    inline void SetEncryptionMode(const EncryptionMode& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }
    inline void SetEncryptionMode(EncryptionMode&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }
    inline UpdateRecipeJobRequest& WithEncryptionMode(const EncryptionMode& value) { SetEncryptionMode(value); return *this;}
    inline UpdateRecipeJobRequest& WithEncryptionMode(EncryptionMode&& value) { SetEncryptionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateRecipeJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateRecipeJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateRecipeJobRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline const LogSubscription& GetLogSubscription() const{ return m_logSubscription; }
    inline bool LogSubscriptionHasBeenSet() const { return m_logSubscriptionHasBeenSet; }
    inline void SetLogSubscription(const LogSubscription& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = value; }
    inline void SetLogSubscription(LogSubscription&& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = std::move(value); }
    inline UpdateRecipeJobRequest& WithLogSubscription(const LogSubscription& value) { SetLogSubscription(value); return *this;}
    inline UpdateRecipeJobRequest& WithLogSubscription(LogSubscription&& value) { SetLogSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of nodes that DataBrew can consume when the job processes
     * data.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline UpdateRecipeJobRequest& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline UpdateRecipeJobRequest& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more artifacts that represent the output from running the job. </p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline UpdateRecipeJobRequest& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}
    inline UpdateRecipeJobRequest& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}
    inline UpdateRecipeJobRequest& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline UpdateRecipeJobRequest& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline const Aws::Vector<DataCatalogOutput>& GetDataCatalogOutputs() const{ return m_dataCatalogOutputs; }
    inline bool DataCatalogOutputsHasBeenSet() const { return m_dataCatalogOutputsHasBeenSet; }
    inline void SetDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs = value; }
    inline void SetDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs = std::move(value); }
    inline UpdateRecipeJobRequest& WithDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { SetDataCatalogOutputs(value); return *this;}
    inline UpdateRecipeJobRequest& WithDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { SetDataCatalogOutputs(std::move(value)); return *this;}
    inline UpdateRecipeJobRequest& AddDataCatalogOutputs(const DataCatalogOutput& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.push_back(value); return *this; }
    inline UpdateRecipeJobRequest& AddDataCatalogOutputs(DataCatalogOutput&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline const Aws::Vector<DatabaseOutput>& GetDatabaseOutputs() const{ return m_databaseOutputs; }
    inline bool DatabaseOutputsHasBeenSet() const { return m_databaseOutputsHasBeenSet; }
    inline void SetDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = value; }
    inline void SetDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = std::move(value); }
    inline UpdateRecipeJobRequest& WithDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { SetDatabaseOutputs(value); return *this;}
    inline UpdateRecipeJobRequest& WithDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { SetDatabaseOutputs(std::move(value)); return *this;}
    inline UpdateRecipeJobRequest& AddDatabaseOutputs(const DatabaseOutput& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.push_back(value); return *this; }
    inline UpdateRecipeJobRequest& AddDatabaseOutputs(DatabaseOutput&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateRecipeJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateRecipeJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateRecipeJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline UpdateRecipeJobRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    EncryptionMode m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
