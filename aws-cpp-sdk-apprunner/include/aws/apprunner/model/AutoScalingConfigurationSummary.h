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
   * <p>Provides summary information about an App Runner automatic scaling
   * configuration resource.</p> <p>This type contains limited information about an
   * auto scaling configuration. It includes only identification information, without
   * configuration details. It's returned by the <a>ListAutoScalingConfigurations</a>
   * action. Complete configuration information is returned by the
   * <a>CreateAutoScalingConfiguration</a>, <a>DescribeAutoScalingConfiguration</a>,
   * and <a>DeleteAutoScalingConfiguration</a> actions using the
   * <a>AutoScalingConfiguration</a> type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/AutoScalingConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class AutoScalingConfigurationSummary
  {
  public:
    AWS_APPRUNNER_API AutoScalingConfigurationSummary();
    AWS_APPRUNNER_API AutoScalingConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API AutoScalingConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const{ return m_autoScalingConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(const Aws::String& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(Aws::String&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(const char* value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline AutoScalingConfigurationSummary& WithAutoScalingConfigurationArn(const Aws::String& value) { SetAutoScalingConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline AutoScalingConfigurationSummary& WithAutoScalingConfigurationArn(Aws::String&& value) { SetAutoScalingConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this auto scaling configuration.</p>
     */
    inline AutoScalingConfigurationSummary& WithAutoScalingConfigurationArn(const char* value) { SetAutoScalingConfigurationArn(value); return *this;}


    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationName() const{ return m_autoScalingConfigurationName; }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline bool AutoScalingConfigurationNameHasBeenSet() const { return m_autoScalingConfigurationNameHasBeenSet; }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetAutoScalingConfigurationName(const Aws::String& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = value; }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetAutoScalingConfigurationName(Aws::String&& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = std::move(value); }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline void SetAutoScalingConfigurationName(const char* value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName.assign(value); }

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline AutoScalingConfigurationSummary& WithAutoScalingConfigurationName(const Aws::String& value) { SetAutoScalingConfigurationName(value); return *this;}

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline AutoScalingConfigurationSummary& WithAutoScalingConfigurationName(Aws::String&& value) { SetAutoScalingConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The customer-provided auto scaling configuration name. It can be used in
     * multiple revisions of a configuration.</p>
     */
    inline AutoScalingConfigurationSummary& WithAutoScalingConfigurationName(const char* value) { SetAutoScalingConfigurationName(value); return *this;}


    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) with the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline int GetAutoScalingConfigurationRevision() const{ return m_autoScalingConfigurationRevision; }

    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) with the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline bool AutoScalingConfigurationRevisionHasBeenSet() const { return m_autoScalingConfigurationRevisionHasBeenSet; }

    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) with the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline void SetAutoScalingConfigurationRevision(int value) { m_autoScalingConfigurationRevisionHasBeenSet = true; m_autoScalingConfigurationRevision = value; }

    /**
     * <p>The revision of this auto scaling configuration. It's unique among all the
     * active configurations (<code>"Status": "ACTIVE"</code>) with the same
     * <code>AutoScalingConfigurationName</code>.</p>
     */
    inline AutoScalingConfigurationSummary& WithAutoScalingConfigurationRevision(int value) { SetAutoScalingConfigurationRevision(value); return *this;}

  private:

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;

    Aws::String m_autoScalingConfigurationName;
    bool m_autoScalingConfigurationNameHasBeenSet = false;

    int m_autoScalingConfigurationRevision;
    bool m_autoScalingConfigurationRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
