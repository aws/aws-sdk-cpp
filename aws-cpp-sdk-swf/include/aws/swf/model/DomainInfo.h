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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/RegistrationStatus.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Contains general information about a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DomainInfo">AWS API
   * Reference</a></p>
   */
  class AWS_SWF_API DomainInfo
  {
  public:
    DomainInfo();
    DomainInfo(Aws::Utils::Json::JsonView jsonValue);
    DomainInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the domain. This name is unique within the account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain. This name is unique within the account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the domain. This name is unique within the account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. This name is unique within the account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the domain. This name is unique within the account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain. This name is unique within the account.</p>
     */
    inline DomainInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. This name is unique within the account.</p>
     */
    inline DomainInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain. This name is unique within the account.</p>
     */
    inline DomainInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the domain:</p> <ul> <li> <p> <code>REGISTERED</code> – The
     * domain is properly registered and available. You can use this domain for
     * registering types and creating new workflow executions. </p> </li> <li> <p>
     * <code>DEPRECATED</code> – The domain was deprecated using
     * <a>DeprecateDomain</a>, but is still in use. You should not create new workflow
     * executions in this domain. </p> </li> </ul>
     */
    inline const RegistrationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the domain:</p> <ul> <li> <p> <code>REGISTERED</code> – The
     * domain is properly registered and available. You can use this domain for
     * registering types and creating new workflow executions. </p> </li> <li> <p>
     * <code>DEPRECATED</code> – The domain was deprecated using
     * <a>DeprecateDomain</a>, but is still in use. You should not create new workflow
     * executions in this domain. </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the domain:</p> <ul> <li> <p> <code>REGISTERED</code> – The
     * domain is properly registered and available. You can use this domain for
     * registering types and creating new workflow executions. </p> </li> <li> <p>
     * <code>DEPRECATED</code> – The domain was deprecated using
     * <a>DeprecateDomain</a>, but is still in use. You should not create new workflow
     * executions in this domain. </p> </li> </ul>
     */
    inline void SetStatus(const RegistrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the domain:</p> <ul> <li> <p> <code>REGISTERED</code> – The
     * domain is properly registered and available. You can use this domain for
     * registering types and creating new workflow executions. </p> </li> <li> <p>
     * <code>DEPRECATED</code> – The domain was deprecated using
     * <a>DeprecateDomain</a>, but is still in use. You should not create new workflow
     * executions in this domain. </p> </li> </ul>
     */
    inline void SetStatus(RegistrationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the domain:</p> <ul> <li> <p> <code>REGISTERED</code> – The
     * domain is properly registered and available. You can use this domain for
     * registering types and creating new workflow executions. </p> </li> <li> <p>
     * <code>DEPRECATED</code> – The domain was deprecated using
     * <a>DeprecateDomain</a>, but is still in use. You should not create new workflow
     * executions in this domain. </p> </li> </ul>
     */
    inline DomainInfo& WithStatus(const RegistrationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the domain:</p> <ul> <li> <p> <code>REGISTERED</code> – The
     * domain is properly registered and available. You can use this domain for
     * registering types and creating new workflow executions. </p> </li> <li> <p>
     * <code>DEPRECATED</code> – The domain was deprecated using
     * <a>DeprecateDomain</a>, but is still in use. You should not create new workflow
     * executions in this domain. </p> </li> </ul>
     */
    inline DomainInfo& WithStatus(RegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the domain provided through <a>RegisterDomain</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the domain provided through <a>RegisterDomain</a>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the domain provided through <a>RegisterDomain</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the domain provided through <a>RegisterDomain</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the domain provided through <a>RegisterDomain</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the domain provided through <a>RegisterDomain</a>.</p>
     */
    inline DomainInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the domain provided through <a>RegisterDomain</a>.</p>
     */
    inline DomainInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the domain provided through <a>RegisterDomain</a>.</p>
     */
    inline DomainInfo& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the domain.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the domain.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the domain.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the domain.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the domain.</p>
     */
    inline DomainInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the domain.</p>
     */
    inline DomainInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the domain.</p>
     */
    inline DomainInfo& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RegistrationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
