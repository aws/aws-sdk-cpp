/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Provides summary information about an App Runner observability configuration
   * resource.</p> <p>This type contains limited information about an observability
   * configuration. It includes only identification information, without
   * configuration details. It's returned by the
   * <a>ListObservabilityConfigurations</a> action. Complete configuration
   * information is returned by the <a>CreateObservabilityConfiguration</a>,
   * <a>DescribeObservabilityConfiguration</a>, and
   * <a>DeleteObservabilityConfiguration</a> actions using the
   * <a>ObservabilityConfiguration</a> type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ObservabilityConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class ObservabilityConfigurationSummary
  {
  public:
    AWS_APPRUNNER_API ObservabilityConfigurationSummary();
    AWS_APPRUNNER_API ObservabilityConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ObservabilityConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this observability configuration.</p>
     */
    inline const Aws::String& GetObservabilityConfigurationArn() const{ return m_observabilityConfigurationArn; }
    inline bool ObservabilityConfigurationArnHasBeenSet() const { return m_observabilityConfigurationArnHasBeenSet; }
    inline void SetObservabilityConfigurationArn(const Aws::String& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = value; }
    inline void SetObservabilityConfigurationArn(Aws::String&& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = std::move(value); }
    inline void SetObservabilityConfigurationArn(const char* value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn.assign(value); }
    inline ObservabilityConfigurationSummary& WithObservabilityConfigurationArn(const Aws::String& value) { SetObservabilityConfigurationArn(value); return *this;}
    inline ObservabilityConfigurationSummary& WithObservabilityConfigurationArn(Aws::String&& value) { SetObservabilityConfigurationArn(std::move(value)); return *this;}
    inline ObservabilityConfigurationSummary& WithObservabilityConfigurationArn(const char* value) { SetObservabilityConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided observability configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline const Aws::String& GetObservabilityConfigurationName() const{ return m_observabilityConfigurationName; }
    inline bool ObservabilityConfigurationNameHasBeenSet() const { return m_observabilityConfigurationNameHasBeenSet; }
    inline void SetObservabilityConfigurationName(const Aws::String& value) { m_observabilityConfigurationNameHasBeenSet = true; m_observabilityConfigurationName = value; }
    inline void SetObservabilityConfigurationName(Aws::String&& value) { m_observabilityConfigurationNameHasBeenSet = true; m_observabilityConfigurationName = std::move(value); }
    inline void SetObservabilityConfigurationName(const char* value) { m_observabilityConfigurationNameHasBeenSet = true; m_observabilityConfigurationName.assign(value); }
    inline ObservabilityConfigurationSummary& WithObservabilityConfigurationName(const Aws::String& value) { SetObservabilityConfigurationName(value); return *this;}
    inline ObservabilityConfigurationSummary& WithObservabilityConfigurationName(Aws::String&& value) { SetObservabilityConfigurationName(std::move(value)); return *this;}
    inline ObservabilityConfigurationSummary& WithObservabilityConfigurationName(const char* value) { SetObservabilityConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of this observability configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>ObservabilityConfigurationName</code>.</p>
     */
    inline int GetObservabilityConfigurationRevision() const{ return m_observabilityConfigurationRevision; }
    inline bool ObservabilityConfigurationRevisionHasBeenSet() const { return m_observabilityConfigurationRevisionHasBeenSet; }
    inline void SetObservabilityConfigurationRevision(int value) { m_observabilityConfigurationRevisionHasBeenSet = true; m_observabilityConfigurationRevision = value; }
    inline ObservabilityConfigurationSummary& WithObservabilityConfigurationRevision(int value) { SetObservabilityConfigurationRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_observabilityConfigurationArn;
    bool m_observabilityConfigurationArnHasBeenSet = false;

    Aws::String m_observabilityConfigurationName;
    bool m_observabilityConfigurationNameHasBeenSet = false;

    int m_observabilityConfigurationRevision;
    bool m_observabilityConfigurationRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
