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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/ExecutionProperty.h>
#include <aws/glue/model/JobCommand.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/ConnectionsList.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a job definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Job">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Job
  {
  public:
    Job();
    Job(const Aws::Utils::Json::JsonValue& jsonValue);
    Job& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name you assign to this job definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name you assign to this job definition.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name you assign to this job definition.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name you assign to this job definition.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name you assign to this job definition.</p>
     */
    inline Job& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name you assign to this job definition.</p>
     */
    inline Job& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name you assign to this job definition.</p>
     */
    inline Job& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Description of the job being defined.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

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
    inline Job& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the job being defined.</p>
     */
    inline Job& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the job being defined.</p>
     */
    inline Job& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>This field is reserved for future use.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

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
    inline Job& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline Job& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline Job& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p>The name or ARN of the IAM role associated with this job.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The name or ARN of the IAM role associated with this job.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name or ARN of the IAM role associated with this job.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The name or ARN of the IAM role associated with this job.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The name or ARN of the IAM role associated with this job.</p>
     */
    inline Job& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The name or ARN of the IAM role associated with this job.</p>
     */
    inline Job& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the IAM role associated with this job.</p>
     */
    inline Job& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The time and date that this job definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }

    /**
     * <p>The time and date that this job definition was created.</p>
     */
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }

    /**
     * <p>The time and date that this job definition was created.</p>
     */
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }

    /**
     * <p>The time and date that this job definition was created.</p>
     */
    inline Job& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>The time and date that this job definition was created.</p>
     */
    inline Job& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}


    /**
     * <p>The last point in time when this job definition was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The last point in time when this job definition was modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }

    /**
     * <p>The last point in time when this job definition was modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }

    /**
     * <p>The last point in time when this job definition was modified.</p>
     */
    inline Job& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The last point in time when this job definition was modified.</p>
     */
    inline Job& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>An ExecutionProperty specifying the maximum number of concurrent runs allowed
     * for this job.</p>
     */
    inline const ExecutionProperty& GetExecutionProperty() const{ return m_executionProperty; }

    /**
     * <p>An ExecutionProperty specifying the maximum number of concurrent runs allowed
     * for this job.</p>
     */
    inline void SetExecutionProperty(const ExecutionProperty& value) { m_executionPropertyHasBeenSet = true; m_executionProperty = value; }

    /**
     * <p>An ExecutionProperty specifying the maximum number of concurrent runs allowed
     * for this job.</p>
     */
    inline void SetExecutionProperty(ExecutionProperty&& value) { m_executionPropertyHasBeenSet = true; m_executionProperty = std::move(value); }

    /**
     * <p>An ExecutionProperty specifying the maximum number of concurrent runs allowed
     * for this job.</p>
     */
    inline Job& WithExecutionProperty(const ExecutionProperty& value) { SetExecutionProperty(value); return *this;}

    /**
     * <p>An ExecutionProperty specifying the maximum number of concurrent runs allowed
     * for this job.</p>
     */
    inline Job& WithExecutionProperty(ExecutionProperty&& value) { SetExecutionProperty(std::move(value)); return *this;}


    /**
     * <p>The JobCommand that executes this job.</p>
     */
    inline const JobCommand& GetCommand() const{ return m_command; }

    /**
     * <p>The JobCommand that executes this job.</p>
     */
    inline void SetCommand(const JobCommand& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The JobCommand that executes this job.</p>
     */
    inline void SetCommand(JobCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The JobCommand that executes this job.</p>
     */
    inline Job& WithCommand(const JobCommand& value) { SetCommand(value); return *this;}

    /**
     * <p>The JobCommand that executes this job.</p>
     */
    inline Job& WithCommand(JobCommand&& value) { SetCommand(std::move(value)); return *this;}


    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const{ return m_defaultArguments; }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline void SetDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = value; }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline void SetDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::move(value); }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& WithDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultArguments(value); return *this;}

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& WithDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultArguments(std::move(value)); return *this;}

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& AddDefaultArguments(const Aws::String& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& AddDefaultArguments(Aws::String&& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& AddDefaultArguments(const Aws::String& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& AddDefaultArguments(Aws::String&& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& AddDefaultArguments(const char* key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& AddDefaultArguments(Aws::String&& key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default arguments for this job, specified as name-value pairs.</p> <p>You
     * can specify arguments here that your own job-execution script consumes, as well
     * as arguments that AWS Glue itself consumes.</p> <p>For information about how to
     * specify and consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline Job& AddDefaultArguments(const char* key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }


    /**
     * <p>The connections used for this job.</p>
     */
    inline const ConnectionsList& GetConnections() const{ return m_connections; }

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
    inline Job& WithConnections(const ConnectionsList& value) { SetConnections(value); return *this;}

    /**
     * <p>The connections used for this job.</p>
     */
    inline Job& WithConnections(ConnectionsList&& value) { SetConnections(std::move(value)); return *this;}


    /**
     * <p>The maximum number of times to retry this job after a JobRun fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times to retry this job after a JobRun fails.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of times to retry this job after a JobRun fails.</p>
     */
    inline Job& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}


    /**
     * <p>The number of AWS Glue data processing units (DPUs) allocated to runs of this
     * job. From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a relative
     * measure of processing power that consists of 4 vCPUs of compute capacity and 16
     * GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline int GetAllocatedCapacity() const{ return m_allocatedCapacity; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) allocated to runs of this
     * job. From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a relative
     * measure of processing power that consists of 4 vCPUs of compute capacity and 16
     * GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline void SetAllocatedCapacity(int value) { m_allocatedCapacityHasBeenSet = true; m_allocatedCapacity = value; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) allocated to runs of this
     * job. From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a relative
     * measure of processing power that consists of 4 vCPUs of compute capacity and 16
     * GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline Job& WithAllocatedCapacity(int value) { SetAllocatedCapacity(value); return *this;}


    /**
     * <p>The job timeout in minutes.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The job timeout in minutes.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The job timeout in minutes.</p>
     */
    inline Job& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet;

    ExecutionProperty m_executionProperty;
    bool m_executionPropertyHasBeenSet;

    JobCommand m_command;
    bool m_commandHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_defaultArguments;
    bool m_defaultArgumentsHasBeenSet;

    ConnectionsList m_connections;
    bool m_connectionsHasBeenSet;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet;

    int m_allocatedCapacity;
    bool m_allocatedCapacityHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
