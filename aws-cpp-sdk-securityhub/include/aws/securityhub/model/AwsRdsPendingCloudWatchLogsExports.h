/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Identifies the log types to enable and disable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsPendingCloudWatchLogsExports">AWS
   * API Reference</a></p>
   */
  class AwsRdsPendingCloudWatchLogsExports
  {
  public:
    AWS_SECURITYHUB_API AwsRdsPendingCloudWatchLogsExports();
    AWS_SECURITYHUB_API AwsRdsPendingCloudWatchLogsExports(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsPendingCloudWatchLogsExports& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypesToEnable() const{ return m_logTypesToEnable; }

    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline bool LogTypesToEnableHasBeenSet() const { return m_logTypesToEnableHasBeenSet; }

    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline void SetLogTypesToEnable(const Aws::Vector<Aws::String>& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable = value; }

    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline void SetLogTypesToEnable(Aws::Vector<Aws::String>&& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable = std::move(value); }

    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& WithLogTypesToEnable(const Aws::Vector<Aws::String>& value) { SetLogTypesToEnable(value); return *this;}

    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& WithLogTypesToEnable(Aws::Vector<Aws::String>&& value) { SetLogTypesToEnable(std::move(value)); return *this;}

    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& AddLogTypesToEnable(const Aws::String& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable.push_back(value); return *this; }

    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& AddLogTypesToEnable(Aws::String&& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& AddLogTypesToEnable(const char* value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable.push_back(value); return *this; }


    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypesToDisable() const{ return m_logTypesToDisable; }

    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline bool LogTypesToDisableHasBeenSet() const { return m_logTypesToDisableHasBeenSet; }

    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline void SetLogTypesToDisable(const Aws::Vector<Aws::String>& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable = value; }

    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline void SetLogTypesToDisable(Aws::Vector<Aws::String>&& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable = std::move(value); }

    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& WithLogTypesToDisable(const Aws::Vector<Aws::String>& value) { SetLogTypesToDisable(value); return *this;}

    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& WithLogTypesToDisable(Aws::Vector<Aws::String>&& value) { SetLogTypesToDisable(std::move(value)); return *this;}

    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& AddLogTypesToDisable(const Aws::String& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable.push_back(value); return *this; }

    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& AddLogTypesToDisable(Aws::String&& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline AwsRdsPendingCloudWatchLogsExports& AddLogTypesToDisable(const char* value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_logTypesToEnable;
    bool m_logTypesToEnableHasBeenSet = false;

    Aws::Vector<Aws::String> m_logTypesToDisable;
    bool m_logTypesToDisableHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
