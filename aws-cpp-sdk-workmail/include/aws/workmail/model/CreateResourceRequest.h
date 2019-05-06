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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class AWS_WORKMAIL_API CreateResourceRequest : public WorkMailRequest
  {
  public:
    CreateResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline CreateResourceRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline CreateResourceRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier associated with the organization for which the resource is
     * created.</p>
     */
    inline CreateResourceRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The name of the new resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateResourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateResourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateResourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the new resource. The available types are <code>equipment</code>
     * and <code>room</code>.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the new resource. The available types are <code>equipment</code>
     * and <code>room</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the new resource. The available types are <code>equipment</code>
     * and <code>room</code>.</p>
     */
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the new resource. The available types are <code>equipment</code>
     * and <code>room</code>.</p>
     */
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the new resource. The available types are <code>equipment</code>
     * and <code>room</code>.</p>
     */
    inline CreateResourceRequest& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the new resource. The available types are <code>equipment</code>
     * and <code>room</code>.</p>
     */
    inline CreateResourceRequest& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ResourceType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
