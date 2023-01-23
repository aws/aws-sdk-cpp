/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ExecutionProperty.h>
#include <aws/glue/model/JobCommand.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/ConnectionsList.h>
#include <aws/glue/model/NotificationProperty.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/glue/model/ExecutionClass.h>
#include <aws/glue/model/SourceControlDetails.h>
#include <aws/glue/model/CodeGenConfigurationNode.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name you assign to this job definition. It must be unique in your
     * account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name you assign to this job definition. It must be unique in your
     * account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name you assign to this job definition. It must be unique in your
     * account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name you assign to this job definition. It must be unique in your
     * account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name you assign to this job definition. It must be unique in your
     * account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name you assign to this job definition. It must be unique in your
     * account.</p>
     */
    inline CreateJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name you assign to this job definition. It must be unique in your
     * account.</p>
     */
    inline CreateJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name you assign to this job definition. It must be unique in your
     * account.</p>
     */
    inline CreateJobRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Description of the job being defined.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the job being defined.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the job being defined.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the job being defined.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the job being defined.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the job being defined.</p>
     */
    inline CreateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the job being defined.</p>
     */
    inline CreateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the job being defined.</p>
     */
    inline CreateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>This field is reserved for future use.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline CreateJobRequest& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline CreateJobRequest& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline CreateJobRequest& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline CreateJobRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline CreateJobRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline CreateJobRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>An <code>ExecutionProperty</code> specifying the maximum number of concurrent
     * runs allowed for this job.</p>
     */
    inline const ExecutionProperty& GetExecutionProperty() const{ return m_executionProperty; }

    /**
     * <p>An <code>ExecutionProperty</code> specifying the maximum number of concurrent
     * runs allowed for this job.</p>
     */
    inline bool ExecutionPropertyHasBeenSet() const { return m_executionPropertyHasBeenSet; }

    /**
     * <p>An <code>ExecutionProperty</code> specifying the maximum number of concurrent
     * runs allowed for this job.</p>
     */
    inline void SetExecutionProperty(const ExecutionProperty& value) { m_executionPropertyHasBeenSet = true; m_executionProperty = value; }

    /**
     * <p>An <code>ExecutionProperty</code> specifying the maximum number of concurrent
     * runs allowed for this job.</p>
     */
    inline void SetExecutionProperty(ExecutionProperty&& value) { m_executionPropertyHasBeenSet = true; m_executionProperty = std::move(value); }

    /**
     * <p>An <code>ExecutionProperty</code> specifying the maximum number of concurrent
     * runs allowed for this job.</p>
     */
    inline CreateJobRequest& WithExecutionProperty(const ExecutionProperty& value) { SetExecutionProperty(value); return *this;}

    /**
     * <p>An <code>ExecutionProperty</code> specifying the maximum number of concurrent
     * runs allowed for this job.</p>
     */
    inline CreateJobRequest& WithExecutionProperty(ExecutionProperty&& value) { SetExecutionProperty(std::move(value)); return *this;}


    /**
     * <p>The <code>JobCommand</code> that runs this job.</p>
     */
    inline const JobCommand& GetCommand() const{ return m_command; }

    /**
     * <p>The <code>JobCommand</code> that runs this job.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The <code>JobCommand</code> that runs this job.</p>
     */
    inline void SetCommand(const JobCommand& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The <code>JobCommand</code> that runs this job.</p>
     */
    inline void SetCommand(JobCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The <code>JobCommand</code> that runs this job.</p>
     */
    inline CreateJobRequest& WithCommand(const JobCommand& value) { SetCommand(value); return *this;}

    /**
     * <p>The <code>JobCommand</code> that runs this job.</p>
     */
    inline CreateJobRequest& WithCommand(JobCommand&& value) { SetCommand(std::move(value)); return *this;}


    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const{ return m_defaultArguments; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline bool DefaultArgumentsHasBeenSet() const { return m_defaultArgumentsHasBeenSet; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline void SetDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = value; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline void SetDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::move(value); }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& WithDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultArguments(value); return *this;}

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& WithDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultArguments(std::move(value)); return *this;}

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& AddDefaultArguments(const Aws::String& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& AddDefaultArguments(Aws::String&& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& AddDefaultArguments(const Aws::String& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& AddDefaultArguments(Aws::String&& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& AddDefaultArguments(const char* key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& AddDefaultArguments(Aws::String&& key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default arguments for this job.</p> <p>You can specify arguments here
     * that your own job-execution script consumes, as well as arguments that Glue
     * itself consumes.</p> <p>Job arguments may be logged. Do not pass plaintext
     * secrets as arguments. Retrieve secrets from a Glue Connection, Secrets Manager
     * or other secret management mechanism if you intend to keep them within the Job.
     * </p> <p>For information about how to specify and consume your own Job arguments,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline CreateJobRequest& AddDefaultArguments(const char* key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }


    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetNonOverridableArguments() const{ return m_nonOverridableArguments; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline bool NonOverridableArgumentsHasBeenSet() const { return m_nonOverridableArgumentsHasBeenSet; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline void SetNonOverridableArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments = value; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline void SetNonOverridableArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments = std::move(value); }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& WithNonOverridableArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetNonOverridableArguments(value); return *this;}

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& WithNonOverridableArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetNonOverridableArguments(std::move(value)); return *this;}

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& AddNonOverridableArguments(const Aws::String& key, const Aws::String& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(key, value); return *this; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& AddNonOverridableArguments(Aws::String&& key, const Aws::String& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& AddNonOverridableArguments(const Aws::String& key, Aws::String&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& AddNonOverridableArguments(Aws::String&& key, Aws::String&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& AddNonOverridableArguments(const char* key, Aws::String&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& AddNonOverridableArguments(Aws::String&& key, const char* value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>Non-overridable arguments for this job, specified as name-value pairs.</p>
     */
    inline CreateJobRequest& AddNonOverridableArguments(const char* key, const char* value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(key, value); return *this; }


    /**
     * <p>The connections used for this job.</p>
     */
    inline const ConnectionsList& GetConnections() const{ return m_connections; }

    /**
     * <p>The connections used for this job.</p>
     */
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }

    /**
     * <p>The connections used for this job.</p>
     */
    inline void SetConnections(const ConnectionsList& value) { m_connectionsHasBeenSet = true; m_connections = value; }

    /**
     * <p>The connections used for this job.</p>
     */
    inline void SetConnections(ConnectionsList&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }

    /**
     * <p>The connections used for this job.</p>
     */
    inline CreateJobRequest& WithConnections(const ConnectionsList& value) { SetConnections(value); return *this;}

    /**
     * <p>The connections used for this job.</p>
     */
    inline CreateJobRequest& WithConnections(ConnectionsList&& value) { SetConnections(std::move(value)); return *this;}


    /**
     * <p>The maximum number of times to retry this job if it fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times to retry this job if it fails.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of times to retry this job if it fails.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of times to retry this job if it fails.</p>
     */
    inline CreateJobRequest& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}


    /**
     * <p>The job timeout in minutes. This is the maximum time that a job run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The job timeout in minutes. This is the maximum time that a job run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The job timeout in minutes. This is the maximum time that a job run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The job timeout in minutes. This is the maximum time that a job run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline CreateJobRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>For Glue version 1.0 or earlier jobs, using the standard worker type, the
     * number of Glue data processing units (DPUs) that can be allocated when this job
     * runs. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do not
     * set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl") or Apache Spark streaming
     * ETL job (<code>JobCommand.Name</code>="gluestreaming"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul> <p>For Glue version 2.0 jobs, you
     * cannot instead specify a <code>Maximum capacity</code>. Instead, you should
     * specify a <code>Worker type</code> and the <code>Number of workers</code>.</p>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>For Glue version 1.0 or earlier jobs, using the standard worker type, the
     * number of Glue data processing units (DPUs) that can be allocated when this job
     * runs. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do not
     * set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl") or Apache Spark streaming
     * ETL job (<code>JobCommand.Name</code>="gluestreaming"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul> <p>For Glue version 2.0 jobs, you
     * cannot instead specify a <code>Maximum capacity</code>. Instead, you should
     * specify a <code>Worker type</code> and the <code>Number of workers</code>.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>For Glue version 1.0 or earlier jobs, using the standard worker type, the
     * number of Glue data processing units (DPUs) that can be allocated when this job
     * runs. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do not
     * set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl") or Apache Spark streaming
     * ETL job (<code>JobCommand.Name</code>="gluestreaming"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul> <p>For Glue version 2.0 jobs, you
     * cannot instead specify a <code>Maximum capacity</code>. Instead, you should
     * specify a <code>Worker type</code> and the <code>Number of workers</code>.</p>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>For Glue version 1.0 or earlier jobs, using the standard worker type, the
     * number of Glue data processing units (DPUs) that can be allocated when this job
     * runs. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do not
     * set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl") or Apache Spark streaming
     * ETL job (<code>JobCommand.Name</code>="gluestreaming"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul> <p>For Glue version 2.0 jobs, you
     * cannot instead specify a <code>Maximum capacity</code>. Instead, you should
     * specify a <code>Worker type</code> and the <code>Number of workers</code>.</p>
     */
    inline CreateJobRequest& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline CreateJobRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline CreateJobRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline CreateJobRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to use with this job. You may use tags to limit access to the job.
     * For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline CreateJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Specifies configuration properties of a job notification.</p>
     */
    inline const NotificationProperty& GetNotificationProperty() const{ return m_notificationProperty; }

    /**
     * <p>Specifies configuration properties of a job notification.</p>
     */
    inline bool NotificationPropertyHasBeenSet() const { return m_notificationPropertyHasBeenSet; }

    /**
     * <p>Specifies configuration properties of a job notification.</p>
     */
    inline void SetNotificationProperty(const NotificationProperty& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = value; }

    /**
     * <p>Specifies configuration properties of a job notification.</p>
     */
    inline void SetNotificationProperty(NotificationProperty&& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = std::move(value); }

    /**
     * <p>Specifies configuration properties of a job notification.</p>
     */
    inline CreateJobRequest& WithNotificationProperty(const NotificationProperty& value) { SetNotificationProperty(value); return *this;}

    /**
     * <p>Specifies configuration properties of a job notification.</p>
     */
    inline CreateJobRequest& WithNotificationProperty(NotificationProperty&& value) { SetNotificationProperty(std::move(value)); return *this;}


    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline CreateJobRequest& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline CreateJobRequest& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline CreateJobRequest& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline CreateJobRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline CreateJobRequest& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline CreateJobRequest& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline const Aws::Map<Aws::String, CodeGenConfigurationNode>& GetCodeGenConfigurationNodes() const{ return m_codeGenConfigurationNodes; }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline bool CodeGenConfigurationNodesHasBeenSet() const { return m_codeGenConfigurationNodesHasBeenSet; }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline void SetCodeGenConfigurationNodes(const Aws::Map<Aws::String, CodeGenConfigurationNode>& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes = value; }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline void SetCodeGenConfigurationNodes(Aws::Map<Aws::String, CodeGenConfigurationNode>&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes = std::move(value); }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline CreateJobRequest& WithCodeGenConfigurationNodes(const Aws::Map<Aws::String, CodeGenConfigurationNode>& value) { SetCodeGenConfigurationNodes(value); return *this;}

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline CreateJobRequest& WithCodeGenConfigurationNodes(Aws::Map<Aws::String, CodeGenConfigurationNode>&& value) { SetCodeGenConfigurationNodes(std::move(value)); return *this;}

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline CreateJobRequest& AddCodeGenConfigurationNodes(const Aws::String& key, const CodeGenConfigurationNode& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(key, value); return *this; }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline CreateJobRequest& AddCodeGenConfigurationNodes(Aws::String&& key, const CodeGenConfigurationNode& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline CreateJobRequest& AddCodeGenConfigurationNodes(const Aws::String& key, CodeGenConfigurationNode&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline CreateJobRequest& AddCodeGenConfigurationNodes(Aws::String&& key, CodeGenConfigurationNode&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline CreateJobRequest& AddCodeGenConfigurationNodes(const char* key, CodeGenConfigurationNode&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline CreateJobRequest& AddCodeGenConfigurationNodes(const char* key, const CodeGenConfigurationNode& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(key, value); return *this; }


    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline const ExecutionClass& GetExecutionClass() const{ return m_executionClass; }

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline bool ExecutionClassHasBeenSet() const { return m_executionClassHasBeenSet; }

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline void SetExecutionClass(const ExecutionClass& value) { m_executionClassHasBeenSet = true; m_executionClass = value; }

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline void SetExecutionClass(ExecutionClass&& value) { m_executionClassHasBeenSet = true; m_executionClass = std::move(value); }

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline CreateJobRequest& WithExecutionClass(const ExecutionClass& value) { SetExecutionClass(value); return *this;}

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline CreateJobRequest& WithExecutionClass(ExecutionClass&& value) { SetExecutionClass(std::move(value)); return *this;}


    /**
     * <p>The details for a source control configuration for a job, allowing
     * synchronization of job artifacts to or from a remote repository.</p>
     */
    inline const SourceControlDetails& GetSourceControlDetails() const{ return m_sourceControlDetails; }

    /**
     * <p>The details for a source control configuration for a job, allowing
     * synchronization of job artifacts to or from a remote repository.</p>
     */
    inline bool SourceControlDetailsHasBeenSet() const { return m_sourceControlDetailsHasBeenSet; }

    /**
     * <p>The details for a source control configuration for a job, allowing
     * synchronization of job artifacts to or from a remote repository.</p>
     */
    inline void SetSourceControlDetails(const SourceControlDetails& value) { m_sourceControlDetailsHasBeenSet = true; m_sourceControlDetails = value; }

    /**
     * <p>The details for a source control configuration for a job, allowing
     * synchronization of job artifacts to or from a remote repository.</p>
     */
    inline void SetSourceControlDetails(SourceControlDetails&& value) { m_sourceControlDetailsHasBeenSet = true; m_sourceControlDetails = std::move(value); }

    /**
     * <p>The details for a source control configuration for a job, allowing
     * synchronization of job artifacts to or from a remote repository.</p>
     */
    inline CreateJobRequest& WithSourceControlDetails(const SourceControlDetails& value) { SetSourceControlDetails(value); return *this;}

    /**
     * <p>The details for a source control configuration for a job, allowing
     * synchronization of job artifacts to or from a remote repository.</p>
     */
    inline CreateJobRequest& WithSourceControlDetails(SourceControlDetails&& value) { SetSourceControlDetails(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    ExecutionProperty m_executionProperty;
    bool m_executionPropertyHasBeenSet = false;

    JobCommand m_command;
    bool m_commandHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultArguments;
    bool m_defaultArgumentsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_nonOverridableArguments;
    bool m_nonOverridableArgumentsHasBeenSet = false;

    ConnectionsList m_connections;
    bool m_connectionsHasBeenSet = false;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet = false;

    Aws::Map<Aws::String, CodeGenConfigurationNode> m_codeGenConfigurationNodes;
    bool m_codeGenConfigurationNodesHasBeenSet = false;

    ExecutionClass m_executionClass;
    bool m_executionClassHasBeenSet = false;

    SourceControlDetails m_sourceControlDetails;
    bool m_sourceControlDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
