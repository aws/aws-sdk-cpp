/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/NotificationProperty.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines an action to be initiated by a trigger.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Action">AWS API
   * Reference</a></p>
   */
  class Action
  {
  public:
    AWS_GLUE_API Action();
    AWS_GLUE_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a job to be run.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline Action& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline Action& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline Action& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job arguments used when this trigger fires. For this job run, they
     * replace the default arguments set in the job definition itself.</p> <p>You can
     * specify arguments here that your own job-execution script consumes, as well as
     * arguments that Glue itself consumes.</p> <p>For information about how to specify
     * and consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }
    inline Action& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}
    inline Action& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}
    inline Action& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }
    inline Action& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }
    inline Action& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }
    inline Action& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }
    inline Action& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }
    inline Action& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }
    inline Action& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. The default is 2,880 minutes (48 hours). This
     * overrides the timeout value set in the parent job.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline Action& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this action.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }
    inline Action& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}
    inline Action& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}
    inline Action& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline const NotificationProperty& GetNotificationProperty() const{ return m_notificationProperty; }
    inline bool NotificationPropertyHasBeenSet() const { return m_notificationPropertyHasBeenSet; }
    inline void SetNotificationProperty(const NotificationProperty& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = value; }
    inline void SetNotificationProperty(NotificationProperty&& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = std::move(value); }
    inline Action& WithNotificationProperty(const NotificationProperty& value) { SetNotificationProperty(value); return *this;}
    inline Action& WithNotificationProperty(NotificationProperty&& value) { SetNotificationProperty(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the crawler to be used with this action.</p>
     */
    inline const Aws::String& GetCrawlerName() const{ return m_crawlerName; }
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }
    inline void SetCrawlerName(const Aws::String& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = value; }
    inline void SetCrawlerName(Aws::String&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::move(value); }
    inline void SetCrawlerName(const char* value) { m_crawlerNameHasBeenSet = true; m_crawlerName.assign(value); }
    inline Action& WithCrawlerName(const Aws::String& value) { SetCrawlerName(value); return *this;}
    inline Action& WithCrawlerName(Aws::String&& value) { SetCrawlerName(std::move(value)); return *this;}
    inline Action& WithCrawlerName(const char* value) { SetCrawlerName(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet = false;

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
