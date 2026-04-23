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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Compliance.h>
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
   * <p>Indicates whether an AWS resource that is evaluated according to one or more
   * AWS Config rules is compliant. A resource is compliant if it complies with all
   * of the rules that evaluate it. A resource is noncompliant if it does not comply
   * with one or more of these rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ComplianceByResource">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ComplianceByResource
  {
  public:
    ComplianceByResource();
    ComplianceByResource(Aws::Utils::Json::JsonView jsonValue);
    ComplianceByResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the AWS resource that was evaluated.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the AWS resource that was evaluated.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the AWS resource that was evaluated.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the AWS resource that was evaluated.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the AWS resource that was evaluated.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the AWS resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the AWS resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the AWS resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS resource that was evaluated.</p>
     */
    inline ComplianceByResource& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Indicates whether the AWS resource complies with all of the AWS Config rules
     * that evaluated it.</p>
     */
    inline const Compliance& GetCompliance() const{ return m_compliance; }

    /**
     * <p>Indicates whether the AWS resource complies with all of the AWS Config rules
     * that evaluated it.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>Indicates whether the AWS resource complies with all of the AWS Config rules
     * that evaluated it.</p>
     */
    inline void SetCompliance(const Compliance& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>Indicates whether the AWS resource complies with all of the AWS Config rules
     * that evaluated it.</p>
     */
    inline void SetCompliance(Compliance&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>Indicates whether the AWS resource complies with all of the AWS Config rules
     * that evaluated it.</p>
     */
    inline ComplianceByResource& WithCompliance(const Compliance& value) { SetCompliance(value); return *this;}

    /**
     * <p>Indicates whether the AWS resource complies with all of the AWS Config rules
     * that evaluated it.</p>
     */
    inline ComplianceByResource& WithCompliance(Compliance&& value) { SetCompliance(std::move(value)); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Compliance m_compliance;
    bool m_complianceHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
