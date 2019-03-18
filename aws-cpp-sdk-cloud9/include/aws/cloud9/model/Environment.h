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
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloud9/model/EnvironmentType.h>
#include <aws/cloud9/model/EnvironmentLifecycle.h>
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
namespace Cloud9
{
namespace Model
{

  /**
   * <p>Information about an AWS Cloud9 development environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/Environment">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUD9_API Environment
  {
  public:
    Environment();
    Environment(Aws::Utils::Json::JsonView jsonValue);
    Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the environment.</p>
     */
    inline Environment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the environment.</p>
     */
    inline Environment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the environment.</p>
     */
    inline Environment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline const EnvironmentType& GetType() const{ return m_type; }

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline void SetType(const EnvironmentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline void SetType(EnvironmentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline Environment& WithType(const EnvironmentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of environment. Valid values include the following:</p> <ul> <li>
     * <p> <code>ec2</code>: An Amazon Elastic Compute Cloud (Amazon EC2) instance
     * connects to the environment.</p> </li> <li> <p> <code>ssh</code>: Your own
     * server connects to the environment.</p> </li> </ul>
     */
    inline Environment& WithType(EnvironmentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline const Aws::String& GetOwnerArn() const{ return m_ownerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline void SetOwnerArn(const Aws::String& value) { m_ownerArnHasBeenSet = true; m_ownerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline void SetOwnerArn(Aws::String&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline void SetOwnerArn(const char* value) { m_ownerArnHasBeenSet = true; m_ownerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline Environment& WithOwnerArn(const Aws::String& value) { SetOwnerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline Environment& WithOwnerArn(Aws::String&& value) { SetOwnerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner.</p>
     */
    inline Environment& WithOwnerArn(const char* value) { SetOwnerArn(value); return *this;}


    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline const EnvironmentLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline void SetLifecycle(const EnvironmentLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline void SetLifecycle(EnvironmentLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline Environment& WithLifecycle(const EnvironmentLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The state of the environment in its creation or deletion lifecycle.</p>
     */
    inline Environment& WithLifecycle(EnvironmentLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    EnvironmentType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_ownerArn;
    bool m_ownerArnHasBeenSet;

    EnvironmentLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
