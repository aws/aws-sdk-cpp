/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p>Indicates whether to enable CloudWatch Container Insights for the ECS
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsClusterClusterSettingsDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsEcsClusterClusterSettingsDetails
  {
  public:
    AwsEcsClusterClusterSettingsDetails();
    AwsEcsClusterClusterSettingsDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsEcsClusterClusterSettingsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the setting.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the setting.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the setting.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the setting.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the setting.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the setting.</p>
     */
    inline AwsEcsClusterClusterSettingsDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the setting.</p>
     */
    inline AwsEcsClusterClusterSettingsDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the setting.</p>
     */
    inline AwsEcsClusterClusterSettingsDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the setting.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the setting.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the setting.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the setting.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the setting.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the setting.</p>
     */
    inline AwsEcsClusterClusterSettingsDetails& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the setting.</p>
     */
    inline AwsEcsClusterClusterSettingsDetails& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the setting.</p>
     */
    inline AwsEcsClusterClusterSettingsDetails& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
