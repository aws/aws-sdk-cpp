/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RecordingScope.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A summary of a configuration recorder, including the <code>arn</code>,
   * <code>name</code>, <code>servicePrincipal</code>, and
   * <code>recordingScope</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigurationRecorderSummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationRecorderSummary
  {
  public:
    AWS_CONFIGSERVICE_API ConfigurationRecorderSummary();
    AWS_CONFIGSERVICE_API ConfigurationRecorderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationRecorderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configuration recorder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ConfigurationRecorderSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ConfigurationRecorderSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ConfigurationRecorderSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfigurationRecorderSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfigurationRecorderSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfigurationRecorderSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For service-linked configuration recorders, indicates which Amazon Web
     * Services service the configuration recorder is linked to.</p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }
    inline ConfigurationRecorderSummary& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}
    inline ConfigurationRecorderSummary& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}
    inline ConfigurationRecorderSummary& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ConfigurationItem.html">ConfigurationItems</a>
     * in scope for the configuration recorder are recorded for free
     * (<code>INTERNAL</code>) or if you are charged a service fee for recording
     * (<code>PAID</code>).</p>
     */
    inline const RecordingScope& GetRecordingScope() const{ return m_recordingScope; }
    inline bool RecordingScopeHasBeenSet() const { return m_recordingScopeHasBeenSet; }
    inline void SetRecordingScope(const RecordingScope& value) { m_recordingScopeHasBeenSet = true; m_recordingScope = value; }
    inline void SetRecordingScope(RecordingScope&& value) { m_recordingScopeHasBeenSet = true; m_recordingScope = std::move(value); }
    inline ConfigurationRecorderSummary& WithRecordingScope(const RecordingScope& value) { SetRecordingScope(value); return *this;}
    inline ConfigurationRecorderSummary& WithRecordingScope(RecordingScope&& value) { SetRecordingScope(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;

    RecordingScope m_recordingScope;
    bool m_recordingScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
