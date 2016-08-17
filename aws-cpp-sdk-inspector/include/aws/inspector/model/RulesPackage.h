/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/LocalizedText.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Inspector rules package.</p> <p>This data type
   * is used as the response element in the <a>DescribeRulesPackage</a> action.</p>
   */
  class AWS_INSPECTOR_API RulesPackage
  {
  public:
    RulesPackage();
    RulesPackage(const Aws::Utils::Json::JsonValue& jsonValue);
    RulesPackage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p> The ARN of the rules package.</p>
     */
    inline const Aws::String& GetRulesPackageArn() const{ return m_rulesPackageArn; }

    /**
     * <p> The ARN of the rules package.</p>
     */
    inline void SetRulesPackageArn(const Aws::String& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }

    /**
     * <p> The ARN of the rules package.</p>
     */
    inline void SetRulesPackageArn(Aws::String&& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }

    /**
     * <p> The ARN of the rules package.</p>
     */
    inline void SetRulesPackageArn(const char* value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn.assign(value); }

    /**
     * <p> The ARN of the rules package.</p>
     */
    inline RulesPackage& WithRulesPackageArn(const Aws::String& value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p> The ARN of the rules package.</p>
     */
    inline RulesPackage& WithRulesPackageArn(Aws::String&& value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p> The ARN of the rules package.</p>
     */
    inline RulesPackage& WithRulesPackageArn(const char* value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>The name of the rules package.</p>
     */
    inline const Aws::String& GetRulesPackageName() const{ return m_rulesPackageName; }

    /**
     * <p>The name of the rules package.</p>
     */
    inline void SetRulesPackageName(const Aws::String& value) { m_rulesPackageNameHasBeenSet = true; m_rulesPackageName = value; }

    /**
     * <p>The name of the rules package.</p>
     */
    inline void SetRulesPackageName(Aws::String&& value) { m_rulesPackageNameHasBeenSet = true; m_rulesPackageName = value; }

    /**
     * <p>The name of the rules package.</p>
     */
    inline void SetRulesPackageName(const char* value) { m_rulesPackageNameHasBeenSet = true; m_rulesPackageName.assign(value); }

    /**
     * <p>The name of the rules package.</p>
     */
    inline RulesPackage& WithRulesPackageName(const Aws::String& value) { SetRulesPackageName(value); return *this;}

    /**
     * <p>The name of the rules package.</p>
     */
    inline RulesPackage& WithRulesPackageName(Aws::String&& value) { SetRulesPackageName(value); return *this;}

    /**
     * <p>The name of the rules package.</p>
     */
    inline RulesPackage& WithRulesPackageName(const char* value) { SetRulesPackageName(value); return *this;}

    /**
     * <p>The version id of the rules package.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version id of the rules package.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version id of the rules package.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version id of the rules package.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version id of the rules package.</p>
     */
    inline RulesPackage& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version id of the rules package.</p>
     */
    inline RulesPackage& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version id of the rules package.</p>
     */
    inline RulesPackage& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>The provider of the rules package.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the rules package.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the rules package.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the rules package.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the rules package.</p>
     */
    inline RulesPackage& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the rules package.</p>
     */
    inline RulesPackage& WithProvider(Aws::String&& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the rules package.</p>
     */
    inline RulesPackage& WithProvider(const char* value) { SetProvider(value); return *this;}

    /**
     * <p>The description of the rules package.</p>
     */
    inline const LocalizedText& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the rules package.</p>
     */
    inline void SetDescription(const LocalizedText& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the rules package.</p>
     */
    inline void SetDescription(LocalizedText&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the rules package.</p>
     */
    inline RulesPackage& WithDescription(const LocalizedText& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the rules package.</p>
     */
    inline RulesPackage& WithDescription(LocalizedText&& value) { SetDescription(value); return *this;}

  private:
    Aws::String m_rulesPackageArn;
    bool m_rulesPackageArnHasBeenSet;
    Aws::String m_rulesPackageName;
    bool m_rulesPackageNameHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::String m_provider;
    bool m_providerHasBeenSet;
    LocalizedText m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
