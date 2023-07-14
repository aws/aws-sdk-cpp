/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ResourceSpec.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A collection of settings that update the current configuration for the
   * <code>RStudioServerPro</code> Domain-level app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RStudioServerProDomainSettingsForUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API RStudioServerProDomainSettingsForUpdate
  {
  public:
    RStudioServerProDomainSettingsForUpdate();
    RStudioServerProDomainSettingsForUpdate(Aws::Utils::Json::JsonView jsonValue);
    RStudioServerProDomainSettingsForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline const Aws::String& GetDomainExecutionRoleArn() const{ return m_domainExecutionRoleArn; }

    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline bool DomainExecutionRoleArnHasBeenSet() const { return m_domainExecutionRoleArnHasBeenSet; }

    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline void SetDomainExecutionRoleArn(const Aws::String& value) { m_domainExecutionRoleArnHasBeenSet = true; m_domainExecutionRoleArn = value; }

    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline void SetDomainExecutionRoleArn(Aws::String&& value) { m_domainExecutionRoleArnHasBeenSet = true; m_domainExecutionRoleArn = std::move(value); }

    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline void SetDomainExecutionRoleArn(const char* value) { m_domainExecutionRoleArnHasBeenSet = true; m_domainExecutionRoleArn.assign(value); }

    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline RStudioServerProDomainSettingsForUpdate& WithDomainExecutionRoleArn(const Aws::String& value) { SetDomainExecutionRoleArn(value); return *this;}

    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline RStudioServerProDomainSettingsForUpdate& WithDomainExecutionRoleArn(Aws::String&& value) { SetDomainExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The execution role for the <code>RStudioServerPro</code> Domain-level
     * app.</p>
     */
    inline RStudioServerProDomainSettingsForUpdate& WithDomainExecutionRoleArn(const char* value) { SetDomainExecutionRoleArn(value); return *this;}


    
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    
    inline RStudioServerProDomainSettingsForUpdate& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    
    inline RStudioServerProDomainSettingsForUpdate& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}

  private:

    Aws::String m_domainExecutionRoleArn;
    bool m_domainExecutionRoleArnHasBeenSet;

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
