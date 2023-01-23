/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Identifies an Amazon EC2 launch template to use for a specific
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LaunchTemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API LaunchTemplateConfiguration();
    AWS_IMAGEBUILDER_API LaunchTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LaunchTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the Amazon EC2 launch template to use.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>Identifies the Amazon EC2 launch template to use.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>Identifies the Amazon EC2 launch template to use.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>Identifies the Amazon EC2 launch template to use.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>Identifies the Amazon EC2 launch template to use.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>Identifies the Amazon EC2 launch template to use.</p>
     */
    inline LaunchTemplateConfiguration& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>Identifies the Amazon EC2 launch template to use.</p>
     */
    inline LaunchTemplateConfiguration& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>Identifies the Amazon EC2 launch template to use.</p>
     */
    inline LaunchTemplateConfiguration& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The account ID that this configuration applies to.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID that this configuration applies to.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID that this configuration applies to.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID that this configuration applies to.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID that this configuration applies to.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID that this configuration applies to.</p>
     */
    inline LaunchTemplateConfiguration& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID that this configuration applies to.</p>
     */
    inline LaunchTemplateConfiguration& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID that this configuration applies to.</p>
     */
    inline LaunchTemplateConfiguration& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Set the specified Amazon EC2 launch template as the default launch template
     * for the specified account.</p>
     */
    inline bool GetSetDefaultVersion() const{ return m_setDefaultVersion; }

    /**
     * <p>Set the specified Amazon EC2 launch template as the default launch template
     * for the specified account.</p>
     */
    inline bool SetDefaultVersionHasBeenSet() const { return m_setDefaultVersionHasBeenSet; }

    /**
     * <p>Set the specified Amazon EC2 launch template as the default launch template
     * for the specified account.</p>
     */
    inline void SetSetDefaultVersion(bool value) { m_setDefaultVersionHasBeenSet = true; m_setDefaultVersion = value; }

    /**
     * <p>Set the specified Amazon EC2 launch template as the default launch template
     * for the specified account.</p>
     */
    inline LaunchTemplateConfiguration& WithSetDefaultVersion(bool value) { SetSetDefaultVersion(value); return *this;}

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_setDefaultVersion;
    bool m_setDefaultVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
